__int64 __fastcall sub_461E00(__int64 a1)
{
  unsigned int v1; // ebp
  const void *v2; // r12
  size_t v3; // rdx

  v1 = 0;
  if ( &unk_8BF8E0 )
  {
    v1 = dword_8BF8EC;
    if ( !dword_8BF8EC )
      v1 = QT::QMetaType::registerHelper(&unk_8BF8E0);
    if ( &unk_8BF8E0 )
    {
      v2 = off_8BF8F8;
      if ( off_8BF8F8 )
      {
        if ( *(_BYTE *)off_8BF8F8 )
        {
          v3 = strlen((const char *)off_8BF8F8 + 1) + 1;
          if ( v3 == *(_QWORD *)(a1 + 16) && !memcmp(*(const void **)(a1 + 8), v2, v3) )
            return v1;
          goto LABEL_8;
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
LABEL_8:
    QT::QMetaType::registerNormalizedTypedef(a1, &unk_8BF8E0);
    return v1;
  }
  return v1;
}
