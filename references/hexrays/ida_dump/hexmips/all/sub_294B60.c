__int64 __fastcall sub_294B60(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 v8; // rax

  v4 = **(_QWORD **)(a2 + 24);
  if ( v4 )
  {
    if ( (unsigned int)get_tinfo_property(*(_QWORD *)(a2 + 48), 3) == 1 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v7 = *(_DWORD *)(v6 + 24) == 8;
      v8 = *(_QWORD *)(v6 + 16);
      if ( v7 || v4 == (int)v4 )
        v4 &= v8;
      if ( v8 < v4 )
        return 0;
      if ( !(unsigned __int8)is_mapped(v4) )
        return 0;
    }
    if ( v4 < *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) )
      goto LABEL_2;
    return 0;
  }
LABEL_2:
  if ( a3 )
    *a3 = v4;
  return 1;
}
