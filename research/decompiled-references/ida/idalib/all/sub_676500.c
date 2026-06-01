__int64 __fastcall sub_676500(__int64 *a1, __int64 *a2, __int16 a3, _DWORD *a4, __int64 a5, int a6)
{
  char v7; // r12
  unsigned __int64 v9; // r15
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  if ( (a3 & 0x800) != 0 )
    callui(9, 0, (int)&v11, (int)v12, (int)&callui, a6);
  v7 = a3 & 1;
  do
  {
    if ( v7 )
    {
      a2 = (__int64 *)sub_3C2450(a1, (__int64)a2);
      if ( a2 == (__int64 *)-1LL )
        return -1;
    }
    else
    {
      a2 = (__int64 *)sub_3C2650(a1, (unsigned __int64)a2);
      if ( a2 == (__int64 *)-1LL )
        return -1;
    }
    v9 = sub_3BE900(a1, (unsigned __int64)a2, 0);
  }
  while ( !sub_3C9A00(a1, a2, v9, -1, nullptr) );
  if ( a4 )
    *a4 = !sub_3C9A00(a1, a2, v9, 0, nullptr);
  return (__int64)a2;
}
