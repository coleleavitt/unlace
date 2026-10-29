/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C72D0
// Address: 0x080C72D0

//----- (080C72D0) --------------------------------------------------------
int __cdecl sub_80C72D0(int *a1, unsigned __int8 **a2, unsigned int a3)
{
  unsigned __int8 **v3; // edx
  unsigned int v4; // edi
  unsigned __int8 *v5; // esi
  int v6; // eax
  int result; // eax
  unsigned __int8 *v8; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v9; // [esp+10h] [ebp-20h]

  v9 = __readgsdword(0x14u);
  v3 = a2;
  if ( a1 )
  {
    *a1 = -1;
    v4 = (unsigned int)*a2;
    v5 = *a2 - 1;
    if ( (unsigned int)v5 >= a3 )
    {
      v6 = *(char *)(v4 - 1);
      if ( (v6 & 0x80u) != 0 )
        goto LABEL_4;
LABEL_18:
      *a1 = v6;
      goto LABEL_19;
    }
LABEL_5:
    result = 0;
    goto LABEL_6;
  }
  v4 = (unsigned int)*a2;
  v5 = *a2 - 1;
  if ( (unsigned int)v5 < a3 )
    goto LABEL_5;
  LOBYTE(v6) = *(_BYTE *)(v4 - 1);
  if ( (v6 & 0x80u) != 0 )
  {
LABEL_4:
    if ( (v6 & 0xC0) == 0x80 )
    {
      while ( (unsigned int)--v5 >= a3 && (int)(v4 - (_DWORD)v5) <= 4 )
      {
        if ( (*v5 & 0xC0) != 0x80 )
        {
          v8 = v5;
          v6 = sub_80C7170(&v8);
          if ( v6 == -1 || v4 < (unsigned int)v8 )
            goto LABEL_5;
          v3 = a2;
          if ( !a1 )
            goto LABEL_19;
          goto LABEL_18;
        }
      }
    }
    goto LABEL_5;
  }
LABEL_19:
  *v3 = v5;
  result = 1;
LABEL_6:
  if ( v9 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
