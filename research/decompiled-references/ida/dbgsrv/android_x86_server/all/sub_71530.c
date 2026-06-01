/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71530
// Address: 0x00071530

//----- (00071530) --------------------------------------------------------
unsigned int __cdecl sub_71530(int a1, int a2, char a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  struct __jmp_buf_tag *v12; // [esp+4h] [ebp-28h]
  char v13[4]; // [esp+8h] [ebp-24h] BYREF
  __int64 v14; // [esp+Ch] [ebp-20h]
  unsigned int v15; // [esp+18h] [ebp-14h]

  v3 = a1;
  v15 = __readgsdword(0x14u);
  sub_710A0(a1, a2, a3);
  v12 = (struct __jmp_buf_tag *)(a1 + 188);
  while ( 1 )
  {
    while ( 1 )
    {
      v13[0] = 1;
      v14 = 0;
      v4 = *(unsigned __int16 *)(*(_DWORD *)(v3 + 228) + 12);
      if ( v4 != 37 )
        break;
      sub_710A0(v3, (int)v13, 1);
      if ( !v14 )
        longjmp(v12, 86);
      v9 = *(_DWORD *)(a2 + 4);
      v10 = *(_DWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 | v13[0] )
        v8 = __PAIR64__(v10, v9) % v14;
      else
        v8 = __SPAIR64__(v10, v9) % v14;
LABEL_2:
      *(_QWORD *)(a2 + 4) = v8;
      v3 = a1;
    }
    if ( (unsigned __int16)v4 == 47 )
    {
      sub_710A0(v3, (int)v13, 1);
      if ( !v14 )
        longjmp(v12, 86);
      v6 = *(_DWORD *)(a2 + 4);
      v7 = *(_DWORD *)(a2 + 8);
      if ( *(_BYTE *)a2 | v13[0] )
        v8 = __PAIR64__(v7, v6) / v14;
      else
        v8 = __SPAIR64__(v7, v6) / v14;
      goto LABEL_2;
    }
    if ( (unsigned __int16)v4 != 42 )
      return __readgsdword(0x14u);
    sub_710A0(v3, (int)v13, 1);
    v3 = a1;
    v5 = (unsigned __int64)(v14 * *(_QWORD *)(a2 + 4)) >> 32;
    *(_DWORD *)(a2 + 4) *= (_DWORD)v14;
    *(_DWORD *)(a2 + 8) = v5;
  }
}
