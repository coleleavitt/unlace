__int64 __fastcall sub_17763E0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r14
  _DWORD *v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rdx

  v4 = a3;
  v6 = a4 + 1;
  v7 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v10 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 40),
          (const __m128i *)(v7 * (((unsigned __int64)v6 - (v6 != nullptr)) / v7 + (v6 != nullptr))),
          v8,
          v9);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v12 = *a1;
  v13 = v10;
  sub_18C74E0(*a1, 4, 0, 4);
  v14 = sub_175B800(a1, *(unsigned __int16 **)(v4 + 32));
  v15 = sub_19146D0(*a1, v14);
  if ( v15 != 1
    && ((v16 = v15 & 0xFFFFFFFFFFFFFFFELL, !*(_DWORD *)(*a1 + 12632))
     && v13 == *(_QWORD *)(v4 + 40)
     && *(_QWORD *)(v4 + 32) == v16
     || (v4 = sub_1E716E0(*a1, v13, v16, *(unsigned int *)(v4 + 48)), (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
  {
    sub_1EA6140(a2, v4, 4, 4);
    *v17 = *a4;
  }
  else
  {
    v4 = 0;
  }
  sub_190D5E0(v12);
  return v4;
}
