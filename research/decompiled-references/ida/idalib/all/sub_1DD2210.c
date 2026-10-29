__int64 __fastcall sub_1DD2210(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // r8
  void *v7; // r9
  char *v8; // rcx
  int v9; // eax
  __int64 v10; // r13
  __int64 v11; // rbp
  int v12; // eax
  int v13; // edx
  unsigned __int64 v14; // rax
  unsigned int v15; // edx
  unsigned __int64 v16; // rdx
  const __m128i *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r15
  unsigned __int16 *v24; // rax
  unsigned __int64 v25; // rax
  bool v26; // [rsp+7h] [rbp-E1h]
  _QWORD *v27; // [rsp+10h] [rbp-D8h]
  void *v28; // [rsp+18h] [rbp-D0h]
  _DWORD v29[2]; // [rsp+20h] [rbp-C8h] BYREF
  char v30; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+30h] [rbp-B8h]
  void *ptr; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-A0h]
  _BYTE v34[152]; // [rsp+50h] [rbp-98h] BYREF

  v5 = a2;
  v27 = sub_1DD1930((__int64)a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( !v27 )
    return 1;
  v8 = v34;
  v33 = 0x400000000LL;
  v9 = *(_DWORD *)(a2 + 32);
  ptr = v34;
  if ( v9 )
  {
    v10 = a2 + 40;
    v26 = 0;
    v11 = a2 + 16LL * (unsigned int)(v9 - 1) + 56;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v10 + 4);
      v13 = *(_DWORD *)v10;
      v30 = 1;
      v29[1] = v12;
      v14 = *(_QWORD *)(v10 + 8);
      v29[0] = v13;
      v15 = v14 & 3;
      if ( (v14 & 3) == 0 )
        goto LABEL_19;
      if ( v15 > 2 )
      {
        if ( v15 == 3 )
          goto LABEL_5;
LABEL_19:
        v22 = 16LL * *(unsigned int *)(a2 + 32);
        v23 = *(_QWORD *)(a2 + v22 + 8LL * (unsigned int)(v14 >> 2) + 40);
        v24 = sub_1DC71F0(a1, v23, v22, (unsigned __int64)v8, v6, (__int64)v7, a3, a4);
        if ( v24 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        {
          v5 = 1;
          v8 = (char *)ptr;
          goto LABEL_16;
        }
        v25 = (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFELL;
        if ( !v26 )
          v26 = v23 != v25;
        v31 = v25;
LABEL_9:
        v7 = ptr;
        v16 = (unsigned int)v33 + 1LL;
        v8 = (char *)ptr + 24 * (unsigned int)v33;
        v17 = (const __m128i *)v29;
        if ( v16 > HIDWORD(v33) )
        {
          if ( ptr > v29 || v8 <= (char *)v29 )
          {
            sub_2237220(&ptr, v34, v16, 24);
            v8 = (char *)ptr + 24 * (unsigned int)v33;
            v17 = (const __m128i *)v29;
          }
          else
          {
            v28 = ptr;
            sub_2237220(&ptr, v34, v16, 24);
            v7 = v28;
            v17 = (const __m128i *)((char *)ptr + (char *)v29 - (_BYTE *)v28);
            v8 = (char *)ptr + 24 * (unsigned int)v33;
          }
        }
        a3 = (__m128)_mm_loadu_si128(v17);
        v10 += 16;
        *(__m128 *)v8 = a3;
        v18 = v17[1].m128i_i64[0];
        LODWORD(v33) = v33 + 1;
        *((_QWORD *)v8 + 2) = v18;
        if ( v11 == v10 )
        {
LABEL_11:
          v8 = (char *)ptr;
          goto LABEL_12;
        }
      }
      else
      {
        v30 = 0;
        v31 = sub_BF9AD0(v10);
        if ( v31 )
          goto LABEL_9;
LABEL_5:
        v10 += 16;
        if ( v11 == v10 )
          goto LABEL_11;
      }
    }
  }
  v26 = 0;
LABEL_12:
  v19 = *a1;
  if ( *(_DWORD *)(*a1 + 12632) || *(_QWORD **)(a2 + 24) != v27 || v26 )
  {
    v20 = sub_19162B0(
            v19,
            *(_DWORD *)(a2 + 16),
            (__int64)v27,
            (unsigned int *)v8,
            (unsigned int)v33,
            *(_DWORD *)(a2 + 20),
            a3,
            a4);
    v8 = (char *)ptr;
    v5 = v20;
  }
LABEL_16:
  if ( v8 != v34 )
    free(v8);
  return v5;
}
