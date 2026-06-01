/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59B68
// Address: 0x00059B68

//----- (00059B68) --------------------------------------------------------
void __fastcall sub_59B68(int a1, void **a2, signed int a3, int a4)
{
  int v8; // r2
  int v9; // r1
  char *v10; // r1
  unsigned int v11[2]; // [sp+4h] [bp-20h] BYREF
  void *ptr; // [sp+Ch] [bp-18h]
  int v13; // [sp+10h] [bp-14h]
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch]

  sub_57FBC((int)a2, a3);
  if ( a3 <= 0 )
  {
    if ( *(_DWORD *)(a4 + 4) )
      v10 = *(char **)a4;
    else
      v10 = (char *)&dword_8DA5C;
    sub_58044(a2, v10);
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 244);
    v11[0] = 24;
    v11[1] = 4;
    ptr = nullptr;
    v13 = 0;
    v14 = 0;
    v15 = -1;
    (*(void (__fastcall **)(int, unsigned int *))(*(_DWORD *)v8 + 276))(v8, v11);
    sub_6388C((int)a2, v11);
    v9 = *(_DWORD *)(a1 + 244);
    if ( *(_BYTE *)(a1 + 96) )
    {
      sub_1700C((int)"RPC: append_start_or_attach idaregs.nregs %zu\n", *(_DWORD *)(v9 + 348));
      v9 = *(_DWORD *)(a1 + 244);
    }
    sub_639D4(a2, v9 + 344);
    if ( ptr )
    {
      v13 = 0;
      sub_77E08(ptr);
    }
  }
}
// 639D4: using guessed type int __fastcall sub_639D4(_DWORD, _DWORD);
// 8DA5C: using guessed type int dword_8DA5C;
