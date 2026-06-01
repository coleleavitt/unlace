/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_add
// Address: 0x00082A40

//----- (00082A40) --------------------------------------------------------
int __fastcall rangeset_t_add(int a1, int a2)
{
  int v3; // r4
  int v5; // r1
  char v6; // r0
  void *v8; // [sp+4h] [bp-18h] BYREF
  int v9; // [sp+8h] [bp-14h]
  int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]
  char v12; // [sp+14h] [bp-8h]

  v3 = 0;
  if ( a1 && *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v6 = 0;
    v9 = 0;
    v8 = nullptr;
    v10 = 0;
    v11 = v5;
    if ( v5 != -1 )
      v6 = must_journal();
    v12 = v6;
    v3 = sub_827A0((char **)a1, (char *)a2, (int)&v8);
    if ( v3 )
      sub_82AF0((int)&v8);
    if ( v8 )
    {
      v9 = 0;
      qfree(v8);
      v10 = 0;
      v8 = nullptr;
    }
  }
  return v3;
}
