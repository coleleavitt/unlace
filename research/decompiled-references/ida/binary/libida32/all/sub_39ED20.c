void *__fastcall sub_39ED20(_QWORD *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  size_t v16; // r10
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // r9
  __int64 v23; // r15
  unsigned __int64 v24; // r10
  char *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // [rsp+4h] [rbp-84h]
  unsigned __int64 v28; // [rsp+8h] [rbp-80h]
  size_t n; // [rsp+10h] [rbp-78h]
  __int64 v30; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v32; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+43h] [rbp-45h] BYREF
  _QWORD v34[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a1 + 1;
  v8 = a1[2];
  v27 = a4;
  v34[0] = __readfsqword(0x28u);
  if ( !v8 )
  {
    v10 = (__int64)v7;
    goto LABEL_8;
  }
  v9 = *a2;
  v10 = (__int64)v7;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v8 + 16);
      v12 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) < v9 )
        break;
      v10 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v11 )
        goto LABEL_6;
    }
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v12 );
LABEL_6:
  if ( v7 == (_QWORD *)v10 || *(_DWORD *)(v10 + 32) != v9 )
  {
LABEL_8:
    if ( !(unsigned __int8)must_journal() )
    {
LABEL_9:
      ptr = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), _mm_cvtsi32_si128(*a3)).m128i_u64[0];
      return sub_39EC70(a1, v10, (const __m128i *)&ptr);
    }
    v14 = *a2;
    v32 = 0;
    ptr = nullptr;
    v15 = pack_dd(src, v34, v14) - (_QWORD)src;
    v16 = v15;
    if ( !v15 )
    {
LABEL_17:
      v21 = pack_dd(src, v34, *a3) - (_QWORD)src;
      v22 = v21;
      if ( !v21 )
        goto LABEL_23;
      v23 = v32;
      v24 = v32 + v21;
      if ( __CFADD__((_QWORD)v32, v21) )
      {
        if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_22;
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v25 = (char *)ptr;
      v26 = v32;
      if ( *((_QWORD *)&v32 + 1) < v24 )
      {
        n = v22;
        v28 = v24;
        ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
        v25 = (char *)ptr;
        v22 = n;
        v26 = v32;
        v24 = v28;
      }
      n = v22;
      v28 = v24;
      memset(&v25[v26], 0, v24 - v26);
      v22 = n;
      *(_QWORD *)&v32 = v28;
LABEL_22:
      memcpy((char *)ptr + v23, src, v22);
LABEL_23:
      add_undo_record(v27, ptr, v32);
      if ( ptr )
      {
        *(_QWORD *)&v32 = 0;
        qfree(ptr);
      }
      goto LABEL_9;
    }
    v17 = v32;
    v18 = v32 + v15;
    if ( __CFADD__((_QWORD)v32, v15) )
    {
      if ( (unsigned __int64)v32 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v32 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v32 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = (char *)ptr;
    v20 = v32;
    if ( *((_QWORD *)&v32 + 1) < v18 )
    {
      v30 = v32;
      n = v16;
      v28 = v18;
      ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
      v19 = (char *)ptr;
      v17 = v30;
      v20 = v32;
      v16 = n;
      v18 = v28;
    }
    v30 = v17;
    n = v16;
    v28 = v18;
    memset(&v19[v20], 0, v18 - v20);
    v16 = n;
    v17 = v30;
    *(_QWORD *)&v32 = v28;
LABEL_16:
    memcpy((char *)ptr + v17, src, v16);
    goto LABEL_17;
  }
  return (void *)v10;
}

