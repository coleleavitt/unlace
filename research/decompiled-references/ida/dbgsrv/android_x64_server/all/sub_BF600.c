/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BF600
// Address: 0x00000000000BF600

//----- (00000000000BF600) ----------------------------------------------------
__int64 __fastcall sub_BF600(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v5; // r12
  bool v6; // cc
  signed __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r12

  if ( a2 < 0 || (v5 = *(_QWORD *)(a1 + 40), v5 > a2) && !*(_QWORD *)(a1 + 32) )
  {
    set_qerrno(3u);
    return -1;
  }
  v6 = v5 < a2;
  v7 = v5 - a2;
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 64) < 0x40000u )
      *(_QWORD *)(a1 + 48) = qvector_reserve(a1 + 48, *(char **)(a1 + 48), 0x40000u, 1u);
    *(_QWORD *)(a1 + 56) = 0x40000;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 40);
      if ( v9 == a2 )
        break;
      v10 = a2 - v9;
      if ( (unsigned __int64)(a2 - v9) >= 0x40000 )
        v10 = 0x40000;
      if ( sub_BF850(a1, *(void **)(a1 + 48), v10) != v10 )
        return v8;
    }
    v12 = sub_BF850(a1, a3, a4);
    v7 = 0;
    v13 = v12;
LABEL_20:
    v14 = v12 + v7;
    if ( v12 <= 0 )
      return v13;
    return v14;
  }
  if ( v7 > a4 )
    v7 = a4;
  v8 = -1;
  if ( !(unsigned int)qfseek(*(FILE **)(a1 + 32), a2, 0) )
  {
    v11 = qfread(*(FILE **)(a1 + 32), a3, v7);
    if ( v11 == a4 )
      return a4;
    if ( v11 != v7 )
      return v8;
    v12 = sub_BF850(a1, &a3[v7], a4 - v7);
    v13 = v12;
    if ( v7 > 0 )
      v13 = v7;
    goto LABEL_20;
  }
  return v8;
}
