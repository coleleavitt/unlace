/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6420
// Address: 0x00000000000A6420

//----- (00000000000A6420) ----------------------------------------------------
unsigned __int64 __fastcall sub_A6420(__int64 a1, unsigned __int64 *a2)
{
  int v3; // eax
  __int64 v4; // r15
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  char *v7; // rax
  __int64 v8; // rbx
  char *v9; // rbp
  _OWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v3 = unpack_dd(a2, a2[1]);
  LODWORD(v4) = v3;
  v5 = v3;
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 < v3 )
  {
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)v3 )
    {
      v7 = *(char **)a1;
    }
    else
    {
      v7 = (char *)qvector_reserve(a1, *(char **)a1, v3, 0x20u);
      *(_QWORD *)a1 = v7;
      v6 = *(_QWORD *)(a1 + 8);
    }
    memset(&v7[32 * v6], 0, 32 * (v5 - v6));
    *(_QWORD *)(a1 + 8) = v5;
LABEL_9:
    if ( (int)v4 <= 0 )
      return __readfsqword(0x28u);
    goto LABEL_10;
  }
  if ( v6 == v3 )
    goto LABEL_9;
  memset(v11, 0, sizeof(v11));
  sub_A6FD0(a1, v3, (char *)v11);
  if ( (int)v4 <= 0 )
    return __readfsqword(0x28u);
LABEL_10:
  v4 = (unsigned int)v4;
  v8 = 24;
  do
  {
    v9 = *(char **)a1;
    *(_QWORD *)&v9[v8 - 24] = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)&v9[v8 - 16] = unpack_dq(a2, a2[1]) - 1;
    *(_QWORD *)&v9[v8 - 8] = unpack_dq(a2, a2[1]) - 1;
    v9[v8] = (unsigned int)unpack_dd(a2, a2[1]) != 0;
    v8 += 32;
    --v4;
  }
  while ( v4 );
  return __readfsqword(0x28u);
}
