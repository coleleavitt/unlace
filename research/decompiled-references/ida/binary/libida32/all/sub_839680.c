__int64 __fastcall sub_839680(char **a1, char *a2, int a3, _QWORD *a4, _QWORD *a5, _DWORD *a6, int *a7, __int64 a8)
{
  char v9; // r11
  char *v10; // rax
  __int64 v11; // rdx
  int v13; // edx

  v9 = **a1;
  v10 = *a1 + 1;
  if ( a3 == 125 )
  {
    if ( v10 >= a2 )
      goto LABEL_18;
    while ( *v10 == 32 || *v10 == 9 )
    {
      if ( ++v10 == a2 )
        goto LABEL_18;
    }
  }
  if ( v10 >= a2 )
  {
LABEL_18:
    v13 = 2 * (v9 != 42) + 160;
    goto LABEL_19;
  }
  *a5 = v10;
  *a4 = &v10[-*(_QWORD *)(a8 + 56)];
  if ( v9 == 42 || (unsigned __int8)(*v10 - 48) > 9u )
  {
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a8 + 32) + (unsigned __int8)*v10) & 0x10) == 0 )
        break;
      ++v10;
    }
    while ( a2 != v10 );
    v11 = (__int64)&v10[-*a5];
    if ( v11 > 128 )
    {
      v13 = 148;
      goto LABEL_19;
    }
    *a6 = v11;
    if ( v9 == 42 )
    {
LABEL_13:
      *a1 = v10;
      return 1;
    }
    if ( (char *)*a5 == v10 )
    {
      v13 = 162;
      goto LABEL_19;
    }
    if ( a3 == 125 )
    {
      if ( v10 >= a2 )
      {
LABEL_28:
        v13 = 142;
        goto LABEL_19;
      }
      while ( *v10 == 32 || *v10 == 9 )
      {
        if ( a2 == ++v10 )
          goto LABEL_28;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_13;
    }
    if ( v10 < a2 && *v10 == (_BYTE)a3 )
    {
      ++v10;
      goto LABEL_13;
    }
    goto LABEL_28;
  }
  ++v10;
  v13 = 144;
LABEL_19:
  *a7 = v13;
  *a1 = v10;
  return 0;
}

