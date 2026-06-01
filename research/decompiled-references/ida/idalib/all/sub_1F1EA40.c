__int64 __fastcall sub_1F1EA40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(unsigned int *)(v2 + 24);
  v5 = *(_QWORD *)(v3 + 8 * v4);
  if ( v5 )
    v5 = *(_QWORD *)(a1 + 32) - v5;
  a2[3] = v5;
  v6 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 1));
  if ( v6 )
    v6 = *(_QWORD *)(a1 + 32) - v6;
  *a2 = v6;
  v7 = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 2));
  if ( v7 )
    v7 = *(_QWORD *)(a1 + 32) - v7;
  a2[1] = v7;
  *(_DWORD *)(v2 + 24) = v4 + 4;
  result = *(_QWORD *)(v3 + 8LL * (unsigned int)(v4 + 3));
  if ( result )
    result = *(_QWORD *)(a1 + 32) - result;
  a2[2] = result;
  return result;
}
