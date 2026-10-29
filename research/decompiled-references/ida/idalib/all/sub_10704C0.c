__int64 __fastcall sub_10704C0(__int64 a1, _BYTE *a2, unsigned __int64 a3, char a4, unsigned int a5)
{
  char v7; // bp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 result; // rax
  int v13; // eax
  _BYTE *v14; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v14 = a2;
  v15 = a3;
  v7 = *a2;
  v8 = sub_2246FB0(&v14, "=+&", 3, 0);
  v9 = v15;
  v10 = 0;
  if ( v8 < v15 )
  {
    v9 = v8;
    v10 = v15 - v8;
  }
  v11 = &v14[v9];
  v15 = v10;
  result = 1;
  v14 = v11;
  if ( *v11 == 114 )
  {
    result = 0;
    if ( a4 != 113 )
    {
      LOBYTE(result) = v7 == 61;
      LOBYTE(v11) = v7 == 43;
      v13 = (unsigned int)v11 | result;
      LOBYTE(v11) = a5 <= 0x40;
      return (unsigned int)v11 | v13;
    }
  }
  return result;
}
