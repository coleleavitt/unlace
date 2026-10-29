__int64 __fastcall sub_E21830(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 400);
  result = 1;
  if ( v1 )
    return (unsigned int)(*(_DWORD *)(v1 + 24) + 1);
  return result;
}
