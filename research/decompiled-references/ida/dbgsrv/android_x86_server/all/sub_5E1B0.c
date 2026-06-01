/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E1B0
// Address: 0x0005E1B0

//----- (0005E1B0) --------------------------------------------------------
int __cdecl sub_5E1B0(int a1, int *a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  char *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v13; // [esp+8h] [ebp-34h]
  int v14; // [esp+Ch] [ebp-30h]
  int v15; // [esp+10h] [ebp-2Ch] BYREF
  void *v16; // [esp+14h] [ebp-28h]
  int v17; // [esp+18h] [ebp-24h]
  int v18; // [esp+1Ch] [ebp-20h]
  int v19; // [esp+20h] [ebp-1Ch]
  unsigned int v20; // [esp+28h] [ebp-14h]

  v20 = __readgsdword(0x14u);
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 16) - 1;
  v4 = 5 * v3;
  v5 = idcv_string(v2 + 20 * v3);
  v6 = 0;
  if ( !v5 )
  {
    v14 = *a2;
    v7 = a2[1];
    v13 = a2[2];
    *a2 = *(_DWORD *)(v2 + 4 * v4 + 4);
    a2[1] = *(_DWORD *)(v2 + 4 * v4 + 8);
    a2[2] = *(_DWORD *)(v2 + 4 * v4 + 12);
    *(_DWORD *)(v2 + 4 * v4 + 4) = v14;
    *(_DWORD *)(v2 + 4 * v4 + 8) = v7;
    *(_DWORD *)(v2 + 4 * v4 + 12) = v13;
    v8 = (char *)(*(_DWORD *)(a1 + 12) + 20 * *(_DWORD *)(a1 + 16) - 20);
    LOBYTE(v15) = 2;
    v17 = 0;
    v16 = nullptr;
    v19 = 0;
    v18 = 0;
    copy_idcv((char *)&v15, v8);
    v9 = *(_DWORD *)(a1 + 16);
    if ( v9 )
    {
      v10 = v9 - 1;
      *(_DWORD *)(a1 + 16) = v10;
      free_idcv((char *)(*(_DWORD *)(a1 + 12) + 20 * v10));
    }
    if ( (char)v15 == 5 )
    {
      sub_59680(v16, (char *)&v15);
    }
    else if ( (char)v15 == 7 && v16 )
    {
      v17 = 0;
      qfree(v16);
      v16 = nullptr;
      v18 = 0;
    }
    v11 = *(_DWORD *)(a1 + 12);
    if ( *(_BYTE *)(v11 + 20 * (*(_DWORD *)(a1 + 16) - 1)) == 5 )
    {
      return *(_DWORD *)(v11 + 20 * (*(_DWORD *)(a1 + 16) - 1) + 4);
    }
    else
    {
      set_qerrno(1532);
      return 0;
    }
  }
  return v6;
}
