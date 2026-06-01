_BOOL8 __fastcall sub_3856A0(__int64 **a1, __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 not_tail; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rdx
  int flags; // r14d
  __int64 func; // rax
  int v13; // r12d
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  void *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rbp
  void *v21; // rbx
  void **v22; // rax
  void **v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // rbx
  size_t v26; // r13
  __int64 *v27; // r12
  size_t v28; // r14
  __int64 v29; // rbp
  __int64 v30; // rsi
  void *v31; // rdi
  __int64 v32; // rax
  __int64 *v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+10h] [rbp-A8h]
  __int64 v41; // [rsp+18h] [rbp-A0h]
  __int64 v42; // [rsp+28h] [rbp-90h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  __int128 v44; // [rsp+38h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-68h] BYREF
  int v46; // [rsp+58h] [rbp-60h]
  int v47; // [rsp+5Ch] [rbp-5Ch]
  int v48; // [rsp+60h] [rbp-58h]
  unsigned __int64 v49; // [rsp+78h] [rbp-40h]

  not_tail = a3;
  v49 = __readfsqword(0x28u);
  if ( (get_flags_ex(a3, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(a3);
  v8 = a1[2];
  v9 = &v8[(_QWORD)a1[3]];
  if ( v8 != v9 )
  {
    while ( *v8 != not_tail )
    {
      if ( v9 == ++v8 )
        goto LABEL_9;
    }
    if ( v8 != v9 )
      return 1;
  }
LABEL_9:
  flags = get_flags_ex(not_tail, 4);
  v39 = flags & 0x600;
  if ( v39 == 1024 && (flags & 0xF0000000) == 0x50000000 && (unsigned __int8)sub_3853D0(a1, not_tail, a3) )
    return 1;
  if ( *((_BYTE *)a1 + 44) )
    return 0;
  func = get_func(a2);
  src = nullptr;
  v44 = 0;
  v13 = (((int)get_func_chunknum(func, a3) >= 0) << 6) | a4;
  v14 = not_tail;
  v46 = getinf(36);
  v45 = 24;
  v48 = 0;
  v47 = 0;
  if ( get_ea_name(&src, not_tail, v13 | 5u, &v45) <= 0 )
  {
    v18 = src;
    if ( !src )
      goto LABEL_19;
  }
  else
  {
    v17 = (unsigned __int64)a1[3];
    if ( v17 < *((int *)a1 + 10) )
    {
      if ( v17 )
      {
        v33 = *a1;
        v34 = 2;
        v35 = (*a1)[1];
        if ( v35 )
          v34 = v35-- + 1;
        v36 = *v33;
        if ( v33[2] < v34 )
        {
          v41 = v35;
          v40 = v34;
          v37 = qvector_reserve(v33, v36, v34, 1);
          v35 = v41;
          v36 = v37;
          v34 = v40;
          *v33 = v37;
        }
        v33[1] = v34;
        *(_BYTE *)(v36 + v35) = 10;
        *(_BYTE *)(*v33 + v35 + 1) = 0;
        v17 = (unsigned __int64)a1[3];
      }
      v14 = (__int64)a1[2];
      if ( (unsigned __int64)a1[4] < v17 + 1 )
      {
        v32 = qvector_reserve(a1 + 2, v14, v17 + 1, 8);
        a1[2] = (__int64 *)v32;
        v17 = (unsigned __int64)a1[3];
        v14 = v32;
      }
      *(_QWORD *)(v14 + 8 * v17) = not_tail;
      a1[3] = (__int64 *)((char *)a1[3] + 1);
      if ( !*((_BYTE *)a1 + 44) )
      {
        tag_addr(*a1, a3, 0);
        v25 = v44;
        if ( (_QWORD)v44 )
        {
          v26 = v44 - 1;
          if ( (_QWORD)v44 != 1 )
          {
            v27 = *a1;
            v28 = v44 - 1;
            v29 = (*a1)[1];
            if ( v29 )
            {
              --v29;
              v28 = v26 + v29;
              v25 = v44 + v29;
            }
            v30 = *v27;
            if ( v27[2] < v25 )
            {
              v38 = qvector_reserve(*a1, v30, v25, 1);
              *v27 = v38;
              v30 = v38;
            }
            v27[1] = v25;
            *(_BYTE *)(v30 + v28) = 0;
            memcpy((void *)(v29 + *v27), src, v26);
          }
          v31 = src;
          if ( !src )
            return 1;
          *(_QWORD *)&v44 = 0;
        }
        else
        {
          v31 = src;
          if ( !src )
            return 1;
        }
        qfree(v31);
        return 1;
      }
    }
    else
    {
      *((_BYTE *)a1 + 44) = 1;
    }
    v18 = src;
    if ( !src )
      return 0;
  }
  *(_QWORD *)&v44 = 0;
  qfree(v18);
LABEL_19:
  if ( *((_BYTE *)a1 + 44) == 1 )
    return 0;
  if ( a3 != not_tail )
    return 0;
  if ( v39 != 1024 )
    return 0;
  if ( (flags & 0xF00000) != 0x500000 )
    return 0;
  if ( (flags & 0x4000) != 0 )
    return 0;
  if ( *((int *)a1[1] + 6) < get_item_end(a3, v14, v15, v16) - a3 )
    return 0;
  if ( !(unsigned __int8)get_data_value(&v42, a3, 0) )
    return 0;
  v19 = v42;
  if ( !(unsigned __int8)get_refinfo(&v45, a3, 0) )
    return 0;
  if ( !(unsigned __int8)calc_reference_data(&src, 0, a3, &v45, v19) )
    return 0;
  v20 = src;
  if ( src == (void *)-1LL )
    return 0;
  v21 = src;
  if ( (get_flags_ex(src, 4) & 0x600) == 0x200 )
    v21 = (void *)prev_not_tail(v20);
  v22 = (void **)a1[2];
  v23 = &v22[(_QWORD)a1[3]];
  if ( v22 != v23 )
  {
    while ( *v22 != v21 )
    {
      if ( v23 == ++v22 )
        goto LABEL_36;
    }
    if ( v23 != v22 )
      return 0;
  }
LABEL_36:
  v24 = get_flags_ex(v21, 4);
  if ( (v24 & 0x600) != 0x400 || (v24 & 0xF0000000) != 0x50000000 )
    return 0;
  return (unsigned __int8)sub_3853D0(a1, (__int64)v21, (unsigned __int64)v20) != 0;
}
