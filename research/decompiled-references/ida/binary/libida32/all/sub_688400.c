unsigned __int8 *__fastcall sub_688400(__int64 *a1, int *a2, unsigned __int8 *a3)
{
  unsigned __int8 *result; // rax
  unsigned __int8 v5; // dl
  char v6; // r12
  int v7; // r12d
  unsigned __int8 v8; // dl
  unsigned __int8 v9; // dl
  int v10; // eax
  unsigned __int8 *v11; // [rsp+8h] [rbp-40h] BYREF
  int v12; // [rsp+14h] [rbp-34h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v11 = a3;
  v13 = __readfsqword(0x28u);
  if ( !a3 || !*a3 )
    return nullptr;
  result = a3 + 1;
  v11 = a3 + 1;
  v5 = a3[1];
  if ( (v5 & 0xF0) != 0xA0 )
    return result;
  v6 = a3[2];
  if ( !v6 )
    return nullptr;
  if ( (~v5 & 0xF) != 0 || v6 >= 0 )
  {
    v7 = 0;
    do
    {
      v9 = v5 & 0xF;
      if ( v9 == 15 )
      {
        v8 = result[1];
        if ( !v8 )
          return nullptr;
        result += 2;
        v7 |= (2 * v8) & 0x3E;
      }
      else
      {
        result = sub_686280(a1, result + 1, v9);
        if ( !result )
          return nullptr;
        v7 |= 1u;
      }
      v5 = *result;
    }
    while ( (*result & 0xF0) == 0xA0 );
    *a2 = v7;
  }
  else
  {
    v11 = a3 + 3;
    if ( !(unsigned __int8)sub_693030(&v11, &v12) )
    {
      if ( !under_debugger )
        interr(1774);
      BUG();
    }
    *a2 = v12 & 0x1E3F;
    if ( (v6 & 1) != 0 )
    {
      v10 = sub_692FE0(&v11);
      if ( v10 < 0 )
        return nullptr;
      return sub_686280(a1, v11, v10);
    }
    else
    {
      return v11;
    }
  }
  return result;
}

