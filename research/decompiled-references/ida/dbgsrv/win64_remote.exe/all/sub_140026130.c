/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140026130
// Address: 0x0000000140026130

//----- (0000000140026130) ----------------------------------------------------
__int64 __fastcall sub_140026130(char *a1, char *a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  bool v11; // zf
  unsigned int v12; // eax
  __int64 v13; // rcx

  if ( !sub_1400291D0(a1, 2) || !sub_1400291D0(a2, 2) )
    return 0xFFFFFFFFLL;
  v4 = *a2;
  v5 = *a1;
  if ( *a1 == *a2 )
    return (unsigned int)*a1;
  if ( (unsigned __int8)v5 > 9u )
    return 0xFFFFFFFFLL;
  v6 = 654;
  if ( !_bittest(&v6, v5) || (unsigned __int8)v4 > 9u || !_bittest(&v6, v4) )
    return 0xFFFFFFFFLL;
  v7 = 61;
  v8 = v5 - 2;
  if ( !v8 )
  {
    if ( v4 == 2 )
      return (unsigned int)*a1;
    if ( v4 != 3 )
    {
      if ( v4 == 7 )
      {
        if ( *((_QWORD *)a1 + 1) )
        {
          v12 = sub_14002A090((__int64)a2);
          goto LABEL_37;
        }
        goto LABEL_17;
      }
      if ( v4 == 9 )
        goto LABEL_32;
      goto LABEL_39;
    }
LABEL_35:
    v13 = (__int64)a1;
    goto LABEL_36;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v13 = (__int64)a2;
LABEL_36:
    v12 = sub_140029E90(v13);
    goto LABEL_37;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    if ( v4 == 2 )
    {
      if ( *((_QWORD *)a2 + 1) )
      {
        v12 = sub_14002A090((__int64)a1);
        goto LABEL_37;
      }
      goto LABEL_24;
    }
    if ( v4 != 3 )
    {
      if ( v4 == 7 )
        return (unsigned int)*a1;
      if ( v4 == 9 )
      {
        if ( !*((_QWORD *)a2 + 1) )
        {
LABEL_24:
          v12 = sub_14002A220((__int64)a2);
          goto LABEL_37;
        }
LABEL_32:
        v12 = sub_140029F90((__int64)a1);
        goto LABEL_37;
      }
LABEL_39:
      sub_1400640B0(v7);
      return 0xFFFFFFFFLL;
    }
    goto LABEL_35;
  }
  if ( v10 != 2 )
    goto LABEL_39;
  if ( v4 == 2 )
  {
LABEL_18:
    v12 = sub_140029F90((__int64)a2);
    goto LABEL_37;
  }
  if ( v4 == 3 )
    goto LABEL_35;
  if ( v4 != 7 )
  {
    v11 = v4 == 9;
    goto LABEL_38;
  }
  if ( *((_QWORD *)a1 + 1) )
    goto LABEL_18;
LABEL_17:
  v12 = sub_14002A220((__int64)a1);
LABEL_37:
  v7 = v12;
  v11 = v12 == 0;
LABEL_38:
  if ( !v11 )
    goto LABEL_39;
  return (unsigned int)*a1;
}
