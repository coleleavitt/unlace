/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A220
// Address: 0x0007A220

//----- (0007A220) --------------------------------------------------------
bool __fastcall sub_7A220(int *a1)
{
  char *v2; // r2
  char *v3; // r6
  int v4; // r4
  void *v6[3]; // [sp+10h] [bp-101Ch] BYREF
  char *v7; // [sp+1Ch] [bp-1010h] BYREF
  int v8; // [sp+20h] [bp-100Ch]
  int v9; // [sp+24h] [bp-1008h]
  char v10[4100]; // [sp+28h] [bp-1004h] BYREF

  get_ida_subdirs(a1, "cfg", 6);
  v8 = 0;
  v7 = nullptr;
  v9 = 0;
  if ( sub_79EB4((int)&v7) )
  {
    v2 = v8 ? v7 : &byte_B3CBE;
    v3 = qmakepath(v10, 4096, v2);
    if ( qisdir(v3) )
    {
      sub_1B09C((int)v6, v3);
      sub_265B0((int)a1, v6);
      if ( v6[0] )
      {
        v6[1] = nullptr;
        qfree(v6[0]);
        v6[2] = nullptr;
        v6[0] = nullptr;
      }
    }
  }
  v4 = a1[1];
  if ( v7 )
  {
    v8 = 0;
    qfree(v7);
    v9 = 0;
    v7 = nullptr;
  }
  return v4 != 0;
}
// B3CBE: using guessed type char byte_B3CBE;
