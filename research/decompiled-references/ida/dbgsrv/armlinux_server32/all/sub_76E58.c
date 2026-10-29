/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76E58
// Address: 0x00076E58

//----- (00076E58) --------------------------------------------------------
unsigned __int8 *__fastcall sub_76E58(unsigned __int8 *a1, int a2)
{
  int v2; // r5
  int v3; // r4
  unsigned __int8 *v4; // r6
  _BOOL4 v5; // r0
  unsigned __int8 *v6; // r2
  unsigned __int8 *v7; // r4
  unsigned int v8; // r3
  char *v9; // r3
  char v10; // lr
  char v11; // r12
  char v12; // r1
  char v13; // r2
  pthread_t v14; // r0
  time_t v16; // r9
  void *v17; // [sp+Ch] [bp-18h]
  unsigned int v18; // [sp+10h] [bp-14h] BYREF
  char v19[8]; // [sp+14h] [bp-10h] BYREF

  v2 = a2;
  v17 = &_stack_chk_guard;
  if ( a2 < 0 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(1225);
  }
  if ( a1 )
  {
    v3 = a2;
    v4 = a1;
    if ( (unsigned int)a2 >= 9 )
      v3 = 9;
  }
  else
  {
    v3 = 9;
    v2 = 4096;
    v4 = (unsigned __int8 *)dword_D5C0C;
  }
  sub_76DCC(v4, v2);
  v5 = sub_775B0((int)v4);
  v6 = v4;
  if ( !v5 )
    v6 = (unsigned __int8 *)".";
  sub_76B98((char *)v4, v2, v6, "ida12345.tmp", 0);
  v7 = &v4[strlen((const char *)v4) - v3];
  do
  {
    if ( sub_78E98(&v18, 4u) )
    {
      if ( dword_D5C08 )
      {
        v8 = ++dword_D5C08;
      }
      else
      {
        v16 = time(nullptr);
        v8 = (rand() % 1000 + 1000 * v16) % 0x186A0u;
        dword_D5C08 = v8;
      }
      v18 = v8;
    }
    else
    {
      v14 = sub_79BF0();
      v18 ^= v14;
      sub_79C14(v14);
      v8 = v18;
    }
    if ( v8 >> 17 )
    {
      v8 = v8 & 0x1FFFF ^ (v8 >> 17);
      v18 = v8;
    }
    sub_7EBB4(v19, 6, "%05u", v8);
    v9 = &v19[strlen(v19) - 5];
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    v13 = v9[3];
    LOBYTE(v9) = v9[4];
    *v7 = v10;
    v7[1] = v11;
    v7[2] = v12;
    v7[3] = v13;
    v7[4] = (unsigned __int8)v9;
  }
  while ( sub_7756C((int)v4) );
  return v4;
}
// D5C08: using guessed type int dword_D5C08;
// D5C0C: using guessed type int dword_D5C0C[1024];
// D6C20: using guessed type char under_debugger;
