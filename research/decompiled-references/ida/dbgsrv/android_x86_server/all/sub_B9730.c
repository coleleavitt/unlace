/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9730
// Address: 0x000B9730

//----- (000B9730) --------------------------------------------------------
const char *__fastcall sub_B9730(const char *a1, unsigned int a2, int a3)
{
  unsigned int v5; // ebx
  const char *v6; // esi
  char *v7; // edi
  char v8; // al
  int v9; // ecx
  const char *v10; // edx
  int i; // eax
  int v12; // eax
  int v14; // [esp+0h] [ebp-3Ch]
  char *v15; // [esp+1Ch] [ebp-20h]
  unsigned int v16; // [esp+24h] [ebp-18h]
  unsigned int v17; // [esp+28h] [ebp-14h]

  if ( a3 < 0 )
  {
    if ( !(_BYTE)under_debugger )
    {
      v14 = 1225;
LABEL_31:
      interr(v14);
    }
LABEL_37:
    BUG();
  }
  if ( strchr(a1, 37) )
  {
    v5 = a2 + a3;
    v16 = a2;
    if ( a2 + a3 <= a2 )
    {
LABEL_29:
      if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      {
        v14 = 518;
        goto LABEL_31;
      }
      goto LABEL_37;
    }
    v6 = a1;
    v15 = (char *)(v5 - 1);
    v7 = (char *)v16;
    v17 = v5;
    while ( 1 )
    {
      v8 = *v6;
      v9 = *v6;
      *v7++ = *v6;
      if ( (unsigned int)v7 >= v5 )
      {
        v7 = v15;
        *v15 = 0;
      }
      v10 = v6++;
      if ( v9 == 37 )
      {
        if ( *v6 == 37 )
        {
          if ( (unsigned int)v7 >= v5 )
            goto LABEL_29;
          v6 = v10 + 2;
          *v7++ = v8;
          if ( (unsigned int)v7 >= v5 )
          {
            v7 = v15;
            *v15 = 0;
          }
        }
        else
        {
          for ( i = __strchr_chk("+-0123456789*#.", *v6, 16); i; i = __strchr_chk("+-0123456789*#.", v12, 16) )
          {
            if ( (unsigned int)v7 >= v17 )
              goto LABEL_29;
            *v7++ = *v6;
            if ( (unsigned int)v7 >= v17 )
            {
              v7 = v15;
              *v15 = 0;
            }
            v12 = *++v6;
          }
          v5 = v17;
          if ( *v6 == 97 )
          {
            if ( (unsigned int)v7 >= v17 )
            {
              if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
              {
                v14 = 520;
                goto LABEL_31;
              }
              goto LABEL_37;
            }
            *v7 = 88;
          }
          else
          {
            if ( (unsigned int)v7 >= v17 )
              goto LABEL_29;
            *v7 = *v6;
          }
          if ( (unsigned int)++v7 >= v17 )
          {
            v7 = v15;
            *v15 = 0;
          }
          ++v6;
        }
      }
      else if ( !v9 )
      {
        return (const char *)v16;
      }
      if ( (unsigned int)v7 >= v5 )
        goto LABEL_29;
    }
  }
  return a1;
}
// 17C00: using guessed type int __cdecl __strchr_chk(_DWORD, _DWORD, _DWORD);
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13E34C: using guessed type int under_debugger;
