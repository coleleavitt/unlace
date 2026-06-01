__int64 __fastcall sub_381800(__int64 **a1, unsigned int a2, unsigned int a3)
{
  int flags; // eax
  unsigned int str_type; // eax
  unsigned int v8; // r13d
  unsigned __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int item_end; // eax
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r13
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-78h]
  __int64 v29; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+18h] [rbp-60h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v32; // [rsp+28h] [rbp-50h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( (getinf(49) & 0x10) == 0 )
    return 0;
  flags = get_flags_ex(a2, 4);
  if ( (flags & 0x600) != 0x400 )
    return 0;
  if ( (flags & 0xF0000000) != 0x50000000 )
    return 0;
  str_type = get_str_type(a2);
  v8 = str_type;
  if ( a2 != a3 && (unsigned int)((unsigned __int8)str_type >> 2) - 1 <= 2 )
    return 0;
  v9 = (unsigned __int64)a1[3];
  if ( v9 >= *((int *)a1 + 10) )
  {
    *((_BYTE *)a1 + 44) = 1;
    return 0;
  }
  if ( v9 )
  {
    v15 = *a1;
    v16 = (*a1)[1];
    if ( v16 )
    {
      v17 = v16 + 1;
      v18 = (*a1)[1];
      --v16;
    }
    else
    {
      v18 = 1;
      v17 = 2;
    }
    v19 = *v15;
    if ( v15[2] < v17 )
    {
      v29 = v18;
      v28 = v17;
      v26 = qvector_reserve(*a1, v19, v17, 1);
      v18 = v29;
      v17 = v28;
      *v15 = v26;
      v19 = v26;
    }
    v15[1] = v17;
    *(_BYTE *)(v19 + v16) = 10;
    *(_BYTE *)(*v15 + v18) = 0;
    v9 = (unsigned __int64)a1[3];
  }
  v10 = a1[2];
  if ( (unsigned __int64)a1[4] < v9 + 1 )
  {
    v14 = qvector_reserve(a1 + 2, v10, v9 + 1, 4);
    v9 = (unsigned __int64)a1[3];
    a1[2] = (__int64 *)v14;
    v10 = (__int64 *)v14;
  }
  *((_DWORD *)v10 + v9) = a2;
  a1[3] = (__int64 *)((char *)a1[3] + 1);
  if ( *((_BYTE *)a1 + 44) )
    return 0;
  tag_addr(*a1, a3, 0);
  v30 = 39;
  item_end = get_item_end(a3, a3, v11, v12);
  ptr = nullptr;
  v32 = 0;
  get_strlit_contents(&ptr, a3, item_end - a3, v8, &v30, 2);
  sub_357520(*a1);
  if ( !v30 )
  {
    v20 = *a1;
    v21 = (*a1)[1];
    if ( v21 )
    {
      v22 = v21 + 2;
      v23 = v21 + 3;
      --v21;
    }
    else
    {
      v23 = 4;
      v22 = 3;
    }
    v24 = *v20;
    if ( v20[2] < v23 )
    {
      v27 = qvector_reserve(v20, v24, v23, 1);
      *v20 = v27;
      v24 = v27;
    }
    v20[1] = v23;
    *(_BYTE *)(v24 + v22) = 0;
    v25 = *v20 + v21;
    *(_WORD *)v25 = 11822;
    *(_BYTE *)(v25 + 2) = 46;
  }
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  return 1;
}

