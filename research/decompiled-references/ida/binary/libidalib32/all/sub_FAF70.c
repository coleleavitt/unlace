__int64 __fastcall sub_FAF70(__int64 a1, int a2)
{
  int v3; // esi
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx

  if ( a2 >= *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL) )
    return 0;
  v3 = *(_DWORD *)(a1 + 320) + a2;
  if ( v3 < 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 256);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = *(_QWORD *)(a1 + 280);
  if ( v3 >= 0x8F5C28F5C28F5C29LL
           * (((__int64)(*(_QWORD *)(a1 + 288) - *(_QWORD *)(a1 + 296)) >> 3) + ((*(_QWORD *)(a1 + 272) - v4) >> 3))
           + 2 * ((v5 == 0) + ((v5 - v6) >> 3) - 1) )
    return 0;
  v7 = v3 - 0x70A3D70A3D70A3D7LL * ((v4 - *(_QWORD *)(a1 + 264)) >> 3);
  if ( v7 < 0 )
  {
    v8 = ~((unsigned __int64)~v7 >> 1);
    return *(_QWORD *)(v6 + 8 * v8) + 200 * (v7 - 2 * v8);
  }
  v8 = v7 >> 1;
  if ( v7 > 1 )
    return *(_QWORD *)(v6 + 8 * v8) + 200 * (v7 - 2 * v8);
  return v4 + 200LL * v3;
}

