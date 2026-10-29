__int64 __fastcall sub_74A4A0(unsigned int *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  const char *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v9; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v10; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v9 = (unsigned int)a1;
  v11 = __readfsqword(0x28u);
  v5 = 0;
  v10 = 0;
  if ( BYTE2(a1) != 0xC0 )
    goto LABEL_8;
  v6 = (const char *)&qword_2CAA5C0;
  v7 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v7 == 83 )
  {
    ++qword_2CAA5C0;
    v10 = sub_7471D0((__int64)a1, (__int64)a2, v7, (char *)&qword_2CAA5C0, a5);
    v5 = HIWORD(v10);
    if ( BYTE2(v10) == 0xE0 )
      goto LABEL_6;
LABEL_8:
    sub_74E200(a1, a2, v5, a4);
  }
  if ( (_BYTE)v7 == 80 )
  {
    ++qword_2CAA5C0;
    sub_74A310(a1, a2, v7, (__int64)&qword_2CAA5C0, a5);
  }
  v10 = sub_747580((char *)&qword_E0, a2, v7, v6, a5);
  sub_7526B0(qword_2CAA5D0, &v10);
LABEL_6:
  sub_74F860(&v9, 46);
  sub_7506B0(&v9, &v10);
  return v9;
}

