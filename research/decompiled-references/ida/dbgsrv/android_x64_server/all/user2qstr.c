/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: user2qstr
// Address: 0x00000000000B0CA0

//----- (00000000000B0CA0) ----------------------------------------------------
unsigned __int64 __fastcall user2qstr(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r12
  const char *v4; // rax
  char *v5; // r12
  char v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  _BYTE *v9; // rax
  char *v11[8]; // [rsp+8h] [rbp-40h] BYREF

  v11[1] = (char *)__readfsqword(0x28u);
  *(_QWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a1 + 16) < v2 )
  {
    *(_QWORD *)a1 = qvector_reserve(a1, *(char **)a1, v2, 1u);
    v2 = *(_QWORD *)(a2 + 8);
  }
  v3 = v2 - 1;
  v4 = s1;
  if ( v2 )
    v4 = *(const char **)a2;
  v11[0] = (char *)v4;
  if ( !v2 )
    v3 = 0;
  if ( v3 )
  {
    v5 = (char *)&v4[v3];
    do
    {
      v11[0] = (char *)(v4 + 1);
      v6 = *v4;
      if ( *v4 == 92 )
        v6 = back_char(v11);
      v7 = *(_QWORD *)(a1 + 8);
      v8 = v7 - 1;
      if ( !v7 )
        v8 = 0;
      v9 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v8 + 2) )
      {
        v9 = qvector_reserve(a1, *(char **)a1, v8 + 2, 1u);
        *(_QWORD *)a1 = v9;
      }
      *(_QWORD *)(a1 + 8) = v8 + 2;
      v9[v8] = v6;
      *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
      v4 = v11[0];
    }
    while ( v11[0] != v5 );
  }
  return __readfsqword(0x28u);
}
