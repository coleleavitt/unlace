unsigned __int64 __fastcall sub_FE3230(_QWORD *a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 result; // rax
  int v6; // r10d
  __int64 v7; // rcx
  unsigned __int64 *v8; // r13
  _QWORD *v10; // r12
  __int64 v11; // r14
  _DWORD *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 i; // rdx
  unsigned __int64 v26; // [rsp+0h] [rbp-F8h]
  __int64 v27; // [rsp+8h] [rbp-F0h]
  int v28; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v29; // [rsp+10h] [rbp-E8h]
  int v30; // [rsp+18h] [rbp-E0h]
  unsigned int v31; // [rsp+1Ch] [rbp-DCh]
  __int64 v32; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C0h]
  _DWORD v35[46]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = *a3;
  if ( a2 <= 1 )
    return (a2 + 1) | v3 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = *a3;
  v7 = 1;
  v8 = a3 + 1;
  v10 = (_QWORD *)*a1;
  v35[0] = a2;
  v11 = (__int64)&a3[a2];
  v12 = v35;
  v34 = 0x2000000001LL;
  ptr = v35;
  v31 = a2 - 1;
  v27 = a2 - 1;
  while ( 1 )
  {
    v12[v7] = v6;
    v13 = HIDWORD(v3);
    LODWORD(v34) = v34 + 1;
    v14 = (unsigned int)v34;
    if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v34) )
    {
      v28 = v13;
      sub_2237220(&ptr, v35, (unsigned int)v34 + 1LL, 4);
      v14 = (unsigned int)v34;
      LODWORD(v13) = v28;
    }
    *((_DWORD *)ptr + v14) = v13;
    v7 = (unsigned int)(v34 + 1);
    LODWORD(v34) = v34 + 1;
    if ( v8 == (unsigned __int64 *)v11 )
      break;
    v3 = *v8;
    v6 = *v8;
    if ( v7 + 1 > (unsigned __int64)HIDWORD(v34) )
    {
      v30 = *v8;
      v29 = *v8;
      sub_2237220(&ptr, v35, v7 + 1, 4);
      v7 = (unsigned int)v34;
      v6 = v30;
      v3 = v29;
    }
    v12 = ptr;
    ++v8;
  }
  v32 = 0;
  v15 = sub_2223360(v10, &ptr, &v32, &off_2B544A0);
  if ( !v15 || (v18 = v15 - 8) == 0 )
  {
    v19 = v10[2];
    v20 = 8 * a2 + 16;
    v10[12] += v20;
    v21 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = v21;
    if ( v10[3] >= v20 + v21 && v19 )
    {
      v10[2] = v20 + v21;
    }
    else
    {
      v21 = sub_986170((__int64)(v10 + 2), v20, 8 * a2 + 16, 3, v16, v17);
      v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
    }
    *(_QWORD *)(v21 + 8) = 0;
    *(_DWORD *)v21 = a2 + 3;
    if ( ((unsigned __int64)a3 <= v21 || (unsigned __int64)a3 >= v21 + 32) && v31 > 1 )
    {
      v23 = 0;
      do
      {
        *(__m128i *)(v21 + v23 * 8 + 16) = _mm_loadu_si128((const __m128i *)&a3[v23]);
        v23 += 2;
      }
      while ( v23 != 2LL * (a2 >> 1) );
      v24 = a2 & 0xFFFFFFFE;
      if ( a2 != (_DWORD)v24 )
        *(_QWORD *)(v21 + 8 * v24 + 16) = a3[v24];
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        *(_QWORD *)(v21 + 8 * i + 16) = a3[i];
        if ( v27 == i )
          break;
      }
    }
    sub_2223210(v10, v21 + 8, v32, &off_2B544A0);
    v18 = v22;
  }
  result = v18 | 7;
  if ( ptr != v35 )
  {
    v26 = result;
    free(ptr);
    return v26;
  }
  return result;
}
