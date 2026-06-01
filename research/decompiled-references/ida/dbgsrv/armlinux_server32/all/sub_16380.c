/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16380
// Address: 0x00016380

//----- (00016380) --------------------------------------------------------
int __fastcall sub_16380(int a1)
{
  FILE *v1; // r0
  FILE *v2; // r6
  int v3; // r5
  int v4; // r9
  unsigned __int8 *v5; // r10
  int v6; // r5
  int v8; // r0
  unsigned __int8 *v9; // r5
  int v10; // t1
  void *ptr; // [sp+8h] [bp-10h] BYREF
  unsigned int v12; // [sp+Ch] [bp-Ch]
  int v13; // [sp+10h] [bp-8h]
  _BYTE v14[4076]; // [sp+14h] [bp-4h] BYREF

  sub_7EBB4(v14, 4096, "/proc/%u/status", a1);
  v1 = sub_75E18((int)v14);
  if ( !v1 )
    return 32;
  v2 = v1;
  v3 = 3;
  v12 = 0;
  ptr = nullptr;
  v13 = 0;
  while ( 1 )
  {
    v4 = sub_77D94((int *)&ptr, v2);
    if ( v4 < 0 )
      goto LABEL_7;
    if ( v12 > 6 )
    {
      v5 = (unsigned __int8 *)ptr;
      if ( !strncmp((const char *)ptr, "State:", 6u) )
        break;
    }
    if ( !--v3 )
      goto LABEL_7;
  }
  v8 = v5[6];
  v9 = v5 + 6;
  if ( !v5[6] )
  {
LABEL_7:
    sub_778BC(v2);
    if ( v4 >= 0 )
    {
      if ( under_debugger )
        __und(0xFFu);
      sub_78C64(30060);
    }
    v6 = 32;
    goto LABEL_11;
  }
  while ( isspace(v8) )
  {
    v10 = *++v9;
    v8 = v10;
    if ( !v10 )
      goto LABEL_7;
  }
  sub_778BC(v2);
  v6 = *v9;
LABEL_11:
  if ( ptr )
  {
    v12 = 0;
    sub_77F70(ptr);
  }
  return v6;
}
// D6C20: using guessed type char under_debugger;
