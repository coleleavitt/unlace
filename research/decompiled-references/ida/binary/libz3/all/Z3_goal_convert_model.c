_QWORD *__fastcall Z3_goal_convert_model(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  void (__fastcall ***v7)(void *); // r14
  bool v8; // zf
  __int64 v9; // rbp
  __int64 v10; // r14

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_29C790();
  *(_DWORD *)(a1 + 1520) = 0;
  v5 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v5, a1);
  v5[3] = 0;
  *v5 = &off_1C4CBA8;
  sub_24FBE0(a1, (__int64)v5);
  if ( !a3 )
  {
    v6 = sub_186B270(0xA0u);
    sub_1373200(v6, *(_QWORD *)(a1 + 232));
    goto LABEL_5;
  }
  v6 = sub_1377B20(*(_QWORD *)(a3 + 24));
  if ( v6 )
LABEL_5:
    ++*(_DWORD *)(v6 + 16);
  v7 = (void (__fastcall ***)(void *))v5[3];
  if ( v7 )
  {
    v8 = (*((_DWORD *)v7 + 4))-- == 1;
    if ( v8 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  v5[3] = v6;
  if ( !a2 || (v9 = *(_QWORD *)(a2 + 24)) == 0 )
    BUG();
  v10 = *(_QWORD *)(v9 + 8);
  if ( *(_DWORD *)(v9 + 32) )
  {
    if ( !v10 )
      goto LABEL_16;
LABEL_13:
    ++*(_DWORD *)(v9 + 32);
    goto LABEL_14;
  }
  sub_ED44E0(*(_QWORD *)(a2 + 24));
  sub_186B220((void *)v9);
  if ( !v10 )
    goto LABEL_16;
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 )
    goto LABEL_13;
LABEL_14:
  (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v9 + 8) + 32LL))(*(_QWORD *)(v9 + 8), v5 + 3);
  v8 = (*(_DWORD *)(v9 + 32))-- == 1;
  if ( v8 )
  {
    sub_ED44E0(v9);
    sub_186B220((void *)v9);
  }
LABEL_16:
  if ( v4 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

