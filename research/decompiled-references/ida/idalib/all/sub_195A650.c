__int64 __fastcall sub_195A650(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  int v4; // eax
  unsigned int *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rdx
  __m128 *v13; // rcx
  const __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  void **v18; // [rsp+0h] [rbp-D8h]
  __int64 v19; // [rsp+0h] [rbp-D8h]
  _BYTE *v20; // [rsp+8h] [rbp-D0h]
  _DWORD v21[2]; // [rsp+10h] [rbp-C8h] BYREF
  char v22; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v23; // [rsp+20h] [rbp-B8h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-A0h]
  _BYTE v26[152]; // [rsp+40h] [rbp-98h] BYREF

  v18 = sub_1946B40(a1, *(void ***)(a2 + 24), a3, a4);
  if ( !v18 )
    return 1;
  v25 = 0x400000000LL;
  v4 = *(_DWORD *)(a2 + 32);
  v5 = (unsigned int *)v26;
  ptr = v26;
  if ( !v4 )
  {
    v16 = 0;
    goto LABEL_12;
  }
  v6 = a2 + 40;
  v7 = a2 + 16LL * (unsigned int)(v4 - 1) + 56;
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v6 + 4);
      v9 = *(_DWORD *)v6;
      v22 = 1;
      v21[1] = v8;
      v10 = *(_QWORD *)(v6 + 8);
      v21[0] = v9;
      v11 = v10 & 3;
      if ( (v10 & 3) == 0 )
        goto LABEL_16;
      if ( v11 > 2 )
        break;
      v22 = 0;
      v23 = sub_BF9AD0(v6);
      if ( v23 )
        goto LABEL_9;
LABEL_5:
      v6 += 16;
      if ( v6 == v7 )
        goto LABEL_11;
    }
    if ( v11 == 3 )
      goto LABEL_5;
LABEL_16:
    result = sub_1944E10(
               a1,
               *(unsigned __int16 **)(a2 + 16LL * *(unsigned int *)(a2 + 32) + 8LL * (unsigned int)(v10 >> 2) + 40),
               a3,
               a4);
    if ( result == 1 )
      goto LABEL_13;
    v23 = result & 0xFFFFFFFFFFFFFFFELL;
LABEL_9:
    v12 = (unsigned int)v25 + 1LL;
    v13 = (__m128 *)((char *)ptr + 24 * (unsigned int)v25);
    v14 = (const __m128i *)v21;
    if ( v12 > HIDWORD(v25) )
    {
      if ( ptr > v21 || v13 <= (__m128 *)v21 )
      {
        sub_2237220(&ptr, v26, v12, 24);
        v13 = (__m128 *)((char *)ptr + 24 * (unsigned int)v25);
        v14 = (const __m128i *)v21;
      }
      else
      {
        v20 = ptr;
        sub_2237220(&ptr, v26, v12, 24);
        v14 = (const __m128i *)((char *)ptr + (char *)v21 - v20);
        v13 = (__m128 *)((char *)ptr + 24 * (unsigned int)v25);
      }
    }
    a3 = (__m128)_mm_loadu_si128(v14);
    v6 += 16;
    *v13 = a3;
    v15 = v14[1].m128i_i64[0];
    LODWORD(v25) = v25 + 1;
    v13[1].m128_u64[0] = v15;
  }
  while ( v6 != v7 );
LABEL_11:
  v5 = (unsigned int *)ptr;
  v16 = (unsigned int)v25;
LABEL_12:
  result = sub_19162B0(*a1, *(_DWORD *)(a2 + 16), (__int64)v18, v5, v16, *(_DWORD *)(a2 + 20), a3, a4);
LABEL_13:
  if ( ptr != v26 )
  {
    v19 = result;
    free(ptr);
    return v19;
  }
  return result;
}
