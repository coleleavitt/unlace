QT::QVariant *__fastcall sub_445600(QT::QVariant *this, void **a2, __int64 a3, __int64 a4, int a5)
{
  void **v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  void *v17; // rax
  const char *v18; // rbx
  size_t v19; // rax
  void *v20; // rax
  void *ptr[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+38h] [rbp-40h]
  unsigned __int64 v25; // [rsp+48h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  v11 = (void **)&v22;
  v24 = 0;
  v22 = 0;
  v23 = 0;
  if ( !(unsigned __int8)sub_442D90((__int64)a2, (__int64)&v22, a3) || v24 != -2 || (a5 & 0xFFFFFFFD) != 0 )
  {
    v11 = a2;
    sub_4450D0(this, (__int64)a2, a3, a4, a5);
    goto LABEL_4;
  }
  v15 = *(int *)(a3 + 4);
  if ( v15 >= (unsigned __int64)a2[61] )
  {
    if ( !under_debugger )
      interr(80120, &v22, v12, v13, 0.0);
    BUG();
  }
  v16 = *((_DWORD *)a2[60] + v15);
  if ( v16 == 1 )
  {
    v20 = a2[50];
    v18 = &s1;
    if ( *((_QWORD *)v20 + 4) )
      v18 = *((const char **)v20 + 3);
  }
  else
  {
    if ( v16 != 8 )
    {
      *((_QWORD *)this + 2) = 0;
      *((_QWORD *)this + 3) = 2;
      *(_OWORD *)this = 0;
      goto LABEL_4;
    }
    v17 = a2[50];
    v18 = &s1;
    if ( *((_QWORD *)v17 + 7) )
      v18 = *((const char **)v17 + 6);
  }
  v19 = 0;
  if ( v18 )
    v19 = strlen(v18);
  QT::QString::fromUtf8(ptr, v19, v18);
  v11 = ptr;
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
LABEL_4:
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22, (const char *)v11);
  }
  return this;
}
