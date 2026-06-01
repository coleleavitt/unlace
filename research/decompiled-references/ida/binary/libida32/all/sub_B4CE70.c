__int64 __fastcall sub_B4CE70(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD v10[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 116);
  v2 = v1;
  if ( !v1 )
    v2 = *(unsigned int *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 120);
  if ( (v3 & 4) != 0 && (v8 = v3 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v8 + 16)) )
    v4 = *(_DWORD *)(**(_QWORD **)(v8 + 24) + 8LL);
  else
    v4 = *(_DWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 128);
  if ( v5 )
  {
    if ( (v5 & 4) != 0 )
    {
      v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6 )
      {
        if ( !v1 )
        {
          v9 = *v6;
          v10[1] = v6 + 1;
          v10[0] = v9;
          v2 = sub_F490E0(v10);
        }
      }
    }
  }
  return (v2 << 32) | v4;
}

