__int64 __fastcall sub_116090(int *a1, __int64 a2, char a3)
{
  int v4; // r12d
  int v5; // ebp
  char v6; // al
  char *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 func; // rax
  __int64 v13; // rax

  if ( *((_BYTE *)a1 + 64) != 8 )
    goto LABEL_2;
  v11 = *((_QWORD *)a1 + 9);
  if ( (*(_BYTE *)(v11 + 280) & 8) != 0 )
    return 1;
  if ( *(_QWORD *)v11 == -1 )
  {
LABEL_2:
    v4 = a3 & 1;
    if ( (a3 & 1) != 0 || *((char *)a1 + 5) >= 0 )
    {
      v5 = *a1;
      if ( *a1 == 57 )
      {
        v8 = (char *)(a1 + 12);
        if ( *((_BYTE *)a1 + 48) != 6 )
          goto LABEL_7;
      }
      else
      {
        v6 = *((_BYTE *)a1 + 32);
        if ( v6 != 6 )
          goto LABEL_6;
        v8 = (char *)(a1 + 8);
      }
      v9 = a3 & 2;
      v10 = *((_QWORD *)v8 + 1);
      if ( (_DWORD)v9 )
      {
        func = get_func(v10);
        if ( func && (*(_BYTE *)(func + 17) & 2) != 0 )
          return 0;
        v10 = *((_QWORD *)v8 + 1);
      }
      if ( (unsigned __int8)func_does_return(v10, a2, v9) )
      {
        if ( v5 != 57 )
        {
          v6 = *v8;
          if ( *v8 == 6 )
            return 0;
LABEL_6:
          if ( v6 == 11 )
            return 0;
        }
LABEL_7:
        if ( !sub_115F00(*(_QWORD *)(a2 + 96), *((_QWORD *)a1 + 3), 0) )
          return 0;
        if ( !v4 )
          a1[1] |= 0x8000u;
      }
    }
    return 1;
  }
  if ( (a3 & 2) != 0 )
  {
    v13 = get_func(*(_QWORD *)v11);
    if ( v13 )
    {
      if ( (*(_BYTE *)(v13 + 17) & 2) != 0 )
        return 0;
    }
  }
  return (unsigned int)((__int64 (*)(void))func_does_return)() ^ 1;
}
