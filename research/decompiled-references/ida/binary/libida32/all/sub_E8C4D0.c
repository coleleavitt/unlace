unsigned __int64 __fastcall sub_E8C4D0(__int64 *a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // rdx
  unsigned __int64 result; // rax

  v1 = *a1;
  v2 = *(_DWORD **)(v1 + 32);
  result = *(_QWORD *)(v1 + 24) - (_QWORD)v2;
  if ( result <= 3 )
    return sub_22581D0(v1, "auto", 4);
  *v2 = 1869903201;
  *(_QWORD *)(v1 + 32) += 4LL;
  return result;
}

