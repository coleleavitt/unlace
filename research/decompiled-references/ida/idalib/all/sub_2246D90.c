__int64 __fastcall sub_2246D90(_QWORD *a1, char *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  __int64 result; // rax
  unsigned __int64 v6; // r10
  char *v7; // r11
  char *v8; // rbx
  char *v9; // r9
  char v10; // di
  char v11; // r8
  __int64 v12; // rdi

  v4 = a1[1];
  result = a4;
  v6 = 0;
  if ( a4 <= v4 )
  {
    v6 = v4 - a4;
    v4 = a4;
  }
  v7 = (char *)(*a1 + v4);
  if ( v6 < a3 )
    return -1;
  while ( &v7[a3] != v7 )
  {
    v8 = a2;
    v9 = v7;
    while ( 1 )
    {
      v10 = *v9;
      v11 = *v8;
      if ( (unsigned __int8)(*v9 - 65) < 0x1Au )
        v10 = *v9 + 32;
      if ( (unsigned __int8)(v11 - 65) < 0x1Au )
        v11 += 32;
      if ( v11 != v10 )
        break;
      ++v9;
      ++v8;
      if ( &v7[a3] == v9 )
        return result;
    }
    v12 = v6 != 0;
    ++result;
    v6 -= v12;
    v7 += v12;
    if ( v6 < a3 )
      return -1;
  }
  return result;
}
