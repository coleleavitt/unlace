__int64 __fastcall get_idcv_attr(_BYTE *a1, __int64 a2, const char *a3, char a4)
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
  const char *v21; // rsi
  size_t v22; // rax
  size_t v23; // r12
  size_t v24; // rbp
  const char *v25; // rsi
  void *v26; // [rsp+8h] [rbp-140h]
  void *v27; // [rsp+8h] [rbp-140h]
  _BYTE *v28; // [rsp+18h] [rbp-130h] BYREF
  void *v29; // [rsp+20h] [rbp-128h] BYREF
  __int128 v30; // [rsp+28h] [rbp-120h]
  void *ptr; // [rsp+40h] [rbp-108h] BYREF
  __int128 v32; // [rsp+48h] [rbp-100h]
  char v33[8]; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v34; // [rsp+E8h] [rbp-60h]
  __int64 v35; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+108h] [rbp-40h]

  v28 = a1;
  v36 = __readfsqword(0x28u);
  qmutex_lock(qword_2CD4690);
  v6 = sub_78C130();
  if ( !a2 )
  {
    v9 = (__int64 *)v6;
    if ( find_idc_gvar(a3) )
    {
      if ( v28 )
      {
        v33[0] = 2;
        v34 = 0;
        v35 = 0;
        copy_idcv(v33);
        swap_idcvs(v28, v33);
        free_idcv(v33);
      }
    }
    else
    {
      v17 = sub_78DBE0(v9, a3);
      if ( v17 == 0x7FFFFFFF )
      {
        v21 = a3;
        v7 = 1538;
        set_error_string(0, v21);
        qmutex_unlock(qword_2CD4690);
        goto LABEL_4;
      }
      v18 = v28;
      if ( v28 )
      {
        free_idcv(v28);
        *v28 = 6;
        *((_DWORD *)v18 + 2) = v17;
      }
    }
    goto LABEL_9;
  }
  if ( *(_BYTE *)a2 != 5 )
  {
    v7 = 1532;
    qmutex_unlock(qword_2CD4690);
LABEL_4:
    set_qerrno(v7);
    return v7;
  }
  v10 = *(_QWORD *)(a2 + 8);
  ptr = nullptr;
  v32 = 0;
  if ( a3 )
  {
    v11 = strlen(a3);
    ptr = (void *)qvector_reserve(&ptr, 0, v11 + 1, 1);
    *(_QWORD *)&v32 = v11 + 1;
    memmove(ptr, a3, v11);
    *((_BYTE *)ptr + v11) = 0;
    v26 = ptr;
    v12 = sub_7921C0(v10, (__int64)&ptr);
    if ( v26 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v26);
    }
    if ( v12 != (_QWORD *)(v10 + 8) )
    {
LABEL_15:
      if ( v28 )
      {
        v33[0] = 2;
        v34 = 0;
        v35 = 0;
        copy_idcv(v33);
        swap_idcvs(v28, v33);
        v7 = 0;
        free_idcv(v33);
        qmutex_unlock(qword_2CD4690);
        return v7;
      }
      goto LABEL_9;
    }
    v19 = sub_78D940(*(int *)(v10 + 52));
    ptr = nullptr;
    v27 = (void *)v19;
    v32 = 0;
    v20 = strlen(a3);
    ptr = (void *)qvector_reserve(&ptr, 0, v20 + 1, 1);
    *(_QWORD *)&v32 = v20 + 1;
    memmove(ptr, a3, v20);
    *((_BYTE *)ptr + v20) = 0;
  }
  else
  {
    if ( sub_7921C0(v10, (__int64)&ptr) != (_QWORD *)(v10 + 8) )
      goto LABEL_15;
    v13 = sub_78D940(*(int *)(v10 + 52));
    ptr = nullptr;
    v27 = (void *)v13;
    v32 = 0;
  }
  v14 = sub_791D20((__int64)v27, (__int64)&ptr);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  if ( v14 != -1 )
  {
    v15 = v28;
    if ( v28 )
    {
      free_idcv(v28);
      *v28 = 6;
      v16 = qword_2CD4690;
      *((_DWORD *)v15 + 2) = v14;
      v7 = 0;
      qmutex_unlock(v16);
      return v7;
    }
LABEL_9:
    qmutex_unlock(qword_2CD4690);
    return 0;
  }
  qmutex_unlock(qword_2CD4690);
  if ( a4 )
  {
    v29 = nullptr;
    v30 = 0;
    if ( a3 )
    {
      v22 = strlen(a3);
      v23 = v22 + 1;
      v24 = v22;
      v29 = (void *)qvector_reserve(&v29, 0, v22 + 1, 1);
      *(_QWORD *)&v30 = v23;
      memmove(v29, a3, v24);
      *((_BYTE *)v29 + v24) = 0;
    }
    sub_7977F0((__int64)&ptr, 0, 1u);
    if ( (unsigned __int8)sub_799550(&ptr, v10, (__int64)&v29, (__int64 *)&v28) )
    {
      sub_797950((__int64)&ptr);
      if ( v29 )
      {
        v7 = 0;
        *(_QWORD *)&v30 = 0;
        qfree(v29);
        return v7;
      }
      return 0;
    }
    sub_797950((__int64)&ptr);
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29);
    }
  }
  ptr = nullptr;
  v32 = 0;
  sub_78D940(*(int *)(v10 + 52));
  sub_35A790((char **)&ptr);
  v25 = haystack;
  if ( (_QWORD)v32 )
    v25 = (const char *)ptr;
  set_error_string(0, v25);
  v7 = set_qerrno(1538);
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  return v7;
}
