unsigned __int64 __fastcall sub_467090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  char v6; // al
  char v7; // [rsp+Fh] [rbp-29h] BYREF
  int v8[2]; // [rsp+10h] [rbp-28h] BYREF
  char *v9; // [rsp+18h] [rbp-20h]
  unsigned __int64 v10; // [rsp+28h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 16) == *(_DWORD *)(a1 + 28) )
  {
    v6 = *(_BYTE *)(a1 + 16);
    *(_QWORD *)v8 = 0;
    v6 ^= 1u;
    *(_BYTE *)(a1 + 16) = v6;
    v7 = v6;
    v9 = &v7;
    QT::QMetaObject::activate((QT::QMetaObject *)a1, (QT::QObject *)&off_8868E0, nullptr, (int)v8, a5);
  }
  return v10 - __readfsqword(0x28u);
}
