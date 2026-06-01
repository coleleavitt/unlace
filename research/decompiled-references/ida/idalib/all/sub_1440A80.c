_BOOL8 __fastcall sub_1440A80(__int64 *a1, __int64 a2)
{
  _BOOL4 v2; // r12d
  __int64 v3; // rax
  unsigned int *v4; // rax
  __int64 v5; // r12
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v11[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v13[4]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v14; // [rsp+50h] [rbp-68h]
  void *v15; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v16[28]; // [rsp+70h] [rbp-48h] BYREF
  int v17; // [rsp+8Ch] [rbp-2Ch]

  v2 = 0;
  v3 = sub_1440A00(a2, *a1);
  if ( v3 )
  {
    v4 = *(unsigned int **)(v3 + 16);
    v5 = *(_QWORD *)(*a1 + 64);
    v6 = *v4;
    v10[0] = v4 + 4;
    v10[1] = v6;
    sub_2246450(v11, v10);
    v13[0] = "unknown-unknown-";
    v13[2] = v11;
    v14 = 1027;
    sub_22BA1B0(&v15, v13);
    if ( v11[0] != &v12 )
      operator delete(v11[0]);
    v7 = *(unsigned int *)(v5 + 260);
    if ( v17 == 1 )
    {
      if ( (unsigned int)v7 <= 0x1F && (v9 = 4160750114LL, _bittest64(&v9, v7)) )
      {
        v2 = 1;
        if ( v15 == v16 )
          return v2;
      }
      else
      {
        v2 = 0;
        if ( v15 == v16 )
          return v2;
      }
      goto LABEL_6;
    }
    v2 = v17 == v7;
    if ( v15 != v16 )
LABEL_6:
      operator delete(v15);
  }
  return v2;
}
