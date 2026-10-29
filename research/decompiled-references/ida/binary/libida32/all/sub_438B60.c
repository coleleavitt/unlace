__int64 __fastcall sub_438B60(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _DWORD *v6; // rax
  char v7; // si
  _DWORD *v8; // rdx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rcx
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  char v18; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v19 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return v19 - __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 240) != a3 )
  {
    v6 = *(_DWORD **)(a1 + 600);
    v7 = a4;
    v8 = &v6[*(_QWORD *)(a1 + 608)];
    if ( v6 != v8 )
    {
      while ( *v6 != a3 )
      {
        if ( v8 == ++v6 )
          goto LABEL_8;
      }
      v7 = a4 | (v8 != v6);
    }
LABEL_8:
    if ( !v7 )
    {
      v10 = *(_QWORD *)(a1 + 232);
      if ( *(char *)(v10 + 2) >= 0 || *(_DWORD *)(v10 + 48) == 1 )
      {
        v11 = *(_QWORD *)(a2 + 544);
        v18 = 3;
        netnode_supset(*(unsigned int *)(v11 + 104), a3, &v18, 1, 256);
      }
      else
      {
        v12 = *(unsigned int **)(v10 + 56);
        v13 = *(_QWORD *)(v10 + 64);
        v14 = &v12[v13];
        if ( v12 == v14 )
          goto LABEL_20;
        v15 = *(unsigned int **)(v10 + 56);
        while ( *v15 != a3 )
        {
          if ( v14 == ++v15 )
            goto LABEL_20;
        }
        if ( v15 == v14 )
        {
LABEL_20:
          if ( *(_QWORD *)(v10 + 72) < (unsigned __int64)(v13 + 1) )
          {
            v16 = qvector_reserve(v10 + 56, v12, v13 + 1, 4);
            v17 = *(_QWORD *)(v10 + 64);
            *(_QWORD *)(v10 + 56) = v16;
            v14 = (unsigned int *)(v16 + 4 * v17);
          }
          *v14 = a3;
          ++*(_QWORD *)(v10 + 64);
        }
      }
      return v19 - __readfsqword(0x28u);
    }
  }
  if ( (unsigned __int8)netnode_charval(*(unsigned int *)(*(_QWORD *)(a2 + 544) + 104LL), a3, 256) != 3 )
    return v19 - __readfsqword(0x28u);
  return netnode_supdel(*(unsigned int *)(*(_QWORD *)(a2 + 544) + 104LL), a3, 256);
}

