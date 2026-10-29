/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AA10
// Address: 0x0004AA10

//----- (0004AA10) --------------------------------------------------------
int __fastcall sub_4AA10(int *a1, unsigned __int8 *a2)
{
  int v3; // r1
  int result; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r0
  unsigned __int8 v9[8]; // [sp+Ch] [bp-1Ch] BYREF
  void *v10; // [sp+14h] [bp-14h]
  int v11; // [sp+18h] [bp-10h]
  int v12; // [sp+1Ch] [bp-Ch]
  int v13; // [sp+20h] [bp-8h]

  v3 = move_idcv(a2, (unsigned __int8 *)(*a1 + 24 * a1[1] - 24));
  result = 0;
  if ( !v3 )
  {
    v5 = *a1;
    v6 = a1[1];
    v9[0] = 2;
    v13 = 0;
    v12 = 0;
    v11 = 0;
    v10 = nullptr;
    copy_idcv(v9, (unsigned __int8 *)(v5 + 24 * v6 - 24));
    v7 = a1[1];
    if ( v7 )
    {
      v8 = v7 - 1;
      a1[1] = v8;
      free_idcv((unsigned __int8 *)(*a1 + 24 * v8));
    }
    if ( v9[0] == 5 )
    {
      sub_448A0((int)v10, v9);
    }
    else if ( v9[0] == 7 )
    {
      if ( v10 )
      {
        v11 = 0;
        qfree(v10);
        v12 = 0;
        v10 = nullptr;
      }
    }
    return 1;
  }
  return result;
}
