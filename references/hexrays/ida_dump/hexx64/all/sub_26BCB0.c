__int64 __fastcall sub_26BCB0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = *(_DWORD *)(*(_QWORD *)a2 + 8LL);
  if ( (unsigned int)(v2 - 35) > 1 )
    return 0;
  v3 = *(_QWORD *)(*(_QWORD *)a2 + 32LL);
  if ( *(_DWORD *)(v3 + 8) != 61
    || *(int *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 84LL) < (unsigned __int64)get_tinfo_size(
                                                                                 0,
                                                                                 *(_QWORD *)(v3 + 48),
                                                                                 0) )
  {
    return 0;
  }
  if ( *(_DWORD *)(v3 + 8) != 61 )
    sub_269F00();
  v7 = *(_QWORD *)(a2 + 24) * sub_255A30(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48));
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 24LL) != 8 && v7 != (int)v7 )
    return 0;
  if ( v2 == 36 )
    v7 = -v7;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL) + 24LL) == 8 )
  {
    v9 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v8 = -v7;
    if ( v7 > 0 )
      v8 = v7;
    if ( v8 > 0x7FFFFFFF )
      return 0;
    v9 = 0x7FFFFFFF;
  }
  v10 = *(_DWORD *)(a2 + 16);
  v11 = *(_QWORD *)(a2 + 8);
  if ( v7 < 0 )
  {
    v13 = *(_QWORD *)(a1 + 96);
    if ( v13 <= v7 + v9 )
    {
      *(_QWORD *)(a1 + 96) = v13 - v7;
      goto LABEL_18;
    }
    return 0;
  }
  v12 = *(_QWORD *)(a1 + 88);
  if ( v12 > v9 - v7 )
    return 0;
  *(_QWORD *)(a1 + 88) = v7 + v12;
LABEL_18:
  if ( *(_QWORD *)(a1 + 104) == -1 )
  {
    *(_QWORD *)(a1 + 104) = v11;
    *(_DWORD *)(a1 + 112) = v10;
  }
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  *(_QWORD *)(a1 + 120) += v7;
  return 1;
}
