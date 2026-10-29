_BOOL8 __fastcall sub_C4E310(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // r8
  int v5; // edi
  unsigned int v6; // edx
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 *v9; // r10
  __int64 *i; // rax
  bool v11; // cl
  __int64 v12; // rdx
  void *v13; // rbp
  void *v14; // rbx
  __int64 v16; // rax
  bool v17; // [rsp+Fh] [rbp-69h]
  _QWORD v18[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v21[5]; // [rsp+50h] [rbp-28h] BYREF

  v3 = *(unsigned int *)(a1 + 144);
  v4 = *(__int64 **)(a1 + 136);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = v3 - 1;
  v18[0] = 0;
  v3 *= 80;
  v7 = (__int64 *)((char *)v4 + v3);
  v18[1] = 0;
  v19[0] = 1;
  v8 = 80LL * (v5 & v6);
  v19[1] = 0;
  v9 = &v4[(unsigned __int64)v8 / 8];
  v20[0] = 0;
  v20[1] = 0;
  v21[0] = 1;
  v21[1] = 0;
  if ( v8 != v3 )
  {
    for ( i = &v4[(unsigned __int64)v8 / 8]; v7 != i; i += 10 )
    {
      v12 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        v11 = a2 == v12 && *(_DWORD *)(v12 + 12) == v5;
        if ( v11 )
          goto LABEL_8;
      }
      else if ( !v12 )
      {
        goto LABEL_7;
      }
    }
  }
  for ( ; v9 != v4; v4 += 10 )
  {
    v16 = *v4;
    if ( (unsigned __int64)*v4 > 1 )
    {
      v11 = a2 == v16 && *(_DWORD *)(v16 + 12) == v5;
      if ( v11 )
        goto LABEL_8;
    }
    else if ( !v16 )
    {
      break;
    }
  }
LABEL_7:
  v11 = 0;
LABEL_8:
  v17 = v11;
  v13 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v20);
  sub_182CBA0(v13, v21);
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v14, v19);
  return v17;
}

