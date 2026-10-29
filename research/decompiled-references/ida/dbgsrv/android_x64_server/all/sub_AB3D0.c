/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB3D0
// Address: 0x00000000000AB3D0

//----- (00000000000AB3D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_AB3D0(__int64 a1, char a2, __int64 a3)
{
  signed int v5; // ebp
  __int64 v6; // r12
  __time_t v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx
  _BYTE *v10; // rax
  __int64 v11; // rcx
  int v13; // [rsp+9h] [rbp-3Fh]
  __int16 v14; // [rsp+Dh] [rbp-3Bh]
  char v15; // [rsp+Fh] [rbp-39h]

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0;
  if ( v5 >= 0 && *(_QWORD *)(a1 + 8) )
  {
    v7 = qtime64();
    v6 = sub_A9580(v7, v5);
  }
  v8 = (_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 48) >= (unsigned __int64)(v9 + 1) )
  {
    v10 = (_BYTE *)*v8;
  }
  else
  {
    v10 = qvector_reserve((__int64)v8, *(char **)(a1 + 32), v9 + 1, 0x20u);
    *(_QWORD *)(a1 + 32) = v10;
    v9 = *(_QWORD *)(a1 + 40);
  }
  v11 = 32 * v9;
  *(_QWORD *)&v10[v11] = a3;
  *(_QWORD *)&v10[v11 + 8] = 0;
  *(_QWORD *)&v10[v11 + 16] = v6;
  v10[v11 + 24] = a2;
  v10[v11 + 31] = v15;
  *(_WORD *)&v10[v11 + 29] = v14;
  *(_DWORD *)&v10[v11 + 25] = v13;
  ++*(_QWORD *)(a1 + 40);
  return __readfsqword(0x28u);
}
// AB47E: variable 'v15' is possibly undefined
// AB487: variable 'v14' is possibly undefined
// AB490: variable 'v13' is possibly undefined
