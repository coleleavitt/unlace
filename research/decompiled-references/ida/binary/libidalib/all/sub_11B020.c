__int64 __fastcall sub_11B020(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned __int64 v10; // r15
  char v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v20; // [rsp+0h] [rbp-78h]

  LODWORD(v10) = 0;
  if ( find_plugin() )
  {
    v11 = 0;
    if ( a1 )
    {
      v11 = 1;
      v12 = qbasename();
      sub_10E0D0(
        (__int64)"HIDECANCEL\nRetrieving symbol information from '%s'",
        v12,
        v13,
        v14,
        v15,
        v16,
        a3,
        a4,
        a5,
        a6,
        v17,
        v18,
        a9,
        a10,
        v20);
    }
    netnode_check();
    netnode_supset();
    if ( !a2 )
      netnode_supset();
    run_plugin();
    v10 = (unsigned __int64)netnode_supval() >> 63;
    netnode_kill();
    if ( v11 )
      sub_10DB30();
  }
  return (unsigned int)v10;
}

