unsigned __int64 __fastcall sub_B4DBF0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rax

  v1 = *(unsigned int *)(a1 + 72);
  if ( (_DWORD)v1 )
    return (v1 << 32) | *(unsigned int *)(a1 + 24);
  if ( (unsigned __int8)sub_B6AC50(a1 + 40) )
  {
    v3 = *(unsigned int *)(a1 + 24);
    v4 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    v5 = sub_B6AC30(a1 + 40);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v4 = *(_DWORD *)(a1 + 24);
    v3 = HIDWORD(v6);
  }
  return (v3 << 32) | v4;
}

