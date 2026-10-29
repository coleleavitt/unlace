/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39180
// Address: 0x0000000000039180

//----- (0000000000039180) ----------------------------------------------------
__int64 __fastcall sub_39180(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d

  v4 = 0;
  if ( (unsigned int)sub_3D950(a1, 0xFFFFFFFF, a3, a2 + 8, 1, 0) == 1 )
  {
    v4 = 0;
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)a1 + 312LL))(
           a1,
           0,
           4,
           a3,
           0xFFFFFFFFLL) )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 9) = 1;
      LOBYTE(v4) = 1;
    }
  }
  return v4;
}
