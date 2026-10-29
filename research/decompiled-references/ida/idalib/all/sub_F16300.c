__int64 __fastcall sub_F16300(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rax
  int v5; // r13d
  __int64 v6; // rax
  __int64 v7; // r12
  _BOOL8 v8; // r13
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  _BOOL4 v13; // r13d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 (__fastcall *v19)(_QWORD *, __int64); // r12
  __int64 v20; // rax

  sub_F15AA0(a1, (_WORD *)a2);
  v3 = a1[1];
  v4 = *(unsigned int *)(v3 + 8);
  v5 = *(_BYTE *)(a2 + 24) & 1;
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_2237220(a1[1], v3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(v3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 4 * v4) = v5;
  v6 = *a1;
  ++*(_DWORD *)(v3 + 8);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(v6 + 56))(a1, *(_QWORD *)(a2 + 32));
  v7 = a1[1];
  v8 = *(_QWORD *)(a2 + 48) != 0;
  v9 = *(unsigned int *)(v7 + 8);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 12) )
  {
    sub_2237220(a1[1], v7 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(v7 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v7 + 4 * v9) = v8;
  ++*(_DWORD *)(v7 + 8);
  v10 = *(_QWORD **)(a2 + 48);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, *v10);
  v11 = *(_QWORD *)(a2 + 64);
  v12 = a1[1];
  v13 = 0;
  if ( v11 && (v11 & 4) == 0 )
    v13 = (v11 & 0xFFFFFFFFFFFFFFF8LL) != 0;
  v14 = *(unsigned int *)(v12 + 8);
  if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(v12 + 12) )
  {
    sub_2237220(a1[1], v12 + 16, v14 + 1, 4);
    v14 = *(unsigned int *)(v12 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v12 + 4 * v14) = v13;
  ++*(_DWORD *)(v12 + 8);
  v15 = *(_QWORD *)(a2 + 64);
  if ( !v15 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 48LL))(a1, 0);
  v16 = *a1;
  v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v15 & 4) != 0 )
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(v16 + 48))(a1, v17);
  if ( !v17 )
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v16 + 48))(a1, 0);
  v19 = *(__int64 (__fastcall **)(_QWORD *, __int64))(v16 + 32);
  v20 = sub_C94110(a2);
  return v19(a1, v20);
}
