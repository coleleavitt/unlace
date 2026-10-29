__int64 __fastcall sub_3B8B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *range; // rax
  __int64 result; // rax
  __int64 v5; // rbp
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 1480);
  range = (_DWORD *)rangeset_t_find_range(v2 + 1112, a2);
  if ( range )
    return (unsigned int)(range[1] - *range);
  v5 = *(_QWORD *)(v2 + 1008);
  v6 = sub_8954D0(v5, (unsigned int)a2);
  result = 0;
  if ( v6 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL) - **(_DWORD **)(v5 + 48));
  return result;
}

