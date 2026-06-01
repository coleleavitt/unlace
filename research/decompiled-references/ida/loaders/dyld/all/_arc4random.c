uint32_t arc4random(void)
{
  int v0; // w8
  char v1; // w19
  char v2; // w11
  __int64 v3; // x12
  char v4; // w14
  char v5; // w13
  __int64 v6; // x15
  char v7; // w16
  int v8; // w21
  __int64 v9; // x12
  char v10; // w14
  unsigned __int8 v11; // w13
  char v12; // w16
  unsigned __int8 v13; // w22
  __int64 v14; // x12
  char v15; // w14
  unsigned __int8 v16; // w13
  char v17; // w16
  unsigned __int8 v18; // w23
  __int64 v19; // x11
  __int64 v20; // x10
  char v21; // w13
  int v22; // w24

  os_unfair_lock_lock(&arc4_lock);
  v0 = arc4_count;
  v1 = rs_stired ^ 1 | (arc4_count < 1);
  if ( ((unsigned __int8)rs_stired ^ 1) & 1 | (arc4_count < 1) )
  {
    arc4_stir();
    v0 = arc4_count;
  }
  v2 = rs;
  v3 = (unsigned __int8)(rs + 1);
  v4 = *((_BYTE *)&unk_9C012 + v3);
  v5 = byte_9C011 + v4;
  v6 = (unsigned __int8)(byte_9C011 + v4);
  v7 = *((_BYTE *)&unk_9C012 + v6);
  *((_BYTE *)&unk_9C012 + v3) = v7;
  *((_BYTE *)&unk_9C012 + v6) = v4;
  v8 = *((unsigned __int8 *)&unk_9C012 + (unsigned __int8)(v7 + v4));
  v9 = (unsigned __int8)(v2 + 2);
  v10 = *((_BYTE *)&unk_9C012 + v9);
  v11 = v10 + v5;
  v12 = *((_BYTE *)&unk_9C012 + v11);
  *((_BYTE *)&unk_9C012 + v9) = v12;
  *((_BYTE *)&unk_9C012 + v11) = v10;
  v13 = *((_BYTE *)&unk_9C012 + (unsigned __int8)(v12 + v10));
  v14 = (unsigned __int8)(v2 + 3);
  v15 = *((_BYTE *)&unk_9C012 + v14);
  v16 = v15 + v11;
  v17 = *((_BYTE *)&unk_9C012 + v16);
  *((_BYTE *)&unk_9C012 + v14) = v17;
  *((_BYTE *)&unk_9C012 + v16) = v15;
  v18 = *((_BYTE *)&unk_9C012 + (unsigned __int8)(v17 + v15));
  rs = v2 + 4;
  v19 = (unsigned __int8)(v2 + 4);
  LOBYTE(v14) = *((_BYTE *)&unk_9C012 + v19);
  byte_9C011 = v14 + v16;
  v20 = (unsigned __int8)(v14 + v16);
  v21 = *((_BYTE *)&unk_9C012 + v20);
  *((_BYTE *)&unk_9C012 + v19) = v21;
  *((_BYTE *)&unk_9C012 + v20) = v14;
  v22 = *((unsigned __int8 *)&unk_9C012 + (unsigned __int8)(v21 + v14));
  arc4_count = v0 - 4;
  os_unfair_lock_unlock(&arc4_lock);
  if ( (v1 & 1) != 0 )
  {
    arc4_fetch();
    rs_data_available = 1;
    __dmb(0xBu);
  }
  return (v8 << 24) | (v13 << 16) | (v18 << 8) | v22;
}
