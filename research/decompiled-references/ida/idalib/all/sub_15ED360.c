__int64 __fastcall sub_15ED360(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // zf
  __int64 result; // rax

  sub_15ED1C0(a1, a2, a3);
  if ( *(_BYTE *)(a1 + 100) )
    goto LABEL_6;
  v3 = 4 * (*(_DWORD *)(a1 + 92) - *(_DWORD *)(a1 + 96));
  v4 = *(unsigned int *)(a1 + 88);
  if ( v3 < 0x20 )
    v3 = 32;
  if ( (unsigned int)v4 <= v3 )
  {
    memset(*(void **)(a1 + 80), -1, 8 * v4);
LABEL_6:
    *(_QWORD *)(a1 + 92) = 0;
    goto LABEL_7;
  }
  sub_22364B0(a1 + 80);
LABEL_7:
  v5 = *(_QWORD *)(a1 + 400);
  v6 = *(_BYTE *)(a1 + 424) == 0;
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_DWORD *)(a1 + 408) = *(_DWORD *)(v5 + 196);
  result = *(unsigned int *)(v5 + 200);
  *(_DWORD *)(a1 + 412) = result;
  if ( !v6 )
    *(_BYTE *)(a1 + 424) = 0;
  return result;
}
