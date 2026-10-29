unsigned __int64 __fastcall sub_178260(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r14d
  int v6; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  QT::QTextLayout *v10; // r14
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  QT::QChar *v12; // [rsp+18h] [rbp-60h]
  unsigned __int64 v13; // [rsp+20h] [rbp-58h]
  void *v14[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-38h]
  unsigned __int64 v16; // [rsp+48h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( a3 <= 0 )
    return v16 - __readfsqword(0x28u);
  v4 = a3;
  if ( *(_BYTE *)(a2 + 264) )
  {
    v6 = *(_DWORD *)(a2 + 256);
    if ( v6 >= a3 )
      goto LABEL_4;
  }
  else
  {
    sub_177E20(a2 + 48, a2, a4, *(_QWORD *)(a1 + 16));
    v6 = *(_DWORD *)(a2 + 256);
    *(_BYTE *)(a2 + 264) = 1;
    if ( v6 >= v4 )
    {
LABEL_4:
      v7 = *(_QWORD *)(a2 + 112);
      v6 = 0;
      if ( v7 )
      {
        v8 = *(_QWORD *)(a2 + 104);
        if ( v4 >= v7 )
          v6 = v4 + *(_DWORD *)(v8 + 4 * v7 - 4) + 1 - v7;
        else
          v6 = *(_DWORD *)(v8 + 4LL * v4);
      }
      if ( *(_QWORD *)(a2 + 96) )
        goto LABEL_8;
      goto LABEL_20;
    }
  }
  v4 = v6;
  if ( v6 >= 0 )
    goto LABEL_4;
  if ( !*(_QWORD *)(a2 + 96) )
  {
LABEL_20:
    v10 = (QT::QTextLayout *)operator new(8u);
    QT::QTextLayout::QTextLayout(v10);
    *(_QWORD *)(a2 + 96) = v10;
    QT::QTextLayout::setCacheEnabled(v10, 1);
  }
LABEL_8:
  QT::QTextLayout::text((QT::QTextLayout *)&ptr);
  if ( v6 < v13 )
  {
    QT::QString::QString((QT::QString *)v14, v12, v6);
  }
  else
  {
    v15 = v13;
    *(__m128i *)v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)ptr, (__m128i)(unsigned __int64)v12);
    if ( ptr )
      _InterlockedAdd((volatile signed __int32 *)ptr, 1u);
  }
  QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)(a4 + 80), (const QT::QString *)v14, -1);
  if ( v14[0] && !_InterlockedSub((volatile signed __int32 *)v14[0], 1u) )
    free(v14[0]);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v16 - __readfsqword(0x28u);
}
