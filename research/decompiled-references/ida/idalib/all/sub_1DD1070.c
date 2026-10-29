__int64 __fastcall sub_1DD1070(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int16 *v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  _DWORD *v27; // rdx

  v6 = a3;
  v8 = a4 + 1;
  v9 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v12 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v6 + 32),
          (const __m128i *)(v9 * (((unsigned __int64)v8 - (v8 != nullptr)) / v9 + (v8 != nullptr))),
          a5,
          a6,
          v10,
          v11);
  if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v14 = *a1;
  v15 = v12;
  sub_18C74E0(*a1, 4, 0, 4);
  v20 = sub_1DC71F0(a1, *(_QWORD *)(v6 + 40), v16, v17, v18, v19, a5, a6);
  v25 = sub_19146D0(*a1, (unsigned __int64)v20, v21, v22, v23, v24, a5, a6);
  if ( v25 != 1
    && ((v26 = v25 & 0xFFFFFFFFFFFFFFFELL, !*(_DWORD *)(*a1 + 12632))
     && v15 == *(_QWORD *)(v6 + 32)
     && *(_QWORD *)(v6 + 40) == v26
     || (v6 = sub_1E712B0(*a1, v15, v26, *(unsigned int *)(v6 + 48)), (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
  {
    sub_1EA6140(a2, v6, 4, 4);
    *v27 = *a4;
  }
  else
  {
    v6 = 0;
  }
  sub_190D5E0(v14, a5);
  return v6;
}
