unsigned __int64 __fastcall sub_3C6D20(__int64 a1)
{
  QT::QAbstractScrollArea *v1; // rbx
  bool v2; // zf
  QT::QAbstractItemView *v3; // rbp
  const char *v5; // [rsp+8h] [rbp-68h] BYREF
  __int128 v6; // [rsp+10h] [rbp-60h]
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-40h]
  __int128 v9; // [rsp+40h] [rbp-30h]
  unsigned __int64 v10; // [rsp+50h] [rbp-20h]

  v1 = nullptr;
  v10 = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 112) == 0;
  v6 = 0;
  v5 = nullptr;
  if ( v2 )
    v1 = *(QT::QAbstractScrollArea **)(a1 + 104);
  if ( !*(_BYTE *)(a1 + 80) )
  {
    v3 = *(QT::QAbstractItemView **)(a1 + 72);
    if ( v3 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v1 + 125) + 57LL) )
      {
        v8 = 0;
        v7 = 0;
        v9 = -1;
        sub_48FF00(v3);
        sub_3C60D0(v3, &v5, (__int64)&v7, (const char *)0xFFFFFFFFFFFFFFFFLL);
        if ( v7 )
        {
          *(_QWORD *)&v8 = 0;
          qfree(v7, (const char *)&v5);
        }
      }
    }
  }
  sub_3AC8A0(v1, (__int64)&v5);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5, (const char *)&v5);
  }
  return v10 - __readfsqword(0x28u);
}
