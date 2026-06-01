/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E000
// Address: 0x0005E000

//----- (0005E000) --------------------------------------------------------
int __fastcall sub_5E000(int a1, int a2, _DWORD *a3, unsigned int *a4, int a5)
{
  __int16 v10; // r0
  int v11; // r1
  char v12; // r5
  char v13; // r6
  char *v14; // [sp+10h] [bp-1Ch] BYREF
  int v15; // [sp+14h] [bp-18h] BYREF
  unsigned int v16; // [sp+18h] [bp-14h] BYREF
  int (__fastcall **v17)(_DWORD, void **, int, int *, char **, void **); // [sp+1Ch] [bp-10h] BYREF
  __int16 v18; // [sp+20h] [bp-Ch]

  if ( *(_BYTE *)(a1 + 96) )
    sub_1700C((int)"handle_server_ioctl(fn=%d, bufsize=%zu).\n", a2, *(_DWORD *)(a5 + 4) - *(_DWORD *)a5);
  if ( a2 == 16777217 )
  {
    sub_59A90(a1, (const char **)&v14, (unsigned int *)&v15, &v16, (unsigned __int8 **)a5);
    v13 = v16;
    if ( v16 )
      v13 = 1;
    v17 = (int (__fastcall **)(_DWORD, void **, int, int *, char **, void **))&off_CFF9C;
    return sub_5DA88(&v17, a1, a3, a4, v14, v15, v13);
  }
  else if ( a2 == 16777218 )
  {
    sub_59A90(a1, (const char **)&v14, (unsigned int *)&v15, &v16, (unsigned __int8 **)a5);
    v10 = sub_76114((unsigned int *)a5, *(_DWORD *)(a5 + 4));
    v11 = a1;
    v12 = v16;
    v18 = v10;
    if ( v16 )
      v12 = 1;
    v17 = (int (__fastcall **)(_DWORD, void **, int, int *, char **, void **))&off_CFF90;
    return sub_5DA88(&v17, v11, a3, a4, v14, v15, v12);
  }
  else
  {
    return -1;
  }
}
// CFF90: using guessed type _UNKNOWN *off_CFF90;
// CFF9C: using guessed type _UNKNOWN *off_CFF9C;
