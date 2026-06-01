__int64 __fastcall sub_5D0640(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int8 *v13; // r8
  int v14; // ecx
  __int64 *v16; // r8
  unsigned __int8 v17; // dl

  v1 = *(_QWORD *)(a1 + 432);
  v2 = *(_QWORD *)(a1 + 440);
  v3 = (__int64 *)(v1 + 8 * v2 - 8);
  v4 = *v3;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 120) = v4;
    v16 = (__int64 *)(v1 + 8 * (v2 - 1) - 8);
    *(_QWORD *)(a1 + 440) = v2 - 1;
    v5 = *v16;
    if ( v2 == 1 )
    {
      *(_QWORD *)(a1 + 104) = v5;
      v6 = *v16;
    }
    else
    {
      *(_QWORD *)(a1 + 104) = v5;
      *(_QWORD *)(a1 + 440) = v2 - 2;
      v6 = *(_QWORD *)(v1 + 8 * (v2 - 2) - 8);
      if ( v2 != 2 )
        *(_QWORD *)(a1 + 440) = v2 - 3;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 120) = v4;
    v5 = *v3;
    *(_QWORD *)(a1 + 104) = *v3;
    v6 = *v3;
  }
  v7 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 112) = v6;
  *(_QWORD *)(v7 + 48) = v5;
  sub_5D05F0((_QWORD *)a1, *(_QWORD *)(a1 + 136));
  v8 = *(_QWORD *)(a1 + 440);
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 8 * v8 - 8);
  if ( v8 )
    *(_QWORD *)(a1 + 440) = v8 - 1;
  *(_QWORD *)(a1 + 136) = v9;
  v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(a1 + 160);
  v12 = v10 - 1;
  v13 = (unsigned __int8 *)(v11 + v10 - 1);
  v14 = *v13;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 168) = v12;
    *(_DWORD *)(a1 + 212) = v14;
    if ( v10 != 1 )
      v12 = v10 - 2;
    v17 = *(_BYTE *)(v11 + v10 - 2);
    *(_QWORD *)(a1 + 168) = v12;
    *(_DWORD *)(a1 + 208) = v17;
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = v14;
    *(_DWORD *)(a1 + 208) = *v13;
    return 0;
  }
}

