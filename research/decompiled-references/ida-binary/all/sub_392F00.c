__int64 __fastcall sub_392F00(__int64 a1)
{
  unsigned int v1; // ebp
  const void *v2; // r12
  size_t v3; // rdx

  v1 = 0;
  if ( &unk_8BCA80 )
  {
    v1 = dword_8BCA8C;
    if ( !dword_8BCA8C )
      v1 = QT::QMetaType::registerHelper(&unk_8BCA80);
    if ( &unk_8BCA80 )
    {
      v2 = off_8BCA98;
      if ( off_8BCA98 )
      {
        if ( *(_BYTE *)off_8BCA98 )
        {
          v3 = strlen((const char *)off_8BCA98 + 1) + 1;
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
    QT::QMetaType::registerNormalizedTypedef(a1, &unk_8BCA80);
    return v1;
  }
  return v1;
}
