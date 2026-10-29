void __fastcall sub_E22ED0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // r15
  unsigned int v10; // edx
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  __int128 v12; // [rsp+8h] [rbp-60h]
  int v13; // [rsp+18h] [rbp-50h]
  __int64 v14; // [rsp+20h] [rbp-48h]
  unsigned int v15; // [rsp+28h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 32);
  v3 = *(_DWORD *)(a2 + 24);
  v4 = *(unsigned int *)(a2 + 40);
  *(_BYTE *)(v2 + v4 + 28) &= ~0x10u;
  if ( v3 == 1 )
  {
    v5 = v2;
  }
  else if ( v3 )
  {
    if ( v3 == 2 || v3 == 3 )
      BUG();
    v5 = *(_QWORD *)(v2 + 32);
  }
  else if ( v2 )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)(v5 + 24) != (_DWORD)v4 && (_DWORD)v4 )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(v2 + v4 + 32) + 32LL);
      if ( !v6 )
        return;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = 64;
  }
  v6 = *(_QWORD *)(v5 + 32);
  if ( !v6 )
    return;
LABEL_7:
  v7 = *(_QWORD *)(v6 + 280);
  v8 = v7 + 24LL * *(unsigned int *)(v6 + 288);
  if ( v7 != v8 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)a2 + *(_DWORD *)(v7 + 8);
      v14 = v2;
      v12 = 0;
      v11 = v10;
      v13 = 0;
      v15 = v10;
      if ( v2 )
      {
        sub_E1E330(v2, (__int64)&v11);
        if ( (*(_BYTE *)(v14 + v15 + 28) & 0x10) == 0 )
          goto LABEL_12;
      }
      else if ( (*((_BYTE *)&qword_18 + v10 + 4) & 0x10) == 0 )
      {
        v7 += 24;
        if ( v8 == v7 )
          return;
        goto LABEL_16;
      }
      if ( !*(_QWORD *)(*a1 + 16LL) )
        std::__throw_bad_function_call();
      (*(void (__fastcall **)(_QWORD, __int64 *))(*a1 + 24LL))(*a1, &v11);
LABEL_12:
      if ( !v13 )
      {
        v9 = v14;
        if ( v14 )
        {
          sub_E1E360(v14, &v11);
          v14 = 0;
          sub_E1E3B0(v9);
        }
      }
      v7 += 24;
      if ( v8 == v7 )
        return;
LABEL_16:
      v2 = *(_QWORD *)(a2 + 32);
    }
  }
}
