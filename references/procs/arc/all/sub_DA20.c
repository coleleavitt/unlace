__int64 __fastcall sub_DA20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned int v5; // ebp

  v2 = (int)a2;
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(v3 + 24) == 8 )
    v2 = a2;
  if ( v2 == -1 )
    return 0;
  v4 = a2 & *(_QWORD *)(v3 + 16);
  v5 = is_mapped(v4);
  if ( !(_BYTE)v5 )
    return 0;
  get_flags_ex(v4, 4);
  return v5;
}
