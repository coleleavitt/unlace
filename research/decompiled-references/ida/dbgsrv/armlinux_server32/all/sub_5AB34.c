/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AB34
// Address: 0x0005AB34

//----- (0005AB34) --------------------------------------------------------
void __fastcall sub_5AB34(int a1, const void *a2, _DWORD *a3)
{
  int v6; // r2
  int v7; // r3
  char *v8; // r1
  __int64 v9; // kr00_8
  int v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r3
  __int64 v14; // [sp+0h] [bp+0h] BYREF
  int v15; // [sp+8h] [bp+8h]

  v14 = 0;
  v15 = 0;
  v14 = (unsigned int)sub_78018((int)&v14, nullptr, 9u, 1u) | 0x900000000LL;
  memmove((void *)v14, a2, 8u);
  v6 = HIDWORD(v14);
  v7 = v14;
  *(_BYTE *)(v14 + 8) = 0;
  v8 = (char *)v7;
  if ( !v6 )
    v8 = &byte_D49E4;
  if ( *v8 == 47 )
  {
    v12 = strtol((const char *)(v7 + 1), nullptr, 10);
    if ( v12 > 0 )
    {
      v13 = a3[1];
      if ( v13 )
      {
        if ( v12 < (unsigned int)(v13 - 1) )
          sub_5AAEC((int)&v14, (char *)(*a3 + v12));
      }
    }
    v6 = HIDWORD(v14);
    v7 = v14;
  }
  v9 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v7;
  v11 = v15;
  v14 = v9;
  *(_DWORD *)(a1 + 4) = v6;
  v15 = v10;
  *(_DWORD *)(a1 + 8) = v11;
  if ( (_DWORD)v9 )
  {
    HIDWORD(v14) = 0;
    sub_77F70((void *)v9);
  }
}
// D49E4: using guessed type char byte_D49E4;
