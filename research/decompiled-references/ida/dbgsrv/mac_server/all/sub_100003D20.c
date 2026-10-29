/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100003D20
// Address: 0x0000000100003D20

//----- (0000000100003D20) ----------------------------------------------------
__int64 __fastcall sub_100003D20(__int64 a1, double a2)
{
  __int64 v3; // r14
  mach_error_t v4; // eax
  char *v5; // rax
  __int64 v7; // r15
  __int64 v8; // r15
  size_t v9; // rax
  size_t v10; // r12
  size_t v11; // r13
  void *v12; // rdi
  __int64 v13; // r14
  __int128 task_info_outCnt; // [rsp+0h] [rbp-470h] BYREF
  __int128 v15; // [rsp+10h] [rbp-460h] BYREF
  __int128 v16; // [rsp+20h] [rbp-450h] BYREF
  __int128 v17; // [rsp+30h] [rbp-440h]
  integer_t task_info_out[256]; // [rsp+40h] [rbp-430h] BYREF

  v3 = a1 + 864;
  sub_100017FB0(a1 + 864);
  LODWORD(task_info_outCnt) = 4;
  v4 = task_info(*(_DWORD *)(a1 + 848), 0x11u, task_info_out, (mach_msg_type_number_t *)&task_info_outCnt);
  if ( v4 )
  {
    v5 = mach_error_string(v4);
    sub_100005090(a1, "task_info(DYLD_TASK_INFO) failed: %s\n", v5);
LABEL_3:
    sub_100006F60(a1, "failed to find dyld_all_image_infos in the target process");
    return __stack_chk_guard;
  }
  v7 = *(_QWORD *)task_info_out;
  if ( *(_QWORD *)task_info_out == -1 )
    goto LABEL_3;
  sub_100005090(a1, "dyld_all_image_infos: %a\n", a2);
  *(_QWORD *)(a1 + 936) = v7;
  if ( (unsigned __int8)sub_10001A120(v3) )
  {
    v8 = *(_QWORD *)(a1 + 976);
    __bzero(task_info_out, 1024);
    if ( (unsigned __int8)sub_10001AB50(v3, v8, task_info_out, 1024) )
    {
      *(_QWORD *)(a1 + 920) = v8;
      v17 = 0;
      v16 = 0;
      v15 = 0;
      task_info_outCnt = (unsigned __int64)v8;
      v9 = strlen((const char *)task_info_out);
      if ( v9 )
      {
        v10 = v9;
        v11 = v9 + 1;
        if ( v9 == -1 )
        {
          v12 = nullptr;
        }
        else
        {
          v12 = qvector_reserve((__int64)&v15, nullptr, v9 + 1, 1u);
          *(_QWORD *)&v15 = v12;
        }
        *((_QWORD *)&v15 + 1) = v11;
        memmove(v12, task_info_out, v10);
        *(_BYTE *)(v15 + v10) = 0;
      }
      sub_1000198B0(v3, nullptr, (_QWORD *)&task_info_outCnt + 1, (__int64)&v16 + 8, v8);
      sub_100005380(a1, &task_info_outCnt);
      v13 = *(_QWORD *)(a1 + 968);
      sub_100005090(a1, "%a: setting bpt for library notifications\n", 0.0);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 656LL))(a1, v13);
      if ( *((_QWORD *)&v16 + 1) )
      {
        *(_QWORD *)&v17 = 0;
        qfree(*((void **)&v16 + 1));
        *((_QWORD *)&v16 + 1) = 0;
        *((_QWORD *)&v17 + 1) = 0;
      }
      if ( (_QWORD)v15 )
      {
        *((_QWORD *)&v15 + 1) = 0;
        qfree((void *)v15);
      }
    }
    else
    {
      sub_100006F60(a1, "invalid dyld header at %a\n", a2);
    }
  }
  else
  {
    sub_100006F60(a1, "failed to read dyld_all_image_infos in the target process");
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
