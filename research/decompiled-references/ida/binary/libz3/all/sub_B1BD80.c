__int64 __fastcall sub_B1BD80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int v6; // ebx
  int v7; // edi
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // [rsp+10h] [rbp-10h]
  unsigned int v11; // [rsp+14h] [rbp-Ch]

  if ( (_DWORD)a4 == 1 )
  {
    while ( (_DWORD)a2 != 1 || (_DWORD)a3 != 1 )
    {
      if ( !(_DWORD)a2 || !(_DWORD)a3 )
        return 0;
      if ( (_DWORD)a2 != 1 )
      {
        if ( (_DWORD)a3 == 1 )
          break;
        a2 = 1;
      }
      if ( (unsigned int)a3 <= 1 )
      {
LABEL_24:
        v6 = a3 + a2;
        if ( (unsigned int)a4 >= (int)a3 + (int)a2 )
          return sub_B1BC50(a1, a2, a3);
        v11 = a4;
        v10 = a3;
        if ( !(unsigned __int8)sub_B1BFA0(a1, a2, a3, a4) )
          return sub_B1BE80(a1, (unsigned int)a2, v10, v11);
        v7 = *(_DWORD *)(a1 + 16);
        v8 = ((unsigned int)a2 * v10) >> 1;
        if ( v7 != 1 )
        {
          v9 = v8 + v6;
          v8 = v9 + (unsigned int)v8;
          if ( !v7 )
            v8 = v9;
        }
        return v11 | (unsigned __int64)(v8 << 32);
      }
      a3 = 1;
    }
    v5 = *(unsigned int *)(a1 + 16);
    if ( (_DWORD)v5 != 1 )
      v5 = 2 - ((unsigned int)((_DWORD)v5 == 0) - 1);
    return (v5 << 32) | 1;
  }
  else
  {
LABEL_2:
    if ( (_DWORD)a3 == 1 && (_DWORD)a2 == 1 )
    {
      a2 = 1;
      goto LABEL_5;
    }
    while ( (_DWORD)a2 && (_DWORD)a3 )
    {
LABEL_5:
      if ( (unsigned int)a4 >= (unsigned int)a2 )
      {
        if ( (unsigned int)a4 >= (unsigned int)a3 )
          goto LABEL_24;
        a3 = (unsigned int)a4;
        goto LABEL_2;
      }
      a2 = (unsigned int)a4;
    }
    return 0;
  }
}

