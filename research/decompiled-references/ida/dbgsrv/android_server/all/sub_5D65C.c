/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D65C
// Address: 0x000000000005D65C

//----- (000000000005D65C) ----------------------------------------------------
__int64 __fastcall sub_5D65C(__int64 a1, __int64 a2)
{
  char *v3; // x0
  char *v4; // x20
  size_t v5; // x2
  char *s; // [xsp+0h] [xbp-40h] BYREF
  __int64 v8; // [xsp+8h] [xbp-38h]
  __int64 v9; // [xsp+10h] [xbp-30h]
  __int64 v10; // [xsp+18h] [xbp-28h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = 0;
  v9 = 0;
  s = nullptr;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(char **)(a1 + 8);
  else
    v3 = &byte_F154B;
  compile_idc_text((__int64)v3, (__int64)&s, 0, 0);
  if ( v8 )
  {
    v4 = s;
    if ( !s )
    {
      v5 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = &byte_F154B;
  }
  v5 = strlen(v4);
LABEL_9:
  *(_BYTE *)a2 = 7;
  sub_4968C((pthread_mutex_t *)(a2 + 8), v4, v5);
  if ( s )
  {
    v8 = 0;
    qfree(s);
    s = nullptr;
    v9 = 0;
  }
  return 0;
}
// F154B: using guessed type char byte_F154B;
