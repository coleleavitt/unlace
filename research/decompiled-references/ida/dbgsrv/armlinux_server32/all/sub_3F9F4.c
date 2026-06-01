/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F9F4
// Address: 0x0003F9F4

//----- (0003F9F4) --------------------------------------------------------
void sub_3F9F4()
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

  sub_78D38((int)sub_3FCA4);
  dword_D4AB0 = (int)sub_7A070();
  v0 = sub_7A070();
  v1 = v0 == nullptr;
  if ( !dword_D4AB0 )
    v1 = 1;
  dword_D4A20 = (int)v0;
  if ( v1 )
  {
    if ( !under_debugger )
      sub_78C64(486);
    goto LABEL_5;
  }
  v2 = (_DWORD *)sub_3E4E0();
  v3 = sub_4E484(nullptr, 0, 0, 0);
  v2[4] = v3;
  sub_4C830((int)v3, (int)sub_3927C);
  v4 = dword_D3CE8;
  v2[5] = off_D3CEC;
  v2[6] = v4;
  sub_3F50C("object", 0);
  sub_3F50C("typeinfo", 0);
  v5 = sub_3F50C("exception", 0);
  if ( off_D3CF8 )
    v5 = (_DWORD *)((int (__fastcall *)(_DWORD *))off_D3CF8)(v5);
  if ( byte_D4BC1 )
  {
    v6 = off_D3D64(v5);
    v7 = sub_4C568(v6, v16, 4096, (int)"idc.idc", nullptr, 0);
    if ( v7 )
    {
      v13 = nullptr;
      v14 = 0;
      v15 = 0;
      if ( !sub_3C870((int)v7, (void **)&v13, 0) )
      {
        v9 = v14;
        if ( v14 )
        {
          v10 = v13;
        }
        else
        {
          v9 = 1568;
          v10 = &dword_8DB98;
        }
        sub_23528((int)"%s", (int)v10, v8, v9);
        if ( v13 )
        {
          v14 = 0;
          sub_77F70(v13);
        }
        return;
      }
      v11 = sub_4E51C(v2[4]);
      v12 = v13;
      v2[3] = v11;
      if ( v12 )
      {
        v14 = 0;
        sub_77F70(v12);
      }
    }
  }
  if ( sub_3D66C((int)dword_D3D20) )
  {
    if ( !under_debugger )
      sub_78C64(1447);
LABEL_5:
    __und(0xFFu);
  }
}
// 3FAF2: variable 'v8' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D3CE8: using guessed type int dword_D3CE8;
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
// D3CF8: using guessed type _UNKNOWN *off_D3CF8;
// D3D20: using guessed type int dword_D3D20[3];
// D3D64: using guessed type int (__fastcall *off_D3D64)(_DWORD);
// D4A20: using guessed type int dword_D4A20;
// D4AB0: using guessed type int dword_D4AB0;
// D4BC1: using guessed type char byte_D4BC1;
// D6C20: using guessed type char under_debugger;
