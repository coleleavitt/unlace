__int64 __fastcall sub_3EC4B0(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  char v5; // al
  __int64 v6; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 16) = v2;
  v3 = is_mapped((unsigned int)v2);
  if ( (_BYTE)v3 )
  {
    v5 = getinf_flag(3, 4);
    v6 = *(unsigned int *)(a1 + 24);
    if ( v5 )
      *(_QWORD *)(a1 + 24) = get_qword(v6);
    else
      *(_QWORD *)(a1 + 24) = (unsigned int)get_dword(v6);
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
    return v3;
  }
}

