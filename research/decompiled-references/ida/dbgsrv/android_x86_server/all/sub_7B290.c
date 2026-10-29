/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B290
// Address: 0x0007B290

//----- (0007B290) --------------------------------------------------------
unsigned int __cdecl sub_7B290(int **a1, _DWORD *a2, char *s)
{
  _DWORD *v3; // edi
  size_t v4; // eax
  size_t v5; // esi
  void **v6; // eax
  size_t v7; // ecx
  void *v8; // eax
  void *v10; // [esp+10h] [ebp-3Ch] BYREF
  int v11; // [esp+14h] [ebp-38h]
  int v12; // [esp+18h] [ebp-34h]
  void **v13; // [esp+28h] [ebp-24h] BYREF
  _DWORD v14[7]; // [esp+30h] [ebp-1Ch] BYREF

  v14[2] = __readgsdword(0x14u);
  if ( s )
  {
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    sub_7AEC0(a2, (int)&v10);
    v13 = &v10;
    sub_87AB0((int)v14, a1, (int)&v10, (int)&dword_F5508, (int *)&v13);
    v3 = (_DWORD *)v14[0];
    v4 = strlen(s);
    if ( v4 )
    {
      v5 = v4;
      v6 = (void **)(v3 + 7);
      v7 = v5 + 1;
      if ( v3[9] >= v5 + 1 )
      {
        v8 = *v6;
      }
      else
      {
        v8 = qvector_reserve((int)(v3 + 7), *v6, v5 + 1, 1u);
        v3[7] = v8;
        v7 = v5 + 1;
      }
      v3[8] = v7;
      memmove(v8, s, v5);
      *(_BYTE *)(v3[7] + v5) = 0;
    }
    else
    {
      v3[8] = 0;
    }
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
      v10 = nullptr;
      v12 = 0;
    }
  }
  return __readgsdword(0x14u);
}
// F5508: using guessed type int dword_F5508;
