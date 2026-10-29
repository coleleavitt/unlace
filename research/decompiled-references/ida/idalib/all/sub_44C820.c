__int64 __fastcall sub_44C820(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rax
  char v9; // si
  _QWORD *v10; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  if ( a3 == -1 )
    return v21 - __readfsqword(0x28u);
  if ( a1[48] != a3 )
  {
    v8 = (_QWORD *)a1[102];
    v9 = a4;
    v10 = &v8[a1[103]];
    if ( v8 != v10 )
    {
      while ( *v8 != a3 )
      {
        if ( v10 == ++v8 )
          goto LABEL_8;
      }
      v9 = a4 | (v10 != v8);
    }
LABEL_8:
    if ( !v9 )
    {
      v12 = a1[47];
      if ( *(char *)(v12 + 2) >= 0 || *(_DWORD *)(v12 + 80) == 1 )
      {
        v13 = *(_QWORD *)(a2 + 632);
        v20 = 3;
        netnode_supset(*(_QWORD *)(v13 + 104), a3, &v20, 1, 256, a6);
      }
      else
      {
        v14 = *(_QWORD **)(v12 + 96);
        v15 = *(_QWORD *)(v12 + 104);
        v16 = &v14[v15];
        if ( v14 == v16 )
          goto LABEL_20;
        v17 = *(_QWORD **)(v12 + 96);
        while ( *v17 != a3 )
        {
          if ( v16 == ++v17 )
            goto LABEL_20;
        }
        if ( v17 == v16 )
        {
LABEL_20:
          if ( *(_QWORD *)(v12 + 112) < (unsigned __int64)(v15 + 1) )
          {
            v18 = qvector_reserve(v12 + 96, v14, v15 + 1, 8);
            v19 = *(_QWORD *)(v12 + 104);
            *(_QWORD *)(v12 + 96) = v18;
            v16 = (_QWORD *)(v18 + 8 * v19);
          }
          *v16 = a3;
          ++*(_QWORD *)(v12 + 104);
        }
      }
      return v21 - __readfsqword(0x28u);
    }
  }
  if ( (unsigned __int8)netnode_charval(*(_QWORD *)(*(_QWORD *)(a2 + 632) + 104LL), a3, 256) != 3 )
    return v21 - __readfsqword(0x28u);
  return netnode_supdel(*(_QWORD *)(*(_QWORD *)(a2 + 632) + 104LL), a3, 256);
}
