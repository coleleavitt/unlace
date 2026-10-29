__int64 __fastcall sub_4D5A80(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v11; // r13
  __int64 v12; // r13
  char *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbx
  char *v16; // rax
  void *v17; // rdi
  __int64 v18; // r13
  __int64 v19; // rax
  char *v20; // rcx
  _QWORD *v21; // r12
  __int64 v22; // r14
  __int64 i; // rbx
  char *v24; // rdx
  void *v25; // rdi
  char *v27; // r14
  __int64 v28; // r15
  char *v29; // r14
  __int64 v30; // rbx
  void *v31; // rax
  char *v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // [rsp+4h] [rbp-94h]
  size_t n; // [rsp+8h] [rbp-90h]
  void *v36; // [rsp+10h] [rbp-88h] BYREF
  __int128 v37; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v39; // [rsp+38h] [rbp-60h]
  _BYTE src[10]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v41[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = a2;
  v34 = a3;
  v41[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_18;
  v7 = a2[4];
  v37 = 0;
  v36 = nullptr;
  v8 = pack_dq(src, v41, v7) - (_QWORD)src;
  v9 = v8;
  if ( !v8 )
    goto LABEL_8;
  v10 = v37;
  v11 = v37 + v8;
  if ( !__CFADD__((_QWORD)v37, v8) )
    goto LABEL_33;
  if ( (unsigned __int64)v37 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_33:
    v32 = (char *)v36;
    v33 = v37;
    if ( *((_QWORD *)&v37 + 1) < v11 )
    {
      v36 = (void *)qvector_reserve(&v36, v36, v11, 1);
      v32 = (char *)v36;
      v33 = v37;
    }
    memset(&v32[v33], 0, v11 - v33);
    *(_QWORD *)&v37 = v11;
    goto LABEL_7;
  }
  if ( (_QWORD)v37 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v37 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
  memcpy((char *)v36 + v10, src, v9);
LABEL_8:
  v12 = v3[6];
  ptr = nullptr;
  v39 = 0;
  if ( !v12 )
    goto LABEL_9;
  ptr = (void *)qalloc_or_throw(24 * v12);
  v27 = (char *)ptr;
  v28 = 0;
  *((_QWORD *)&v39 + 1) = v12;
  while ( 1 )
  {
    v29 = &v27[24 * v28];
    v30 = 24 * v28 + v3[5];
    *(_QWORD *)v29 = 0;
    *(_OWORD *)(v29 + 8) = 0;
    if ( *(_QWORD *)(v30 + 8) )
      break;
    if ( v12 == ++v28 )
      goto LABEL_31;
LABEL_28:
    v27 = (char *)ptr;
  }
  n = *(_QWORD *)(v30 + 8);
  v31 = (void *)qalloc_or_throw(n);
  *(_QWORD *)v29 = v31;
  ++v28;
  *((_QWORD *)v29 + 2) = n;
  memcpy(v31, *(const void **)v30, n);
  *((_QWORD *)v29 + 1) = n;
  if ( v12 != v28 )
    goto LABEL_28;
LABEL_31:
  *(_QWORD *)&v39 = v12;
LABEL_9:
  sub_4D5820((__int64 *)&v36, (__int64 *)&ptr);
  v13 = (char *)ptr;
  if ( ptr )
  {
    v14 = v39;
    if ( (_QWORD)v39 )
    {
      v15 = 0;
      do
      {
        v16 = &v13[24 * v15];
        v17 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17);
          v13 = (char *)ptr;
        }
        ++v15;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v39 = 0;
    qfree(v13);
  }
  a2 = v36;
  add_undo_record(v34, v36, v37);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36);
  }
LABEL_18:
  v18 = std::_Rb_tree_increment(v3, a2, v5, v6);
  v19 = std::_Rb_tree_rebalance_for_erase(v3, a1 + 8);
  v20 = *(char **)(v19 + 40);
  v21 = (_QWORD *)v19;
  if ( v20 )
  {
    v22 = *(_QWORD *)(v19 + 48);
    if ( v22 )
    {
      for ( i = 0; i != v22; ++i )
      {
        v24 = &v20[24 * i];
        v25 = *(void **)v24;
        if ( *(_QWORD *)v24 )
        {
          *((_QWORD *)v24 + 1) = 0;
          qfree(v25);
          v20 = (char *)v21[5];
        }
      }
    }
    v21[6] = 0;
    qfree(v20);
  }
  operator delete(v21, 0x40u);
  --*(_QWORD *)(a1 + 40);
  return v18;
}
