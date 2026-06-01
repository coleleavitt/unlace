/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_85F60
// Address: 0x00085F60

//----- (00085F60) --------------------------------------------------------
char __cdecl sub_85F60(int a1, int a2, __int64 off, char a4)
{
  int v4; // ecx
  __int64 v5; // rax
  int v6; // edx
  unsigned __int32 v7; // edx
  char result; // al
  unsigned int v9; // edx
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  void *v13; // eax
  void *v14; // edi
  int v15; // eax
  void *v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // [esp+Ch] [ebp-20h]
  int v19; // [esp+10h] [ebp-1Ch]
  unsigned int dest[6]; // [esp+14h] [ebp-18h] BYREF

  v4 = a2;
  dest[1] = __readgsdword(0x14u);
  if ( off )
  {
    LODWORD(v5) = qlseek(a2, off, 0);
    v4 = a2;
    HIDWORD(v5) = HIDWORD(off) ^ v6;
    if ( v5 != (unsigned int)off )
      return 0;
  }
  if ( qlread(__SPAIR64__(dest, v4), 4u) != 4 )
    return 0;
  v7 = dest[0];
  if ( a4 )
  {
    v7 = _byteswap_ulong(dest[0]);
    dest[0] = v7;
  }
  result = 0;
  if ( v7 >= 5 )
  {
    v18 = 0;
    qlseek(a2, -4, 1);
    v19 = qlseek(a2, 0, 1);
    v10 = v9;
    LODWORD(v11) = qlsize(a2);
    v12 = v11 - __PAIR64__(v10, v19);
    if ( ((HIDWORD(v12) | v10) & 0x80000000) != 0 )
    {
LABEL_10:
      dest[0] = v18;
      return 0;
    }
    if ( v12 < dest[0] )
    {
      v18 = v12;
      goto LABEL_10;
    }
    v13 = qalloc(dest[0] + 1);
    if ( !v13 )
      return 0;
    v14 = v13;
    v15 = qlread(__SPAIR64__((unsigned int)v13, a2), dest[0]);
    if ( v15 != dest[0] )
    {
      qfree(v14);
      return 0;
    }
    *((_BYTE *)v14 + v15) = 0;
    v16 = *(void **)a1;
    if ( *(_DWORD *)a1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      qfree(v16);
      *(_DWORD *)a1 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    v17 = dest[0] + 1;
    *(_DWORD *)a1 = v14;
    *(_DWORD *)(a1 + 8) = v17;
    *(_DWORD *)(a1 + 4) = v17;
    return 1;
  }
  return result;
}
// 85FA1: variable 'v6' is possibly undefined
// 8600C: variable 'v9' is possibly undefined
// 8601E: variable 'v11' is possibly undefined
