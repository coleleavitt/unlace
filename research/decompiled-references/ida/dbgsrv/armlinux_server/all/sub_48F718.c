/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F718
// Address: 0x000000000048F718

//----- (000000000048F718) ----------------------------------------------------
char *__fastcall sub_48F718(char *a1, unsigned __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x22
  char *v4; // x21
  char *v5; // x19
  unsigned int v6; // w3
  char *v7; // x1
  char v8; // w5
  char v9; // w4
  char v10; // w3
  char v11; // w2
  pthread_t v13; // x0
  int v14; // w26
  unsigned int v15; // [xsp+6Ch] [xbp-14h] BYREF
  char v16[8]; // [xsp+70h] [xbp-10h] BYREF

  v2 = a2;
  if ( (a2 & 0x8000000000000000LL) != 0 )
  {
    if ( !under_debugger )
      sub_492270(1225);
    __break(0x3E8u);
    goto LABEL_21;
  }
  if ( !a1 )
  {
LABEL_21:
    v3 = 9;
    v4 = (char *)qword_523500;
    v2 = 4096;
    goto LABEL_5;
  }
  v3 = 9;
  v4 = a1;
  if ( a2 <= 9 )
    v3 = a2;
LABEL_5:
  sub_48F640((unsigned __int64)v4, v2);
  if ( (unsigned __int8)sub_4902C8(v4) )
    sub_48F278(v4, v2, (unsigned __int8 *)v4, "ida12345.tmp", 0);
  else
    sub_48F278(v4, v2, (unsigned __int8 *)".", "ida12345.tmp", 0);
  v5 = &v4[strlen(v4) - v3];
  do
  {
    if ( sub_4925A0(&v15, 4u) )
    {
      if ( dword_5234F8 )
      {
        v6 = ++dword_5234F8;
      }
      else
      {
        v14 = time(nullptr);
        v6 = (rand() % 1000 + 1000 * v14) % 0x186A0u;
        dword_5234F8 = v6;
      }
      v15 = v6;
    }
    else
    {
      v13 = j__pthread_self();
      v15 ^= v13;
      j__pthread_detach(v13);
      v6 = v15;
    }
    if ( v6 >> 17 )
    {
      v6 = v6 & 0x1FFFF ^ (v6 >> 17);
      v15 = v6;
    }
    sub_49B748(v16, 6u, "%05u", v6);
    v7 = &v16[strlen(v16) - 5];
    v8 = *v7;
    v9 = v7[1];
    v10 = v7[2];
    v11 = v7[3];
    LOBYTE(v7) = v7[4];
    *v5 = v8;
    v5[1] = v9;
    v5[2] = v10;
    v5[3] = v11;
    v5[4] = (char)v7;
  }
  while ( (unsigned __int8)sub_490268(v4) );
  return v4;
}
// 5234F8: using guessed type int dword_5234F8;
// 523500: using guessed type __int64 qword_523500[512];
// 52451C: using guessed type char under_debugger;
