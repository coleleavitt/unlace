__int64 __fastcall sub_1A1540(__int64 a1)
{
  __int16 *v2; // rax
  int v3; // edi
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  __int64 v7; // rdi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax

  v2 = (__int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v3 = *((char *)v2 + 10);
  v4 = *((char *)v2 + 11);
  v5 = v3 + *v2;
  if ( v5 < v3 + v2[1] )
    v5 = v3 + v2[1];
  v6 = v3 + v2[2];
  v7 = *(_QWORD *)(a1 + 16);
  if ( v5 < v6 )
    v5 = v6;
  v8 = v2[3];
  v9 = v2[4];
  v10 = v4 + v8;
  if ( v5 < v10 )
    v5 = v10;
  v11 = v4 + v9;
  if ( v5 < v11 )
    v5 = v11;
  *(_DWORD *)(a1 + 464) = v5;
  sub_1A10C0(v7, 0, 0);
  v12 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 312) = *(_QWORD *)(v12 + 24);
  *(_DWORD *)(a1 + 336) = *(_QWORD *)(v12 + 48);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(v12 + 312);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(v12 + 320);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(v12 + 336);
  result = *(unsigned int *)(v12 + 344);
  *(_DWORD *)(a1 + 112) = result;
  return result;
}
