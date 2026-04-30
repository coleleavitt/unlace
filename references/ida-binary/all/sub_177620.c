__int64 __fastcall sub_177620(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v7; // r15d
  __int64 v8; // r8
  __int64 v9; // r9
  int *v10; // rax
  __int64 v11; // rdx
  int *v12; // r14
  unsigned int v13; // r13d
  int *v14; // r12
  __int64 v15; // rax
  __int64 i; // rcx
  __int64 v18; // r12
  __int64 v19; // r14
  QT::QTextFormat *v20; // rdi
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  __m128i ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( !a1[6] )
  {
    if ( !under_debugger )
      interr(40693, 0, a3, a4, a5);
    BUG();
  }
  v7 = a4;
  QT::QTextLayout::formats((QT::QTextLayout *)&ptr);
  v10 = (int *)ptr.m128i_i64[0];
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
  {
    sub_177130(&ptr, 0, 0, 0, v8, v9);
    v10 = (int *)ptr.m128i_i64[0];
  }
  v11 = ptr.m128i_i64[1];
  v12 = (int *)ptr.m128i_i64[1];
  if ( !v10 || *v10 > 1 )
  {
    sub_177130(&ptr, 0, 0, 0, v8, v9);
    v11 = ptr.m128i_i64[1];
  }
  v13 = 0;
  v14 = (int *)(v11 + 24 * v23);
  while ( v14 != v12 )
  {
    while ( *v12 > v7 || v12[1] + *v12 <= v7 )
    {
      v12 += 6;
      if ( v14 == v12 )
        goto LABEL_14;
    }
    QT::QTextFormat::brushProperty((QT::QTextFormat *)&v21, (_DWORD)v12 + 8);
    v12 += 6;
    v13 = 1;
    *(_DWORD *)a2 = __ROR4__(_byteswap_ulong(QT::QColor::rgba((QT::QColor *)(v21 + 8))), 8);
    *(_BYTE *)(a2 + 4) = 1;
    QT::QBrush::~QBrush((QT::QBrush *)&v21);
  }
LABEL_14:
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
  {
    v18 = ptr.m128i_i64[1];
    v19 = ptr.m128i_i64[1] + 24 * v23;
    if ( ptr.m128i_i64[1] != v19 )
    {
      do
      {
        v20 = (QT::QTextFormat *)(v18 + 8);
        v18 += 24;
        QT::QTextFormat::~QTextFormat(v20);
      }
      while ( v19 != v18 );
    }
    free((void *)ptr.m128i_i64[0]);
  }
  v15 = a1[3];
  for ( i = v15 + 16LL * a1[4]; v15 != i; v15 += 16 )
  {
    if ( *(_DWORD *)v15 <= v7 && *(_DWORD *)(v15 + 4) + *(_DWORD *)v15 > v7 )
    {
      v13 = 1;
      *(_DWORD *)a3 = *(_DWORD *)(v15 + 8);
      *(_BYTE *)(a3 + 4) = *(_BYTE *)(v15 + 12);
    }
  }
  return v13;
}
