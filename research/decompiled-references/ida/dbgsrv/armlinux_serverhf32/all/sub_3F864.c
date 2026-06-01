/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F864
// Address: 0x0003F864

//----- (0003F864) --------------------------------------------------------
void sub_3F864()
{
  pthread_mutex_t *v0; // r0
  _BOOL4 v1; // r4
  _DWORD *v2; // r5
  void *v3; // r0
  int v4; // r2
  _DWORD *v5; // r0
  int v6; // r0
  char *v7; // r0
  int v8; // r2
  int v9; // r3
  int *v10; // r1
  int v11; // r0
  int *v12; // r3
  int *v13; // [sp+8h] [bp-1014h] BYREF
  int v14; // [sp+Ch] [bp-1010h]
  int v15; // [sp+10h] [bp-100Ch]
  char v16[4]; // [sp+14h] [bp-1008h] BYREF

  sub_78BD0((int)sub_3FB14);
  dword_D3A90 = (int)sub_79F08();
  v0 = sub_79F08();
  v1 = v0 == nullptr;
  if ( !dword_D3A90 )
    v1 = 1;
  dword_D3A00 = (int)v0;
  if ( v1 )
  {
    if ( !under_debugger )
      sub_78AFC(486);
    goto LABEL_5;
  }
  v2 = (_DWORD *)sub_3E348();
  v3 = sub_4E300(nullptr, 0, 0, 0);
  v2[4] = v3;
  sub_4C6B0((int)v3, (int)sub_390E4);
  v4 = dword_D2CC8;
  v2[5] = off_D2CCC;
  v2[6] = v4;
  sub_3F378("object", 0);
  sub_3F378("typeinfo", 0);
  v5 = sub_3F378("exception", 0);
  if ( off_D2CD8 )
    v5 = (_DWORD *)((int (__fastcall *)(_DWORD *))off_D2CD8)(v5);
  if ( byte_D3BA1 )
  {
    v6 = off_D2D44(v5);
    v7 = sub_4C3E8(v6, v16, 4096, (int)"idc.idc", nullptr, 0);
    if ( v7 )
    {
      v13 = nullptr;
      v14 = 0;
      v15 = 0;
      if ( !sub_3C6D8((int)v7, (void **)&v13, 0) )
      {
        v9 = v14;
        if ( v14 )
        {
          v10 = v13;
        }
        else
        {
          v9 = 1536;
          v10 = &dword_8DA5C;
        }
        sub_23388((int)"%s", (int)v10, v8, v9);
        if ( v13 )
        {
          v14 = 0;
          sub_77E08(v13);
        }
        return;
      }
      v11 = sub_4E398(v2[4]);
      v12 = v13;
      v2[3] = v11;
      if ( v12 )
      {
        v14 = 0;
        sub_77E08(v12);
      }
    }
  }
  if ( sub_3D4D4((int)dword_D2D00) )
  {
    if ( !under_debugger )
      sub_78AFC(1447);
LABEL_5:
    __und(0xFFu);
  }
}
// 3F962: variable 'v8' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// D2CC8: using guessed type int dword_D2CC8;
// D2CCC: using guessed type _UNKNOWN **off_D2CCC;
// D2CD8: using guessed type _UNKNOWN *off_D2CD8;
// D2D00: using guessed type int dword_D2D00[3];
// D2D44: using guessed type int (__fastcall *off_D2D44)(_DWORD);
// D3A00: using guessed type int dword_D3A00;
// D3A90: using guessed type int dword_D3A90;
// D3BA1: using guessed type char byte_D3BA1;
// D5C00: using guessed type char under_debugger;
