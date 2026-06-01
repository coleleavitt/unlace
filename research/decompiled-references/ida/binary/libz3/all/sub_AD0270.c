__int64 __fastcall sub_AD0270(_QWORD *a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 v3; // cl
  __int64 **v6; // r12
  __int64 v7; // rax
  int v8; // r8d
  __int64 *v9; // rsi
  unsigned int v10; // edx
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 *v13; // r9
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r13
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-50h] BYREF
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  __int64 v23; // [rsp+18h] [rbp-40h]
  __m128i v24[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a3;
  v6 = (__int64 **)((char *)a1 + (-a3 & 0x18) + 200);
  v7 = *(unsigned int *)((char *)a1 + (-a3 & 0x18) + 208);
  v8 = *(_DWORD *)(a2 + 12);
  v9 = *v6;
  v10 = v7 - 1;
  v7 *= 16;
  v11 = (__int64 *)((char *)*v6 + v7);
  v12 = 16LL * (v8 & v10);
  v13 = &(*v6)[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &(*v6)[(unsigned __int64)v12 / 8]; v11 != i; i += 2 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v8 && a2 == v15 )
          return i[1];
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v9; v9 += 2 )
  {
    v20 = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(v20 + 12) == v8 && a2 == v20 )
      {
        i = v9;
        return i[1];
      }
    }
    else if ( !v20 )
    {
      break;
    }
  }
LABEL_8:
  v16 = a1[1];
  v22 = 0;
  v17 = a1[24];
  v23 = v16;
  if ( (unsigned __int8)sub_C05810(v17, a2, &v22, v3) )
  {
    v18 = v22;
    v24[0] = _mm_unpacklo_epi64((__m128i)a2, (__m128i)(unsigned __int64)v22);
    sub_686B20((__int64)v6, v24);
    v21 = v18;
    if ( v18 )
      ++*(_DWORD *)(v18 + 8);
  }
  else
  {
    v24[0] = (__m128i)a2;
    sub_686B20((__int64)v6, v24);
    v21 = 0;
    v18 = 0;
  }
  sub_AC8490(a1 + 32, &v21);
  sub_AC6F60(v22, v23);
  return v18;
}

