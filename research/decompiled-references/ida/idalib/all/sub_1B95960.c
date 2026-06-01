__int64 __fastcall sub_1B95960(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r8
  int v5; // eax
  char *v6; // rcx
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // eax
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  const __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 result; // rax
  _QWORD *v18; // [rsp+0h] [rbp-D8h]
  __int64 v19; // [rsp+0h] [rbp-D8h]
  _BYTE *v20; // [rsp+8h] [rbp-D0h]
  _DWORD v21[2]; // [rsp+10h] [rbp-C8h] BYREF
  char v22; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v23; // [rsp+20h] [rbp-B8h]
  void *ptr; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-A0h]
  _BYTE v26[152]; // [rsp+40h] [rbp-98h] BYREF

  v18 = sub_1B90E50(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v18 )
    return 1;
  v25 = 0x400000000LL;
  v5 = *(_DWORD *)(a2 + 32);
  v6 = v26;
  ptr = v26;
  if ( !v5 )
  {
    v16 = 0;
    goto LABEL_12;
  }
  v7 = a2 + 40;
  v8 = a2 + 16LL * (unsigned int)(v5 - 1) + 56;
  do
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = *(_DWORD *)v7;
      v22 = 1;
      v21[1] = v9;
      v11 = *(_QWORD *)(v7 + 8);
      v21[0] = v10;
      v12 = v11 & 3;
      if ( (v11 & 3) == 0 )
        goto LABEL_16;
      if ( v12 > 2 )
        break;
      v22 = 0;
      v23 = sub_BF9AD0(v7);
      if ( v23 )
        goto LABEL_9;
LABEL_5:
      v7 += 16;
      if ( v7 == v8 )
        goto LABEL_11;
    }
    if ( v12 == 3 )
      goto LABEL_5;
LABEL_16:
    result = sub_1B7CAD0(
               a1,
               *(unsigned __int16 **)(a2 + 16LL * *(unsigned int *)(a2 + 32) + 8LL * (unsigned int)(v11 >> 2) + 40),
               a3,
               a4,
               16LL * *(unsigned int *)(a2 + 32),
               (unsigned __int64)v6,
               v4);
    if ( result == 1 )
      goto LABEL_13;
    v23 = result & 0xFFFFFFFFFFFFFFFELL;
LABEL_9:
    v13 = (unsigned int)v25 + 1LL;
    v6 = (char *)ptr + 24 * (unsigned int)v25;
    v14 = (const __m128i *)v21;
    if ( v13 > HIDWORD(v25) )
    {
      if ( ptr > v21 || v6 <= (char *)v21 )
      {
        sub_2237220(&ptr, v26, v13, 24);
        v6 = (char *)ptr + 24 * (unsigned int)v25;
        v14 = (const __m128i *)v21;
      }
      else
      {
        v20 = ptr;
        sub_2237220(&ptr, v26, v13, 24);
        v14 = (const __m128i *)((char *)ptr + (char *)v21 - v20);
        v6 = (char *)ptr + 24 * (unsigned int)v25;
      }
    }
    a3 = (__m128)_mm_loadu_si128(v14);
    v7 += 16;
    *(__m128 *)v6 = a3;
    v15 = v14[1].m128i_i64[0];
    LODWORD(v25) = v25 + 1;
    *((_QWORD *)v6 + 2) = v15;
  }
  while ( v7 != v8 );
LABEL_11:
  v6 = (char *)ptr;
  v16 = (unsigned int)v25;
LABEL_12:
  result = sub_19162B0(*a1, *(_DWORD *)(a2 + 16), (__int64)v18, (unsigned int *)v6, v16, *(_DWORD *)(a2 + 20), a3, a4);
LABEL_13:
  if ( ptr != v26 )
  {
    v19 = result;
    free(ptr);
    return v19;
  }
  return result;
}
