__int64 __fastcall sub_7804B0(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int v4; // ebx

  v2 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *(_QWORD *)v2;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && (v3 = sub_B0D320(v3)) != 0 )
  {
    v4 = (unsigned __int16)(*(_DWORD *)(v3 + 20) >> 6);
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned int)sub_77F620(a1) )
    return (*(_DWORD *)(**(_QWORD **)(a1 + 120) + 100LL) == 0) + v4 - 1;
  return v4;
}

