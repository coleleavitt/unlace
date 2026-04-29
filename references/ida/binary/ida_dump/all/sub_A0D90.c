__int64 __fastcall sub_A0D90(char *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v4; // dl
  __int64 v6; // rbp
  char v7; // al
  int v8; // edx
  unsigned int v9; // eax
  unsigned __int8 v10; // [rsp+1h] [rbp-9h]

  v4 = *a1;
  LOBYTE(a4) = (unsigned __int8)(v4 - 5) <= 1u || v4 == 1;
  if ( (_BYTE)a4 || v4 != 14 )
    return a4;
  while ( 1 )
  {
    v6 = *((_QWORD *)a1 + 1);
    v10 = a4;
    v7 = sub_A0D90(v6);
    a4 = v10;
    if ( !v7 )
      return 0;
    v8 = *(unsigned __int8 *)(v6 + 16);
    a1 = (char *)(v6 + 16);
    v9 = v8 - 5;
    if ( (_BYTE)v8 == 1 || (unsigned __int8)(v8 - 5) <= 1u )
      break;
    if ( (_BYTE)v8 != 14 )
      return a4;
  }
  LOBYTE(v9) = (_BYTE)v8 == 1 || (unsigned __int8)(v8 - 5) <= 1u;
  return v9;
}
