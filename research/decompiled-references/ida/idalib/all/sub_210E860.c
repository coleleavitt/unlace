__int64 __fastcall sub_210E860(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, __m128 *a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int32 v15; // ecx
  unsigned __int64 v16; // rax
  double v17[2]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v22[6]; // [rsp+38h] [rbp-30h] BYREF

  v9 = *(_QWORD *)a3;
  v10 = *(_QWORD *)a4;
  v11 = *(_QWORD *)(a4 + 8);
  v19 = *(_QWORD *)(a3 + 8);
  v12 = *(_QWORD *)(a3 + 16) + *(_QWORD *)(a4 + 16);
  v18 = v9;
  v20 = v10;
  v21 = v11;
  v22[0] = v12;
  if ( !a1 || *(_DWORD *)(a3 + 24) || *(_DWORD *)(a4 + 24) )
  {
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_4;
  }
  if ( v11 )
  {
    if ( v9 )
    {
      sub_210E350(a1, a2, &v18, &v21, v22);
      v10 = v20;
    }
  }
  if ( v10 )
  {
    if ( !v19 )
    {
      if ( v18 )
        return 0;
      goto LABEL_24;
    }
    sub_210E350(a1, a2, &v20, &v19, v22);
  }
  if ( v18 )
  {
LABEL_4:
    if ( v20 )
      return 0;
    v14 = v19;
    if ( v19 )
    {
      if ( !v21 )
      {
        v15 = *(_DWORD *)(a3 + 24);
        if ( v15 )
          goto LABEL_18;
        goto LABEL_17;
      }
      return 0;
    }
LABEL_24:
    v15 = *(_DWORD *)(a3 + 24);
    v14 = v21;
    if ( v15 )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_14:
  v14 = v19;
  if ( !v19 )
    goto LABEL_24;
  if ( v21 )
    return 0;
  v15 = *(_DWORD *)(a3 + 24);
  if ( !v15 )
LABEL_17:
    v15 = *(_DWORD *)(a4 + 24);
LABEL_18:
  *(_QWORD *)&v17[0] = v14;
  v16 = v22[0];
  a5[1].m128_i32[2] = v15;
  a5[1].m128_u64[0] = v16;
  *a5 = _mm_loadh_ps(v17);
  return 1;
}
