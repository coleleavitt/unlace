/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4273C0
// Address: 0x00000000004273C0

//----- (00000000004273C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4273C0(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 i; // rax
  char *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  char *v10; // rax
  char *v11; // r15
  __int64 v12; // rax
  __int64 v13; // r13
  char *v14; // r14
  __int64 v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rsi
  __m128i v18; // xmm0
  void *v19; // rdi
  void *v20; // rdi
  __int64 v22; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rbx
  void *v28; // rdi
  char v29; // [rsp+Fh] [rbp-59h]
  __int64 v30; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v3 = *a1;
  v33 = __readfsqword(0x28u);
  v31 = (__int64)(a1 + 1);
  v32 = 0;
  v29 = *(_BYTE *)(v3 + 616);
  for ( i = 0; i < a2[1]; i = v32 )
  {
    v8 = a1[2];
    v9 = a1[3];
    if ( v9 >= v8 + 1 )
    {
      v6 = (char *)a1[1];
    }
    else
    {
      v10 = (char *)sub_481540(v31, nullptr, v8 + 1, 0x38u);
      v11 = (char *)a1[1];
      v6 = v10;
      v12 = a1[3];
      a1[3] = v9;
      v30 = v12;
      v13 = a1[2] - 1;
      if ( v13 >= 0 )
      {
        v14 = v6;
        do
        {
          v15 = *(_QWORD *)v11;
          v16 = _mm_loadu_si128((const __m128i *)(v11 + 8));
          *(_QWORD *)v11 = 0;
          *(_OWORD *)(v11 + 8) = 0;
          *(_QWORD *)v14 = v15;
          *(__m128i *)(v14 + 8) = v16;
          v17 = *((_QWORD *)v11 + 3);
          v18 = _mm_loadu_si128((const __m128i *)v11 + 2);
          *((_QWORD *)v11 + 3) = 0;
          *((_QWORD *)v14 + 3) = v17;
          *((__m128i *)v14 + 2) = v18;
          LODWORD(v17) = *((_DWORD *)v11 + 12);
          *((_QWORD *)v11 + 5) = 0;
          *((_DWORD *)v14 + 12) = v17;
          v19 = *((void **)v11 + 3);
          if ( v19 )
          {
            *((_QWORD *)v11 + 4) = 0;
            j__free(v19);
          }
          v20 = *(void **)v11;
          if ( *(_QWORD *)v11 )
          {
            *((_QWORD *)v11 + 1) = 0;
            j__free(v20);
          }
          v11 += 56;
          v14 += 56;
        }
        while ( v13-- != 0 );
        v11 = (char *)a1[1];
      }
      j__free(v11);
      a1[1] = (__int64)v6;
      a1[3] = v30;
      v8 = a1[2];
    }
    v7 = (__int64)&v6[56 * v8];
    *(_QWORD *)v7 = 0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_OWORD *)(v7 + 8) = 0;
    *(_OWORD *)(v7 + 32) = 0;
    ++a1[2];
    if ( !(unsigned __int8)sub_4270F0(v7, &v32, a2, v29) )
    {
      v22 = a1[2];
      if ( v22 )
      {
        v24 = v22 - 1;
        a1[2] = v24;
        v25 = a1[1] + 56 * v24;
        v26 = *(void **)(v25 + 24);
        v27 = v25;
        if ( v26 )
        {
          *(_QWORD *)(v25 + 32) = 0;
          j__free(v26);
        }
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *(_QWORD *)(v27 + 8) = 0;
          j__free(v28);
        }
      }
      return v33 - __readfsqword(0x28u);
    }
  }
  return v33 - __readfsqword(0x28u);
}
