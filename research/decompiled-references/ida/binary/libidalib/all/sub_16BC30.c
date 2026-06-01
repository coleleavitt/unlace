__int64 __fastcall sub_16BC30(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  char v4; // cl
  int v5; // edx
  unsigned int v6; // ecx
  int v8; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-10h]

  v2 = a1[220];
  v9 = __readfsqword(0x28u);
  if ( (_BYTE)a2 )
  {
    if ( v2 <= 0 )
    {
      a1[220] = 1;
      v8 = 0;
      sub_16B660((__int64)a1, (unsigned __int64)&v8, 0);
      return (unsigned int)a2;
    }
    v3 = v2 + 1;
    v4 = 0;
  }
  else
  {
    if ( v2 >= 0 )
    {
      a1[220] = -1;
      return sub_16BB80((__int64)a1, a2);
    }
    v3 = v2 - 1;
    v4 = 1;
  }
  a1[220] = v3;
  if ( (v4 == 0 ? 2 : -2) == v3 )
    return (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 264LL))(
             a1,
             2 - (unsigned int)(unsigned __int8)a2);
  v5 = -(v4 == 0);
  v6 = 0;
  if ( (v5 & 6) - 3 != v3 )
    return v6;
  return (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, _QWORD))(*(_QWORD *)a1 + 256LL))(
           a1,
           2 - (unsigned int)(unsigned __int8)a2,
           1,
           0);
}

