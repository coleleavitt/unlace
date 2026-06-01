unsigned __int64 __fastcall sub_676100(unsigned __int64 a1, int a2, int a3, char a4, char a5)
{
  unsigned __int64 v8; // r9
  int v10; // esi
  bool v11; // sf
  int v12; // edx
  __int64 v13; // r15
  int v14; // ebx
  signed int v15; // esi
  int v16; // r11d
  __int64 v17; // rdx
  char v18; // r8
  char v19; // r12
  char v20; // al
  unsigned __int64 v21; // rdi
  int v22; // ebx
  int v23; // r10d
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // rax
  char v26; // cl
  int v27; // [rsp+0h] [rbp-3Ch]
  int v28; // [rsp+4h] [rbp-38h]
  char v29; // [rsp+Bh] [rbp-31h]

  if ( a4 || (v8 = a1, a5) )
  {
    v10 = a3 + 14;
    v11 = a3 + 7 < 0;
    v12 = a3 + 7;
    v13 = -1;
    if ( !v11 )
      v10 = v12;
    v27 = v12;
    v14 = v10;
    v15 = v10 & 0xFFFFFFF8;
    v28 = v14 >> 3;
    if ( (unsigned __int64)v15 <= 0x3F )
      v13 = (1LL << v15) - 1;
    v16 = a2 - 1;
    v8 = 0;
    if ( a2 > 0 )
    {
      v17 = v13;
      v18 = v16 * v15;
      v19 = 0;
      v20 = a4 & (v15 > 8);
      do
      {
        v21 = (a1 & (v17 << v18)) >> v18;
        if ( v20 )
        {
          if ( v27 <= 7 )
          {
            v21 = 0;
          }
          else
          {
            v29 = v20;
            v22 = v28;
            v23 = 0;
            v24 = 0;
            do
            {
              v25 = (v21 & (255LL << ((unsigned __int8)v15 - 8 - v23))) >> ((unsigned __int8)v15 - 8 - v23);
              v26 = v23;
              v23 += 8;
              v24 |= v25 << v26;
              --v22;
            }
            while ( v22 );
            v20 = v29;
            v21 = v24;
          }
        }
        if ( a5 )
          v8 |= v21 << v19;
        else
          v8 = v21 | (v8 << v15);
        --v16;
        v18 -= v15;
        v19 += v15;
      }
      while ( v16 != -1 );
    }
  }
  return v8;
}
