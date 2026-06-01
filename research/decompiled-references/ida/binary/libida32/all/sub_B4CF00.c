__int64 __fastcall sub_B4CF00(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 88);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = v3;
  if ( v2 )
    v4 = sub_EC8400(v2);
  return (v4 << 32) | v3;
}

