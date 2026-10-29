/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80928A0
// Address: 0x080928A0

//----- (080928A0) --------------------------------------------------------
char **__cdecl sub_80928A0(int a1, char ***a2, unsigned __int8 a3, int a4)
{
  char **result; // eax
  char *v5; // ebp
  char v6; // dl
  char **v7; // edi
  unsigned int v8; // ecx
  char **v9; // eax
  int v10; // [esp+0h] [ebp-2Ch]
  unsigned int v11; // [esp+8h] [ebp-24h]
  char v12; // [esp+Fh] [ebp-1Dh]

  result = (char **)(*(_DWORD *)(a1 + 28) + 28 * a4);
  if ( a3 < (unsigned int)result[1] )
  {
    result = (char **)&(*result)[12 * a3];
    if ( result[1] )
    {
      v5 = *result;
      result = (char **)(a4 - 1);
LABEL_4:
      v6 = *v5;
      if ( !*v5 )
        return result;
      do
      {
        ++v5;
        if ( (unsigned __int8)(v6 + 0x80) <= 0x7Eu )
        {
          result = (char **)sub_80928A0(a1, a2, v6 + 0x80, a4 - 1);
          goto LABEL_4;
        }
        v7 = a2[1];
        if ( v7 )
        {
          v10 = (int)a2[1];
          v8 = (unsigned int)v7 + 1;
          v9 = *a2;
          v7 = (char **)((char *)v7 - 1);
          if ( (unsigned int)a2[2] < v8 )
            goto LABEL_12;
        }
        else
        {
          v10 = 1;
          v9 = *a2;
          v8 = 2;
          if ( (unsigned int)a2[2] < 2 )
          {
LABEL_12:
            v12 = v6;
            v11 = v8;
            v9 = (char **)sub_80CF920((int)a2, v9, v8, 1u);
            v6 = v12;
            v8 = v11;
            *a2 = v9;
          }
        }
        a2[1] = (char **)v8;
        *((_BYTE *)v7 + (_DWORD)v9) = v6;
        result = *a2;
        *((_BYTE *)*a2 + v10) = 0;
        v6 = *v5;
      }
      while ( *v5 );
    }
  }
  return result;
}
