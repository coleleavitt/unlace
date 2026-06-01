__int64 __fastcall sub_73BD40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r9d
  unsigned int v10; // esi
  _DWORD v12[4]; // [rsp+6h] [rbp-22h] BYREF
  char v13; // [rsp+17h] [rbp-11h]
  unsigned __int64 v14; // [rsp+18h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v5 = sub_73BCE0(a1, a2, a3, a4, a5) + 1;
  if ( v5 < 0 )
    sub_74E200(a1, a2, v6, v7);
  v13 = 125;
  LODWORD(v8) = 12;
  do
  {
    v9 = v8;
    v8 = (unsigned int)(v8 - 1);
    *((_BYTE *)&v12[1] + v8 + 1) = v5 % 0xAu + 48;
    v10 = v5;
    v5 /= 0xAu;
  }
  while ( v10 > 9 );
  *((_BYTE *)&v12[1] + (unsigned int)(v9 - 2) + 1) = 35;
  sub_74F740(v12, (char *)&v12[1] + (unsigned int)(v9 - 2) + 1, (unsigned int)(13 - (v9 - 2)));
  return v12[0];
}

