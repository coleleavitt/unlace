/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76B28
// Address: 0x00076B28

//----- (00076B28) --------------------------------------------------------
char *__fastcall sub_76B28(char *a1, int a2, char *a3, _BYTE *a4)
{
  bool v4; // zf
  unsigned int v6; // r8
  int v7; // r0
  char *v8; // r5
  int v9; // t1
  char *v10; // r0
  char *v11; // r2
  char *v12; // r5
  size_t v14; // r0
  int v15; // r1
  int v16; // t1
  _BYTE *v17; // [sp+4h] [bp-4h]

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_78AFC(1225);
LABEL_19:
    __und(0xFFu);
  }
  v4 = a3 == nullptr;
  if ( a3 )
    v4 = a1 == nullptr;
  if ( v4 )
    return a1;
  v6 = (unsigned int)&a1[a2];
  if ( a1 == a3 )
  {
    v17 = a4;
    v14 = strlen(a1);
    a4 = v17;
    v10 = &a1[v14];
  }
  else
  {
    if ( v6 <= (unsigned int)a1 )
    {
LABEL_31:
      if ( !under_debugger )
        sub_78AFC(520);
      goto LABEL_19;
    }
    if ( a1 == (char *)(v6 - 1) )
      goto LABEL_12;
    v7 = (unsigned __int8)*a3;
    *a1 = v7;
    if ( v7 )
    {
      v8 = a1 + 1;
      while ( 1 )
      {
        v10 = v8;
        if ( v8 == (char *)(v6 - 1) )
          break;
        v9 = (unsigned __int8)*++a3;
        *v8++ = v9;
        if ( !v9 )
          goto LABEL_13;
      }
LABEL_12:
      v10 = (char *)(v6 - 1);
      *(_BYTE *)(v6 - 1) = 0;
      goto LABEL_13;
    }
    v10 = a1;
  }
LABEL_13:
  if ( a4 )
  {
    if ( *a4 == 46 )
      ++a4;
    if ( *(v10 - 1) != 46 )
    {
      if ( v6 <= (unsigned int)v10 )
      {
        if ( !under_debugger )
          sub_78AFC(518);
        goto LABEL_19;
      }
      v11 = v10 + 1;
      *v10 = 46;
      if ( v6 <= (unsigned int)(v10 + 1) )
        a4 = nullptr;
      v12 = (char *)(v6 - 1);
      if ( v6 <= (unsigned int)(v10 + 1) )
      {
        *(_BYTE *)(v6 - 1) = (_BYTE)a4;
LABEL_25:
        *v12 = 0;
        return a1;
      }
LABEL_34:
      if ( v12 != v11 )
      {
        v15 = (unsigned __int8)*a4;
        *v11 = v15;
        if ( !v15 )
          return a1;
        while ( v12 - 1 != v11 )
        {
          v16 = (unsigned __int8)*++a4;
          *++v11 = v16;
          if ( !v16 )
            return a1;
        }
      }
      goto LABEL_25;
    }
    if ( v6 > (unsigned int)v10 )
    {
      v12 = (char *)(v6 - 1);
      v11 = v10;
      goto LABEL_34;
    }
    goto LABEL_31;
  }
  return a1;
}
// D5C00: using guessed type char under_debugger;
