/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_677EC
// Address: 0x000677EC

//----- (000677EC) --------------------------------------------------------
int __fastcall sub_677EC(int a1, const char **a2)
{
  int v4; // r7
  size_t v5; // r6
  void *v6; // r2
  const void *v7; // r1
  void *v9; // [sp+0h] [bp-4Ch]
  int v10; // [sp+4h] [bp-48h]
  void *v11; // [sp+10h] [bp-3Ch] BYREF
  unsigned int v12; // [sp+14h] [bp-38h]
  int v13; // [sp+18h] [bp-34h]
  unsigned __int8 *v14[10]; // [sp+1Ch] [bp-30h] BYREF
  char v15; // [sp+44h] [bp-8h]

  sub_41FA4();
  if ( sub_24FA8() )
  {
    v10 = a1;
    v12 = 0;
    v11 = nullptr;
    v13 = 0;
    if ( qgetenv("IDA_DBGSRV_PASSWD", (int)&v11) )
    {
      v4 = v12;
      v5 = v12 - 1;
      if ( v12 < 2 )
      {
        dword_DE498 = 0;
      }
      else
      {
        v6 = (void *)dword_DE494;
        v7 = v11;
        if ( dword_DE49C < v12 )
        {
          v9 = v11;
          v6 = qvector_reserve((int)&dword_DE494, (void *)dword_DE494, v12, 1u);
          dword_DE494 = (int)v6;
          v7 = v9;
        }
        dword_DE498 = v4;
        memmove(v6, v7, v5);
        *(_BYTE *)(dword_DE494 + v5) = 0;
      }
    }
    sub_6F20C("IDA Android 32-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    byte_DE4A0 = byte_DE440;
    memset(v14, 0, 0x24u);
    v15 = 1;
    v14[9] = (unsigned __int8 *)sub_6F20C;
    sub_6BDC0((int)&dword_DE458, (int)v14, 1);
    cliopts_t_add((int)v14, &dword_DA338, 1);
    if ( byte_DE4A0 )
      cliopts_t_add((int)v14, &dword_DA34C, 2);
    cliopts_t_apply(v14, v10, a2, (int)&dword_DE458);
    sub_6BF04((int)&dword_DE458);
    sub_6BF34((int)&dword_DE458);
    if ( v14[6] )
    {
      v14[7] = nullptr;
      qfree(v14[6]);
      v14[8] = nullptr;
      v14[6] = nullptr;
    }
    if ( v14[3] )
    {
      v14[4] = nullptr;
      qfree(v14[3]);
      v14[5] = nullptr;
      v14[3] = nullptr;
    }
    if ( v14[0] )
    {
      v14[1] = nullptr;
      qfree(v14[0]);
      v14[2] = nullptr;
      v14[0] = nullptr;
    }
    if ( v11 )
    {
      v12 = 0;
      qfree(v11);
      v13 = 0;
      v11 = nullptr;
    }
    return 0;
  }
  else
  {
    sub_6F20C("Could not initialize subsystem!");
    return -1;
  }
}
// DA338: using guessed type int dword_DA338;
// DA34C: using guessed type int dword_DA34C;
// DE440: using guessed type char byte_DE440;
// DE458: using guessed type int dword_DE458;
// DE494: using guessed type int dword_DE494;
// DE498: using guessed type int dword_DE498;
// DE49C: using guessed type int dword_DE49C;
// DE4A0: using guessed type char byte_DE4A0;
