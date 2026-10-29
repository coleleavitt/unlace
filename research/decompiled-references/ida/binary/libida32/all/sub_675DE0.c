__int64 __fastcall sub_675DE0(__int64 *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
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
  unsigned __int64 v21; // r10
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r8
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r10
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // r14
  __int64 v31; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v32; // [rsp+8h] [rbp-E0h]
  size_t v33; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-D0h]
  size_t n; // [rsp+20h] [rbp-C8h]
  __int64 v36; // [rsp+28h] [rbp-C0h]
  __int64 v37; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v38; // [rsp+38h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+3Ch] [rbp-ACh]
  void *v40; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v41; // [rsp+48h] [rbp-A0h]
  void *v42; // [rsp+60h] [rbp-88h] BYREF
  __int128 v43; // [rsp+68h] [rbp-80h]
  void *ptr; // [rsp+80h] [rbp-68h] BYREF
  __int128 v45; // [rsp+88h] [rbp-60h]
  _BYTE src[5]; // [rsp+A3h] [rbp-45h] BYREF
  _QWORD v47[8]; // [rsp+A8h] [rbp-40h] BYREF

  v47[0] = __readfsqword(0x28u);
  if ( a3 > 0xFF )
    return 0;
  v4 = *a1;
  v40 = nullptr;
  v8 = nullptr;
  v9 = *(_QWORD *)(v4 + 1624);
  v41 = 0;
  v10 = nullptr;
  v42 = nullptr;
  v43 = 0;
  if ( a4 && *(_BYTE *)a4 )
  {
    if ( !(unsigned __int8)serialize_tinfo(&v40, &v42, 0, a4, 272) )
      goto LABEL_11;
    v10 = v42;
    v8 = v40;
  }
  sub_396090(0xEu, a2, a3, v8, v10);
  v12 = sub_674FC0(a1, a2, (a3 + 9) << 12, (const char *)v40, (const char *)v42);
  if ( !(_BYTE)v12 )
  {
LABEL_11:
    v12 = 0;
    goto LABEL_12;
  }
  if ( (unsigned __int64)v41 <= 1 )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        v38 = a2;
        v39 = a3;
        goto LABEL_22;
      }
      clr_abits(a2, 0x2000);
    }
    else
    {
      clr_abits(a2, 4096);
    }
LABEL_21:
    v38 = a2;
    v39 = a3;
    if ( (unsigned __int64)v41 > 1 )
      goto LABEL_9;
LABEL_22:
    v15 = sub_675610(v9 + 56, &v38);
    v31 = v9 + 64;
    if ( v15 == v9 + 64 )
      goto LABEL_10;
    if ( !(unsigned __int8)must_journal(v9 + 56, &v38, v14) )
    {
LABEL_38:
      v30 = (char *)std::_Rb_tree_rebalance_for_erase();
      clear_tinfo_t(v30 + 40);
      operator delete(v30, 0x30u);
      --*(_QWORD *)(v9 + 96);
      goto LABEL_10;
    }
    v16 = *(_DWORD *)(v15 + 36);
    v17 = *(unsigned int *)(v15 + 32);
    v45 = 0;
    LODWORD(v32) = v16;
    v33 = (size_t)v47;
    ptr = nullptr;
    v18 = pack_dd(src, v47, v17) - (_QWORD)src;
    v19 = v18;
    if ( !v18 )
    {
LABEL_30:
      v24 = pack_dd(src, v33, (unsigned int)v32) - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_36;
      v26 = v45;
      v27 = v45 + v24;
      if ( __CFADD__((_QWORD)v45, v24) )
      {
        if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_35;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v28 = (char *)ptr;
      v29 = v45;
      if ( *((_QWORD *)&v45 + 1) < v27 )
      {
        v34 = v45;
        v33 = v25;
        v32 = v27;
        ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
        v28 = (char *)ptr;
        v26 = v34;
        v29 = v45;
        v25 = v33;
        v27 = v32;
      }
      v34 = v26;
      v33 = v25;
      v32 = v27;
      memset(&v28[v29], 0, v27 - v29);
      v25 = v33;
      v26 = v34;
      *(_QWORD *)&v45 = v32;
LABEL_35:
      memcpy((char *)ptr + v26, src, v25);
LABEL_36:
      v37 = 0;
      copy_tinfo_t(&v37);
      sub_6741B0((__int64 *)&ptr, (__int64)&v37);
      clear_tinfo_t(&v37);
      add_undo_record(157, ptr, v45);
      if ( ptr )
      {
        *(_QWORD *)&v45 = 0;
        qfree(ptr);
      }
      goto LABEL_38;
    }
    v20 = v45;
    v21 = v45 + v18;
    if ( __CFADD__((_QWORD)v45, v18) )
    {
      if ( (unsigned __int64)v45 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v45 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v45 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_29;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v45;
    if ( *((_QWORD *)&v45 + 1) < v21 )
    {
      v36 = v45;
      n = v19;
      v34 = v21;
      ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
      v22 = (char *)ptr;
      v20 = v36;
      v23 = v45;
      v19 = n;
      v21 = v34;
    }
    v36 = v20;
    n = v19;
    v34 = v21;
    memset(&v22[v23], 0, v21 - v23);
    v19 = n;
    v20 = v36;
    *(_QWORD *)&v45 = v34;
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
  v38 = a2;
  v39 = a3;
LABEL_9:
  sub_675860((_QWORD *)(v9 + 56), &v38, a4, 0x9Cu, v11);
LABEL_10:
  sub_396090(0xFu, a2, a3, v40, v42);
LABEL_12:
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  return v12;
}

