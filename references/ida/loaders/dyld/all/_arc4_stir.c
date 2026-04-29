__int64 arc4_stir()
{
  __int64 result; // x0
  int v1; // w11
  int v2; // w9
  int v3; // w13
  int v4; // w15
  int v5; // w11
  int v6; // w13
  unsigned __int8 v7; // w12
  char v8; // w15

  if ( !rs_data_available )
    result = arc4_fetch();
  v1 = 0;
  rs_data_available = 0;
  __dmb(0xBu);
  v2 = (unsigned __int8)rs - 1;
  v3 = (unsigned __int8)byte_9C011;
  do
  {
    v4 = *((unsigned __int8 *)&unk_9C012 + (unsigned __int8)++v2);
    v3 += v4 + rdat[v1 & 0x7F];
    *((_BYTE *)&unk_9C012 + (unsigned __int8)v2) = *((_BYTE *)&unk_9C012 + (unsigned __int8)v3);
    *((_BYTE *)&unk_9C012 + (unsigned __int8)v3) = v4;
    ++v1;
  }
  while ( v1 != 256 );
  v5 = 1024;
  v6 = v2;
  v7 = v2;
  do
  {
    v8 = *((_BYTE *)&unk_9C012 + (unsigned __int8)++v6);
    v7 += v8;
    *((_BYTE *)&unk_9C012 + (unsigned __int8)v6) = *((_BYTE *)&unk_9C012 + v7);
    *((_BYTE *)&unk_9C012 + v7) = v8;
    --v5;
  }
  while ( v5 );
  rs = v2;
  byte_9C011 = v7;
  arc4_count = 1600000;
  rs_stired = 1;
  return result;
}
