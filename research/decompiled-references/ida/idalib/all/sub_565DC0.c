__int64 __fastcall sub_565DC0(unsigned __int8 *a1, __int64 *a2, char a3)
{
  int v4; // ecx
  char v5; // al
  __int64 v6; // r13
  char v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v12; // rax

  v4 = *a1;
  if ( 8 * v4 < (unsigned int)a1[1] )
    return 0;
  if ( (_BYTE)v4 == 4 )
  {
    v5 = 46;
    goto LABEL_6;
  }
  if ( (unsigned __int8)v4 > 4u )
  {
    v5 = 62;
    if ( (_BYTE)v4 != 8 )
      return 0;
LABEL_6:
    v6 = a2[1];
    v7 = v5 | a3 & 0xC0;
    if ( v6 )
    {
      v8 = v6 + 1;
      v9 = a2[1];
      v10 = *a2;
      --v6;
      if ( a2[2] >= v8 )
      {
LABEL_8:
        a2[1] = v8;
        *(_BYTE *)(v10 + v6) = v7;
        *(_BYTE *)(*a2 + v9) = 0;
        return sub_6B2CF0(a2, a1[2] | (2 * (unsigned int)a1[1]));
      }
    }
    else
    {
      v10 = *a2;
      v9 = 1;
      v8 = 2;
      if ( (unsigned __int64)a2[2] >= 2 )
        goto LABEL_8;
    }
    v12 = qvector_reserve(a2, v10, v8, 1);
    *a2 = v12;
    v10 = v12;
    goto LABEL_8;
  }
  if ( (_BYTE)v4 == 1 )
  {
    v5 = 14;
    goto LABEL_6;
  }
  v5 = 30;
  if ( (_BYTE)v4 == 2 )
    goto LABEL_6;
  return 0;
}
