/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807FF00
// Address: 0x0807FF00

//----- (0807FF00) --------------------------------------------------------
unsigned int __cdecl sub_807FF00(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  int v3; // ecx
  __int16 *v4; // esi
  unsigned int result; // eax
  unsigned int v6; // ebp
  int v7; // edx
  int v8; // [esp+0h] [ebp-40h]
  unsigned int v9; // [esp+4h] [ebp-3Ch]
  int v10; // [esp+8h] [ebp-38h]
  int v11; // [esp+Ch] [ebp-34h]
  unsigned int v12; // [esp+1Ch] [ebp-24h] BYREF
  unsigned int v13; // [esp+20h] [ebp-20h]

  v3 = a1[1];
  v13 = __readgsdword(0x14u);
  v4 = (__int16 *)(*a1 + v3 - 2);
  if ( *v4 > 0 )
  {
    v6 = 0;
    v12 = a1[3] + *a1;
    v10 = sub_80CDEC0(&v12, (unsigned int)v4);
    v8 = 0;
    v9 = 0;
    if ( v10 > 0 )
    {
      while ( v12 < (unsigned int)v4 )
      {
        v9 += sub_80CDEC0(&v12, (unsigned int)v4);
        v6 += sub_80CDEC0(&v12, (unsigned int)v4);
        v11 = sub_80CDEC0(&v12, (unsigned int)v4);
        v7 = sub_80CDEC0(&v12, (unsigned int)v4);
        result = v9;
        LOBYTE(result) = a2 < v6 && a2 >= v9;
        if ( (_BYTE)result )
        {
          *a3 = v9;
          a3[1] = v6;
          a3[2] = v11;
          a3[3] = v7;
          goto LABEL_3;
        }
        if ( v10 == ++v8 )
          break;
      }
    }
  }
  result = 0;
LABEL_3:
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
