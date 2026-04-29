__int64 __fastcall sub_3F9270(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 result; // rax
  bool v4; // zf
  __int64 v5; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 784LL);
  *(_DWORD *)(v1 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 364LL);
  *(_DWORD *)(v1 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 4408LL);
  v2 = *(_QWORD *)(a1 + 832);
  result = 0xFFFFFFFFLL;
  if ( *(_BYTE *)(v2 + 4413) )
    result = *(unsigned int *)(v2 + 420);
  v4 = *(_QWORD *)(v1 + 40) == 0;
  *(_DWORD *)(v1 + 12) = result;
  *(_DWORD *)(v1 + 28) = 8;
  if ( v4 )
  {
    result = operator new(0x10u);
    v5 = *(_QWORD *)(a1 + 832);
    *(_QWORD *)result = &off_4D6B70;
    *(_QWORD *)(result + 8) = v5;
    *(_QWORD *)(v1 + 40) = result;
  }
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = a1;
  return result;
}
