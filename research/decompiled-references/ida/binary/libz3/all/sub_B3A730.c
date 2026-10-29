__int64 __fastcall sub_B3A730(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  int v3; // edx
  __int64 result; // rax
  double v5; // xmm0_8

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 8560);
  if ( v2 )
    v3 = *(_DWORD *)(v2 - 4);
  else
    v3 = 0;
  *(_DWORD *)(a1 + 44) = v3;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(v1 + 9496) = 0;
  result = *(_QWORD *)(a1 + 16);
  v5 = *(double *)(result + 168);
  if ( v5 < 0.0 )
    *(double *)(result + 168) = v5 + 0.0;
  return result;
}

