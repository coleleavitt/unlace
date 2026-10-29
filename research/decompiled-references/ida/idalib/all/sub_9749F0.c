__int64 __fastcall sub_9749F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 30200) = *(_DWORD *)(a2 + 27316);
  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 29896) = v2;
  *(_QWORD *)(a1 + 29904) = v2;
  v3 = *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 29912) = v3;
  *(_QWORD *)(a1 + 29888) = v3;
  result = *(unsigned int *)(a2 + 27320);
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a1 + 30000) = 0x100000001LL;
    *(_QWORD *)a1 = a2 + 24;
    *(_QWORD *)(a1 + 8) = a2 + 6184;
    *(_QWORD *)(a1 + 16) = a2 + 4128;
    *(_QWORD *)(a1 + 24) = a2 + 10288;
    *(_DWORD *)(a1 + 26684) = *(_DWORD *)(a2 + 26676);
    *(_DWORD *)(a1 + 26688) = *(_DWORD *)(a2 + 26680);
    result = *(unsigned int *)(a2 + 26684);
    *(_DWORD *)(a1 + 26692) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 30000) = 0;
  }
  return result;
}
