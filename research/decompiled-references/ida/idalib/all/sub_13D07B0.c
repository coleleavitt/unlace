__int64 __fastcall sub_13D07B0(__int64 a1, __int64 a2, int a3)
{
  const char *v3; // rbx
  bool v4; // zf
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  size_t v8; // r12
  __int64 v9; // rax
  char v10; // cl
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-30h]

  v3 = ">>>>>>>";
  v4 = a3 == 2;
  if ( a3 == 2 )
    v3 = "<<<<\n";
  v5 = a2 - a1;
  v6 = 0;
  v7 = 2LL * !v4 + 5;
  if ( a2 - a1 >= v7 )
  {
    a2 = a1 + v7;
    v6 = v5 - v7;
  }
  v14 = a2;
  v15 = v6;
  v8 = strlen(v3);
  while ( 1 )
  {
    v9 = sub_2246AB0(&v14, v3, v8, 0);
    if ( v9 == -1 )
      break;
    if ( v9 )
    {
      v10 = *(_BYTE *)(v14 + v9 - 1);
      if ( v10 == 10 || v10 == 13 )
        return v14 + v9;
    }
    v11 = v15;
    v12 = v7 + v9;
    if ( v12 > v15 )
    {
      v15 = 0;
      v14 += v11;
    }
    else
    {
      v14 += v12;
      v15 -= v12;
    }
  }
  return 0;
}
