__int64 __fastcall sub_1DD0E10(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  __int64 v6; // r14
  __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int16 *v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32[8]; // [rsp+8h] [rbp-40h] BYREF

  v6 = a3;
  v9 = a4 + 24;
  v10 = sub_F6C520(*(_QWORD *)(a3 + 40));
  v13 = sub_1DCE820(
          a1,
          a2,
          *(_QWORD *)(v6 + 40),
          (const __m128i *)(v10 * ((v9 - (unsigned __int64)(v9 != 0)) / v10 + (v9 != 0))),
          a5,
          a6,
          v11,
          v12);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v15 = *a1;
    v16 = v13;
    sub_18C74E0(*a1, 4, 0, 4);
    v21 = sub_1DC71F0(a1, *(_QWORD *)(v6 + 32), v17, v18, v19, v20, a5, a6);
    v26 = sub_19146D0(*a1, (unsigned __int64)v21, v22, v23, v24, v25, a5, a6);
    if ( v26 != 1 )
    {
      v27 = *a1;
      v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
      if ( !*(_DWORD *)(*a1 + 12632) && *(_QWORD *)(v6 + 40) == v16 && *(_QWORD *)(v6 + 32) == v28 )
      {
        v30 = v6 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_12:
        if ( *(_BYTE *)(*(_QWORD *)v30 + 16LL) == 18 )
        {
          sub_1EA6140(a2, v6, 24, 8);
          *(_QWORD *)(v31 + 8) = *(_QWORD *)(a4 + 8);
          *(_QWORD *)v31 = *(_QWORD *)a4;
          *(_DWORD *)(v31 + 16) = *(_DWORD *)(a4 + 16);
        }
        goto LABEL_9;
      }
      v29 = *(unsigned int *)(v6 + 48);
      v32[0] = v16;
      v6 = sub_1E654F0(v27, v32, v28, v29);
      v30 = v6 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v6 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        goto LABEL_12;
    }
    v6 = 0;
LABEL_9:
    sub_190D5E0(v15, a5);
    return v6;
  }
  return 0;
}
