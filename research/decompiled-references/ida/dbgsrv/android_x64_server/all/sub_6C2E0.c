/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C2E0
// Address: 0x000000000006C2E0

//----- (000000000006C2E0) ----------------------------------------------------
char __fastcall sub_6C2E0(__int64 *a1, unsigned __int64 a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rbp
  int v7; // r15d
  unsigned __int64 v8; // r14
  int v9; // eax
  int v11; // [rsp+8h] [rbp-50h]
  int v12; // [rsp+Ch] [rbp-4Ch]
  unsigned __int64 v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v14[1] = __readfsqword(0x28u);
  v3 = *a1;
  v4 = a1[1];
  if ( *(__int16 *)(*a1 + v4 - 2) <= 0 )
    return 0;
  v5 = v3 + v4 - 2;
  v14[0] = a1[3] + v3;
  v12 = unpack_dd(v14, v5);
  if ( v12 <= 0 || v14[0] >= v5 )
    return 0;
  LODWORD(v6) = 0;
  v7 = 1;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    v6 = (unsigned int)v6 + (unsigned int)unpack_dd(v14, v5);
    v8 = (unsigned int)v8 + (unsigned int)unpack_dd(v14, v5);
    v11 = unpack_dd(v14, v5);
    v9 = unpack_dd(v14, v5);
    if ( v6 <= a2 && v8 > a2 )
      break;
    if ( v7 < v12 )
    {
      ++v7;
      if ( v14[0] < v5 )
        continue;
    }
    return 0;
  }
  *a3 = v6;
  a3[1] = v8;
  a3[2] = v11;
  a3[3] = v9;
  return 1;
}
