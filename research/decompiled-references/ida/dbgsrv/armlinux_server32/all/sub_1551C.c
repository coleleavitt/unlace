/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1551C
// Address: 0x0001551C

//----- (0001551C) --------------------------------------------------------
bool __fastcall sub_1551C(int a1, int a2, char *a3, unsigned int a4)
{
  int v4; // r4
  _BOOL4 v7; // r7
  _BOOL4 v8; // r0
  int v10; // [sp+4h] [bp-14h] BYREF
  void *ptr; // [sp+8h] [bp-10h] BYREF
  int v12; // [sp+Ch] [bp-Ch]
  int v13; // [sp+10h] [bp-8h]

  v4 = a2;
  v7 = sub_15364(a2, a3, a4);
  if ( !v7 )
  {
    ptr = nullptr;
    v12 = 0;
    v13 = 0;
    do
    {
      if ( !sub_15420(&v10, (int)&ptr, v4) || (v4 = v10, v10 == 1) )
      {
        *a3 = 0;
        goto LABEL_7;
      }
      v8 = sub_15364(v10, a3, a4);
    }
    while ( !v8 );
    v7 = v8;
LABEL_7:
    if ( ptr )
    {
      v12 = 0;
      sub_77F70(ptr);
    }
  }
  return v7;
}
