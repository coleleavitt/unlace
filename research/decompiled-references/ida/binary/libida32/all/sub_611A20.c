__int64 __fastcall sub_611A20(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax

  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(*(_QWORD *)(a2 + 1480) + 40LL);
  v2 = sub_78F190(a2);
  result = node2ea(v2);
  if ( *(_DWORD *)(a1 + 104) < (unsigned int)result )
  {
    result = ((_DWORD)result + 0x7FFFFF) & 0xFF800000;
    *(_DWORD *)(a1 + 108) = result;
  }
  return result;
}

