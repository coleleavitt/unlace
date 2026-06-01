unsigned __int64 __fastcall sub_39F820(_QWORD *a1, unsigned int *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rax
  size_t v15; // r10
  size_t v16; // r9
  size_t v17; // r11
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE *v21; // rsi
  __int64 v22; // rax
  size_t v23; // r10
  size_t v24; // r9
  size_t v25; // r11
  __int64 v26; // rax
  size_t v27; // r9
  size_t v28; // r10
  unsigned __int64 v29; // r11
  char *v30; // rsi
  __int64 v31; // rax
  char *v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // [rsp+Ch] [rbp-8Ch]
  _QWORD *v35; // [rsp+10h] [rbp-88h]
  size_t v36; // [rsp+18h] [rbp-80h]
  size_t v37; // [rsp+20h] [rbp-78h]
  size_t n; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v40; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v42[8]; // [rsp+58h] [rbp-40h] BYREF

  v6 = a1[2];
  v34 = a4;
  v42[0] = __readfsqword(0x28u);
  if ( !v6 )
    goto LABEL_11;
  v7 = *a2;
  v8 = (__int64)(a1 + 1);
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6 + 16);
      v10 = *(_QWORD *)(v6 + 24);
      if ( *(_DWORD *)(v6 + 32) >= (unsigned int)v7 )
        break;
      v6 = *(_QWORD *)(v6 + 24);
      if ( !v10 )
        goto LABEL_6;
    }
    v8 = v6;
    v6 = *(_QWORD *)(v6 + 16);
  }
  while ( v9 );
LABEL_6:
  if ( a1 + 1 == (_QWORD *)v8 )
  {
LABEL_11:
    v8 = (__int64)(a1 + 1);
    if ( !(unsigned __int8)((__int64 (*)(void))must_journal)() )
      goto LABEL_9;
    goto LABEL_12;
  }
  if ( (_DWORD)v7 == *(_DWORD *)(v8 + 32) )
  {
    if ( *(_DWORD *)(v8 + 36) == *a3 )
      return v42[0] - __readfsqword(0x28u);
    v12 = must_journal(a1, v7, v9);
    if ( !v12 )
      goto LABEL_37;
LABEL_13:
    v13 = *a2;
    v35 = v42;
    ptr = nullptr;
    v40 = 0;
    v14 = pack_dd(src, v42, v13) - (_QWORD)src;
    v15 = v14;
    if ( !v14 )
      goto LABEL_19;
    v16 = v40;
    v17 = v14 + v40;
    if ( __CFADD__(v14, (_QWORD)v40) )
    {
      if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_18;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v18 = (char *)ptr;
    v19 = v40;
    if ( *((_QWORD *)&v40 + 1) < v17 )
    {
      n = v15;
      v37 = v40;
      v36 = v17;
      ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
      v18 = (char *)ptr;
      v15 = n;
      v19 = v40;
      v16 = v37;
      v17 = v36;
    }
    n = v15;
    v37 = v16;
    v36 = v17;
    memset(&v18[v19], 0, v17 - v19);
    v16 = v37;
    v15 = n;
    *(_QWORD *)&v40 = v36;
LABEL_18:
    memcpy((char *)ptr + v16, src, v15);
LABEL_19:
    v20 = v40;
    v21 = ptr;
    if ( *((_QWORD *)&v40 + 1) < (unsigned __int64)(v40 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v40 + 1, 1);
      v21 = ptr;
      v20 = v40;
    }
    v21[v20] = v12;
    *(_QWORD *)&v40 = v40 + 1;
    if ( !v12 || (v22 = pack_dd(src, v35, *(unsigned int *)(v8 + 36)) - (_QWORD)src, (v23 = v22) == 0) )
    {
LABEL_28:
      v26 = pack_dd(src, v35, *a3) - (_QWORD)src;
      v27 = v26;
      if ( !v26 )
        goto LABEL_34;
      v28 = v40;
      v29 = v40 + v26;
      if ( __CFADD__((_QWORD)v40, v26) )
      {
        if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_33;
        }
        v29 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v30 = (char *)ptr;
      v31 = v40;
      if ( *((_QWORD *)&v40 + 1) < v29 )
      {
        v37 = v40;
        v36 = v27;
        v35 = (_QWORD *)v29;
        ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
        v30 = (char *)ptr;
        v28 = v37;
        v31 = v40;
        v27 = v36;
        v29 = (unsigned __int64)v35;
      }
      v37 = v28;
      v36 = v27;
      v35 = (_QWORD *)v29;
      memset(&v30[v31], 0, v29 - v31);
      v27 = v36;
      v28 = v37;
      *(_QWORD *)&v40 = v35;
LABEL_33:
      memcpy((char *)ptr + v28, src, v27);
LABEL_34:
      add_undo_record(v34, ptr, v40);
      if ( ptr )
      {
        *(_QWORD *)&v40 = 0;
        qfree(ptr);
      }
      if ( !v12 )
        goto LABEL_9;
LABEL_37:
      *(_DWORD *)(v8 + 36) = *a3;
      return v42[0] - __readfsqword(0x28u);
    }
    v24 = v40;
    v25 = v40 + v22;
    if ( __CFADD__((_QWORD)v40, v22) )
    {
      if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
        memcpy((char *)ptr + v24, src, v23);
        goto LABEL_28;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = (char *)ptr;
    v33 = v40;
    if ( *((_QWORD *)&v40 + 1) < v25 )
    {
      n = v40;
      v37 = v23;
      v36 = v25;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v32 = (char *)ptr;
      v24 = n;
      v33 = v40;
      v23 = v37;
      v25 = v36;
    }
    n = v24;
    v37 = v23;
    v36 = v25;
    memset(&v32[v33], 0, v25 - v33);
    v23 = v37;
    v24 = n;
    *(_QWORD *)&v40 = v36;
    goto LABEL_27;
  }
  if ( (unsigned __int8)must_journal(a1, v7, v9) )
  {
LABEL_12:
    v12 = 0;
    goto LABEL_13;
  }
LABEL_9:
  ptr = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(*a2), _mm_cvtsi32_si128(*a3)).m128i_u64[0];
  sub_39EC70(a1, v8, (const __m128i *)&ptr);
  return v42[0] - __readfsqword(0x28u);
}

