QT::QVariant *__fastcall sub_4450D0(QT::QVariant *this, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  const char *v9; // rsi
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v14; // rax
  unsigned int v15; // edx
  size_t v16; // rax
  size_t v17; // r13
  size_t v18; // rbx
  unsigned __int64 v19; // rdx
  size_t v20; // rax
  char *v21; // rbx
  double v22; // xmm0_8
  char *v23; // rdi
  __int64 v24; // rdx
  size_t v25; // rdx
  const char *v26; // rbx
  size_t v27; // rax
  size_t v28; // rax
  char *v29; // rbx
  unsigned __int64 v30; // rdx
  char *v31; // rbx
  size_t v32; // rax
  char *v33; // rdi
  int v34; // edx
  __int64 *v35; // [rsp+0h] [rbp-C8h]
  __int64 v36; // [rsp+8h] [rbp-C0h]
  char *v37; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+18h] [rbp-B0h]
  int v39; // [rsp+28h] [rbp-A0h]
  void *ptr[2]; // [rsp+30h] [rbp-98h] BYREF
  int v41; // [rsp+40h] [rbp-88h]
  int v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+50h] [rbp-78h] BYREF
  __int128 v44; // [rsp+58h] [rbp-70h]
  int v45; // [rsp+68h] [rbp-60h]
  char s[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v44 = 0;
  v45 = 0;
  v43 = 0;
  *(_OWORD *)ptr = -1;
  if ( (unsigned __int8)sub_442D30(a2, (__int64 *)ptr, a3) && (unsigned __int8)sub_442E70(a2, nullptr, ptr) )
    goto LABEL_5;
  v9 = (const char *)&v43;
  v35 = &v43;
  v10 = sub_442D90(a2, (__int64)&v43, a3);
  if ( v10 && (a5 == 6 || a5 == 9) )
  {
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 2;
    *(_OWORD *)this = 0;
    goto LABEL_6;
  }
  v12 = *(int *)(a3 + 4);
  if ( (v12 & 0x80000000) != 0LL || (a5 & 0xFFFFFFFD) != 0 )
    goto LABEL_5;
  if ( v12 >= *(_QWORD *)(a2 + 488) )
  {
    if ( !under_debugger )
      interr(80110, &v43, v12, v11, NAN);
    BUG();
  }
  v36 = *(int *)(a3 + 4);
  if ( !v10 )
    goto LABEL_5;
  v14 = sub_442FF0(a2, (__int64)&v43);
  if ( !v14 )
    goto LABEL_5;
  v15 = *(_DWORD *)(*(_QWORD *)(a2 + 480) + 4 * v36);
  if ( v15 == 4 )
  {
    sub_442280((std::string *)&v37, *(_DWORD *)(v14 + 80));
    v31 = v37;
    v32 = 0;
    if ( v37 )
      v32 = strlen(v37);
    QT::QString::fromUtf8(ptr, v32, v31);
    v9 = (const char *)ptr;
    QT::QVariant::QVariant(this, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v33 = v37 - 24;
    if ( v37 - 24 != (char *)&std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        v34 = _InterlockedExchangeAdd((volatile signed __int32 *)v37 - 2, 0xFFFFFFFF);
      }
      else
      {
        v34 = *((_DWORD *)v37 - 2);
        *((_DWORD *)v37 - 2) = v34 - 1;
      }
      if ( v34 <= 0 )
      {
        v9 = (const char *)ptr;
        std::string::_Rep::_M_destroy(v33, ptr);
      }
    }
    goto LABEL_6;
  }
  if ( v15 > 4 )
  {
    if ( v15 == 8 )
    {
      v24 = *(_QWORD *)(v14 + 56);
      if ( v24 )
      {
        v25 = v24 - 1;
        v26 = *(const char **)(v14 + 48);
        v27 = v25 >> 63;
      }
      else
      {
        LOBYTE(v27) = 0;
        v25 = 0;
        v26 = &s1;
      }
      if ( !v26 || (_BYTE)v27 )
      {
        v25 = 0;
        if ( v26 )
          v25 = strlen(v26);
      }
      QT::QString::fromUtf8(ptr, v25, v26);
      v9 = (const char *)ptr;
      QT::QVariant::QVariant(this, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( v15 == 1 )
  {
    sub_445060((__int64)&v37, v14);
    if ( (_QWORD)v38 )
    {
      v28 = v38 - 1;
      v29 = v37;
      v30 = (unsigned __int64)(v38 - 1) >> 63;
    }
    else
    {
      LOBYTE(v30) = 0;
      v28 = 0;
      v29 = (char *)&s1;
    }
    if ( !v29 || (_BYTE)v30 )
    {
      v28 = 0;
      if ( v29 )
        v28 = strlen(v29);
    }
    v22 = QT::QString::fromUtf8(ptr, v28, v29);
    v9 = (const char *)ptr;
    QT::QVariant::QVariant(this, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    v23 = v37;
    if ( v37 )
      goto LABEL_29;
    goto LABEL_6;
  }
  if ( v15 != 2 )
  {
LABEL_5:
    v9 = (const char *)a2;
    sub_48B060(this, (int)v35, v36, (int)v37, v38, *((__int64 *)&v38 + 1), v39, (int)ptr[0], (int)ptr[1], v41, v42, v43);
    goto LABEL_6;
  }
  qstrftime64(s, 20, "%F %T", *(_QWORD *)(v14 + 72));
  v37 = nullptr;
  v38 = 0;
  v16 = strlen(s);
  v17 = v16 + 1;
  v18 = v16;
  v37 = (char *)qvector_reserve(&v37, 0, v16 + 1, 1);
  *(_QWORD *)&v38 = v17;
  memmove(v37, s, v18);
  LOBYTE(v19) = 0;
  v37[v18] = 0;
  v20 = v38;
  v21 = (char *)&s1;
  if ( (_QWORD)v38 )
  {
    v20 = v38 - 1;
    v21 = v37;
    v19 = (unsigned __int64)(v38 - 1) >> 63;
  }
  if ( !v21 || (_BYTE)v19 )
  {
    v20 = 0;
    if ( v21 )
      v20 = strlen(v21);
  }
  v22 = QT::QString::fromUtf8(ptr, v20, v21);
  v9 = (const char *)ptr;
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v23 = v37;
  if ( v37 )
  {
LABEL_29:
    *(_QWORD *)&v38 = 0;
    qfree(v23, (const char *)ptr, v22);
  }
LABEL_6:
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43, v9);
  }
  return this;
}
