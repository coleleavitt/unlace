void __fastcall sub_AC1FE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // r13
  unsigned int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // eax
  int *v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  __int64 v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx

  sub_B6E740(*(_QWORD *)(a1 + 16));
  v6 = (_QWORD *)sub_AB3F30(a1, (unsigned int *)a2, v2, v3, v4, v5);
  v7 = sub_B39350(v6, *(unsigned int *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 112) + 429LL) )
    v9 = v6[14];
  else
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8656) + 8LL * **(unsigned int **)(*v6 + 32LL));
  v10 = sub_B39350(v9, *(unsigned int *)(a1 + 8));
  v11 = v10;
  if ( v10 == -1 )
  {
    v12 = (**(__int64 (__fastcall ***)(__int64, __int64))a1)(a1, v9);
    v11 = v12;
    sub_AB6BC0((__int64 *)a1, v12);
  }
  v13 = *(int **)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 24LL) + 8LL);
  if ( *((_BYTE *)v13 + 24) || (v14 = v13[4], *((_BYTE *)v13 + 8)) )
    sub_DBF6E(0);
  v15 = *v13;
  v16 = *(_QWORD *)(a1 + 504);
  v17 = (_QWORD *)(v16 + 8 * v11);
  v18 = *(_QWORD *)(v16 + 8LL * v7);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  while ( v15 >= v14 )
  {
    v19 = v14++;
    sub_AB9E50(a1, v7, *(_DWORD *)(*v17 + 4 * v19));
  }
  sub_ABDA50((_QWORD *)a1, v7);
}

