QT::QVariant *__fastcall sub_499700(QT::QVariant *this, __int64 a2, int a3, int a4, int a5)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rax
  const char *v14; // rbp
  size_t v15; // rdx
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-3Ch]
  void *ptr[7]; // [rsp+10h] [rbp-38h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( (unsigned int)(a5 - 2) > 1 && a5
    || a4 != 1
    || (v7 = *(__int64 **)(*(_QWORD *)(a2 + 24) + 40LL), *(_DWORD *)(v7[299] + 48) <= a3) )
  {
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 2;
    *(_OWORD *)this = 0;
    return this;
  }
  v8 = *v7;
  if ( a5 == 3 )
  {
    v9 = *(__int64 (__fastcall **)(__int64))(v8 + 440);
    if ( v9 == sub_45F9A0 )
    {
      v10 = v7 + 257;
      goto LABEL_10;
    }
LABEL_22:
    v17 = a3;
    v16 = ((__int64 (*)(void))v9)();
    a3 = v17;
    v10 = (_QWORD *)v16;
    goto LABEL_10;
  }
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 432);
  if ( v9 != sub_1C4300 )
    goto LABEL_22;
  v10 = v7 + 254;
LABEL_10:
  v11 = *v10 + 24LL * a3;
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = *(const char **)v11;
    v15 = v13 >> 63;
  }
  else
  {
    LOBYTE(v15) = 0;
    v13 = 0;
    v14 = &s1;
  }
  if ( !v14 || (_BYTE)v15 )
  {
    v13 = 0;
    if ( v14 )
      v13 = strlen(v14);
  }
  QT::QString::fromUtf8(ptr, v13, v14);
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
