__int64 __fastcall sub_F2FBF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    if ( (v2 & 4) != 0 )
    {
      v3 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v3 )
        sub_F2A610(a1, *v3);
    }
  }
  result = *(unsigned int *)(a2 + 60);
  if ( (_DWORD)result )
    return sub_995540(*(_QWORD *)(a1 + 1096), "...");
  return result;
}
