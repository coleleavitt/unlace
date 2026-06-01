__int64 __fastcall sub_205D2F0(char **a1, __int64 a2)
{
  __int64 result; // rax
  __int64 **v5; // r12
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rcx
  unsigned __int64 v13; // r15
  int v14; // edx
  __int64 v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  char *v19; // r10
  __m128 *v20; // [rsp+8h] [rbp-A0h] BYREF
  int *v21; // [rsp+10h] [rbp-98h]
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  __m128 v24[2]; // [rsp+30h] [rbp-78h] BYREF
  int v25; // [rsp+50h] [rbp-58h] BYREF
  __m128 v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+68h] [rbp-40h]

  result = sub_2058460(a1, a2);
  if ( !result )
  {
    v5 = (__int64 **)sub_20C4FC0(*((_QWORD *)*a1 + 1), (unsigned int)a2);
    v6 = **v5;
    v25 = sub_2053D00(a1, (__int64)&a1[a2]);
    v21 = &v25;
    v7 = sub_2050F10((__int64)v5, &v25);
    v20 = (__m128 *)a1;
    v8 = *(_QWORD *)(v6 + 1464);
    v25 = v7;
    v9 = *(unsigned int *)(v6 + 1480);
    v27 = a2;
    v26 = _mm_loadh_ps((const double *)&v20);
    if ( !(_DWORD)v9 || (v10 = (v9 - 1) & v7, v11 = (__int64 *)(v8 + 8LL * v10), v12 = *v11, *v11 == -4096) )
    {
LABEL_9:
      v20 = v24;
      sub_2056B00(v24, (_QWORD *)(v8 + 8 * v9), (_QWORD *)(v8 + 8 * v9), v6 + 1464, 1);
      v13 = v24[0].m128_u64[0];
    }
    else
    {
      for ( LODWORD(v20) = 1; ; LODWORD(v20) = (_DWORD)v20 + 1 )
      {
        if ( v12 != -8192 && v5 == *(__int64 ***)(v12 + 8) )
        {
          v14 = *(_DWORD *)(v12 + 4) & 0x7FFFFFF;
          if ( a2 == v14 )
          {
            if ( !v14 )
              goto LABEL_18;
            if ( *(char **)(v12 - 32 * a2) == *a1 )
              break;
          }
        }
LABEL_7:
        v10 = (v9 - 1) & ((_DWORD)v20 + v10);
        v11 = (__int64 *)(v8 + 8LL * v10);
        v12 = *v11;
        if ( *v11 == -4096 )
          goto LABEL_9;
      }
      v15 = (unsigned int)(v14 - 1);
      v16 = -32 * a2 + v12;
      v17 = 0;
      v18 = 8 * v15;
      while ( v17 != v18 )
      {
        v19 = a1[v17 / 8 + 1];
        v17 += 8LL;
        if ( v19 != *(char **)(v16 + 4 * v17) )
          goto LABEL_7;
      }
LABEL_18:
      v20 = v24;
      sub_2056B00(v24, v11, (_QWORD *)(v8 + 8 * v9), v6 + 1464, 1);
      v13 = v24[0].m128_u64[0];
    }
    sub_2056B00(
      v20,
      (_QWORD *)(*(_QWORD *)(v6 + 1464) + 8LL * *(unsigned int *)(v6 + 1480)),
      (_QWORD *)(*(_QWORD *)(v6 + 1464) + 8LL * *(unsigned int *)(v6 + 1480)),
      v6 + 1464,
      1);
    if ( v24[0].m128_u64[0] == v13 )
    {
      v22 = sub_20C9AC0(24, (unsigned int)a2);
      sub_20512D0(v22, (__int64)v5, 12, (__int64 *)a1, a2, a2 & 0x7FFFFFF);
      v23 = v22;
      sub_205D180((__m128i *)v20, v6 + 1464, &v23, (__int64)v21);
      return v22;
    }
    else
    {
      return *(_QWORD *)v13;
    }
  }
  return result;
}
