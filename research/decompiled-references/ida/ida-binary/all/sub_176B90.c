void __fastcall sub_176B90(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  QT::QTextFormat *v4; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = v2 + 24LL * *(_QWORD *)(a1 + 16);
    while ( v3 != v2 )
    {
      v4 = (QT::QTextFormat *)(v2 + 8);
      v2 += 24;
      QT::QTextFormat::~QTextFormat(v4);
    }
    free(*(void **)a1);
  }
}
