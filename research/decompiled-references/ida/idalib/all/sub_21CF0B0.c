_QWORD *__fastcall sub_21CF0B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  void **(__fastcall *v5)(void **, __int64, __int64); // rax
  void **v6; // rbx
  void **v7; // rbp
  void *v9; // [rsp+0h] [rbp-50h] BYREF
  void *v10[2]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v11; // [rsp+18h] [rbp-38h]

  v4 = *(_QWORD *)a2;
  *(_OWORD *)v10 = 0;
  v11 = 0;
  v5 = *(void **(__fastcall **)(void **, __int64, __int64))(v4 + 32);
  if ( v5 == sub_21CF080 )
    sub_21CEE10(&v9, *(_QWORD *)(a2 + 112), *(unsigned __int64 **)(a2 + 488), *(_QWORD *)(a2 + 496), (__int64)v10, 1);
  else
    v5(&v9, a2, (__int64)v10);
  v6 = (void **)v10[0];
  v7 = (void **)v10[1];
  if ( v9 )
  {
    *a1 = v9;
  }
  else
  {
    sub_21CAD10(a3, (char **)v10[0], 0xCCCCCCCCCCCCCCCDLL * (((char *)v10[1] - (char *)v10[0]) >> 3));
    v7 = (void **)v10[1];
    v6 = (void **)v10[0];
    *a1 = 0;
  }
  if ( v7 != v6 )
  {
    do
    {
      while ( *v6 != v6 + 3 )
      {
        free(*v6);
        v6 += 5;
        if ( v6 == v7 )
          goto LABEL_8;
      }
      v6 += 5;
    }
    while ( v6 != v7 );
LABEL_8:
    v6 = (void **)v10[0];
  }
  if ( v6 )
    operator delete(v6);
  return a1;
}
