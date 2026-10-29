/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D434
// Address: 0x0003D434

//----- (0003D434) --------------------------------------------------------
int __fastcall sub_3D434(int a1, int a2, int a3, char a4)
{
  int v6; // r6
  _DWORD *v7; // r5
  void *v8; // r0
  _DWORD v12[4]; // [sp+10h] [bp-104h] BYREF
  char v13; // [sp+20h] [bp-F4h]
  _DWORD v14[3]; // [sp+28h] [bp-ECh] BYREF
  __int16 v15; // [sp+34h] [bp-E0h]
  int v16; // [sp+38h] [bp-DCh]
  char v17; // [sp+3Ch] [bp-D8h]
  int v18; // [sp+40h] [bp-D4h]
  int v19; // [sp+44h] [bp-D0h]
  int v20; // [sp+48h] [bp-CCh]
  int v21; // [sp+4Ch] [bp-C8h]
  int v22; // [sp+50h] [bp-C4h]
  _DWORD v23[13]; // [sp+54h] [bp-C0h] BYREF
  char v24; // [sp+88h] [bp-8Ch]
  int v25; // [sp+8Ch] [bp-88h]
  char v26; // [sp+90h] [bp-84h]
  _BYTE v27[96]; // [sp+94h] [bp-80h] BYREF
  int v28; // [sp+F4h] [bp-20h]
  int v29; // [sp+F8h] [bp-1Ch]
  int v30; // [sp+FCh] [bp-18h]
  int v31; // [sp+100h] [bp-14h]
  int v32; // [sp+104h] [bp-10h]
  char v33; // [sp+108h] [bp-Ch]

  v17 = 0;
  v13 = 0;
  v15 = 0;
  v12[1] = 0;
  v12[0] = sub_3D420;
  v12[2] = &off_D9770;
  v12[3] = &off_D9820;
  v16 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  memset(v14, 0, sizeof(v14));
  v22 = a1;
  memset(v23, 0, sizeof(v23));
  v24 = -90;
  v26 = 0;
  v25 = 0;
  memset(v27, 0, sizeof(v27));
  v33 = a4;
  v29 = 0;
  v28 = a2;
  v30 = 0;
  v31 = 0;
  v32 = -1;
  sub_55960(*(_DWORD *)(a1 + 16), (int)v12);
  set_qerrno(0);
  v6 = sub_56FCC((int)v12, 0);
  if ( !v6 )
  {
    sub_3D53C(*(_DWORD **)(a1 + 16), (int)v14, a3);
    v7 = (_DWORD *)v23[11];
    if ( v23[11] )
    {
      v8 = *(void **)v23[11];
      if ( *(_DWORD *)v23[11] )
      {
        *(_DWORD *)(v23[11] + 4) = 0;
        qfree(v8);
        v7[2] = 0;
        *v7 = 0;
      }
    }
    sub_38F58(v12);
  }
  sub_55960(*(_DWORD *)(a1 + 16), 0);
  sub_3D700(v12);
  return v6;
}
// D9770: using guessed type _UNKNOWN *off_D9770;
// D9820: using guessed type _UNKNOWN *off_D9820;
