/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000330D0
// Address: 0x00000001000330D0

//----- (00000001000330D0) ----------------------------------------------------
char __fastcall sub_1000330D0(__int64 *a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbx
  int v7; // r13d
  unsigned __int64 v8; // r12
  int v9; // eax
  int v12; // [rsp+10h] [rbp-40h]
  int v13; // [rsp+14h] [rbp-3Ch]
  unsigned __int64 v14; // [rsp+18h] [rbp-38h] BYREF

  v3 = *a1;
  v4 = a1[1];
  if ( *(__int16 *)(*a1 + v4 - 2) <= 0 )
    return 0;
  v5 = v3 + v4 - 2;
  v14 = a1[3] + v3;
  v12 = unpack_dd(&v14, v5);
  if ( v12 <= 0 || v14 >= v5 )
    return 0;
  LODWORD(v6) = 0;
  v7 = 1;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    v6 = (unsigned int)v6 + (unsigned int)unpack_dd(&v14, v5);
    v8 = (unsigned int)v8 + (unsigned int)unpack_dd(&v14, v5);
    v13 = unpack_dd(&v14, v5);
    v9 = unpack_dd(&v14, v5);
    if ( v6 <= a2 && v8 > a2 )
      break;
    if ( v7 < v12 )
    {
      ++v7;
      if ( v14 < v5 )
        continue;
    }
    return 0;
  }
  *a3 = v6;
  a3[1] = v8;
  a3[2] = v13;
  a3[3] = v9;
  return 1;
}
