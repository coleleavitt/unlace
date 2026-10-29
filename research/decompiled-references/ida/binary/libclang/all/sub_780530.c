__int64 __fastcall sub_780530(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rax
  __int64 v4; // rdi

  v2 = sub_7803B0(a1);
  v3 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(*(_QWORD *)v3 + 16LL) == 26
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && (v4 = sub_B0D320(v4)) != 0)
    && (*(_DWORD *)(v4 + 20) & 0x3FFFC0) != 0 )
  {
    return (*(_DWORD *)(**(_QWORD **)(a1 + 120) + 100LL) == 0) + v2 - 1;
  }
  return v2;
}

