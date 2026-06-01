unsigned __int64 __fastcall sub_6FCBC0(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rax
  char *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __m128i v16; // xmm0
  __int64 v17; // rdx
  void *v18; // rdi
  void *v19; // rdi
  __int64 v21; // [rsp+8h] [rbp-110h]
  unsigned __int64 v22; // [rsp+28h] [rbp-F0h]

  v22 = __readfsqword(0x28u);
  v2 = a1[76];
  v3 = a1[75];
  if ( v2 < v3 + 1 )
  {
    v7 = qvector_reserve(a1 + 74, 0, v3 + 1, 64);
    v8 = a1[75];
    v4 = v7;
    v9 = a1[76];
    a1[76] = v2;
    v10 = (char *)a1[74];
    v21 = v9;
    v11 = v8 - 1;
    if ( v11 >= 0 )
    {
      v12 = v4;
      do
      {
        v13 = *(_QWORD *)v10;
        v14 = _mm_loadu_si128((const __m128i *)(v10 + 8));
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        *(_QWORD *)v12 = v13;
        *(__m128i *)(v12 + 8) = v14;
        v15 = *((_QWORD *)v10 + 3);
        v16 = _mm_loadu_si128((const __m128i *)v10 + 2);
        *((_QWORD *)v10 + 3) = 0;
        *(_QWORD *)(v12 + 24) = v15;
        *(__m128i *)(v12 + 32) = v16;
        v17 = *((_QWORD *)v10 + 6);
        *((_QWORD *)v10 + 5) = 0;
        *(_QWORD *)(v12 + 48) = v17;
        *(_QWORD *)(v12 + 56) = *((_QWORD *)v10 + 7);
        v18 = *((void **)v10 + 3);
        if ( v18 )
        {
          *((_QWORD *)v10 + 4) = 0;
          qfree(v18);
        }
        v19 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v19);
        }
        v10 += 64;
        v12 += 64;
      }
      while ( v11-- != 0 );
      v10 = (char *)a1[74];
    }
    qfree(v10);
    a1[74] = v4;
    a1[76] = v21;
    v3 = a1[75];
  }
  else
  {
    v4 = a1[74];
  }
  v5 = v4 + (v3 << 6);
  *(_QWORD *)v5 = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 48) = -1;
  *(_QWORD *)(v5 + 56) = 4;
  *(_OWORD *)(v5 + 8) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  ++a1[75];
  sub_35A6C0((char **)v5);
  return v22 - __readfsqword(0x28u);
}
