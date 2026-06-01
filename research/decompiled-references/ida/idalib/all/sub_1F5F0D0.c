__int64 __fastcall sub_1F5F0D0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_BYTE *)(a2 + 2) = (8 * (*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) & 1)) | *(_BYTE *)(a2 + 2) & 0xF7;
  v4 = *(_QWORD **)(*a1 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  v10 = *(_QWORD **)(*a1 + 8);
  v11 = sub_1EE13A0((__int64)v10, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v16 = sub_1EDB980(v10, v11, v12, v13, v14, v15);
  if ( v16 )
    v16 = sub_B8D340(v16);
  *(_QWORD *)(a2 + 24) = v16;
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 4) = result;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v18 = *(_QWORD *)(*a1 + 8);
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 13064) + 8LL * *(unsigned int *)(v18 + 13072) - 8);
    result = (unsigned int)(*(_DWORD *)(v18 + 13072) - 1);
    *(_DWORD *)(v18 + 13072) = result;
    *(_QWORD *)(a2 + 32) = v19;
  }
  return result;
}
