__int64 __fastcall sub_EFE900(int *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax
  __int64 v4; // rcx
  __int64 v5; // r13
  unsigned int v6; // r12d
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // rbp
  int v10; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebp
  unsigned __int64 v18; // rcx
  __int64 result; // rax
  _DWORD v20[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]

  v3 = *((_WORD *)a1 + 1);
  v4 = *((_QWORD *)a1 + 2);
  v5 = *((_QWORD *)a1 + 3);
  v6 = *a1;
  v20[0] = 9;
  v21 = v4;
  v7 = v5;
  v8 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  v20[1] = v3 >> 1;
  v9 = v7 >> 2;
  v10 = (v6 >> 3) & 0x3FFF;
  sub_EF9920((__int64)v20, a2, a3);
  v11 = *(unsigned int *)(a2 + 8);
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v11) = v8;
  v12 = HIDWORD(v8);
  v13 = *(unsigned int *)(a2 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_22134E0(a2, a2 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v14) = v12;
  v15 = *(unsigned int *)(a2 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_22134E0(a2, a2 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a2 + 8);
  }
  v17 = v9 & 1;
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v16) = v10;
  v18 = *(unsigned int *)(a2 + 12);
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  if ( result + 1 > v18 )
  {
    sub_22134E0(a2, a2 + 16, result + 1, 4);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v17;
  ++*(_DWORD *)(a2 + 8);
  return result;
}

