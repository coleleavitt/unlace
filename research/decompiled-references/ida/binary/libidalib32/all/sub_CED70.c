__int64 __fastcall sub_CED70(const char *a1, __int64 *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // [rsp+4h] [rbp-4Ch] BYREF
  int v8; // [rsp+8h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-40h]
  __int128 v10; // [rsp+18h] [rbp-38h]
  unsigned __int64 v11; // [rsp+30h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v8 = -2;
  v9 = -1;
  v10 = 0;
  LOBYTE(a3) = dword_2515A4 == 0;
  v3 = a3;
  LOBYTE(v3) = a1 == nullptr || dword_2515A4 == 0;
  if ( (_BYTE)v3 )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v5 = sub_C86D0(a1, (__int64)&v7);
    v6 = sub_CEA00(v5, (unsigned __int16 *)&v7, (__int64)&v8);
    if ( (_BYTE)v6 && v8 == -2 )
    {
      if ( a2 )
        *a2 = v9;
      return v6;
    }
    else if ( v8 >= -1 && v9 )
    {
      *(_QWORD *)&v10 = 0;
      qfree();
    }
  }
  return v3;
}

