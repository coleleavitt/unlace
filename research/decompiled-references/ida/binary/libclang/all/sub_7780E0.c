__int64 __fastcall sub_7780E0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = *(_DWORD *)(a1 + 24);
  v2 = v1;
  if ( *(_QWORD *)(a1 + 88) )
    v2 = sub_AC7460(*(_QWORD *)(a1 + 88));
  return (v2 << 32) | v1;
}

