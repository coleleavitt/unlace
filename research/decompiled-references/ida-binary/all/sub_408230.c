QT::QVariant *__fastcall sub_408230(QT::QVariant *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned __int64 v6; // rax
  __m128 ptr; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 1 )
    {
      if ( !*(_DWORD *)(a3 + 4) )
      {
        sub_3F4540((__int64)this, a2, a3);
        return this;
      }
      goto LABEL_3;
    }
    if ( (_DWORD)a4 == 18789 )
    {
      v6 = QT::QStandardItemModel::itemFromIndex(a2, a3);
      QT::QVariant::QVariant(this, v6);
      return this;
    }
    if ( (_DWORD)a4 != 18790 )
    {
LABEL_3:
      QT::QStandardItemModel::data(this, a2, a3, a4);
      return this;
    }
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)(a3 + 4) )
      goto LABEL_3;
    v5 = 1;
  }
  sub_3F6FF0(&ptr, a2, a3, v5);
  QT::QVariant::QVariant(this, (const QT::QString *)&ptr);
  if ( ptr.m128_u64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128_u64[0], 1u) )
    free((void *)ptr.m128_u64[0]);
  return this;
}
