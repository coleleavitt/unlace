bool __fastcall sub_48F550(QT::QAbstractItemView *a1, __m128i *a2, __int64 a3)
{
  int v3; // r9d
  bool result; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // [rsp+7h] [rbp-41h] BYREF
  char v14; // [rsp+Fh] [rbp-39h]
  __m128i v15; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v3 = *(_DWORD *)a3;
  v16 = __readfsqword(0x28u);
  result = 0;
  if ( v3 >= 0 && *(int *)(a3 + 4) >= 0 && *(_QWORD *)(a3 + 16) )
  {
    v7 = QT::QAbstractItemView::model(a1);
    if ( *(int *)a3 >= 0 && *(int *)(a3 + 4) >= 0 && *(_QWORD *)(a3 + 16) )
    {
      v8 = *(_QWORD *)(a3 + 8);
      v9 = (unsigned int)v8;
      v10 = HIDWORD(v8);
      if ( v10 == 0xFFFFFFFFLL )
        v10 = -1;
    }
    else
    {
      v9 = -1;
      v10 = -1;
    }
    v15.m128i_i64[1] = v9;
    v11 = *(__int64 **)(v7 + 216);
    v15.m128i_i64[0] = v10;
    if ( !v11 )
      v11 = *(__int64 **)(v7 + 208);
    v12 = *v11;
    v13 = -1;
    v14 = 0;
    dirtree_resolve_cursor(&v13, v12, &v15);
    result = v13 != -1;
    if ( v13 != -1 )
      *a2 = _mm_load_si128(&v15);
  }
  return result;
}
