__int64 __fastcall sub_162B550(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int *v5; // r9
  _DWORD *v6; // rax
  __int64 v7; // rax
  int *v9; // r15
  unsigned __int64 v14; // r13
  int *v15; // rdi
  _DWORD *v16; // rax
  int *v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rax
  int *v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // esi
  __int64 v27[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( *(_DWORD *)(a1 + 12) <= *(_DWORD *)(a1 + 8) )
  {
    v9 = (int *)(a1 + 16);
    v14 = sub_2237400(a1, a1 + 16, 0, 16, v27);
    v15 = *(int **)a1;
    v16 = (_DWORD *)(v14 + 16LL * *(unsigned int *)(a1 + 8));
    *v16 = *a5;
    v16[1] = *a4;
    v16[2] = *a3;
    v16[3] = *a2;
    v17 = &v15[4 * *(unsigned int *)(a1 + 8)];
    if ( v15 != v17 )
    {
      if ( v14 < (unsigned __int64)(v15 + 4) && (unsigned __int64)v15 < v14 + 16 )
      {
        v24 = v15;
        v25 = v14;
        do
        {
          v26 = *v24;
          v24 += 4;
          v25 += 16LL;
          *(_DWORD *)(v25 - 16) = v26;
          *(_DWORD *)(v25 - 12) = *(v24 - 3);
          *(_DWORD *)(v25 - 8) = *(v24 - 2);
          *(_DWORD *)(v25 - 4) = *(v24 - 1);
        }
        while ( v17 != v24 );
      }
      else
      {
        v18 = 0;
        v19 = 0;
        v20 = ((16 * (unsigned __int64)*(unsigned int *)(a1 + 8) - 16) >> 4) + 1;
        do
        {
          ++v19;
          *(__m128i *)(v14 + v18 * 4) = _mm_loadu_si128((const __m128i *)&v15[v18]);
          v18 += 4;
        }
        while ( v20 > v19 );
      }
    }
    v21 = v27[0];
    if ( v9 != v15 )
      free(v15);
    v22 = *(_DWORD *)(a1 + 8);
    *(_QWORD *)a1 = v14;
    *(_DWORD *)(a1 + 12) = v21;
    v23 = (unsigned int)(v22 + 1);
    *(_DWORD *)(a1 + 8) = v23;
    return v14 + 16 * v23 - 16;
  }
  else
  {
    v5 = *(int **)a1;
    v6 = (_DWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 8));
    *v6 = *a5;
    v6[1] = *a4;
    v6[2] = *a3;
    v6[3] = *a2;
    v7 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v7;
    return (__int64)&v5[4 * v7 - 4];
  }
}
