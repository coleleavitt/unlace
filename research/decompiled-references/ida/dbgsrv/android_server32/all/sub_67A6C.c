/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67A6C
// Address: 0x00067A6C

//----- (00067A6C) --------------------------------------------------------
int __fastcall sub_67A6C(_DWORD *a1, int a2)
{
  int v3; // r7
  char *v4; // r1
  int v5; // r0
  int v6; // r6
  int v7; // r2
  void *v8; // r0
  int v9; // r0
  int v12; // [sp+18h] [bp-1Ch] BYREF
  void *v13; // [sp+20h] [bp-14h]
  int v14; // [sp+24h] [bp-10h]
  int v15; // [sp+28h] [bp-Ch]
  int v16; // [sp+2Ch] [bp-8h]

  v3 = sub_6762C();
  if ( a1[9] )
    v4 = (char *)a1[8];
  else
    v4 = &byte_B3CBE;
  v5 = (*(int (__fastcall **)(int, char *, _DWORD))(*(_DWORD *)v3 + 244))(v3, v4, 0);
  if ( v5 < 0 )
  {
    if ( !under_debugger )
      interr(30055);
    __debugbreak();
  }
  v6 = v5;
  v7 = idcv_int64((int)a1);
  if ( !v7 )
  {
    v16 = 0;
    v15 = 0;
    v12 = -2;
    v8 = (void *)a1[2];
    v14 = a1[3];
    v13 = v8;
    v9 = sub_67638();
    *(_DWORD *)(a2 + 8) = (*(int (__fastcall **)(int, int, int, int *, _DWORD))(*(_DWORD *)v3 + 116))(
                            v3,
                            v9,
                            v6,
                            &v12,
                            0);
    v7 = 0;
    if ( v12 >= -1 )
    {
      if ( v13 )
      {
        v14 = 0;
        qfree(v13);
        v15 = 0;
        v13 = nullptr;
        v7 = 0;
      }
      v12 = -2;
    }
  }
  return v7;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
