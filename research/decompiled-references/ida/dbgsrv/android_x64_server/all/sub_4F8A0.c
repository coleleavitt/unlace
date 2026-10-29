/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F8A0
// Address: 0x000000000004F8A0

//----- (000000000004F8A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4F8A0(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 *v3; // rdx

  if ( *(_QWORD *)(a1 + 8) <= 1u )
  {
    v2 = a2[36];
    if ( v2 > a1 || v2 + 96LL * a2[37] < a1 )
    {
      if ( !(_BYTE)under_debugger )
        interr(20086);
      BUG();
    }
    v3 = a2 + 44;
    if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1 - v2) >> 5) < a2[39] )
      v3 = a2 + 40;
    sub_57CE0((__int64)a2, a1, v3, *(_DWORD *)(a1 + 48));
  }
  return a1;
}
// 158B40: using guessed type __int64 under_debugger;
