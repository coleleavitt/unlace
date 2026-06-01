void __fastcall sub_A60140(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebp

  v3 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 8LL * a3 + 680) + 8 * v3) = a2;
  v4 = *(_QWORD *)(a1 + 400);
  if ( *(_BYTE *)(v4 + 16) && *(_DWORD *)(a1 + 1020) < *(_DWORD *)(v4 + 96) )
  {
    v5 = v3;
    if ( sub_9B2ED0(a1, v3) )
      sub_A5FE50(a1, v5);
  }
}

