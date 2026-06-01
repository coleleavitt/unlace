__int64 __fastcall sub_695B10(__int64 *a1, void *a2, unsigned __int32 a3, _QWORD *a4)
{
  __int64 v4; // rax
  void *v8; // rcx
  __int64 v9; // r13
  void *v10; // r8
  __int64 v11; // r8
  unsigned int v12; // r12d
  __int64 v14; // rdx
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  size_t v19; // r8
  __int64 v20; // r9
  size_t v21; // r10
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r8
  size_t v26; // r9
  unsigned __int64 v27; // r10
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // r14
  void *src; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v32; // [rsp+10h] [rbp-E8h]
  size_t v33; // [rsp+18h] [rbp-E0h]
  size_t n; // [rsp+20h] [rbp-D8h]
  __int64 v35; // [rsp+28h] [rbp-D0h]
  __int64 v36; // [rsp+38h] [rbp-C0h] BYREF
  __m128i v37; // [rsp+40h] [rbp-B8h] BYREF
  void *v38; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v39; // [rsp+58h] [rbp-A0h]
  void *v40; // [rsp+70h] [rbp-88h] BYREF
  __int128 v41; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+90h] [rbp-68h] BYREF
  __int128 v43; // [rsp+98h] [rbp-60h]
  _BYTE v44[5]; // [rsp+AEh] [rbp-4Ah] BYREF
  _BYTE v45[5]; // [rsp+B3h] [rbp-45h] BYREF
  unsigned __int64 v46[8]; // [rsp+B8h] [rbp-40h] BYREF

  v46[0] = __readfsqword(0x28u);
  if ( a3 > 0xFF )
    return 0;
  v4 = *a1;
  v38 = nullptr;
  v8 = nullptr;
  v9 = *(_QWORD *)(v4 + 1816);
  v39 = 0;
  v10 = nullptr;
  v40 = nullptr;
  v41 = 0;
  if ( a4 && *(_BYTE *)a4 )
  {
    if ( !(unsigned __int8)serialize_tinfo(&v38, &v40, 0, a4, 272) )
      goto LABEL_11;
    v10 = v40;
    v8 = v38;
  }
  sub_39ADA0(0xEu, a2, a3, v8, v10);
  v12 = sub_694CA0(a1, (__int64)a2, (a3 + 9) << 12, (char *)v38, (const char *)v40);
  if ( !(_BYTE)v12 )
  {
LABEL_11:
    v12 = 0;
    goto LABEL_12;
  }
  if ( (unsigned __int64)v39 <= 1 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        v37.m128i_i64[0] = (__int64)a2;
        v37.m128i_i32[2] = a3;
        goto LABEL_22;
      }
      clr_abits(a2, 0x2000);
    }
    else
    {
      clr_abits(a2, 4096);
    }
LABEL_21:
    v37.m128i_i64[0] = (__int64)a2;
    v37.m128i_i32[2] = a3;
    if ( (unsigned __int64)v39 > 1 )
      goto LABEL_9;
LABEL_22:
    v15 = sub_695310(v9 + 56, (unsigned __int64 *)&v37);
    if ( v15 == v9 + 64 )
      goto LABEL_10;
    if ( !(unsigned __int8)must_journal(v9 + 56, &v37, v14) )
    {
LABEL_38:
      v30 = (char *)std::_Rb_tree_rebalance_for_erase(v15, v9 + 64);
      clear_tinfo_t(v30 + 48);
      operator delete(v30, 0x38u);
      --*(_QWORD *)(v9 + 96);
      goto LABEL_10;
    }
    v16 = *(_DWORD *)(v15 + 40);
    v17 = *(_QWORD *)(v15 + 32);
    ptr = nullptr;
    LODWORD(v32) = v16;
    src = v44;
    v43 = 0;
    v18 = pack_dq(v44, v46, v17) - (_QWORD)v44;
    v19 = v18;
    if ( !v18 )
    {
LABEL_30:
      v24 = pack_dd(src, v45, (unsigned int)v32) - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_36;
      v26 = v43;
      v27 = v43 + v24;
      if ( __CFADD__((_QWORD)v43, v24) )
      {
        if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_35;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v28 = (char *)ptr;
      v29 = v43;
      if ( *((_QWORD *)&v43 + 1) < v27 )
      {
        n = v43;
        v33 = v25;
        v32 = v27;
        ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
        v28 = (char *)ptr;
        v26 = n;
        v29 = v43;
        v25 = v33;
        v27 = v32;
      }
      n = v26;
      v33 = v25;
      v32 = v27;
      memset(&v28[v29], 0, v27 - v29);
      v25 = v33;
      v26 = n;
      *(_QWORD *)&v43 = v32;
LABEL_35:
      memcpy((char *)ptr + v26, src, v25);
LABEL_36:
      v36 = 0;
      src = &v36;
      copy_tinfo_t(&v36);
      sub_693E90((__int64 *)&ptr, (__int64)src);
      clear_tinfo_t(src);
      add_undo_record(157, ptr, v43);
      if ( ptr )
      {
        *(_QWORD *)&v43 = 0;
        qfree(ptr);
      }
      goto LABEL_38;
    }
    v20 = v43;
    v21 = v43 + v18;
    if ( __CFADD__((_QWORD)v43, v18) )
    {
      if ( (unsigned __int64)v43 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v43 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v43 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_29;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v43;
    if ( *((_QWORD *)&v43 + 1) < v21 )
    {
      v35 = v43;
      n = v19;
      v33 = v21;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v22 = (char *)ptr;
      v20 = v35;
      v23 = v43;
      v19 = n;
      v21 = v33;
    }
    v35 = v20;
    n = v19;
    v33 = v21;
    memset(&v22[v23], 0, v21 - v23);
    v19 = n;
    v20 = v35;
    *(_QWORD *)&v43 = v33;
LABEL_29:
    memcpy((char *)ptr + v20, src, v19);
    goto LABEL_30;
  }
  if ( !a3 )
  {
    set_abits(a2, 4096);
    goto LABEL_21;
  }
  if ( a3 == 1 )
  {
    set_abits(a2, 0x2000);
    goto LABEL_21;
  }
  v37.m128i_i64[0] = (__int64)a2;
  v37.m128i_i32[2] = a3;
LABEL_9:
  sub_695580((_QWORD *)(v9 + 56), &v37, a4, 0x9Cu, v11);
LABEL_10:
  sub_39ADA0(0xFu, a2, a3, v38, v40);
LABEL_12:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v38);
  }
  return v12;
}
