/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C7910
// Address: 0x080C7910

//----- (080C7910) --------------------------------------------------------
unsigned int __cdecl sub_80C7910(unsigned int a1, char *s)
{
  unsigned int v2; // eax
  char **v3; // edi
  char *v4; // edx
  char *v5; // eax
  char *v6; // edi
  unsigned int result; // eax
  size_t v8; // eax
  char *v9; // edx
  size_t v10; // ecx
  unsigned int v11; // eax
  char *v12; // eax
  char *v13; // eax
  int v14; // [esp-14h] [ebp-38h]
  int v15; // [esp-10h] [ebp-34h]
  int v16; // [esp-Ch] [ebp-30h]
  char *dest; // [esp+0h] [ebp-24h]
  char *desta; // [esp+0h] [ebp-24h]
  _BYTE *destb; // [esp+0h] [ebp-24h]
  size_t v20; // [esp+4h] [ebp-20h]

  if ( a1 > 3 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(481, v14, v15, v16);
    BUG();
  }
  v2 = __readgsdword(0);
  v3 = (char **)(v2 + 12 * a1 - 116);
  v4 = *v3;
  if ( s )
  {
    if ( *s )
    {
      dest = *v3;
      v8 = strlen(s);
      v9 = dest;
      v10 = v8;
      if ( v8 )
      {
        v11 = v8 + 1;
        desta = (char *)v11;
        if ( (unsigned int)v3[2] < v11 )
        {
          v20 = v10;
          v13 = (char *)sub_80CF920((int)v3, v9, v11, 1u);
          v10 = v20;
          *v3 = v13;
          v9 = v13;
        }
        v3[1] = desta;
        destb = (_BYTE *)v10;
        memmove(v9, s, v10);
        destb[(_DWORD)*v3] = 0;
        v6 = *v3;
      }
      else
      {
        v3[1] = nullptr;
        v6 = dest;
      }
    }
    else
    {
      if ( (unsigned int)v3[2] <= 1 )
      {
        v12 = (char *)sub_80CF920(v2 + 12 * a1 - 116, v4, 2u, 1u);
        *v3 = v12;
        v4 = v12;
      }
      v3[1] = (char *)2;
      *v4 = 32;
      (*v3)[1] = 0;
      v5 = &byte_811E601;
      if ( v3[1] )
        v5 = *v3;
      *v5 = 0;
      v6 = *v3;
    }
  }
  else
  {
    if ( v4 )
    {
      v3[1] = nullptr;
      sub_80CF780(v4);
      *v3 = nullptr;
      v3[2] = nullptr;
    }
    v6 = nullptr;
  }
  result = __readgsdword(0);
  *(_DWORD *)(result + 4 * a1 - 132) = v6;
  return result;
}
// 80C7A85: variable 'v14' is possibly undefined
// 80C7A85: variable 'v15' is possibly undefined
// 80C7A85: variable 'v16' is possibly undefined
// 811E601: using guessed type char byte_811E601;
// 811F8A1: using guessed type char byte_811F8A1;
