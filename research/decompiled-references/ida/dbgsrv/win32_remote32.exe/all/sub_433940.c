/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433940
// Address: 0x00433940

//----- (00433940) --------------------------------------------------------
unsigned __int8 *__thiscall sub_433940(_BYTE *this, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // ebp
  unsigned __int8 v4; // bl
  BOOL v5; // ecx
  unsigned __int8 *v6; // esi
  int v7; // edx
  unsigned __int8 v8; // al
  char v9; // al
  __int8 *v11; // eax
  BOOL v12; // [esp+10h] [ebp-4h]

  v2 = a2;
  v4 = *a2;
  v5 = 0;
  v12 = 0;
  v6 = a2;
  v7 = 1;
  if ( !*a2 )
  {
    *a2 = 0;
    return a2;
  }
  while ( *(this + 80) )
  {
    if ( v4 == 42 )
    {
      v8 = v2[1];
      if ( v8 == 47 )
      {
        if ( (*(this + 324) & 1) == 0 )
        {
LABEL_6:
          v5 = v12;
          goto LABEL_7;
        }
      }
      else if ( v8 != 41 || (*((_DWORD *)this + 81) & 2) == 0 )
      {
        goto LABEL_6;
      }
      ++v2;
      *(this + 80) = 0;
      goto LABEL_6;
    }
LABEL_7:
    v4 = *++v2;
    if ( !v4 )
      goto LABEL_8;
  }
  if ( v4 == 34 )
  {
    v5 = !v5;
    v12 = v5;
    goto LABEL_22;
  }
  if ( v5 )
  {
LABEL_23:
    *v6++ = v4;
    goto LABEL_7;
  }
  if ( v4 != 47 )
  {
    if ( v4 == 59 )
    {
      if ( (*((_DWORD *)this + 81) & 8) != 0 )
        goto LABEL_8;
    }
    else if ( v4 == 40 && (*((_DWORD *)this + 81) & 2) != 0 )
    {
      goto LABEL_42;
    }
LABEL_29:
    if ( v7 )
    {
      if ( v4 == 32 || v4 == 9 || v4 == 10 || v4 == 13 || v4 == 11 || v4 == 12 )
        goto LABEL_7;
    }
    else if ( v4 == 32 || v4 == 9 || v4 == 10 || v4 == 13 || v4 == 11 || v4 == 12 )
    {
LABEL_22:
      v7 = 1;
      goto LABEL_23;
    }
    v11 = sub_464F10("!%&*+-/<=>^|:?(),.[\\]`{};~@#", v4);
    v5 = v12;
    if ( !v11 )
    {
      v7 = 0;
      *v6++ = v4;
      goto LABEL_7;
    }
    goto LABEL_22;
  }
  if ( v2[1] != 47 || (*((_DWORD *)this + 81) & 4) == 0 )
  {
    if ( (*(this + 324) & 1) == 0 )
      goto LABEL_29;
LABEL_42:
    if ( v2[1] == 42 )
    {
      ++v2;
      *(this + 80) = 1;
      goto LABEL_7;
    }
    goto LABEL_29;
  }
LABEL_8:
  while ( v6 > a2 )
  {
    v9 = *(v6 - 1);
    if ( v9 != 32 && v9 != 9 && v9 != 10 && v9 != 13 && v9 != 11 && v9 != 12 )
      break;
    --v6;
  }
  *v6 = 0;
  return v6;
}
