__int64 __fastcall sub_521430(QT::QAbstractItemView *a1, _QWORD **a2, __int64 a3)
{
  __int64 v4; // rax
  const char **v5; // rdx
  const char *v6; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __m128i v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rdi
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+17h] [rbp-41h] BYREF
  char v15; // [rsp+1Fh] [rbp-39h]
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  __m128i v17; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v14 = a3;
  v15 = 0;
  v4 = QT::QAbstractItemView::model(a1);
  v5 = *(const char ***)(v4 + 216);
  if ( !v5 )
    v5 = *(const char ***)(v4 + 208);
  v16 = 0;
  v17 = 0;
  v6 = *v5;
  dirtree_get_entry_name(&v16, *v5, &v14, 1);
  v7 = *a2;
  v8 = v16;
  v16 = 0;
  v9 = _mm_loadu_si128(&v17);
  v17 = 0;
  v10 = *v7;
  if ( *v7 )
  {
    v7[1] = 0;
    v13 = v9;
    qfree(v10, v6);
    v9 = _mm_load_si128(&v13);
  }
  *v7 = v8;
  v11 = v16;
  *(__m128i *)(v7 + 1) = v9;
  if ( v11 )
  {
    v17.m128i_i64[0] = 0;
    qfree(v11, v6);
  }
  return 1;
}
