int __fastcall sub_4B8D00(__int64 a1, QT::QWidget *a2)
{
  __int64 *v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v6; // rbp
  int result; // eax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned __int8 v10; // [rsp+Fh] [rbp-59h]
  char v11; // [rsp+1Fh] [rbp-49h] BYREF
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 3 )
    return 0;
  v2 = *(__int64 **)(a1 + 8);
  v3 = v2[1];
  if ( !v3 )
    return 0;
  v4 = *v2;
  v6 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v4 + 8) )
    {
      result = strcmp(*(const char **)v4, "area_geom");
      if ( !result )
        break;
    }
    ++v6;
    v4 += 40;
    if ( v3 == v6 )
      return 0;
  }
  if ( *(_DWORD *)(v4 + 24) == 3 )
  {
    v9 = *(_QWORD *)(v4 + 32);
    v11 = 0;
    sub_51AE60(ptr, v9, &v11, v8);
    result = 0;
    if ( ptr[2] )
      result = QT::QWidget::restoreGeometry(a2, (const QT::QByteArray *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v10 = result;
        free(ptr[0]);
        return v10;
      }
    }
  }
  return result;
}
