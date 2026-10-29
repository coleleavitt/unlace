__int64 __fastcall sub_175720(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int8 v5; // al
  __int16 v6; // dx
  unsigned __int8 v7; // [rsp+Fh] [rbp-59h]
  unsigned __int8 v8; // [rsp+Fh] [rbp-59h]
  char v9[56]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 29) )
    return 0;
  if ( dword_8D1DC0 > 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 || *(char *)(*(_QWORD *)(v4 + 32) + 9LL) >= 0 || a1 != sub_1EB5B0(v4) )
    return 0;
  sub_1E95D0(v9);
  v5 = sub_175090(a1, a2);
  if ( !v5 )
  {
    sub_1E9680(v9);
    return 0;
  }
  v6 = *(_WORD *)(a2 + 16);
  if ( v6 != (__int16)0x8000 )
  {
    v7 = v5;
    sub_1756A0(a1, v6);
    v5 = v7;
  }
  v8 = v5;
  sub_1E9680(v9);
  sub_1F4880(*(QT::QAbstractScrollArea **)(a1 + 16));
  return v8;
}
