__int64 __fastcall sub_37C0(__int64 a1, _QWORD *a2)
{
  if ( *a2 != 0xA3E66666169613CLL )
    return 0;
  qstrncpy(a1 + 8, a2 + 1, 20);
  qstrncpy(a1 + 28, (char *)a2 + 20, 20);
  *(_BYTE *)(a1 + 48) = 0;
  qstrncpy(a1 + 68, a2 + 4, 20);
  qstrncpy(a1 + 88, (char *)a2 + 44, 20);
  qstrncpy(a1 + 108, a2 + 7, 20);
  return 1;
}

