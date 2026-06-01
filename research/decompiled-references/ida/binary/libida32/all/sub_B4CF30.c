__int64 __fastcall sub_B4CF30(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 v3; // rax

  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(_QWORD *)(a1 + 72);
  v3 = v1;
  if ( v2 )
    v3 = sub_EC8400(v2);
  return (v3 << 32) | v1;
}

