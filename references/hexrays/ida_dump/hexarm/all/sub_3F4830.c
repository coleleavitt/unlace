__int64 __fastcall sub_3F4830(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // edx
  int v4; // edx
  int v5; // edx

  result = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 784LL);
  *(_DWORD *)(result + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 356LL);
  v2 = *(_QWORD *)(a1 + 832);
  v3 = -1;
  if ( *(_DWORD *)(v2 + 80) == 8 )
    v3 = *(_DWORD *)(v2 + 488);
  *(_DWORD *)(result + 12) = v3;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
  *(_DWORD *)(result + 28) = 16;
  *(_DWORD *)(result + 24) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 620LL);
  *(_QWORD *)(result + 48) = sub_3EB7D0;
  *(_QWORD *)(result + 56) = a1;
  *(_DWORD *)(result + 32) = v5;
  return result;
}
