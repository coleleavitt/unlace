__int64 __fastcall sub_77B090(_QWORD *a1, _DWORD *a2, __int64 *a3)
{
  __int64 v4; // rax
  void *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // rax
  size_t v14; // rbx
  __int64 v15; // rbp
  _BYTE *v16; // rsi
  __int64 v17; // r12
  size_t v18; // rax
  size_t v19; // rbp
  __int64 v20; // rbx
  size_t v21; // r12
  _BYTE *v22; // rsi
  void *v23; // rax
  const void *v24; // rsi
  size_t v25; // [rsp+0h] [rbp-80h]
  void *src; // [rsp+8h] [rbp-78h] BYREF
  __int128 v27; // [rsp+10h] [rbp-70h]
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h]
  unsigned __int64 v30; // [rsp+40h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  *a2 = -1;
  v27 = 0;
  src = nullptr;
  v4 = sub_777CA0((__int64)a1, (__int64)&src);
  v5 = src;
  v6 = v4;
  if ( v4 )
  {
    v25 = v27;
    v7 = sub_76D500(*(int *)(v4 + 52));
    v8 = sub_7718E0(v7, (__int64)&src);
    if ( v8 != -1 )
    {
      *a2 = v8;
LABEL_4:
      v9 = 1;
      goto LABEL_5;
    }
    v11 = sub_771D80(v6, (__int64)&src);
    if ( v11 != (_QWORD *)(v6 + 8) )
    {
      v12 = v11 + 7;
      copy_idcv(*a3);
      *a3 = (__int64)v12;
      goto LABEL_4;
    }
    if ( (unsigned __int8)sub_779110(a1, v6, (__int64)&src, a3) )
      goto LABEL_4;
    set_qerrno(88, v6);
    v13 = sub_76D500(*(int *)(v6 + 52));
    v14 = *(_QWORD *)(v13 + 64);
    v15 = v13;
    v16 = nullptr;
    ptr = nullptr;
    v17 = 2;
    v29 = 0;
    if ( v14 )
    {
      v23 = (void *)qalloc_or_throw(v14, nullptr);
      v24 = *(const void **)(v15 + 56);
      ptr = v23;
      *((_QWORD *)&v29 + 1) = v14;
      v17 = v14 + 1;
      memcpy(v23, v24, v14);
      *(_QWORD *)&v29 = v14;
      v16 = ptr;
      v18 = v14 - 1;
      if ( *((_QWORD *)&v29 + 1) >= v14 + 1 )
      {
LABEL_13:
        *(_QWORD *)&v29 = v17;
        v16[v18] = 46;
        *((_BYTE *)ptr + v18 + 1) = 0;
        if ( v25 )
        {
          v19 = v25 - 1;
          if ( v25 != 1 )
          {
            v20 = v29;
            v21 = v25 - 1;
            if ( (_QWORD)v29 )
            {
              v20 = v29 - 1;
              v21 = v19 + v29 - 1;
              v25 = v19 + v29;
            }
            v22 = ptr;
            if ( *((_QWORD *)&v29 + 1) < v25 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
              v22 = ptr;
            }
            *(_QWORD *)&v29 = v25;
            v22[v21] = 0;
            memcpy((char *)ptr + v20, v5, v19);
          }
        }
        set_error_string();
        if ( ptr )
        {
          *(_QWORD *)&v29 = 0;
          qfree(ptr);
        }
        goto LABEL_16;
      }
      --v14;
    }
    ptr = (void *)qvector_reserve(&ptr, v16, v17, 1);
    v16 = ptr;
    v18 = v14;
    goto LABEL_13;
  }
LABEL_16:
  v9 = 0;
LABEL_5:
  if ( v5 )
    qfree(v5);
  return v9;
}

