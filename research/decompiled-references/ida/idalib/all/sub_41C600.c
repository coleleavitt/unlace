void __fastcall sub_41C600(_QWORD *a1, __int64 *a2, unsigned __int16 *a3, unsigned int a4)
{
  unsigned __int16 *v4; // r15
  __int64 *v5; // r12
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  int v11; // esi
  int v12; // ecx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // r15
  __m128i *v17; // rax
  __int64 v18; // rcx
  __m128i si128; // xmm0
  __m128i *v20; // r12
  _QWORD *v21; // rax
  _QWORD *v22; // rdx
  _BOOL8 v23; // rdi
  char v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  _BYTE *v27; // rsi
  __int64 v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  size_t v31; // r9
  size_t v32; // r10
  size_t v33; // r11
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // rax
  size_t v39; // r9
  size_t v40; // r10
  size_t v41; // r11
  char *v42; // rsi
  __int64 v43; // rax
  __int64 v45; // [rsp+8h] [rbp-130h]
  void *src[2]; // [rsp+10h] [rbp-128h] BYREF
  void **p_ptr; // [rsp+20h] [rbp-118h]
  size_t n; // [rsp+28h] [rbp-110h]
  size_t v49; // [rsp+30h] [rbp-108h]
  size_t v50; // [rsp+38h] [rbp-100h]
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v52; // [rsp+48h] [rbp-F0h]
  _OWORD v53[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+80h] [rbp-B8h]
  _OWORD v55[2]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-88h]
  _BYTE v57[56]; // [rsp+C0h] [rbp-78h] BYREF
  unsigned __int64 v58; // [rsp+F8h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v7 = (_QWORD *)a1[2];
  v58 = __readfsqword(0x28u);
  v8 = a1 + 1;
  if ( v7 )
  {
    a2 = (__int64 *)*a2;
    v9 = a1 + 1;
    do
    {
      while ( 1 )
      {
        a3 = (unsigned __int16 *)v7[2];
        v10 = v7[3];
        if ( v7[4] >= (unsigned __int64)a2 )
          break;
        v7 = (_QWORD *)v7[3];
        if ( !v10 )
          goto LABEL_6;
      }
      v9 = v7;
      v7 = (_QWORD *)v7[2];
    }
    while ( a3 );
LABEL_6:
    if ( v8 != v9 )
    {
      if ( a2 == (__int64 *)v9[4] )
      {
        if ( ((*(_QWORD *)v4 ^ v9[5]) & 0xFFFFFFFF0000FFFFLL) == 0
          && v9[6] == *((_QWORD *)v4 + 1)
          && v9[7] == *((_QWORD *)v4 + 2)
          && v9[8] == *((_QWORD *)v4 + 3)
          && v9[9] == *((_QWORD *)v4 + 4) )
        {
          return;
        }
        v24 = must_journal(a1, a2, 0xFFFFFFFF0000FFFFLL);
        if ( !v24 )
          goto LABEL_28;
LABEL_16:
        v25 = *v5;
        ptr = nullptr;
        p_ptr = &ptr;
        v52 = 0;
        sub_3A0A80((__int64 *)&ptr, v25);
        v26 = v52;
        v27 = ptr;
        if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)(v52 + 1) )
        {
          ptr = (void *)qvector_reserve(p_ptr, ptr, v52 + 1, 1);
          v27 = ptr;
          v26 = v52;
        }
        v27[v26] = v24;
        *(_QWORD *)&v52 = v52 + 1;
        if ( !v24 )
        {
          src[0] = v57;
          goto LABEL_20;
        }
        v36 = v9[9];
        v55[0] = _mm_loadu_si128((const __m128i *)(v9 + 5));
        v37 = _mm_loadu_si128((const __m128i *)(v9 + 7));
        v56 = v36;
        src[0] = v57;
        v55[1] = v37;
        v38 = sub_41C230((__int64)v57, 48, (unsigned __int16 *)v55);
        v39 = v38;
        if ( !v38 )
        {
LABEL_20:
          v28 = *((_QWORD *)v4 + 4);
          v53[0] = _mm_loadu_si128((const __m128i *)v4);
          v29 = _mm_loadu_si128((const __m128i *)v4 + 1);
          v54 = v28;
          v53[1] = v29;
          v30 = sub_41C230((__int64)src[0], 48, (unsigned __int16 *)v53);
          v31 = v30;
          if ( !v30 )
            goto LABEL_42;
          v32 = v52;
          v33 = v52 + v30;
          if ( __CFADD__((_QWORD)v52, v30) )
          {
            if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_41;
            }
            v33 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v34 = (char *)ptr;
          v35 = v52;
          if ( *((_QWORD *)&v52 + 1) < v33 )
          {
            v50 = v52;
            v49 = v31;
            n = v33;
            ptr = (void *)qvector_reserve(p_ptr, ptr, v33, 1);
            v34 = (char *)ptr;
            v32 = v50;
            v35 = v52;
            v31 = v49;
            v33 = n;
          }
          v49 = v32;
          n = v31;
          p_ptr = (void **)v33;
          memset(&v34[v35], 0, v33 - v35);
          v31 = n;
          v32 = v49;
          *(_QWORD *)&v52 = p_ptr;
LABEL_41:
          memcpy((char *)ptr + v32, src[0], v31);
LABEL_42:
          add_undo_record(a4, ptr, v52);
          if ( ptr )
          {
            *(_QWORD *)&v52 = 0;
            qfree(ptr);
          }
          if ( !v24 )
            goto LABEL_9;
LABEL_28:
          *(__m128i *)(v9 + 5) = _mm_loadu_si128((const __m128i *)v4);
          *(__m128i *)(v9 + 7) = _mm_loadu_si128((const __m128i *)v4 + 1);
          v9[9] = *((_QWORD *)v4 + 4);
          return;
        }
        v40 = v52;
        v41 = v52 + v38;
        if ( __CFADD__((_QWORD)v52, v38) )
        {
          if ( (unsigned __int64)v52 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v52 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_35:
            memcpy((char *)ptr + v40, src[0], v39);
            goto LABEL_20;
          }
          v41 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v42 = (char *)ptr;
        v43 = v52;
        if ( *((_QWORD *)&v52 + 1) < v41 )
        {
          v50 = v52;
          v49 = v39;
          n = v41;
          ptr = (void *)qvector_reserve(p_ptr, ptr, v41, 1);
          v42 = (char *)ptr;
          v40 = v50;
          v43 = v52;
          v39 = v49;
          v41 = n;
        }
        v50 = v40;
        v49 = v39;
        n = v41;
        memset(&v42[v43], 0, v41 - v43);
        v39 = v49;
        v40 = v50;
        *(_QWORD *)&v52 = n;
        goto LABEL_35;
      }
      if ( !(unsigned __int8)must_journal(a1, a2, a3) )
        goto LABEL_9;
LABEL_15:
      v24 = 0;
      goto LABEL_16;
    }
  }
  v9 = a1 + 1;
  if ( (unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_15;
LABEL_9:
  v11 = *v4;
  v12 = *((_DWORD *)v4 + 1);
  v13 = _mm_loadu_si128((const __m128i *)(v4 + 4));
  v14 = *((_QWORD *)v4 + 3);
  v15 = *v5;
  v16 = *((_QWORD *)v4 + 4);
  LODWORD(n) = v11;
  LODWORD(p_ptr) = v12;
  v45 = v14;
  *(__m128i *)src = v13;
  v17 = (__m128i *)operator new(0x50u);
  v18 = (unsigned int)p_ptr;
  si128 = _mm_load_si128((const __m128i *)src);
  v17[2].m128i_i64[0] = v15;
  v20 = v17;
  v17[2].m128i_i16[4] = v11;
  v17[4].m128i_i64[0] = v45;
  v17[2].m128i_i32[3] = v18;
  v17[4].m128i_i64[1] = v16;
  v17[3] = si128;
  v21 = sub_41A180(a1, v9, v15, v18);
  if ( v22 )
  {
    v23 = v21 || v8 == v22 || v15 < v22[4];
    std::_Rb_tree_insert_and_rebalance(v23, v20, v22, v8);
    ++a1[5];
  }
  else if ( v20 )
  {
    operator delete(v20, 0x50u);
  }
}
