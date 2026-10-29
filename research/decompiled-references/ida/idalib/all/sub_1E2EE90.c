__int64 __fastcall sub_1E2EE90(__int64 *a1, _QWORD *a2, __int64 a3, unsigned int *a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rbp
  _DWORD *v10; // rbx
  unsigned int v11; // eax
  _BOOL8 v12; // r12
  unsigned __int64 v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned int *v22; // rdx
  unsigned int v24; // [rsp+8h] [rbp-60h]
  unsigned int v25; // [rsp+14h] [rbp-54h]
  __int64 v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v9 = a3;
  v10 = a4 + 1;
  v11 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = v10 != nullptr;
  v13 = (unsigned __int64)v10 - v12;
  v16 = sub_1E1DA60(a1, a2, *(_QWORD *)(v9 + 32), (const __m128i *)(v11 * (v13 / v11 + v12)), v14, v15, a5, a6);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v17 = v16;
    if ( *(_DWORD *)(*a1 + 12632) )
    {
      v18 = *(_QWORD *)(v9 + 32);
    }
    else
    {
      sub_F6C520(*(_QWORD *)(v9 + 32));
      v18 = *(_QWORD *)(v9 + 32);
      if ( v17 == v18 )
        goto LABEL_5;
    }
    v25 = *(_DWORD *)(v9 + 20);
    v24 = *a4;
    v19 = sub_F6C520(v18);
    v26[0] = *(_QWORD *)(v9 + 32);
    v26[1] = v19 * (v12 + v13 / v19);
    v20 = (unsigned int)sub_F6CE20(v26);
    v21 = sub_F6CCB0(v26, a5);
    v9 = sub_1E503F0(*a1, v17, (v20 << 32) | v21, v24, v25);
    if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
LABEL_5:
      sub_1EA6140(a2, v9, 4, 4);
      *v22 = *a4;
      return v9;
    }
  }
  return 0;
}
