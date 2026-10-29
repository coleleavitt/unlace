__int64 __fastcall sub_2222780(__int64 a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 v7; // r12
  _QWORD *v9; // rdi
  __m128i si128; // xmm0
  size_t v11; // rax
  const void *v12; // rax
  size_t v13; // rdx
  size_t v14; // r14
  size_t v15; // r14
  _BYTE *v17; // rax
  char *v18; // rsi
  size_t v19; // r15
  char *v20; // rcx
  void *v21; // rdi
  size_t v22; // rdx
  __int64 v23; // rsi

  v7 = a1 + 24;
  v9 = (_QWORD *)(a1 + 304);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(v9 - 38) = v7;
  *(__m128i *)(v9 - 37) = si128;
  *(_QWORD *)(a1 + 280) = v9;
  *(__m128i *)(a1 + 288) = si128;
  if ( a4 > 0x100 )
  {
    sub_2236E10(a1 + 280, v9, a4, 1);
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 280) + *(_QWORD *)(a1 + 288));
  }
  else
  {
    v11 = a4;
    if ( !a4 )
      goto LABEL_3;
  }
  memcpy(v9, a3, a4);
  v11 = a4 + *(_QWORD *)(a1 + 288);
LABEL_3:
  *(_QWORD *)(a1 + 288) = v11;
  sub_228EC80(a1 + 280);
  sub_228EF50(a1 + 280, 0);
  v12 = (const void *)sub_228B1B0(*(_QWORD *)(a1 + 280), *(_QWORD *)(a1 + 288), 0);
  v13 = *(_QWORD *)(a1 + 280) + *(_QWORD *)(a1 + 288) - (_QWORD)v12;
  v14 = v13;
  if ( v13 )
  {
    v17 = memmove(*(void **)(a1 + 280), v12, v13);
    v18 = *(char **)(a1 + 280);
    v19 = *(_QWORD *)(a1 + 8);
    v20 = &v17[v14];
    v15 = &v17[v14] - v18;
    *(_QWORD *)(a1 + 288) = v15;
    if ( v19 >= v15 )
    {
      if ( v15 )
        memmove(*(void **)a1, v18, v15);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 16) < v15 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v19 = 0;
        sub_2236E10(a1, v7, v15, 1);
        v18 = *(char **)(a1 + 280);
        v22 = *(_QWORD *)(a1 + 288);
        v21 = *(void **)a1;
        v20 = &v18[v22];
      }
      else
      {
        v21 = *(void **)a1;
        v22 = v15;
        if ( v19 )
        {
          memmove(v21, v18, v19);
          v23 = *(_QWORD *)(a1 + 280);
          v22 = *(_QWORD *)(a1 + 288);
          v20 = (char *)(v23 + v22);
          v18 = (char *)(v19 + v23);
          v21 = (void *)(v19 + *(_QWORD *)a1);
        }
      }
      if ( v20 != v18 )
        memcpy(v21, v18, v22 - v19);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 288) = 0;
    v15 = 0;
  }
  *(_QWORD *)(a1 + 8) = v15;
  sub_2222130(a2, (_QWORD *)a1);
  sub_228F0B0(a1 + 280, 1, 0);
  return a1;
}
