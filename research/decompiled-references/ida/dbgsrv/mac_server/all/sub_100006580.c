/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006580
// Address: 0x0000000100006580

//----- (0000000100006580) ----------------------------------------------------
__int64 __fastcall sub_100006580(__int64 a1, char a2)
{
  mach_msg_type_number_t v3; // eax
  thread_act_array_t v4; // rsi
  signed int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // r13
  _QWORD *v8; // r12
  signed int v9; // eax
  _DWORD *v10; // r15
  __int64 v11; // rax
  mach_msg_type_number_t act_listCnt; // [rsp+Ch] [rbp-10D4h] BYREF
  thread_act_array_t act_list; // [rsp+10h] [rbp-10D0h] BYREF
  _DWORD __src[517]; // [rsp+18h] [rbp-10C8h] BYREF
  __int64 v16; // [rsp+830h] [rbp-8B0h]
  int v17; // [rsp+838h] [rbp-8A8h]
  void *v18; // [rsp+840h] [rbp-8A0h]
  __int128 v19; // [rsp+848h] [rbp-898h]
  char v20; // [rsp+858h] [rbp-888h]
  signed int v21; // [rsp+860h] [rbp-880h]
  _BYTE __dst[2068]; // [rsp+868h] [rbp-878h] BYREF
  __int64 v23; // [rsp+1080h] [rbp-60h]
  int v24; // [rsp+1088h] [rbp-58h]
  void *v25; // [rsp+1090h] [rbp-50h]
  __int128 v26; // [rsp+1098h] [rbp-48h]
  char v27; // [rsp+10A8h] [rbp-38h]

  if ( task_threads(*(_DWORD *)(a1 + 848), &act_list, &act_listCnt) )
  {
    if ( under_debugger != 1 )
      interr(0x758Bu);
LABEL_26:
    BUG();
  }
  v3 = act_listCnt;
  if ( !act_listCnt )
  {
    if ( under_debugger != 1 )
      interr(0x758Cu);
    goto LABEL_26;
  }
  v4 = act_list;
  v5 = *act_list;
  if ( !a2 )
  {
    __src[0] = *act_list;
    __src[1] = v5;
    __src[4] = 0;
    v16 = 0;
    v17 = 0;
    __src[2] = 0;
    *(_DWORD *)((char *)&__src[2] + 3) = 0;
    v20 = 0;
    v21 = v5;
    memcpy(__dst, __src, sizeof(__dst));
    v24 = 0;
    v23 = 0;
    v25 = nullptr;
    v18 = nullptr;
    v26 = 0;
    v19 = 0;
    v27 = 0;
    v6 = *(_QWORD *)(a1 + 1216);
    if ( v6 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = (_QWORD *)v6;
          v9 = *(_DWORD *)(v6 + 32);
          if ( v5 >= v9 )
            break;
          v6 = *v8;
          v7 = v8;
          if ( !*v8 )
            goto LABEL_11;
        }
        if ( v5 <= v9 )
          break;
        v6 = v8[1];
        if ( !v6 )
        {
          v7 = v8 + 1;
          goto LABEL_11;
        }
      }
    }
    else
    {
      v7 = (_QWORD *)(a1 + 1216);
      v8 = (_QWORD *)(a1 + 1216);
LABEL_11:
      v10 = operator new(0x870u);
      v10[8] = v5;
      memcpy(v10 + 10, __src, 0x814u);
      *((_QWORD *)v10 + 264) = v16;
      v10[530] = v17;
      *((_QWORD *)v10 + 266) = 0;
      v25 = nullptr;
      *((_QWORD *)v10 + 267) = 0;
      *(_QWORD *)&v26 = 0;
      *((_QWORD *)v10 + 268) = 0;
      *((_QWORD *)&v26 + 1) = 0;
      *((_BYTE *)v10 + 2152) = 0;
      *(_OWORD *)v10 = 0;
      *((_QWORD *)v10 + 2) = v8;
      *v7 = v10;
      v11 = **(_QWORD **)(a1 + 1208);
      if ( v11 )
      {
        *(_QWORD *)(a1 + 1208) = v11;
        v10 = (_DWORD *)*v7;
      }
      sub_10000C830(*(__int64 **)(a1 + 1216), (__int64 *)v10);
      ++*(_QWORD *)(a1 + 1224);
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25);
        v25 = nullptr;
        *((_QWORD *)&v26 + 1) = 0;
      }
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 1208) + 56LL) = 2;
    v4 = act_list;
    v3 = act_listCnt;
  }
  if ( mach_vm_deallocate(mach_task_self_, (mach_vm_address_t)v4, 4LL * v3) )
  {
    if ( under_debugger != 1 )
      interr(0x758Du);
    goto LABEL_26;
  }
  return (unsigned int)v5;
}
// 1000AE23D: using guessed type char under_debugger;
