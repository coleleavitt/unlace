__int64 __fastcall sub_194EB40(__int64 *a1, __int64 a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  _BOOL8 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  unsigned int *v21; // rdx
  unsigned int v22; // [rsp+0h] [rbp-58h]
  unsigned int v23; // [rsp+4h] [rbp-54h]
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25[9]; // [rsp+10h] [rbp-48h] BYREF

  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v10 = v8 != nullptr;
  v11 = (unsigned __int64)v8 - v10;
  v14 = sub_1946010(a1, a2, *(_QWORD *)(a3 + 32), v9 * (v11 / v9 + v10), v12, v13, a5, a6);
  if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v24 = v14;
  v23 = *(_DWORD *)(a3 + 20);
  v22 = *a4;
  v15 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v25[0] = *(_QWORD *)(a3 + 32);
  v25[1] = v15 * (v10 + v11 / v15);
  v16 = (unsigned int)sub_F6CE20(v25);
  v17 = sub_F6CCB0(v25, a5);
  v18 = sub_1E503F0(*a1, v24, (v16 << 32) | v17, v22, v23);
  v19 = v18;
  if ( (v18 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  sub_1EA6140(a2, v18, 4, 4);
  *v21 = *a4;
  return v19;
}
