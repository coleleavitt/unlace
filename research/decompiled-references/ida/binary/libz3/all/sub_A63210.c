void __fastcall sub_A63210(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // ebp

  v3 = *(unsigned int *)(a2 + 8);
  *(_QWORD *)(*(_QWORD *)(a1 + 8LL * a3 + 616) + 8 * v3) = a2;
  v4 = *(_QWORD *)(a1 + 336);
  if ( *(_BYTE *)(v4 + 16) && *(_DWORD *)(a1 + 924) < *(_DWORD *)(v4 + 96) )
  {
    v5 = v3;
    if ( sub_99A460(a1, v3) )
      sub_A62F40(a1, v5);
  }
}

