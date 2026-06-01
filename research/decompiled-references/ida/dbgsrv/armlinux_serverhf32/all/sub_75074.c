/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75074
// Address: 0x00075074

//----- (00075074) --------------------------------------------------------
int __fastcall sub_75074(int a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned int v7; // r5
  void *v8; // r1
  int v9; // r7
  signed int v10; // r4
  signed int v11; // r0
  int v12; // r6
  int v13; // r3
  int v14; // r0
  void *v16; // [sp+8h] [bp-1Ch] BYREF
  signed int v17; // [sp+Ch] [bp-18h] BYREF
  void *ptr; // [sp+10h] [bp-14h] BYREF
  unsigned int v19; // [sp+14h] [bp-10h]
  int v20; // [sp+18h] [bp-Ch]

  v7 = a2;
  ptr = nullptr;
  v19 = 0;
  v20 = 0;
  if ( !a4 )
  {
    if ( !a2 )
      return 0;
    v8 = nullptr;
    goto LABEL_4;
  }
  v8 = sub_77EB0((int)&ptr, nullptr, a4, 1u);
  ptr = v8;
  v19 = a4;
  if ( v7 )
  {
LABEL_4:
    v9 = 0;
    while ( 1 )
    {
      v10 = v7;
      if ( v7 >= a4 )
        v10 = a4;
      v11 = sub_74A28(a1, v8, v10);
      v12 = v11;
      v8 = ptr;
      if ( v11 > 0 )
      {
        v13 = *(_DWORD *)(a3 + 8);
        v16 = ptr;
        v17 = v11;
        if ( !v13 )
          sub_83914();
        v14 = (*(int (__fastcall **)(int, void **, signed int *))(a3 + 12))(a3, &v16, &v17);
        v8 = ptr;
        if ( !v14 )
        {
          v9 = -1;
          goto LABEL_14;
        }
      }
      v9 += v12;
      if ( v10 != v12 )
        break;
      v7 -= v10;
      if ( !v7 )
        goto LABEL_14;
    }
    if ( v12 < 0 )
      v9 = -1;
    goto LABEL_14;
  }
  v9 = 0;
LABEL_14:
  if ( v8 )
  {
    v19 = 0;
    sub_77E08(v8);
  }
  return v9;
}
