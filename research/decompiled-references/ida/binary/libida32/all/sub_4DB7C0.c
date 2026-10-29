__int64 __fastcall sub_4DB7C0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v3; // bp
  __int64 v5; // rax
  __int64 v7; // r12
  unsigned int v8; // r12d
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  _BYTE *v17; // rax
  size_t v18; // r10
  __int64 v19; // r11
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  size_t v22; // r8
  size_t v23; // r10
  unsigned __int64 v24; // r11
  void *v25; // rax
  char *v26; // rsi
  __int64 v27; // rax
  char *v28; // rsi
  __int64 v29; // rax
  void *src; // [rsp+8h] [rbp-90h]
  _QWORD *v31; // [rsp+10h] [rbp-88h]
  size_t v32; // [rsp+18h] [rbp-80h]
  size_t v33; // [rsp+20h] [rbp-78h]
  __int64 v34; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v36; // [rsp+38h] [rbp-60h]
  _BYTE v37[5]; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v38[8]; // [rsp+58h] [rbp-40h] BYREF

  v3 = a2;
  v5 = *a1;
  v38[0] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(v5 + 1560);
  if ( (debug & 0x800) != 0 )
  {
    if ( (unsigned __int8)(a2 - 1) <= 0xFu )
      sub_383DA0();
    sub_383DA0();
  }
  if ( (_BYTE)a2 != 14 )
    goto LABEL_5;
  v12 = *(_QWORD *)(v7 + 24);
  if ( !v12 )
    return 0;
  v13 = v7 + 16;
  do
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v12 + 16);
      v15 = *(_QWORD *)(v12 + 24);
      if ( *(_DWORD *)(v12 + 32) < a3 )
        break;
      v13 = v12;
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v14 )
        goto LABEL_12;
    }
    v12 = *(_QWORD *)(v12 + 24);
  }
  while ( v15 );
LABEL_12:
  if ( v7 + 16 == v13 || a3 < *(_DWORD *)(v13 + 32) )
    return 0;
  if ( (unsigned __int8)must_journal(a1, a2, v15) )
  {
    v16 = *(unsigned int *)(v13 + 32);
    v31 = v38;
    ptr = nullptr;
    src = v37;
    v36 = 0;
    v17 = (_BYTE *)pack_dd(v37, v38, v16);
    v18 = v17 - v37;
    if ( v17 == v37 )
      goto LABEL_22;
    v19 = v36;
    v20 = v36 + v18;
    if ( __CFADD__((_QWORD)v36, v18) )
    {
      if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_21:
        memcpy((char *)ptr + v19, src, v18);
LABEL_22:
        v21 = pack_dd(src, v31, *(unsigned int *)(v13 + 36)) - (_QWORD)src;
        v22 = v21;
        if ( !v21 )
          goto LABEL_28;
        v23 = v36;
        v24 = v36 + v21;
        if ( __CFADD__((_QWORD)v36, v21) )
        {
          if ( (unsigned __int64)v36 > 0x7FFFFFFFFFFFFFFELL )
          {
            if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
              *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_27:
            memcpy((char *)ptr + v23, src, v22);
LABEL_28:
            add_undo_record(182, ptr, v36);
            if ( ptr )
            {
              *(_QWORD *)&v36 = 0;
              qfree(ptr);
            }
            goto LABEL_30;
          }
          v24 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v28 = (char *)ptr;
        v29 = v36;
        if ( *((_QWORD *)&v36 + 1) < v24 )
        {
          v33 = v36;
          v32 = v22;
          v31 = (_QWORD *)v24;
          ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
          v28 = (char *)ptr;
          v23 = v33;
          v29 = v36;
          v22 = v32;
          v24 = (unsigned __int64)v31;
        }
        v33 = v23;
        v32 = v22;
        v31 = (_QWORD *)v24;
        memset(&v28[v29], 0, v24 - v29);
        v22 = v32;
        v23 = v33;
        *(_QWORD *)&v36 = v31;
        goto LABEL_27;
      }
      v20 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = (char *)ptr;
    v27 = v36;
    if ( *((_QWORD *)&v36 + 1) < v20 )
    {
      v34 = v36;
      v33 = v18;
      v32 = v20;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
      v26 = (char *)ptr;
      v19 = v34;
      v27 = v36;
      v18 = v33;
      v20 = v32;
    }
    v34 = v19;
    v33 = v18;
    v32 = v20;
    memset(&v26[v27], 0, v20 - v27);
    v18 = v33;
    v19 = v34;
    *(_QWORD *)&v36 = v32;
    goto LABEL_21;
  }
LABEL_30:
  v25 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v25, 0x28u);
  --*(_QWORD *)(v7 + 48);
LABEL_5:
  v8 = sub_3B90A0(a1, a3);
  v9 = (__int64)a1 + 4 * v3 + 2488;
  v10 = sub_79B4D0((char *)a1 + 4 * v3 + 2488, *a1, v8, 65);
  sub_79B4D0(v9, *a1, v8, 83);
  return v10;
}

