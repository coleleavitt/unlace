__int64 __fastcall sub_AC3920(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rdi
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(void (__fastcall ****)(_QWORD))(*(_QWORD *)(a1 + 8) + 536LL);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 16);
    if ( (unsigned int)v3 >= *((_DWORD *)v2 - 1) )
      v2 = nullptr;
    else
      v2 = (void (__fastcall ***)(_QWORD))v2[v3];
  }
  (**v2)(v2);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 536LL);
  *(_QWORD *)(result + 8LL * *(unsigned int *)(a1 + 16)) = 0;
  return result;
}

