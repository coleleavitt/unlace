/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_743BC
// Address: 0x00000000000743BC

//----- (00000000000743BC) ----------------------------------------------------
void __fastcall sub_743BC(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // x9
  bool v4; // cf
  unsigned __int64 v5; // x1
  unsigned __int8 v6[8]; // [xsp+8h] [xbp-38h] BYREF
  void *ptr; // [xsp+10h] [xbp-30h]
  __int64 v8; // [xsp+18h] [xbp-28h]
  __int64 v9; // [xsp+20h] [xbp-20h]
  __int64 v10; // [xsp+28h] [xbp-18h]

  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a1[4];
  v4 = v2 >= a2;
  v5 = v2 - a2;
  if ( !v4 )
  {
    if ( !under_debugger )
      interr(285);
    __break(1u);
    sub_39134(a1);
  }
  if ( a2 )
  {
    v6[0] = 2;
    v8 = 0;
    v9 = 0;
    ptr = nullptr;
    sub_65F94((pthread_mutex_t *)(a1 + 3), v5, v6);
    if ( v6[0] == 5 )
    {
      sub_6F17C((__int64)ptr, v6);
    }
    else if ( v6[0] == 7 && ptr )
    {
      v8 = 0;
      qfree(ptr);
      ptr = nullptr;
      v9 = 0;
    }
  }
}
// 168DF0: using guessed type char under_debugger;
