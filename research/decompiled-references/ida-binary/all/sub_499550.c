QT::QVariant *__fastcall sub_499550(QT::QVariant *this, __int64 a2, int *a3, __int64 a4, unsigned int a5, int a6)
{
  unsigned __int64 v7; // rdx
  __int64 v9; // rsi
  size_t v10; // r13
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax
  const char *v15; // rdx
  const char *v16; // rbp
  int v17; // [rsp+0h] [rbp-58h]
  __int64 v18; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v20; // [rsp+20h] [rbp-38h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v7 = *a3;
  if ( v7 >= *(_QWORD *)(a4 + 16) )
    goto LABEL_12;
  v9 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8 * v7);
  v18 = v9;
  if ( a5 > 9 )
    goto LABEL_12;
  v10 = (1LL << a5) & 0x342;
  if ( ((1LL << a5) & 0x342) != 0 )
  {
    sub_4E1A30((_DWORD)this, a2, (unsigned int)&v18, (_DWORD)a3, a5, a6, v17);
    return this;
  }
  if ( ((1LL << a5) & 5) == 0 )
  {
LABEL_12:
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 2;
    *(_OWORD *)this = 0;
    return this;
  }
  v11 = (_QWORD *)sub_4DF1E0(*(_QWORD *)(a2 + 16), v9);
  if ( v11 )
  {
    v12 = a3[1];
    if ( (int)v12 >= 0 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL) + 2392LL) + 48LL) > (int)v12 )
    {
      v14 = sub_4DFD60(*(_QWORD *)(a2 + 16), *v11 + 24 * v12, 0);
      v16 = v15;
      if ( v15 )
      {
        if ( v14 >= 0 )
        {
LABEL_17:
          QT::QString::fromUtf8(ptr, v14, v16);
          goto LABEL_9;
        }
        v10 = strlen(v15);
      }
      v14 = v10;
      goto LABEL_17;
    }
  }
  v20 = 0;
  *(_OWORD *)ptr = 0;
LABEL_9:
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return this;
}
