unsigned __int64 __fastcall sub_3D0260(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // rax
  size_t v20; // r15
  size_t v21; // r9
  unsigned __int64 v22; // r10
  char *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // r9
  __int64 v27; // r10
  unsigned __int64 v28; // r11
  char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  size_t v33; // r13
  __int64 v34; // r15
  unsigned __int64 v35; // r9
  char *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-98h]
  char *v39; // [rsp+8h] [rbp-90h]
  unsigned __int64 *v40; // [rsp+10h] [rbp-88h]
  unsigned __int64 v41; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v45; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v47[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-40h] BYREF

  v48 = __readfsqword(0x28u);
  v4 = a2;
  if ( a3 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    while ( 1 )
    {
      sub_3CFF40((_QWORD *)a1, a2, -1047040);
      v5 = 0x100000000LL;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) == 8 )
        v5 = -1;
      if ( (unsigned __int64)(a2 + 1) >= v5
        || (sub_3BE900((_QWORD *)a1, (unsigned __int64)(a2 + 1), 4) & 0x600) != 0x200 )
      {
        break;
      }
      ++a2;
    }
    goto LABEL_5;
  }
  sub_3BDAC0(a1, (unsigned __int64)a2, 0);
  if ( *(_QWORD *)(a1 + 1024) == -1 )
    goto LABEL_5;
  v7 = (__int64)a2;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1000) + 40LL);
  v39 = &v4[v8];
  sub_3BAF10(v7, v8, 0);
  v10 = *(_QWORD *)(a1 + 1000);
  ptr = nullptr;
  v45 = 0;
  *(_QWORD *)(v10 + 40) = 0;
  v11 = *(_QWORD *)(a1 + 1032);
  if ( v11 <= 0xFFFFFFFFFFFFFFFDLL )
  {
    v12 = 0;
  }
  else
  {
    v9 = a1 + 952;
    v12 = a1 + 904;
    if ( v11 == -1 )
      v12 = a1 + 952;
  }
  v13 = *(_QWORD *)(a1 + 1000);
  v38 = v12 + 8;
  v40 = &v48;
  while ( 1 )
  {
    v14 = v13;
    v15 = std::_Rb_tree_increment(v13, v8, v11, v9);
    v13 = v15;
    if ( v38 == v15 )
      break;
    v17 = *(_QWORD *)(v15 + 32);
    if ( v17 >= (unsigned __int64)v39 )
      break;
    if ( *(_QWORD *)(v15 + 40) || (v18 = *(_DWORD *)(v15 + 48), (v18 & 0x600) != 0x200) )
    {
      if ( !under_debugger )
        interr(70);
      BUG();
    }
    if ( (unsigned __int8)must_journal(v14, v8, v16) )
    {
      v19 = pack_dq(src, v40, v17) - (_QWORD)src;
      v20 = v19;
      if ( v19 )
      {
        v21 = v45;
        v22 = v45 + v19;
        if ( !__CFADD__((_QWORD)v45, v19) )
          goto LABEL_21;
        if ( (unsigned __int64)v45 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
          v23 = (char *)ptr;
          v24 = v45;
          if ( *((_QWORD *)&v45 + 1) < v22 )
          {
            n = v45;
            v41 = v22;
            ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
            v23 = (char *)ptr;
            v21 = n;
            v24 = v45;
            v22 = v41;
          }
          n = v21;
          v41 = v22;
          memset(&v23[v24], 0, v22 - v24);
          v21 = n;
          *(_QWORD *)&v45 = v41;
        }
        else if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v21, src, v20);
      }
      v25 = pack_dd(src, v47, v18) - (_QWORD)src;
      v26 = v25;
      if ( v25 )
      {
        v27 = v45;
        v28 = v45 + v25;
        if ( !__CFADD__((_QWORD)v45, v25) )
          goto LABEL_27;
        if ( (unsigned __int64)v45 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v28 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
          v29 = (char *)ptr;
          v30 = v45;
          if ( *((_QWORD *)&v45 + 1) < v28 )
          {
            v43 = v45;
            n = v26;
            v41 = v28;
            ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
            v29 = (char *)ptr;
            v27 = v43;
            v30 = v45;
            v26 = n;
            v28 = v41;
          }
          v43 = v27;
          n = v26;
          v41 = v28;
          memset(&v29[v30], 0, v28 - v30);
          v26 = n;
          v27 = v43;
          *(_QWORD *)&v45 = v41;
        }
        else if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v27, src, v26);
      }
      v31 = v18;
      v8 = (__int64)v47;
      BYTE1(v31) = BYTE1(v18) & 0xFD;
      v32 = pack_dd(src, v47, v31) - (_QWORD)src;
      v33 = v32;
      if ( !v32 )
        goto LABEL_13;
      v34 = v45;
      v35 = v45 + v32;
      if ( __CFADD__((_QWORD)v45, v32) )
      {
        if ( (unsigned __int64)v45 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v35 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_33;
        }
        if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
LABEL_33:
        v36 = (char *)ptr;
        v37 = v45;
        if ( *((_QWORD *)&v45 + 1) < v35 )
        {
          v41 = v35;
          ptr = (void *)qvector_reserve(&ptr, ptr, v35, 1);
          v36 = (char *)ptr;
          v35 = v41;
          v37 = v45;
        }
        v41 = v35;
        memset(&v36[v37], 0, v35 - v37);
        *(_QWORD *)&v45 = v41;
      }
      v8 = (__int64)src;
      memcpy((char *)ptr + v34, src, v33);
    }
LABEL_13:
    *(_DWORD *)(v13 + 48) &= ~0x200u;
  }
  if ( (_QWORD)v45 )
    add_undo_record(6, ptr, v45);
  if ( (unsigned __int8)sub_3CFF40((_QWORD *)a1, v4, -1047040) && qword_2CCB548 )
    qword_2CCB548(v4, 1);
  if ( ptr )
  {
    *(_QWORD *)&v45 = 0;
    qfree(ptr);
  }
LABEL_5:
  *(__m128i *)(a1 + 1224) = _mm_load_si128((const __m128i *)&xmmword_23A7890);
  return v48 - __readfsqword(0x28u);
}
