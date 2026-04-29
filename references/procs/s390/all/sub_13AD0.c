__int64 __fastcall sub_13AD0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  bool v6; // al
  int v7; // r15d
  unsigned __int8 *v8; // r13
  _DWORD *v9; // rbp
  unsigned __int8 *v10; // r9
  unsigned __int8 *v11; // rbx
  _DWORD *v12; // rbx
  __int64 func; // rdi
  __int16 v15; // ax
  __int64 v16; // rdx
  unsigned __int8 *v17; // [rsp+0h] [rbp-48h]
  int v18; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(unsigned __int16 *)(a2 + 24);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v5 <= v4 && v4 < *(_DWORD *)(v3 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    v18 = v7 & 0x4000;
    v6 = (v7 & 1) == 0;
  }
  else
  {
    v18 = 0;
    v6 = 1;
    v7 = 0;
  }
  *(_BYTE *)(a1 + 124) = v6;
  v8 = (unsigned __int8 *)(a2 + 40);
  v9 = &unk_23DE0;
  v10 = (unsigned __int8 *)(a2 + 280);
  v11 = (unsigned __int8 *)(a2 + 40);
  do
  {
    if ( (*v9 & v7) != 0 )
    {
      v17 = v10;
      sub_137F0(a1, a2, v11, 0, a3);
      v10 = v17;
    }
    v11 += 40;
    ++v9;
  }
  while ( v11 != v10 );
  v12 = &unk_23E00;
  do
  {
    if ( (*v12 & v7) != 0 )
      sub_137F0(a1, a2, v8, 1u, a3);
    v8 += 40;
    ++v12;
  }
  while ( (unsigned __int8 *)(a2 + 160) != v8 );
  if ( v18 )
    remember_problem(6, *(_QWORD *)(a2 + 16), 0);
  if ( *(_BYTE *)(a1 + 124) )
    add_cref(*(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26), 21);
  if ( (unsigned __int8)getinf_flag(10, 4096) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
    {
      if ( *(_BYTE *)(a1 + 124) )
      {
        func = get_func(*(_QWORD *)(a2 + 16));
        if ( func )
        {
          v15 = *(_WORD *)(a2 + 24);
          if ( v15 != 26 )
          {
            if ( v15 == 669 )
            {
              if ( *(_WORD *)(a2 + 46) != 15 || *(_WORD *)(a2 + 86) != 15 )
                return 1;
              v16 = *(_QWORD *)(a2 + 96);
              goto LABEL_27;
            }
            if ( v15 != 18 )
              return 1;
          }
          if ( *(_WORD *)(a2 + 46) != 15 )
            return 1;
          v16 = *(_QWORD *)(a2 + 88);
LABEL_27:
          if ( v16 )
            add_auto_stkpnt(func, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26));
        }
      }
    }
  }
  return 1;
}
