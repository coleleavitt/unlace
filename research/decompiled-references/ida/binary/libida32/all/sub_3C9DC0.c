__int64 __fastcall sub_3C9DC0(_QWORD *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  unsigned int *v4; // r12
  unsigned int *v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rcx
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // r9
  __int64 v14; // r10
  size_t v15; // r11
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // rsi
  __int64 v20; // rax
  size_t v21; // r10
  __int64 v22; // r9
  size_t v23; // r11
  __int64 v24; // rax
  size_t v25; // r9
  size_t v26; // r10
  unsigned __int64 v27; // r11
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // rsi
  __int64 v31; // rax
  unsigned int v32; // [rsp+Ch] [rbp-8Ch]
  _QWORD *v33; // [rsp+10h] [rbp-88h]
  size_t v34; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  __int64 v36; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v38; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v40[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a2;
  v5 = a3;
  v6 = a1[2];
  v32 = a4;
  v40[0] = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_11;
  a2 = (unsigned int *)*a2;
  v7 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 16);
      a3 = *(unsigned int **)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) < (unsigned int)a2 )
        break;
      v7 = v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v8 )
        goto LABEL_6;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  while ( a3 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v7 )
  {
LABEL_11:
    v7 = (__int64)(a1 + 1);
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
      goto LABEL_9;
LABEL_12:
    v10 = 0;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v7 + 32) != (_DWORD)a2 )
  {
    if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    {
LABEL_9:
      ptr = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(*v4), _mm_cvtsi32_si128(*v5)).m128i_u64[0];
      sub_39EC70(a1, v7, (const __m128i *)&ptr);
      return 1;
    }
    goto LABEL_12;
  }
  if ( *(_DWORD *)(v7 + 36) != *v5 )
  {
    v10 = must_journal(a1, a2, a3);
    if ( !v10 )
      goto LABEL_37;
LABEL_13:
    v11 = *v4;
    v33 = v40;
    ptr = nullptr;
    v38 = 0;
    v12 = pack_dd(src, v40, v11) - (_QWORD)src;
    v13 = v12;
    if ( !v12 )
      goto LABEL_19;
    v14 = v38;
    v15 = v38 + v12;
    if ( __CFADD__((_QWORD)v38, v12) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_18;
      }
      v15 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v16 = (char *)ptr;
    v17 = v38;
    if ( *((_QWORD *)&v38 + 1) < v15 )
    {
      v36 = v38;
      n = v13;
      v34 = v15;
      ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
      v16 = (char *)ptr;
      v14 = v36;
      v17 = v38;
      v13 = n;
      v15 = v34;
    }
    v36 = v14;
    n = v13;
    v34 = v15;
    memset(&v16[v17], 0, v15 - v17);
    v13 = n;
    v14 = v36;
    *(_QWORD *)&v38 = v34;
LABEL_18:
    memcpy((char *)ptr + v14, src, v13);
LABEL_19:
    v18 = v38;
    v19 = ptr;
    if ( *((_QWORD *)&v38 + 1) < (unsigned __int64)(v38 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v38 + 1, 1);
      v19 = ptr;
      v18 = v38;
    }
    v19[v18] = v10;
    *(_QWORD *)&v38 = v38 + 1;
    if ( !v10 || (v20 = pack_dd(src, v33, *(unsigned int *)(v7 + 36)) - (_QWORD)src, (v21 = v20) == 0) )
    {
LABEL_28:
      v24 = pack_dd(src, v33, *v5) - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_34;
      v26 = v38;
      v27 = v38 + v24;
      if ( __CFADD__((_QWORD)v38, v24) )
      {
        if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_33;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v28 = (char *)ptr;
      v29 = v38;
      if ( *((_QWORD *)&v38 + 1) < v27 )
      {
        n = v38;
        v34 = v25;
        v33 = (_QWORD *)v27;
        ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
        v28 = (char *)ptr;
        v26 = n;
        v29 = v38;
        v25 = v34;
        v27 = (unsigned __int64)v33;
      }
      n = v26;
      v34 = v25;
      v33 = (_QWORD *)v27;
      memset(&v28[v29], 0, v27 - v29);
      v25 = v34;
      v26 = n;
      *(_QWORD *)&v38 = v33;
LABEL_33:
      memcpy((char *)ptr + v26, src, v25);
LABEL_34:
      add_undo_record(v32, ptr, v38);
      if ( ptr )
      {
        *(_QWORD *)&v38 = 0;
        qfree(ptr);
      }
      if ( !v10 )
        goto LABEL_9;
LABEL_37:
      *(_DWORD *)(v7 + 36) = *v5;
      return 1;
    }
    v22 = v38;
    v23 = v38 + v20;
    if ( __CFADD__((_QWORD)v38, v20) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
        memcpy((char *)ptr + v22, src, v21);
        goto LABEL_28;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = (char *)ptr;
    v31 = v38;
    if ( *((_QWORD *)&v38 + 1) < v23 )
    {
      v36 = v38;
      n = v21;
      v34 = v23;
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v30 = (char *)ptr;
      v22 = v36;
      v31 = v38;
      v21 = n;
      v23 = v34;
    }
    v36 = v22;
    n = v21;
    v34 = v23;
    memset(&v30[v31], 0, v23 - v31);
    v21 = n;
    v22 = v36;
    *(_QWORD *)&v38 = v34;
    goto LABEL_27;
  }
  return 0;
}

