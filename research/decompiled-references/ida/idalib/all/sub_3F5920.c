__int64 __fastcall sub_3F5920(__int64 a1, __int64 a2, char a3, __int64 a4, unsigned int *a5, __int64 a6, char **a7)
{
  __int64 v11; // rsi
  __int64 v12; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v13[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 64) != a2 )
    return 0;
  if ( a3 != 65 )
  {
    sub_35A790(a7);
    return 0;
  }
  qsnprintf((unsigned int)v13, 32, (unsigned int)"%a", a4, (_DWORD)a5, (unsigned int)v13);
  if ( a6 != 4 || *a5 > 1uLL )
  {
    sub_35A790(a7);
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *a5;
  sub_7BE7C0(a1 + 64, v11, a4, &v12, 8, 65);
  return 1;
}
