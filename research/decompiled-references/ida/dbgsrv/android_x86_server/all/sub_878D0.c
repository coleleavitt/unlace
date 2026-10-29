/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_878D0
// Address: 0x000878D0

//----- (000878D0) --------------------------------------------------------
int __cdecl sub_878D0(char **a1)
{
  char **v1; // edi
  char *v2; // edx
  char *v3; // eax
  unsigned int v4; // ecx
  int v5; // edx
  int v6; // esi
  size_t v7; // edx
  char *v8; // edx
  char *v9; // eax
  unsigned int v10; // esi
  int v11; // ecx
  int v12; // edi
  _BOOL4 v13; // edx
  size_t v14; // ecx
  char *v16; // edi
  char *v17; // edx
  _BOOL4 v18; // [esp+4h] [ebp-28h]
  int v19; // [esp+4h] [ebp-28h]
  _BYTE *v20; // [esp+Ch] [ebp-20h] BYREF
  _BYTE v21[25]; // [esp+13h] [ebp-19h] BYREF
  _DWORD v22[6]; // [esp+14h] [ebp-18h] BYREF

  v1 = a1;
  v22[1] = __readgsdword(0x14u);
  v2 = *a1;
  v3 = *a1 + 1;
  if ( v3 < *a1 || (v4 = (unsigned int)a1[1], (unsigned int)v3 > v4) )
  {
    v21[0] = 0;
    v6 = 1;
  }
  else
  {
    *a1 = v3;
    v5 = (unsigned __int8)*v2;
    v21[0] = v5;
    v6 = 1;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( (v5 & 0xFFFFFFC0) == 0xC0 )
      {
        v18 = (v5 & 0xFFFFFFE0) == 224;
        v7 = v18 + 3;
        v6 = v18 | 4;
      }
      else
      {
        v6 = 2;
        v7 = 1;
      }
      v16 = &v3[v7];
      if ( &v3[v7] < v3 || (unsigned int)v16 > v4 )
      {
        v1 = a1;
      }
      else
      {
        *a1 = v16;
        v1 = a1;
        memcpy(v22, v3, v7);
      }
    }
  }
  v20 = v21;
  v19 = unpack_dd((unsigned int *)&v20, (unsigned int)&v21[v6]);
  v8 = *v1;
  v9 = *v1 + 1;
  if ( v9 < *v1 || (v10 = (unsigned int)v1[1], (unsigned int)v9 > v10) )
  {
    v21[0] = 0;
    v12 = 1;
  }
  else
  {
    *v1 = v9;
    v11 = (unsigned __int8)*v8;
    v21[0] = v11;
    v12 = 1;
    if ( (v11 & 0x80u) != 0 )
    {
      if ( (v11 & 0xFFFFFFC0) == 0xC0 )
      {
        v13 = (v11 & 0xFFFFFFE0) == 224;
        v14 = v13 + 3;
        v12 = v13 | 4;
      }
      else
      {
        v12 = 2;
        v14 = 1;
      }
      v17 = &v9[v14];
      if ( &v9[v14] >= v9 && (unsigned int)v17 <= v10 )
      {
        *a1 = v17;
        memcpy(v22, v9, v14);
      }
    }
  }
  v20 = v21;
  unpack_dd((unsigned int *)&v20, (unsigned int)&v21[v12]);
  return v19;
}
// 87943: conditional instruction was optimized away because %0x14.4<2u
// 879CC: conditional instruction was optimized away because edx.4<2u
