void *__fastcall CoinStructuredModel::coinBlock(CoinStructuredModel *this, int a2)
{
  const void *v3; // rdi
  void *result; // rax
  __int64 v5; // rax

  v3 = *(const void **)(*((_QWORD *)this + 21) + 8LL * a2);
  if ( !v3
    || (result = __dynamic_cast(
                   v3,
                   (const struct __class_type_info *)&`typeinfo for'CoinBaseModel,
                   (const struct __class_type_info *)&`typeinfo for'CoinModel,
                   0)) == nullptr )
  {
    v5 = *((_QWORD *)this + 22);
    if ( v5 )
      return *(void **)(v5 + 8LL * a2);
    else
      return nullptr;
  }
  return result;
}

