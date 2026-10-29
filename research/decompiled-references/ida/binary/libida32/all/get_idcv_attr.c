__int64 __fastcall get_idcv_attr(_BYTE *a1, const char *a2, const char *a3, char a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  __int64 *v9; // r14
  __int64 v10; // r13
  size_t v11; // r15
  _QWORD *v12; // r15
  __int64 v13; // rax
  int v14; // r15d
  _BYTE *v15; // rbx
  void *v16; // rdi
  int v17; // ebp
  _BYTE *v18; // rbx
  __int64 v19; // rax
  size_t v20; // r15
  size_t v21; // rax
  size_t v22; // r12
  size_t v23; // rbp
  const char *v24; // rsi
  void *v25; // [rsp+8h] [rbp-140h]
  void *v26; // [rsp+8h] [rbp-140h]
  _BYTE *v27; // [rsp+18h] [rbp-130h] BYREF
  void *v28; // [rsp+20h] [rbp-128h] BYREF
  __int128 v29; // [rsp+28h] [rbp-120h]
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int128 v31; // [rsp+48h] [rbp-100h]
  char v32[8]; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v33; // [rsp+E8h] [rbp-60h]
  __int64 v34; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+108h] [rbp-40h]

  v27 = a1;
  v35 = __readfsqword(0x28u);
  qmutex_lock(qword_2CAA770);
  v6 = sub_76BCD0();
  if ( !a2 )
  {
    v9 = (__int64 *)v6;
    if ( find_idc_gvar(a3) )
    {
      if ( v27 )
      {
        v32[0] = 2;
        v33 = 0;
        v34 = 0;
        copy_idcv(v32);
        swap_idcvs(v27, v32);
        free_idcv(v32);
      }
    }
    else
    {
      v17 = sub_76D7A0(v9, a3);
      if ( v17 == 0x7FFFFFFF )
      {
        a2 = a3;
        v7 = 1538;
        set_error_string();
        qmutex_unlock(qword_2CAA770);
        goto LABEL_4;
      }
      v18 = v27;
      if ( v27 )
      {
        free_idcv(v27);
        *v27 = 6;
        *((_DWORD *)v18 + 2) = v17;
      }
    }
    goto LABEL_9;
  }
  if ( *a2 != 5 )
  {
    v7 = 1532;
    qmutex_unlock(qword_2CAA770);
LABEL_4:
    set_qerrno(v7, a2);
    return v7;
  }
  v10 = *((_QWORD *)a2 + 1);
  ptr = nullptr;
  v31 = 0;
  if ( a3 )
  {
    v11 = strlen(a3);
    ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
    *(_QWORD *)&v31 = v11 + 1;
    memmove(ptr, a3, v11);
    *((_BYTE *)ptr + v11) = 0;
    v25 = ptr;
    v12 = sub_771D80(v10, (__int64)&ptr);
    if ( v25 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v25);
    }
    if ( v12 != (_QWORD *)(v10 + 8) )
    {
LABEL_15:
      if ( v27 )
      {
        v32[0] = 2;
        v33 = 0;
        v34 = 0;
        copy_idcv(v32);
        swap_idcvs(v27, v32);
        v7 = 0;
        free_idcv(v32);
        qmutex_unlock(qword_2CAA770);
        return v7;
      }
      goto LABEL_9;
    }
    v19 = sub_76D500(*(int *)(v10 + 52));
    ptr = nullptr;
    v26 = (void *)v19;
    v31 = 0;
    v20 = strlen(a3);
    ptr = (void *)qvector_reserve(&ptr, 0, v20 + 1, 1);
    *(_QWORD *)&v31 = v20 + 1;
    memmove(ptr, a3, v20);
    *((_BYTE *)ptr + v20) = 0;
  }
  else
  {
    if ( sub_771D80(v10, (__int64)&ptr) != (_QWORD *)(v10 + 8) )
      goto LABEL_15;
    v13 = sub_76D500(*(int *)(v10 + 52));
    ptr = nullptr;
    v26 = (void *)v13;
    v31 = 0;
  }
  v14 = sub_7718E0((__int64)v26, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  if ( v14 != -1 )
  {
    v15 = v27;
    if ( v27 )
    {
      free_idcv(v27);
      *v27 = 6;
      v16 = qword_2CAA770;
      *((_DWORD *)v15 + 2) = v14;
      v7 = 0;
      qmutex_unlock(v16);
      return v7;
    }
LABEL_9:
    qmutex_unlock(qword_2CAA770);
    return 0;
  }
  qmutex_unlock(qword_2CAA770);
  if ( a4 )
  {
    v28 = nullptr;
    v29 = 0;
    if ( a3 )
    {
      v21 = strlen(a3);
      v22 = v21 + 1;
      v23 = v21;
      v28 = (void *)qvector_reserve(&v28, 0, v21 + 1, 1);
      *(_QWORD *)&v29 = v22;
      memmove(v28, a3, v23);
      *((_BYTE *)v28 + v23) = 0;
    }
    sub_7773B0((__int64)&ptr, 0, 1u);
    if ( (unsigned __int8)sub_779110(&ptr, v10, (__int64)&v28, (__int64 *)&v27) )
    {
      sub_777510((__int64)&ptr);
      if ( v28 )
      {
        v7 = 0;
        *(_QWORD *)&v29 = 0;
        qfree(v28);
        return v7;
      }
      return 0;
    }
    sub_777510((__int64)&ptr);
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28);
    }
  }
  ptr = nullptr;
  v31 = 0;
  sub_76D500(*(int *)(v10 + 52));
  sub_3573A0((char **)&ptr);
  v24 = haystack;
  if ( (_QWORD)v31 )
    v24 = (const char *)ptr;
  set_error_string();
  v7 = set_qerrno(1538, v24);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return v7;
}

