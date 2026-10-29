__int64 __fastcall sub_1440D80(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int *v7; // rax
  __int64 v8; // rdx
  int v9; // edx
  bool v10; // bl
  _QWORD v12[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v13[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v15[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v16; // [rsp+50h] [rbp-68h]
  void *v17; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v18[28]; // [rsp+70h] [rbp-48h] BYREF
  int v19; // [rsp+8Ch] [rbp-2Ch]

  v2 = sub_1440A00(a2, *a1);
  v3 = 0;
  if ( !v2 )
    return v3;
  v4 = *(_QWORD *)(*a1 + 64);
  v5 = *(unsigned int *)(v4 + 260);
  if ( (unsigned int)v5 > 0x1F )
    return v3;
  v6 = 4160750114LL;
  if ( !_bittest64(&v6, v5) )
    return v3;
  if ( *(_BYTE *)(v4 + 464) )
  {
    v7 = *(unsigned int **)(v2 + 16);
    v8 = *v7;
    v12[0] = v7 + 4;
    v12[1] = v8;
    sub_2246450(v13, v12);
    v15[0] = "unknown-unknown-";
    v15[2] = v13;
    v16 = 1027;
    sub_22BA1B0(&v17, v15);
    if ( v13[0] != &v14 )
      operator delete(v13[0]);
    v9 = *(_DWORD *)(v4 + 452);
    if ( v19 != 1 )
    {
      v10 = v19 == v9;
      if ( v17 != v18 )
        operator delete(v17);
      return v10;
    }
    if ( v9 == 1 || v9 == 9 || v9 == 5 || v9 == 27 || v9 == 28 || v9 == 30 )
    {
      if ( v17 == v18 )
        return 1;
    }
    else
    {
      if ( v9 != 31 && v9 != 29 )
      {
        if ( v17 != v18 )
          operator delete(v17);
        return 0;
      }
      if ( v17 == v18 )
        return 1;
    }
    operator delete(v17);
    return 1;
  }
  return 0;
}
