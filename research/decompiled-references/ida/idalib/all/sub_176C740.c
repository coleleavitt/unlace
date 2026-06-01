__int64 __fastcall sub_176C740(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 v4; // rbx
  _BYTE *v5; // rcx
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rbp
  int v9; // eax
  int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rdx
  __m128i *v14; // rcx
  const __m128i *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int16 *v20; // r15
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  bool v23; // [rsp+7h] [rbp-E1h]
  void **v24; // [rsp+10h] [rbp-D8h]
  _BYTE *v25; // [rsp+18h] [rbp-D0h]
  _DWORD v26[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v27; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v28; // [rsp+30h] [rbp-B8h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-A0h]
  _BYTE v31[152]; // [rsp+50h] [rbp-98h] BYREF

  v4 = a2;
  v24 = sub_176A140(a1, *(void ***)(a2 + 24), a3);
  if ( !v24 )
    return 1;
  v5 = v31;
  v30 = 0x400000000LL;
  v6 = *(_DWORD *)(a2 + 32);
  ptr = v31;
  if ( v6 )
  {
    v7 = a2 + 40;
    v23 = 0;
    v8 = a2 + 16LL * (unsigned int)(v6 - 1) + 56;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = *(_DWORD *)v7;
      v27 = 1;
      v26[1] = v9;
      v11 = *(_QWORD *)(v7 + 8);
      v26[0] = v10;
      v12 = v11 & 3;
      if ( (v11 & 3) == 0 )
        goto LABEL_19;
      if ( v12 > 2 )
      {
        if ( v12 == 3 )
          goto LABEL_5;
LABEL_19:
        v20 = *(unsigned __int16 **)(a2 + 16LL * *(unsigned int *)(a2 + 32) + 8LL * (unsigned int)(v11 >> 2) + 40);
        v21 = sub_175B800(a1, v20);
        if ( v21 == 1 )
        {
          v4 = 1;
          v5 = ptr;
          goto LABEL_16;
        }
        v22 = v21 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v23 )
          v23 = v20 != (unsigned __int16 *)v22;
        v28 = v22;
LABEL_9:
        v13 = (unsigned int)v30 + 1LL;
        v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v30);
        v15 = (const __m128i *)v26;
        if ( v13 > HIDWORD(v30) )
        {
          if ( ptr > v26 || v14 <= (__m128i *)v26 )
          {
            sub_2237220(&ptr, v31, v13, 24);
            v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v30);
            v15 = (const __m128i *)v26;
          }
          else
          {
            v25 = ptr;
            sub_2237220(&ptr, v31, v13, 24);
            v15 = (const __m128i *)((char *)ptr + (char *)v26 - v25);
            v14 = (__m128i *)((char *)ptr + 24 * (unsigned int)v30);
          }
        }
        v7 += 16;
        *v14 = _mm_loadu_si128(v15);
        v16 = v15[1].m128i_i64[0];
        LODWORD(v30) = v30 + 1;
        v14[1].m128i_i64[0] = v16;
        if ( v8 == v7 )
        {
LABEL_11:
          v5 = ptr;
          goto LABEL_12;
        }
      }
      else
      {
        v27 = 0;
        v28 = sub_BF9AD0(v7);
        if ( v28 )
          goto LABEL_9;
LABEL_5:
        v7 += 16;
        if ( v8 == v7 )
          goto LABEL_11;
      }
    }
  }
  v23 = 0;
LABEL_12:
  v17 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || *(void ***)(a2 + 24) != v24 || v23 )
  {
    v18 = sub_19162B0(v17, *(unsigned int *)(a2 + 16), v24, v5, (unsigned int)v30, *(unsigned int *)(a2 + 20));
    v5 = ptr;
    v4 = v18;
  }
LABEL_16:
  if ( v5 != v31 )
    free(v5);
  return v4;
}
