__int64 __fastcall sub_21D1C10(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  int v7; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 result; // rax

  v7 = a2;
  v12 = *(unsigned int *)(a1 + 8);
  if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
    v7 = a2;
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = v7;
  v13 = *(unsigned int *)(a1 + 12);
  v14 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v14;
  if ( v14 + 1 > v13 )
  {
    sub_2237220(a1, a1 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v14) = 0;
  v15 = *(unsigned int *)(a1 + 12);
  v16 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v16;
  if ( v16 + 1 > v15 )
  {
    sub_2237220(a1, a1 + 16, v16 + 1, 4);
    v16 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v16) = a3;
  v17 = HIDWORD(a3);
  v18 = *(unsigned int *)(a1 + 12);
  v19 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v19;
  if ( v19 + 1 > v18 )
  {
    sub_2237220(a1, a1 + 16, v19 + 1, 4);
    v19 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v19) = v17;
  ++*(_DWORD *)(a1 + 8);
  if ( a4 )
    sub_2222BB0(a1, a5, a4);
  else
    sub_2222BB0(a1, 0, 0);
  sub_9B7040(a1, a6);
  sub_9B7040(a1, SHIDWORD(a6));
  sub_9B7040(a1, a7);
  result = *(unsigned int *)(a1 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, result + 1, 4);
    result = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * result) = 0;
  ++*(_DWORD *)(a1 + 8);
  return result;
}
