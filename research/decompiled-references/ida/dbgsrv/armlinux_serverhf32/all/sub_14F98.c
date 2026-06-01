/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14F98
// Address: 0x00014F98

//----- (00014F98) --------------------------------------------------------
int __fastcall sub_14F98(int a1, int a2)
{
  FILE *v2; // r5
  int v3; // r6
  double v4; // r2
  const char *v6; // r6
  char *v7; // r0
  double v8; // [sp+0h] [bp-20h]
  char v9; // [sp+8h] [bp-18h] BYREF
  char v10; // [sp+Ch] [bp-14h] BYREF
  void *ptr; // [sp+10h] [bp-10h] BYREF
  unsigned int v12; // [sp+14h] [bp-Ch]
  int v13; // [sp+18h] [bp-8h]
  _BYTE v14[4068]; // [sp+1Ch] [bp-4h] BYREF

  HIDWORD(v8) = &_stack_chk_guard;
  sub_7EA4C(v14, 4096, "/proc/%u/maps", a2);
  v2 = sub_75CB0((int)v14);
  if ( !v2 )
    return 0;
  v3 = 0;
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  while ( sub_77C2C((int *)&ptr, v2) >= 0 )
  {
    while ( v12 > 1 )
    {
      HIDWORD(v4) = &v10;
      LODWORD(v4) = &v9;
      if ( sub_7EAE4((int)ptr, "%a-%a ", v4, v8) == 2 )
      {
        v6 = (const char *)(v12 ? ptr : &dword_8DA5C);
        v7 = strchr(v6, 45);
        if ( v7 )
        {
          if ( (unsigned int)(v7 - v6 - 9) <= 0xFFFFFFF5 )
          {
            v3 = 8;
            goto LABEL_7;
          }
        }
      }
      v3 = 4;
      if ( sub_77C2C((int *)&ptr, v2) < 0 )
        goto LABEL_7;
    }
  }
LABEL_7:
  sub_77754(v2);
  if ( ptr )
  {
    v12 = 0;
    sub_77E08(ptr);
  }
  return v3;
}
// 15012: variable 'v8' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
