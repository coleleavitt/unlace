__int64 __fastcall sub_573AA0(__int64 *a1, __int64 a2)
{
  char v3; // al
  char *v4; // r14
  char v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // r11
  int v10; // r15d
  bool v11; // al
  char v12; // al
  unsigned __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // r12
  unsigned __int8 default_reftype; // al
  unsigned __int64 *v17; // [rsp+0h] [rbp-58h]
  int v18; // [rsp+0h] [rbp-58h]
  __int64 v19; // [rsp+8h] [rbp-50h]
  char v20; // [rsp+17h] [rbp-41h]
  unsigned __int64 *v21; // [rsp+18h] [rbp-40h]

  v3 = sub_573720(a2);
  v4 = *(char **)(a2 + 16);
  v5 = v3;
  v6 = sub_3BE900(a1, (unsigned __int64)v4, 0);
  if ( (unsigned __int8)sub_631C90(*a1, 10, &stru_200000) )
  {
    v8 = sub_505D70((__int64)(a1 + 203), (unsigned __int64)v4);
    v9 = v8;
    if ( !v8 )
    {
      if ( !under_debugger )
        interr(1219);
      BUG();
    }
    if ( *((_BYTE *)v8 + 43) )
    {
      v10 = 0;
      v19 = a2 + 40;
      do
      {
        if ( !*(_DWORD *)(a1[2] + 4) && v10 == 2 )
          break;
        v17 = v9;
        v11 = sub_3C4D40((__int64)a1, v6, v10);
        v9 = v17;
        if ( !v11 )
        {
          v12 = sub_573A30(a1, a2, v19);
          v9 = v17;
          v20 = v12;
          if ( v12 )
          {
            v13 = v17[*(_DWORD *)(a1[2] + 84) - *(_DWORD *)(a1[2] + 68) + 7];
            if ( v13 != -1 )
            {
              v21 = v17;
              v14 = sel2para(v13);
              v15 = *(_QWORD *)(a2 + 16);
              v18 = v14;
              default_reftype = get_default_reftype(v15);
              op_offset(v15, v10, default_reftype, -1, 16 * v18, 0);
              v5 = v20;
              v9 = v21;
            }
          }
        }
        ++v10;
        v19 += 40;
      }
      while ( v10 != 8 );
    }
  }
  if ( !v5 )
    return *(unsigned __int16 *)(a2 + 26);
  *(_QWORD *)(a2 + 16) = -1;
  return sub_573440(a1, a2, v4, 1);
}
