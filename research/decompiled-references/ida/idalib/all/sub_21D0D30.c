__int64 __fastcall sub_21D0D30(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 result; // rax
  _QWORD v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = *(unsigned int *)(a1 + 8);
  v9 = *(unsigned int *)(a1 + 12);
  v21[0] = a1;
  if ( v8 + 1 > v9 )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 4);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v8) = 38;
  v10 = *(unsigned int *)(a1 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a1, a1 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v11) = 0;
  ++*(_DWORD *)(a1 + 8);
  v12 = v21[0];
  v13 = *(unsigned int *)(v21[0] + 8LL);
  if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(v21[0] + 12LL) )
  {
    sub_2237220(v21[0], v21[0] + 16LL, v13 + 1, 4);
    v13 = *(unsigned int *)(v21[0] + 8LL);
  }
  *(_DWORD *)(*(_QWORD *)v21[0] + 4 * v13) = a2;
  v14 = *(unsigned int *)(v12 + 12);
  v15 = (unsigned int)(*(_DWORD *)(v12 + 8) + 1);
  *(_DWORD *)(v12 + 8) = v15;
  if ( v15 + 1 > v14 )
  {
    sub_2237220(v12, v12 + 16, v15 + 1, 4);
    v15 = *(unsigned int *)(v12 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v12 + 4 * v15) = HIDWORD(a2);
  ++*(_DWORD *)(v12 + 8);
  sub_21D0B50(v21, a3, a4);
  v16 = v21[0];
  v17 = *(unsigned int *)(v21[0] + 8LL);
  if ( v17 + 1 > (unsigned __int64)*(unsigned int *)(v21[0] + 12LL) )
  {
    sub_2237220(v21[0], v21[0] + 16LL, v17 + 1, 4);
    v17 = *(unsigned int *)(v16 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v16 + 4 * v17) = a5;
  v18 = HIDWORD(a5);
  v19 = *(unsigned int *)(v16 + 12);
  result = (unsigned int)(*(_DWORD *)(v16 + 8) + 1);
  *(_DWORD *)(v16 + 8) = result;
  if ( result + 1 > v19 )
  {
    sub_2237220(v16, v16 + 16, result + 1, 4);
    result = *(unsigned int *)(v16 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v16 + 4 * result) = v18;
  ++*(_DWORD *)(v16 + 8);
  return result;
}
