__int64 __fastcall sub_B45320(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rsi
  int v3; // edi
  __int64 *v4; // rsi
  int v5; // edi
  __int64 v6; // rax
  __int64 result; // rax

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 384);
  if ( v2 )
    v3 = *((_DWORD *)v2 - 1);
  else
    v3 = 0;
  sub_B397E0(v3, v2);
  v4 = *(__int64 **)(v1 + 392);
  if ( v4 )
    v5 = *((_DWORD *)v4 - 1);
  else
    v5 = 0;
  sub_B39810(v5, v4);
  v6 = *(_QWORD *)(v1 + 384);
  if ( v6 )
    *(_DWORD *)(v6 - 4) = 0;
  result = *(_QWORD *)(v1 + 392);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

