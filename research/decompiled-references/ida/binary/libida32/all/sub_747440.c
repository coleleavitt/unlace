__int64 __fastcall sub_747440(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  char *v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // esi
  __int64 v10; // rcx
  _DWORD v12[4]; // [rsp+6h] [rbp-32h] BYREF
  char v13; // [rsp+17h] [rbp-21h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v5 = qword_2CAA5C0;
  if ( *qword_2CAA5C0 == 95 )
  {
    v8 = 13;
    ++qword_2CAA5C0;
    LODWORD(v7) = 12;
    v13 = (a1 ^ 1) + 48;
  }
  else
  {
    if ( (unsigned __int8)(*qword_2CAA5C0 - 48) > 9u
      || (v6 = sub_74E4D0(a1, a2, qword_2CAA5C0, a4, a5),
          v5 = qword_2CAA5C0,
          a4 = (unsigned __int64)(qword_2CAA5C0 + 1),
          ++qword_2CAA5C0,
          *v5 != 95)
      || (v5 = (char *)((unsigned __int8)a1 ^ 1u), a4 = (unsigned int)(v6 + (_DWORD)v5 + 1), (a4 & 0x80000000) != 0LL) )
    {
      sub_74E200(a1, a2, v5, a4);
    }
    LODWORD(v7) = 13;
    do
    {
      v8 = v7;
      v7 = (unsigned int)(v7 - 1);
      *((_BYTE *)&v12[1] + v7 + 1) = (unsigned int)a4 % 0xA + 48;
      v9 = a4;
      LODWORD(a4) = (unsigned int)a4 / 0xA;
    }
    while ( v9 > 9 );
  }
  if ( !(_BYTE)a1 )
  {
    *((_BYTE *)&v12[1] + (unsigned int)(v8 - 2) + 1) = 35;
    LODWORD(v7) = v8 - 2;
  }
  v10 = (unsigned int)(v7 - 1);
  *((_BYTE *)&v12[1] + v10 + 1) = 32;
  sub_74F740(v12, (char *)&v12[1] + v10 + 1, (unsigned int)(13 - v10));
  return v12[0];
}

