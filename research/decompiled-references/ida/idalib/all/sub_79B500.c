__int64 __fastcall sub_79B500(_QWORD *a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  void *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  size_t v17; // rbx
  __int64 v18; // rbp
  _BYTE *v19; // rsi
  __int64 v20; // r12
  size_t v21; // rax
  const char *v22; // rsi
  size_t v23; // rbp
  __int64 v24; // rbx
  size_t v25; // r12
  _BYTE *v26; // rsi
  void *v27; // rax
  const void *v28; // rsi
  size_t v29; // [rsp+0h] [rbp-80h]
  void *src; // [rsp+8h] [rbp-78h] BYREF
  __int128 v31; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v33; // [rsp+30h] [rbp-50h]
  unsigned __int64 v34; // [rsp+40h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  *a2 = -1;
  v31 = 0;
  src = nullptr;
  v7 = sub_7980D0((__int64)a1, (__int64)&src, (__int64)a3, a4, a5, a6);
  v8 = src;
  v9 = v7;
  if ( v7 )
  {
    v29 = v31;
    v10 = sub_78D940(*(int *)(v7 + 52));
    v11 = sub_791D20(v10, (__int64)&src);
    if ( v11 != -1 )
    {
      *a2 = v11;
LABEL_4:
      v12 = 1;
      goto LABEL_5;
    }
    v14 = sub_7921C0(v9, (__int64)&src);
    if ( v14 != (_QWORD *)(v9 + 8) )
    {
      v15 = v14 + 7;
      copy_idcv(*a3);
      *a3 = (__int64)v15;
      goto LABEL_4;
    }
    if ( (unsigned __int8)sub_799550(a1, v9, (__int64)&src, a3) )
      goto LABEL_4;
    set_qerrno(88);
    v16 = sub_78D940(*(int *)(v9 + 52));
    v17 = *(_QWORD *)(v16 + 64);
    v18 = v16;
    v19 = nullptr;
    ptr = nullptr;
    v20 = 2;
    v33 = 0;
    if ( v17 )
    {
      v27 = (void *)qalloc_or_throw(v17);
      v28 = *(const void **)(v18 + 56);
      ptr = v27;
      *((_QWORD *)&v33 + 1) = v17;
      v20 = v17 + 1;
      memcpy(v27, v28, v17);
      *(_QWORD *)&v33 = v17;
      v19 = ptr;
      v21 = v17 - 1;
      if ( *((_QWORD *)&v33 + 1) >= v17 + 1 )
      {
LABEL_13:
        *(_QWORD *)&v33 = v20;
        v19[v21] = 46;
        *((_BYTE *)ptr + v21 + 1) = 0;
        if ( v29 )
        {
          v23 = v29 - 1;
          if ( v29 != 1 )
          {
            v24 = v33;
            v25 = v29 - 1;
            if ( (_QWORD)v33 )
            {
              v24 = v33 - 1;
              v25 = v23 + v33 - 1;
              v29 = v23 + v33;
            }
            v26 = ptr;
            if ( *((_QWORD *)&v33 + 1) < v29 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
              v26 = ptr;
            }
            *(_QWORD *)&v33 = v29;
            v26[v25] = 0;
            memcpy((char *)ptr + v24, v8, v23);
          }
        }
        v22 = haystack;
        if ( (_QWORD)v33 )
          v22 = (const char *)ptr;
        set_error_string(0, v22);
        if ( ptr )
        {
          *(_QWORD *)&v33 = 0;
          qfree(ptr);
        }
        goto LABEL_18;
      }
      --v17;
    }
    ptr = (void *)qvector_reserve(&ptr, v19, v20, 1);
    v19 = ptr;
    v21 = v17;
    goto LABEL_13;
  }
LABEL_18:
  v12 = 0;
LABEL_5:
  if ( v8 )
    qfree(v8);
  return v12;
}
