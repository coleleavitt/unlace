/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73A04
// Address: 0x00073A04

//----- (00073A04) --------------------------------------------------------
void __fastcall sub_73A04(__int64 *a1)
{
  char *v2; // r0
  char *v3; // r5
  size_t v4; // r8
  int v5; // r1
  int v6; // r6
  __int64 v7; // kr08_8
  int v8; // r3
  __int64 v9; // [sp+0h] [bp-14h] BYREF
  int v10; // [sp+8h] [bp-Ch]

  v2 = idadir(nullptr);
  v9 = 0;
  v3 = v2;
  v10 = 0;
  if ( v2 )
  {
    v4 = strlen(v2);
    LODWORD(v9) = sub_78018((int)&v9, nullptr, v4 + 1, 1u);
    HIDWORD(v9) = v4 + 1;
    memmove((void *)v9, v3, v4);
    *(_BYTE *)(v9 + v4) = 0;
    v5 = v10;
    v3 = (char *)HIDWORD(v9);
    v6 = v9;
  }
  else
  {
    v5 = 0;
    v6 = 0;
  }
  v7 = *a1;
  v8 = *((_DWORD *)a1 + 2);
  *(_DWORD *)a1 = v6;
  v9 = v7;
  *((_DWORD *)a1 + 1) = v3;
  v10 = v8;
  *((_DWORD *)a1 + 2) = v5;
  if ( (_DWORD)v7 )
  {
    HIDWORD(v9) = 0;
    sub_77F70((void *)v7);
  }
}
