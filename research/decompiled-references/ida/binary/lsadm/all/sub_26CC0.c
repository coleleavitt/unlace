__int64 __fastcall sub_26CC0(unsigned __int8 *a1, unsigned __int8 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rdx
  unsigned __int8 *i; // rax
  unsigned __int8 v5; // cl
  char v7; // dl
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // rax
  char v10; // al
  unsigned __int8 *v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v11[1] = (unsigned __int8 *)__readfsqword(0x28u);
  if ( a3 < 0 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(1225, a2);
LABEL_23:
    BUG();
  }
  if ( !a3 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(1538, a2);
    goto LABEL_23;
  }
  v3 = &a1[a3];
  for ( i = a1; ; ++i )
  {
    v5 = *a2++;
    *i = v5;
    if ( !v5 )
      return 1;
    if ( v3 == i + 1 )
      break;
  }
  *i = 0;
  if ( a1 >= i )
    return 0;
  v7 = *(i - 1);
  if ( v7 >= 0 )
    return 0;
  v8 = i - 1;
  v9 = i - 3;
  if ( a1 < v9 )
    a1 = v9;
  if ( (v7 & 0xC0) == 0x80 )
  {
    do
    {
      if ( a1 >= v8 )
        break;
      v10 = *--v8;
    }
    while ( (v10 & 0xC0) == 0x80 );
  }
  v11[0] = v8;
  if ( (unsigned int)sub_26960(v11) != -1 )
    return 0;
  *v8 = 0;
  return 0;
}

