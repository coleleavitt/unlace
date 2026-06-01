__int64 __fastcall sub_27F1D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // ebp
  unsigned int tinfo_size; // r14d
  int v6; // edx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // r9d
  int v15; // r9d
  char v16; // r15
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  v19[3] = __readfsqword(0x28u);
  v4 = a3;
  if ( !a3 )
    v4 = 1;
  tinfo_size = get_tinfo_size();
  sub_32C430(&v17, *(_QWORD *)(a1 + 112), tinfo_size, v4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = (unsigned int)(v6 - 51);
  if ( (unsigned int)v7 > 0xE )
    goto LABEL_8;
  v8 = 25473;
  if ( !_bittest64(&v8, v7) )
  {
    if ( v6 == 57 && *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL) != 68 )
    {
      v18 = 0;
      copy_tinfo_t();
      v19[0] = 0;
      v19[1] = 0;
      v16 = sub_32DC20(a1, (unsigned int)&v18, -1, (unsigned int)&v17, (unsigned int)v19, v15);
      cleanup_argloc();
      if ( v16 )
      {
        if ( (unsigned __int8)sub_246B40(*(_QWORD *)(a2 + 24), a1, &v18) )
        {
          v19[0] = 0;
          v19[0] = get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          clear_tinfo_t();
          goto LABEL_9;
        }
        if ( !under_debugger )
          sub_383060(50594);
      }
      else if ( !under_debugger )
      {
        sub_383060(50593);
      }
      goto LABEL_19;
    }
LABEL_8:
    if ( (unsigned __int8)sub_248280(a1, a2, &v17) )
      goto LABEL_9;
    if ( !under_debugger )
      sub_383060(50592);
LABEL_19:
    BUG();
  }
  sub_32C540(v19, *(_QWORD *)(a1 + 112), &v17);
  copy_tinfo_t();
  clear_tinfo_t();
  v11 = sub_247510(*(_QWORD *)(a1 + 112), a2, v9, v10);
  sub_246B40(v11, a1, &v17);
  v3 = sub_244320(*(_QWORD *)(a1 + 112), v11, tinfo_size, 0, v12, v13);
LABEL_9:
  clear_tinfo_t();
  return v3;
}
