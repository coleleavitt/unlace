/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B81B0
// Address: 0x080B81B0

//----- (080B81B0) --------------------------------------------------------
unsigned int __cdecl sub_80B81B0(int a1, _DWORD *a2)
{
  size_t v2; // eax
  unsigned int *v3; // esi
  size_t v4; // eax
  const char *v5; // edi
  size_t v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // ebp
  unsigned int v9; // edx
  unsigned int result; // eax
  int v11; // [esp+0h] [ebp-54h]
  unsigned int v12; // [esp+8h] [ebp-4Ch]
  char *ptr; // [esp+1Ch] [ebp-38h]
  size_t v14; // [esp+20h] [ebp-34h]
  size_t v15; // [esp+20h] [ebp-34h]
  _BYTE v16[5]; // [esp+2Fh] [ebp-25h] BYREF
  _DWORD v17[8]; // [esp+34h] [ebp-20h] BYREF

  v17[0] = __readgsdword(0x14u);
  v12 = a2[1];
  v2 = sub_80CDC90(v16, (unsigned int)v17, v12) - v16;
  if ( v2 )
    sub_80B7DF0(v2, (char **)a1, v16);
  v11 = 0;
  if ( v12 )
  {
    while ( 1 )
    {
      v3 = (unsigned int *)(*a2 + 16 * v11);
      v4 = sub_80CDC90(v16, (unsigned int)v17, *v3) - v16;
      if ( v4 )
        sub_80B7DF0(v4, (char **)a1, v16);
      v5 = (const char *)&dword_80DDFD8;
      if ( v3[2] )
        v5 = (const char *)v3[1];
      if ( !v5 )
        break;
      v6 = strlen(v5) + 1;
      v7 = *(_DWORD *)(a1 + 4);
      v8 = v6 + v7;
      if ( !__CFADD__(v6, v7) )
        goto LABEL_14;
      if ( v7 <= 0x7FFFFFFE )
      {
        v8 = 0x7FFFFFFF;
        goto LABEL_14;
      }
      if ( v7 != 0x7FFFFFFF )
        goto LABEL_18;
LABEL_7:
      memcpy((void *)(*(_DWORD *)a1 + v7), v5, v6);
      if ( v12 == ++v11 )
        goto LABEL_21;
    }
    v6 = 1;
    v7 = *(_DWORD *)(a1 + 4);
    v8 = v7 + 1;
    if ( v7 != -1 )
    {
      v5 = "";
LABEL_14:
      ptr = *(char **)a1;
      v9 = v7;
      if ( *(_DWORD *)(a1 + 8) < v8 )
      {
        v15 = v6;
        ptr = (char *)sub_80CF920(a1, ptr, v8, 1u);
        *(_DWORD *)a1 = ptr;
        v9 = *(_DWORD *)(a1 + 4);
        v6 = v15;
      }
      v14 = v6;
      memset(&ptr[v9], 0, v8 - v9);
      v6 = v14;
      *(_DWORD *)(a1 + 4) = v8;
      goto LABEL_7;
    }
    v5 = "";
    v7 = -1;
LABEL_18:
    *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
    goto LABEL_7;
  }
LABEL_21:
  result = v17[0] - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
