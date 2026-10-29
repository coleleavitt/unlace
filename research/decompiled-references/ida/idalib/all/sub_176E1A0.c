__int64 __fastcall sub_176E1A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rbx
  unsigned __int16 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-48h]
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]

  v4 = a3;
  v6 = a4 + 16;
  v7 = sub_F6C520(*(_QWORD *)(a3 + 32));
  v10 = sub_17687F0(
          a1,
          a2,
          *(_QWORD *)(v4 + 32),
          (const __m128i *)(v7 * ((v6 - (unsigned __int64)(v6 != 0)) / v7 + (v6 != 0))),
          v8,
          v9);
  if ( (v10 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v12 = v10;
  v17 = *a1;
  sub_18C74E0(*a1, 4, 0, 4);
  *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 40) = 1;
  v13 = *(unsigned __int16 **)(a4 + 8);
  if ( !v13 )
    v13 = *(unsigned __int16 **)(v4 + 40);
  v14 = sub_175B800(a1, v13);
  v15 = sub_19146D0(*a1, v14);
  if ( v15 != 1
    && ((v18 = v15 & 0xFFFFFFFFFFFFFFFELL, !*(_DWORD *)(*a1 + 12632))
     && v12 == *(_QWORD *)(v4 + 32)
     && v13 == (unsigned __int16 *)v18
     || (v4 = sub_1741030(
                a1,
                v12,
                (*(_WORD *)(v4 + 18) >> 6) & 7,
                0,
                v18,
                (*(_BYTE *)(v4 + 18) >> 3) & 7,
                *(_QWORD *)a4),
         (v4 & 0xFFFFFFFFFFFFFFF0LL) != 0)) )
  {
    sub_1EA6140(a2, v4, 16, 8);
    *(_DWORD *)v16 = *(_DWORD *)a4;
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(a4 + 4);
    *(_QWORD *)(v16 + 8) = v18;
  }
  else
  {
    v4 = 0;
  }
  sub_190D5E0(v17);
  return v4;
}
