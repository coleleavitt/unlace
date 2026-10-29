/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001BE20
// Address: 0x000000010001BE20

//----- (000000010001BE20) ----------------------------------------------------
__int64 __fastcall sub_10001BE20(__int64 a1, _DWORD *a2)
{
  char **v2; // r15
  int v3; // r13d
  unsigned int v4; // ebx
  char *v5; // rax
  char *v6; // rcx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  char **v9; // r15
  int v10; // r13d
  unsigned int v11; // ebx
  char *v12; // rax
  char *v13; // rcx
  __int64 v14; // rcx

  v2 = *(char ***)(a1 + 16);
  v3 = a2[2];
  v4 = a2[4];
  v5 = *v2;
  v6 = v2[1];
  if ( v2[2] < v6 + 1 )
  {
    v5 = (char *)qvector_reserve(*(_QWORD *)(a1 + 16), v5, (unsigned __int64)(v6 + 1), 0x10u);
    *v2 = v5;
    v6 = v2[1];
  }
  v7 = 16LL * (_QWORD)v6;
  v8 = 0;
  *(_OWORD *)&v5[v7] = 0;
  ++v2[1];
  *(_DWORD *)&v5[v7] = v3;
  *(_DWORD *)&v5[v7 + 4] = HIWORD(v4);
  *(_DWORD *)&v5[v7 + 8] = BYTE1(v4);
  *(_DWORD *)&v5[v7 + 12] = (unsigned __int8)v4;
  v9 = *(char ***)(a1 + 16);
  v10 = a2[2];
  v11 = a2[3];
  v12 = *v9;
  v13 = v9[1];
  if ( v9[2] < v13 + 1 )
  {
    v12 = (char *)qvector_reserve(*(_QWORD *)(a1 + 16), v12, (unsigned __int64)(v13 + 1), 0x10u);
    v8 = 0;
    *v9 = v12;
    v13 = v9[1];
  }
  v14 = 16LL * (_QWORD)v13;
  *(_OWORD *)&v12[v14] = v8;
  ++v9[1];
  *(_DWORD *)&v12[v14] = v10;
  *(_DWORD *)&v12[v14 + 4] = HIWORD(v11);
  *(_DWORD *)&v12[v14 + 8] = BYTE1(v11);
  *(_DWORD *)&v12[v14 + 12] = (unsigned __int8)v11;
  *(_BYTE *)(a1 + 24) = 1;
  return 0;
}
