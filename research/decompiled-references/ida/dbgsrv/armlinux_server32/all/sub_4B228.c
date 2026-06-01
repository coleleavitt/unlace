/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B228
// Address: 0x0004B228

//----- (0004B228) --------------------------------------------------------
bool __fastcall sub_4B228(unsigned __int8 *a1, int a2)
{
  _BOOL4 v4; // r8
  int v5; // r3
  unsigned __int8 *v6; // r6
  int v7; // r3
  void *v8; // r1
  int v10; // r2
  _BYTE *v11; // r0
  int v12; // r2
  unsigned __int8 *v13; // r3
  void *v14; // [sp+14h] [bp-5048h] BYREF
  int v15; // [sp+18h] [bp-5044h]
  unsigned int v16; // [sp+1Ch] [bp-5040h]
  int v17; // [sp+20h] [bp-503Ch] BYREF
  unsigned __int8 v18[52]; // [sp+24h] [bp-5038h] BYREF
  int v19; // [sp+2040h] [bp-301Ch]
  int v20; // [sp+2048h] [bp-3014h]
  unsigned __int8 v21[4012]; // [sp+4054h] [bp-1008h] BYREF

  v4 = sub_7756C((int)a1);
  if ( !v4 )
  {
    v14 = nullptr;
    v15 = 0;
    v16 = 0;
    v21[0] = 0;
    while ( 1 )
    {
      v6 = sub_76C6C(a1);
      v7 = v15;
      v8 = v14;
      if ( v15 + 1 > v16 )
      {
        v8 = sub_78018((int)&v14, v14, v15 + 1, 4u);
        v7 = v15;
        v14 = v8;
      }
      *((_DWORD *)v8 + v7) = v6;
      v5 = ++v15;
      if ( a1 == v6 )
        break;
      *(v6 - 1) = 0;
      if ( sub_775B0((int)a1) )
      {
        sub_7968C(v21, a1, 4096);
        v5 = v15;
        break;
      }
    }
    if ( v5 )
    {
      while ( 1 )
      {
        v12 = v5 - 1;
        v13 = *((unsigned __int8 **)v14 + v5 + 0x3FFFFFFF);
        v15 = v12;
        if ( v21[0] )
          sub_76B98((char *)v21, 4096, v21, v13, 0);
        else
          sub_7968C(v21, v13, 4096);
        v20 = 0;
        v19 = 0;
        v10 = v15 ? 0x4000 : 0;
        if ( sub_7678C(v21, (int)&v17, v10) )
          break;
        v11 = sub_76C6C(v21);
        sub_7968C(v11, v18, 4096 - (v11 - v21));
        sub_767CC((int)&v17);
        v5 = v15;
        if ( !v15 )
          goto LABEL_7;
      }
      sub_767CC((int)&v17);
    }
    else
    {
LABEL_7:
      sub_7968C(a1, v21, a2);
      v4 = 1;
    }
    if ( v14 )
    {
      v15 = 0;
      sub_77F70(v14);
    }
  }
  return v4;
}
