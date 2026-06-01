/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9C790
// Address: 0x000000000009C790

//----- (000000000009C790) ----------------------------------------------------
__int64 __fastcall sub_9C790(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  char *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rax
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rax
  __int64 i; // r15
  __int64 v17; // r13
  _BYTE *v18; // rax
  _BYTE *v19; // rax
  _BYTE *v20; // rax
  const char *v21; // rbp
  size_t v22; // rax
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  _BYTE v28[3]; // [rsp+26h] [rbp-42h] BYREF
  _BYTE v29[2]; // [rsp+29h] [rbp-3Fh] BYREF
  _BYTE v30[5]; // [rsp+2Bh] [rbp-3Dh] BYREF
  _QWORD v31[7]; // [rsp+30h] [rbp-38h] BYREF

  v31[0] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v7 + 1) )
  {
    v8 = *(char **)a2;
  }
  else
  {
    v8 = (char *)qvector_reserve(a2, *(char **)a2, v7 + 1, 1u);
    *(_QWORD *)a2 = v8;
    v7 = *(_QWORD *)(a2 + 8);
  }
  v8[v7] = 1;
  ++*(_QWORD *)(a2 + 8);
  v9 = pack_dd(v28, (unsigned __int64)v30, *(unsigned __int8 *)(a4 + 168));
  sub_56350(a2, v28, v9 - v28);
  v10 = pack_dd(v28, (unsigned __int64)v30, *(unsigned __int8 *)(a4 + 169));
  sub_56350(a2, v28, v10 - v28);
  v11 = sub_91750(a5);
  v12 = pack_dq(v28, (unsigned __int64)v31, v11);
  sub_56350(a2, v28, v12 - v28);
  v13 = pack_dd(v28, (unsigned __int64)v30, *(_DWORD *)(a5 + 24));
  sub_56350(a2, v28, v13 - v28);
  v14 = pack_dd(v28, (unsigned __int64)v30, *(_DWORD *)(a6 + 8));
  sub_56350(a2, v28, v14 - v28);
  v15 = *(_QWORD *)(a6 + 8);
  if ( (int)v15 > 0 )
  {
    v26 = (unsigned int)v15;
    for ( i = 0; i != v26; ++i )
    {
      v27 = *(int *)(*(_QWORD *)a6 + 4 * i);
      v17 = *(_QWORD *)(a4 + 104);
      v18 = pack_dq(v28, (unsigned __int64)v31, *(_QWORD *)(v17 + 120 * v27));
      sub_56350(a2, v28, v18 - v28);
      v19 = pack_dq(v28, (unsigned __int64)v31, *(unsigned int *)(v17 + 120 * v27 + 8));
      sub_56350(a2, v28, v19 - v28);
      v20 = pack_dw(v28, (unsigned __int64)v29, v27);
      sub_56350(a2, v28, v20 - v28);
      v21 = s1;
      if ( *(_QWORD *)(v17 + 120 * v27 + 24) )
        v21 = *(const char **)(v17 + 120 * v27 + 16);
      if ( !v21 )
        v21 = &byte_EB522;
      v22 = strlen(v21);
      sub_56350(a2, v21, v22 + 1);
    }
  }
  return 0;
}
