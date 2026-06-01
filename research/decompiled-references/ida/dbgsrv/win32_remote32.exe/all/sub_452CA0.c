/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_452CA0
// Address: 0x00452CA0

//----- (00452CA0) --------------------------------------------------------
char __userpurge sub_452CA0@<al>(__m128i a1)
{
  unsigned __int8 **v1; // edi
  unsigned int v2; // eax
  int v3; // ebx
  char result; // al
  unsigned __int8 *v5; // edx
  unsigned __int8 *v6; // esi
  __int8 v7; // al
  __int8 v8; // dl
  char v9; // cl
  __int8 v10; // al
  char v11; // bl
  unsigned __int8 *v12; // ebp
  unsigned __int8 *v13; // esi
  unsigned __int8 v14; // cl
  _BYTE v15[4]; // [esp+8h] [ebp-8h] BYREF
  char v16[4]; // [esp+Ch] [ebp-4h] BYREF

  v1 = (unsigned __int8 **)a1.m128i_i32[0];
  v2 = sub_45A040((int *)a1.m128i_i32[0]);
  v3 = v2;
  if ( v2 == -1 )
    return 0;
  if ( v2 > 0xFF )
    return 92;
  if ( (unsigned __int8)(v2 - 48) > 7u )
  {
    switch ( (char)v2 )
    {
      case 'a':
        result = 7;
        break;
      case 'b':
        result = 8;
        break;
      case 'f':
        result = 12;
        break;
      case 'n':
        result = 10;
        break;
      case 'r':
        result = 13;
        break;
      case 't':
        result = 9;
        break;
      case 'v':
        result = 11;
        break;
      case 'x':
        v12 = *v1;
        v13 = *v1;
        if ( sub_437820(v2, **v1) )
        {
          v15[0] = *v13;
          a1.m128i_i8[0] = sub_437820(v3, v13[1]);
          if ( a1.m128i_i8[0] )
            v14 = v13[1];
          else
            v14 = 0;
          v15[1] = v14;
          v15[2] = 0;
          sub_453D70(v3, (__m128i *)v15, "%x", v16);
          LOBYTE(v3) = v16[0];
          *v1 = &v12[a1.m128i_u8[0] + 1];
        }
        goto LABEL_27;
      default:
LABEL_27:
        result = v3;
        break;
    }
  }
  else
  {
    v5 = *v1;
    a1.m128i_i8[0] = v2;
    v6 = v5 + 1;
    v7 = *v5;
    if ( (unsigned __int8)(*v5 - 48) > 7u )
    {
      v6 = v5;
      v7 = 0;
    }
    a1.m128i_i8[1] = v7;
    v8 = *v6;
    if ( (unsigned __int8)(*v6 - 48) > 7u )
    {
      v9 = 0;
    }
    else
    {
      v9 = 1;
      ++v6;
    }
    v10 = v8;
    a1.m128i_i8[3] = 0;
    if ( !v9 )
      v10 = 0;
    a1.m128i_i8[2] = v10;
    sub_453D70(v3, &a1, "%o", v15);
    v11 = v15[0];
    *v1 = v6;
    return v11;
  }
  return result;
}
