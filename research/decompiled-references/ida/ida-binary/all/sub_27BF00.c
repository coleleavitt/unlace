__int64 __fastcall disasm_graph_t__::vfunc_21(__int64 a1)
{
  __int64 v1; // rbp
  __m128i v2; // xmm0
  char v3; // al
  size_t v4; // rbx
  __m128i v5; // xmm0
  int v6; // eax
  __int64 v7; // r14
  void *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r12
  __m128i v16; // xmm0
  __int64 v17; // rcx
  void *v18; // rax
  void *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+0h] [rbp-48h]
  __int64 n; // [rsp+8h] [rbp-40h]
  __int64 na; // [rsp+8h] [rbp-40h]

  v1 = qalloc_or_throw(384);
  sub_27B8C0(v1, a1);
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 256));
  *(_QWORD *)v1 = disasm_graph_t___vtable;
  *(__m128i *)(v1 + 256) = v2;
  *(_DWORD *)(v1 + 272) = *(_DWORD *)(a1 + 272);
  *(_BYTE *)(v1 + 288) = *(_BYTE *)(a1 + 288);
  *(_WORD *)(v1 + 289) = *(_WORD *)(a1 + 289);
  v3 = *(_BYTE *)(a1 + 291);
  *(_QWORD *)(v1 + 296) = 0;
  *(_BYTE *)(v1 + 291) = v3;
  *(_QWORD *)(v1 + 280) = qflow_chart_t___vtable;
  *(_OWORD *)(v1 + 304) = 0;
  v4 = *(_QWORD *)(a1 + 304);
  if ( v4 )
  {
    v9 = (void *)qalloc_or_throw(*(_QWORD *)(a1 + 304));
    *(_QWORD *)(v1 + 296) = v9;
    *(_QWORD *)(v1 + 312) = v4;
    memcpy(v9, *(const void **)(a1 + 296), v4);
    *(_QWORD *)(v1 + 304) = v4;
  }
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 320));
  *(_QWORD *)(v1 + 336) = *(_QWORD *)(a1 + 336);
  v6 = *(_DWORD *)(a1 + 344);
  *(__m128i *)(v1 + 320) = v5;
  *(_DWORD *)(v1 + 344) = v6;
  *(_QWORD *)(v1 + 352) = 0;
  *(_OWORD *)(v1 + 360) = 0;
  v7 = *(_QWORD *)(a1 + 360);
  if ( v7 )
  {
    v10 = qalloc_or_throw(v7 << 6);
    *(_QWORD *)(v1 + 352) = v10;
    v11 = v10;
    v12 = 0;
    *(_QWORD *)(v1 + 368) = v7;
    while ( 1 )
    {
      v14 = (v12 << 6) + v11;
      v15 = *(_QWORD *)(a1 + 352) + (v12 << 6);
      v16 = _mm_loadu_si128((const __m128i *)v15);
      *(_QWORD *)(v14 + 16) = 0;
      *(_OWORD *)(v14 + 24) = 0;
      *(__m128i *)v14 = v16;
      v17 = *(_QWORD *)(v15 + 24);
      if ( v17 )
      {
        v20 = *(_QWORD *)(v15 + 24);
        n = 4 * v17;
        v18 = (void *)qalloc_or_throw(4 * v17);
        *(_QWORD *)(v14 + 16) = v18;
        *(_QWORD *)(v14 + 32) = v20;
        memcpy(v18, *(const void **)(v15 + 16), n);
        *(_QWORD *)(v14 + 24) = v20;
      }
      *(_QWORD *)(v14 + 40) = 0;
      *(_OWORD *)(v14 + 48) = 0;
      v13 = *(_QWORD *)(v15 + 48);
      if ( v13 )
      {
        v21 = *(_QWORD *)(v15 + 48);
        na = 4 * v13;
        v19 = (void *)qalloc_or_throw(4 * v13);
        *(_QWORD *)(v14 + 40) = v19;
        ++v12;
        *(_QWORD *)(v14 + 56) = v21;
        memcpy(v19, *(const void **)(v15 + 40), na);
        *(_QWORD *)(v14 + 48) = v21;
        if ( v7 == v12 )
        {
LABEL_12:
          *(_QWORD *)(v1 + 360) = v7;
          break;
        }
      }
      else if ( v7 == ++v12 )
      {
        goto LABEL_12;
      }
      v11 = *(_QWORD *)(v1 + 352);
    }
  }
  *(_DWORD *)(v1 + 376) = *(_DWORD *)(a1 + 376);
  return v1;
}
