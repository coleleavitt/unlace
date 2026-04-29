__int64 __fastcall sub_3F04D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  const char *v5; // rax
  const char *v6; // [rsp+0h] [rbp-50h] BYREF
  __int128 v7; // [rsp+8h] [rbp-48h]
  const char *v8; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+28h] [rbp-28h] BYREF
  __int16 v10; // [rsp+30h] [rbp-20h]
  char v11; // [rsp+32h] [rbp-1Eh]
  unsigned __int64 v12; // [rsp+38h] [rbp-18h]

  LODWORD(v2) = 1;
  v3 = *a2;
  v12 = __readfsqword(0x28u);
  v6 = nullptr;
  v7 = 0;
  if ( (v3 & 0x100) != 0 )
  {
    if ( get_tinfo_pdata(&v6, v3, 2) )
    {
      v5 = s1;
      if ( (_QWORD)v7 )
        v5 = v6;
      v8 = v5;
      v10 = 0;
      v9 = 0;
      v11 = 48;
      v2 = sub_CFF70(0x7D5u, 0, &v8, 0, 1, 0, 0);
      clear_tinfo_t(&v9);
      LOBYTE(v2) = v2 <= 0;
    }
    else
    {
      LODWORD(v2) = 1;
    }
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6);
    }
  }
  return (unsigned int)v2;
}
