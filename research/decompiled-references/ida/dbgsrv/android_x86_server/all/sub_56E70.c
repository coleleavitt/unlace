/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56E70
// Address: 0x00056E70

//----- (00056E70) --------------------------------------------------------
unsigned int __cdecl sub_56E70(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v4; // eax
  void *v5; // ecx
  char *v6; // eax
  void *v7; // eax
  char *v8; // eax
  int v9; // edi
  int v11; // [esp+14h] [ebp-28h]
  int v12; // [esp+18h] [ebp-24h] BYREF
  int v13; // [esp+1Ch] [ebp-20h]
  int v14; // [esp+20h] [ebp-1Ch]
  unsigned int v15; // [esp+28h] [ebp-14h]

  v15 = __readgsdword(0x14u);
  v4 = *(_DWORD *)(a1 + 92);
  if ( v4 < a3 )
  {
    v5 = *(void **)(a1 + 88);
    if ( (unsigned int)v5 > v4 )
      goto LABEL_16;
    sub_2DCA0(&v12, v5, v4 - (_DWORD)v5);
    if ( v13 )
      v6 = (char *)v12;
    else
      v6 = byte_EF875;
    v11 = qustrlen(v6);
    if ( v12 )
    {
      v13 = 0;
      qfree((void *)v12);
      v12 = 0;
      v14 = 0;
    }
    v7 = *(void **)(a1 + 92);
    if ( (unsigned int)v7 > a3 )
    {
LABEL_16:
      if ( !(_BYTE)under_debugger )
        interr(1833);
      BUG();
    }
    sub_2DCA0(&v12, v7, a3 - (_DWORD)v7);
    if ( v13 )
      v8 = (char *)v12;
    else
      v8 = byte_EF875;
    v9 = qustrlen(v8);
    if ( v12 )
    {
      v13 = 0;
      qfree((void *)v12);
      v12 = 0;
      v14 = 0;
    }
    (*(void (__cdecl **)(int, int, int, int))(*(_DWORD *)a2 + 8))(a2, v11, v9, a4);
    *(_DWORD *)(a1 + 92) = a3;
  }
  return __readgsdword(0x14u);
}
// 13E34C: using guessed type int under_debugger;
