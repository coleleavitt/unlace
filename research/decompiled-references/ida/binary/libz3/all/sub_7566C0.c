_QWORD *__fastcall sub_7566C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  int v4; // esi
  __int64 v5; // r9
  _QWORD *v6; // rcx
  __int64 v7; // r10
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  void *v11; // r14
  void *v12; // rbp
  _QWORD v15[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h]

  v15[0] = 0;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18[0] = 1;
  v18[1] = 0;
  v19 = 0x100000000LL;
  sub_182CBA0(qword_1C7F2C0, v16);
  BYTE4(v16[0]) &= ~1u;
  BYTE4(v17[0]) &= ~1u;
  LODWORD(v16[0]) = 1;
  LODWORD(v17[0]) = 0;
  sub_182CBA0(qword_1C7F2C0, v18);
  v2 = *(unsigned int *)(a1 + 8);
  BYTE4(v19) = 1;
  BYTE4(v18[0]) &= ~1u;
  v3 = *(_QWORD **)a1;
  v4 = *(_DWORD *)(a2 + 12);
  LODWORD(v18[0]) = 1;
  v5 = 112 * v2;
  v6 = &v3[14 * v2];
  v7 = 112LL * (v4 & (unsigned int)(v2 - 1));
  v8 = &v3[(unsigned __int64)v7 / 8];
  v9 = &v3[(unsigned __int64)v7 / 8];
  if ( v7 != v5 )
  {
    do
    {
      v10 = (_QWORD *)*v9;
      if ( *v9 > 1u )
      {
        if ( *((_DWORD *)v10 + 3) == v4 && (_QWORD *)a2 == v10 )
        {
          v10 = v9;
          goto LABEL_8;
        }
      }
      else if ( !v10 )
      {
        goto LABEL_8;
      }
      v9 += 14;
    }
    while ( v6 != v9 );
  }
  if ( v3 == v8 )
  {
LABEL_17:
    v10 = nullptr;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = (_QWORD *)*v3;
        if ( *v3 > 1u )
          break;
        if ( !v10 )
          goto LABEL_8;
        v3 += 14;
        if ( v8 == v3 )
          goto LABEL_17;
      }
      if ( *((_DWORD *)v10 + 3) == v4 && (_QWORD *)a2 == v10 )
        break;
      v3 += 14;
      if ( v8 == v3 )
        goto LABEL_17;
    }
    v10 = v3;
  }
LABEL_8:
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v17);
  sub_182CBA0(v11, v18);
  v12 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v15);
  sub_182CBA0(v12, v16);
  return v10;
}

