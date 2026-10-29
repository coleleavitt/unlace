__int64 __fastcall sub_E4F590(__int64 a1)
{
  _DWORD *v1; // rdi
  __int64 (*v2)(void); // rax
  __int64 result; // rax

  v1 = *(_DWORD **)(a1 + 56);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 16LL);
  if ( (char *)v2 != (char *)sub_E4F280 )
    return v2();
  result = (unsigned int)(v1[10] + 1);
  v1[10] = result;
  return result;
}

