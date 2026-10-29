void __fastcall sub_EE1440(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE *v4; // rax
  _QWORD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // r14
  _BYTE *v11; // rax
  _QWORD *v12; // [rsp+0h] [rbp-40h] BYREF
  __m128 v13[3]; // [rsp+8h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a2 + 32) )
  {
    v3 = *a1;
    v4 = *(_BYTE **)(v3 + 32);
    if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
    {
      sub_2257CD0(v3, 32);
    }
    else
    {
      *(_QWORD *)(v3 + 32) = v4 + 1;
      *v4 = 32;
    }
    v5 = a1 + 3;
    v6 = *(__int64 **)(a2 + 24);
    v12 = v5;
    v7 = *(_QWORD *)(a2 + 32);
    v8 = &v6[v7];
    v13[0] = _mm_loadh_ps((const double *)&v12);
    if ( v6 != &v6[v7] )
    {
      v9 = &v6[v7 - 1];
      while ( 1 )
      {
        v10 = *v6;
        sub_EE12D0((__int64 *)v13, *v6);
        if ( v10 == *v9 )
          goto LABEL_7;
        v11 = *(_BYTE **)(v13[0].m128_u64[0] + 32);
        if ( (unsigned __int64)v11 < *(_QWORD *)(v13[0].m128_u64[0] + 24) )
        {
          *(_QWORD *)(v13[0].m128_u64[0] + 32) = v11 + 1;
          *v11 = 32;
LABEL_7:
          if ( v8 == ++v6 )
            return;
        }
        else
        {
          ++v6;
          sub_2257CD0(v13[0].m128_u64[0], 32);
          if ( v8 == v6 )
            return;
        }
      }
    }
  }
}

