__int64 __fastcall DockArea::findDockView(__int64 a1, _DWORD *a2)
{
  bool v3; // zf
  __int64 v4; // rbp
  void *v5; // rcx
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rbp
  char v9; // r13
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *(_BYTE *)(a1 + 24) == 0;
  ptr[3] = (void *)__readfsqword(0x28u);
  if ( !v3 && a2[10] )
    return 0;
  v4 = *(_QWORD *)(a1 + 8);
  (*(void (__fastcall **)(void **, _DWORD *))(*(_QWORD *)a2 + 416LL))(ptr, a2);
  v5 = *(void **)(v4 + 16);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = (volatile signed __int32 *)ptr[0];
  if ( v5 != ptr[2] )
  {
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    return 0;
  }
  v9 = QT::QtPrivate::equalStrings(v5, ptr[1], v5, v6);
  if ( v7 && !_InterlockedSub(v7, 1u) )
    free(ptr[0]);
  if ( !v9 )
    return 0;
  *(_QWORD *)(a1 + 16) = a2;
  return 1;
}
