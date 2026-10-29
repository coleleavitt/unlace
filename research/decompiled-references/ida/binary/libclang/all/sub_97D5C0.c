__int64 __fastcall sub_97D5C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  unsigned int v4; // rax^4

  if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
    return 1;
  *(_QWORD *)(a1 + 800) = *a2;
  v3 = sub_A16C10(*(_QWORD *)(a1 + 584));
  v4 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) >> 32;
  sub_A2E1A0(a1 + 384, v4, 2253, 0);
  return 0;
}

