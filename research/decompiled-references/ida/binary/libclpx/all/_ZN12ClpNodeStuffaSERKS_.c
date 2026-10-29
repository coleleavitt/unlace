__m128i *__fastcall ClpNodeStuff::operator=(__m128i *a1, const __m128i *a2)
{
  __int32 v3; // eax
  __int64 v4; // xmm0_8
  __int32 v5; // eax
  __int32 v6; // eax
  __int32 v7; // eax
  int v8; // eax
  char *v9; // rdi
  __int64 v10; // r12
  __int64 v11; // r14
  void *v12; // r13
  ClpNode *v13; // rdi
  void (__fastcall *v14)(ClpNode *); // rax
  __m128i v15; // xmm0

  if ( a1 != a2 )
  {
    v3 = a2[8].m128i_i32[3];
    a1->m128i_i64[1] = a2->m128i_i64[1];
    a1[1].m128i_i64[0] = a2[1].m128i_i64[0];
    v4 = a2[1].m128i_i64[1];
    a1[8].m128i_i32[3] = v3;
    v5 = a2[9].m128i_i32[0];
    a1[1].m128i_i64[1] = v4;
    a1[2].m128i_i64[0] = 0;
    a1[2].m128i_i64[1] = 0;
    a1[3].m128i_i64[0] = 0;
    a1[3].m128i_i64[1] = 0;
    a1[9].m128i_i32[0] = v5;
    v6 = a2[9].m128i_i32[1];
    a1[4].m128i_i64[0] = 0;
    a1[4].m128i_i64[1] = 0;
    a1[5].m128i_i64[0] = 0;
    a1[5].m128i_i64[1] = 0;
    a1[6].m128i_i64[0] = 0;
    a1[9].m128i_i32[1] = v6;
    v7 = a2[9].m128i_i32[2];
    a1[6].m128i_i64[1] = 0;
    a1[7].m128i_i64[0] = 0;
    a1[7].m128i_i64[1] = 0;
    a1[8].m128i_i32[2] = 0;
    a1[9].m128i_i32[2] = v7;
    a1[9].m128i_i32[3] = a2[9].m128i_i32[3];
    v8 = ClpNodeStuff::maximumNodes((ClpNodeStuff *)a1);
    v9 = (char *)a1[6].m128i_i64[0];
    if ( v8 > 0 )
    {
      v10 = 0;
      v11 = 8LL * (unsigned int)(v8 - 1) + 8;
      do
      {
        v12 = *(void **)&v9[v10];
        if ( v12 )
        {
          v13 = *(ClpNode **)&v9[v10];
          v14 = *(void (__fastcall **)(ClpNode *))(*(_QWORD *)v12 + 8LL);
          if ( v14 == ClpNode::~ClpNode )
          {
            ClpNode::~ClpNode(v13);
            operator delete(v12);
          }
          else
          {
            v14(v13);
          }
          v9 = (char *)a1[6].m128i_i64[0];
        }
        v10 += 8;
      }
      while ( v11 != v10 );
    }
    if ( v9 )
      operator delete[](v9);
    v15 = _mm_loadu_si128(a2 + 10);
    a1[6].m128i_i64[0] = 0;
    a1[10] = v15;
    a1[11].m128i_i32[0] = a2[11].m128i_i32[0];
    a1[8].m128i_i64[0] = a2[8].m128i_i64[0];
    a1[11].m128i_i32[1] = a2[11].m128i_i32[1];
    a1[11].m128i_i32[2] = a2[11].m128i_i32[2];
  }
  return a1;
}

