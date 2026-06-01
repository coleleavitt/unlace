__int64 __fastcall sub_17AA10(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+8h] [rbp-50h]
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int128 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v6 = *(_DWORD *)(a3 + 8);
  v18 = __readfsqword(0x28u);
  if ( (unsigned int)(v6 - 41) > 1 && (unsigned int)(v6 - 36) > 1 )
  {
    v8 = *(_QWORD *)(a3 + 248);
    if ( !v8 )
      return sub_531710(a1, a2, a3, a4, a5);
    v15 = a4;
    v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(QT::QCoreApplication::self[2] + 56LL))(
           QT::QCoreApplication::self + 2,
           *(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL));
    if ( (unsigned int)(v9 - 41) > 1 )
    {
      a4 = v15;
      if ( (unsigned int)(v9 - 36) > 1 )
        return sub_531710(a1, a2, a3, a4, a5);
    }
  }
  v17 = 0;
  v16 = 0;
  v16 = qvector_reserve(&v16, 0, 1, 16);
  v11 = 16 * v17 + v16;
  *(_QWORD *)v11 = &unk_5B159C;
  *(_BYTE *)(v11 + 8) = 1;
  *(_QWORD *)&v17 = v17 + 1;
  sub_531710(a1, a2, a3, &v16, a5 | 1);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, a2, v12, v13, v14);
  }
  return v18 - __readfsqword(0x28u);
}
