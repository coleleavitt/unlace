/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ecmp
// Address: 0x00000000000B8860

//----- (00000000000B8860) ----------------------------------------------------
__int64 __fastcall ecmp(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // cx
  unsigned __int16 v3; // dx
  unsigned __int16 v4; // r11
  unsigned __int16 v5; // r10
  unsigned int v6; // esi
  __int64 result; // rax
  __int16 v8; // [rsp+0h] [rbp-48h]
  unsigned __int16 v9; // [rsp+Ah] [rbp-3Eh]
  unsigned __int16 v10; // [rsp+Ch] [rbp-3Ch]
  unsigned __int16 v11; // [rsp+Eh] [rbp-3Ah]
  unsigned __int16 v12; // [rsp+10h] [rbp-38h]
  unsigned __int16 v13; // [rsp+12h] [rbp-36h]

  v2 = a1[7] & 0x7FFF;
  v8 = (__int16)a2[7] >> 15;
  v3 = a2[7] & 0x7FFF;
  v4 = a2[6];
  v5 = a2[5];
  v9 = a2[4];
  v10 = a2[3];
  v11 = a2[2];
  v12 = a2[1];
  v13 = *a2;
  v6 = 2 * ((a1[7] & 0x8000u) == 0) - 1;
  if ( (__int16)a1[7] >> 15 != v8 )
    return v6;
  if ( v2 != v3
    || (v2 = a1[6], v3 = v4, v2 != v4)
    || (v2 = a1[5], v3 = v5, v2 != v5)
    || (v2 = a1[4], v3 = v9, v2 != v9)
    || (v2 = a1[3], v3 = v10, v2 != v10)
    || (v2 = a1[2], v3 = v11, v2 != v11)
    || (v2 = a1[1], v3 = v12, v2 != v12)
    || (v2 = *a1, v3 = v13, result = 0, *a1 != v13) )
  {
    result = 1 - 2 * (unsigned int)((a1[7] & 0x8000u) == 0);
    if ( v2 > v3 )
      return v6;
  }
  return result;
}
