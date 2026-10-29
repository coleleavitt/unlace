__int64 __fastcall sub_1D53A30(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rbp
  int v11; // eax
  int v12; // edx
  unsigned __int64 v13; // rax
  unsigned int v14; // edx
  unsigned __int64 v15; // rdx
  const __m128i *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v21; // rdx
  unsigned __int16 *v22; // r15
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  bool v25; // [rsp+7h] [rbp-E1h]
  _QWORD *v26; // [rsp+10h] [rbp-D8h]
  _BYTE *v27; // [rsp+18h] [rbp-D0h]
  _DWORD v28[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v29; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v30; // [rsp+30h] [rbp-B8h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A0h]
  _BYTE v33[152]; // [rsp+50h] [rbp-98h] BYREF

  v5 = a2;
  v26 = sub_1D51480(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v26 )
    return 1;
  v7 = v33;
  v32 = 0x400000000LL;
  v8 = *(_DWORD *)(a2 + 32);
  ptr = v33;
  if ( v8 )
  {
    v9 = a2 + 40;
    v25 = 0;
    v10 = a2 + 16LL * (unsigned int)(v8 - 1) + 56;
    while ( 1 )
    {
      v11 = *(_DWORD *)(v9 + 4);
      v12 = *(_DWORD *)v9;
      v29 = 1;
      v28[1] = v11;
      v13 = *(_QWORD *)(v9 + 8);
      v28[0] = v12;
      v14 = v13 & 3;
      if ( (v13 & 3) == 0 )
        goto LABEL_19;
      if ( v14 > 2 )
      {
        if ( v14 == 3 )
          goto LABEL_5;
LABEL_19:
        v21 = 16LL * *(unsigned int *)(a2 + 32);
        v22 = *(unsigned __int16 **)(a2 + v21 + 8LL * (unsigned int)(v13 >> 2) + 40);
        v23 = sub_1D434A0(a1, v22, a3, a4, v21, (unsigned __int64)v7, v6);
        if ( v23 == 1 )
        {
          v5 = 1;
          v7 = (char *)ptr;
          goto LABEL_16;
        }
        v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v25 )
          v25 = v22 != (unsigned __int16 *)v24;
        v30 = v24;
LABEL_9:
        v15 = (unsigned int)v32 + 1LL;
        v7 = (char *)ptr + 24 * (unsigned int)v32;
        v16 = (const __m128i *)v28;
        if ( v15 > HIDWORD(v32) )
        {
          if ( ptr > v28 || v7 <= (char *)v28 )
          {
            sub_2237220(&ptr, v33, v15, 24);
            v7 = (char *)ptr + 24 * (unsigned int)v32;
            v16 = (const __m128i *)v28;
          }
          else
          {
            v27 = ptr;
            sub_2237220(&ptr, v33, v15, 24);
            v16 = (const __m128i *)((char *)ptr + (char *)v28 - v27);
            v7 = (char *)ptr + 24 * (unsigned int)v32;
          }
        }
        a3 = (__m128)_mm_loadu_si128(v16);
        v9 += 16;
        *(__m128 *)v7 = a3;
        v17 = v16[1].m128i_i64[0];
        LODWORD(v32) = v32 + 1;
        *((_QWORD *)v7 + 2) = v17;
        if ( v10 == v9 )
        {
LABEL_11:
          v7 = (char *)ptr;
          goto LABEL_12;
        }
      }
      else
      {
        v29 = 0;
        v30 = sub_BF9AD0(v9);
        if ( v30 )
          goto LABEL_9;
LABEL_5:
        v9 += 16;
        if ( v10 == v9 )
          goto LABEL_11;
      }
    }
  }
  v25 = 0;
LABEL_12:
  v18 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD **)(a2 + 24) != v26 || v25 )
  {
    v19 = sub_19162B0(
            v18,
            *(_DWORD *)(a2 + 16),
            (__int64)v26,
            (unsigned int *)v7,
            (unsigned int)v32,
            *(_DWORD *)(a2 + 20),
            a3,
            a4);
    v7 = (char *)ptr;
    v5 = v19;
  }
LABEL_16:
  if ( v7 != v33 )
    free(v7);
  return v5;
}
