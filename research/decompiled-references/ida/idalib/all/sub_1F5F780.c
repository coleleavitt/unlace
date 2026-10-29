__int64 __fastcall sub_1F5F780(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 *v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // esi
  int v14; // edx
  _QWORD *v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 result; // rax

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  v5 = *(_QWORD *)(*a1 + 32);
  v6 = (unsigned int)(v4 + 1);
  v7 = *(_QWORD *)(v5 + 8 * v4);
  *(_DWORD *)(*a1 + 24) = v6;
  if ( (_DWORD)v7 )
  {
    v8 = (unsigned __int64 *)(a2 + 24);
    v9 = a2 + 8LL * (unsigned int)(v7 - 1) + 32;
    do
    {
      v13 = v6 + 1;
      v14 = *(_DWORD *)(v5 + 8 * v6);
      *(_DWORD *)(v3 + 24) = v13;
      if ( v14 )
      {
        v10 = *(_QWORD *)(v3 + 8);
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 13064) + 8LL * (unsigned int)(*(_DWORD *)(v10 + 13072))-- - 8);
        v12 = v11 | 4;
      }
      else
      {
        v15 = *(_QWORD **)(v3 + 8);
        v16 = sub_1EE13A0((__int64)v15, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
        v12 = sub_1EDB980(v15, v16, v17, v18, v19, v20) & 0xFFFFFFFFFFFFFFFBLL;
      }
      *v8 = v12;
      v3 = *a1;
      ++v8;
      v6 = *(unsigned int *)(*a1 + 24);
      v5 = *(_QWORD *)(*a1 + 32);
    }
    while ( (unsigned __int64 *)v9 != v8 );
  }
  *(_DWORD *)(v3 + 24) = v6 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(v5 + 8 * v6) & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v21 = *(_QWORD *)(*a1 + 8);
  v22 = *(_QWORD *)(*(_QWORD *)(v21 + 13064) + 8LL * *(unsigned int *)(v21 + 13072) - 8);
  result = (unsigned int)(*(_DWORD *)(v21 + 13072) - 1);
  *(_DWORD *)(v21 + 13072) = result;
  *(_QWORD *)(a2 + 16) = v22;
  return result;
}
