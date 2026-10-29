unsigned __int64 __fastcall sub_3109E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __m128i si128; // xmm0
  __int64 v6; // rdx
  QT::QObject *v7; // rbx
  int v8; // ecx
  QT::QUrl *v9; // rbx
  QT::QUrl *v10; // rbp
  QT::QUrl *v11; // rdi
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  QT::QUrl *v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h]
  void *v15[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  unsigned __int64 v17; // [rsp+38h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_23BE00(a1, a2, a3) )
  {
    *(_BYTE *)(a2 + 12) = 0;
    return v17 - __readfsqword(0x28u);
  }
  else
  {
    v4 = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 44) = v4;
    QT::QMimeData::urls((QT::QMimeData *)&ptr);
    QT::QUrl::toLocalFile((QT::QUrl *)v15);
    si128 = _mm_load_si128((const __m128i *)&::ptr);
    v6 = qword_8CD8B0;
    ::ptr = (__int128)_mm_load_si128((const __m128i *)v15);
    qword_8CD8B0 = v16;
    v16 = v6;
    *(__m128i *)v15 = si128;
    if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
      free(v15[0]);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    {
      v9 = v13;
      v10 = (QT::QUrl *)((char *)v13 + 8 * v14);
      if ( v13 != v10 )
      {
        do
        {
          v11 = v9;
          v9 = (QT::QUrl *)((char *)v9 + 8);
          QT::QUrl::~QUrl(v11);
        }
        while ( v10 != v9 );
      }
      free(ptr);
    }
    v7 = (QT::QObject *)operator new(0x10u);
    QT::QEvent::QEvent(v7, 3001);
    return QT::QCoreApplication::postEvent(qword_8CD748, v7, nullptr, v8);
  }
}
