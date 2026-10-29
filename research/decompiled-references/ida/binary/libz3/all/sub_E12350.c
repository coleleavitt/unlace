__int64 __fastcall sub_E12350(__int64 a1)
{
  __int64 (*v1)(void); // rax
  __int64 v2; // rax
  __int64 result; // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 16LL);
  if ( (char *)v1 != (char *)sub_E11E50 )
    return v1();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  result = *(_QWORD *)(a1 + 32);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

