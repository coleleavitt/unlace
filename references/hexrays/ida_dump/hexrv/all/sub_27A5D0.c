__int64 __fastcall sub_27A5D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v5; // ebp
  unsigned int tinfo_size; // r14d
  int v7; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rsi
  int v15; // r9d
  char v16; // r15
  __int64 v17; // [rsp+0h] [rbp-68h] BYREF
  __int64 v18; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v19[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = a2;
  v4 = *(_QWORD *)(a2 + 48);
  v19[3] = __readfsqword(0x28u);
  v5 = a3;
  if ( !a3 )
    v5 = 1;
  tinfo_size = get_tinfo_size(0, v4, 0);
  sub_327180(&v17, *(_QWORD *)(a1 + 112), tinfo_size, v5);
  v7 = *(_DWORD *)(v3 + 8);
  v8 = (unsigned int)(v7 - 51);
  if ( (unsigned int)v8 > 0xE )
    goto LABEL_8;
  v9 = 25473;
  if ( !_bittest64(&v9, v8) )
  {
    if ( v7 == 57 )
    {
      v13 = *(_QWORD *)(v3 + 24);
      if ( *(_DWORD *)(v13 + 8) != 68 )
      {
        v18 = 0;
        copy_tinfo_t(&v18, v13 + 48);
        v19[0] = 0;
        v19[1] = 0;
        v16 = sub_328960(a1, (unsigned int)&v18, -1, (unsigned int)&v17, (unsigned int)v19, v15);
        cleanup_argloc(v19);
        if ( v16 )
        {
          if ( (unsigned __int8)sub_241F40(*(_QWORD *)(v3 + 24), a1, &v18) )
          {
            v19[0] = 0;
            v19[0] = get_tinfo_property(v18, 10);
            copy_tinfo_t(*(_QWORD *)(v3 + 32) + 24LL, v19);
            clear_tinfo_t(v19);
            copy_tinfo_t(v3 + 48, &v17);
            clear_tinfo_t(&v18);
            goto LABEL_9;
          }
          if ( !under_debugger )
            sub_37DDE0(50594);
        }
        else if ( !under_debugger )
        {
          sub_37DDE0(50593);
        }
        goto LABEL_19;
      }
    }
LABEL_8:
    if ( (unsigned __int8)sub_243680(a1, v3, &v17) )
      goto LABEL_9;
    if ( !under_debugger )
      sub_37DDE0(50592);
LABEL_19:
    BUG();
  }
  sub_327290(v19, *(_QWORD *)(a1 + 112), &v17);
  copy_tinfo_t(&v17, v19);
  clear_tinfo_t(v19);
  v10 = sub_242910(*(_QWORD *)(a1 + 112), v3);
  sub_241F40(v10, a1, &v17);
  v3 = sub_23F720(*(_QWORD *)(a1 + 112), v10, tinfo_size, 0, v11, v12);
LABEL_9:
  clear_tinfo_t(&v17);
  return v3;
}
