__int64 __fastcall sub_28DF00(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int tinfo_size; // eax
  int v7; // eax
  unsigned __int64 v8; // r12
  char v9; // cl
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rbp

  v2 = *(_QWORD *)(a2 + 24);
  v3 = is_numop(*(_QWORD *)(v2 + 40), (unsigned int)*(char *)(v2 + 12));
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  if ( (unsigned int)get_radix(*(_QWORD *)(v2 + 40), (unsigned int)*(char *)(v2 + 12)) != 16 )
    return 0;
  if ( **(_QWORD **)(a2 + 24) <= 0xFFu )
    return 0;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
  v7 = sub_27FBB0((__int64)a1, a2, tinfo_size, 0);
  if ( v7 <= 0 )
    return 0;
  v8 = *(unsigned __int8 *)(a1[9] + 130LL);
  if ( (int)v8 <= v7 )
    return 0;
  v9 = 8 * v7;
  if ( 8 * v7 > 63 )
  {
    v10 = -1;
  }
  else
  {
    if ( (-(1LL << v9) & **(_QWORD **)(a2 + 24)) != -(1LL << v9) )
      return 0;
    v10 = (1LL << v9) - 1;
  }
  v11 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 22) > 9 )
    goto LABEL_17;
  v12 = *(_QWORD *)(v11 + 24);
  if ( a2 == v12 )
    v12 = *(_QWORD *)(v11 + 32);
  if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v12 + 48), 3) != 1
    || get_tinfo_size(0, *(_QWORD *)(v12 + 48), 0) >= v8 )
  {
LABEL_17:
    **(_QWORD **)(a2 + 24) &= v10;
    return v4;
  }
  return 0;
}
