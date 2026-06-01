__int64 __fastcall sub_B4CAE0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        int a13,
        int a14,
        int a15,
        void *a16)
{
  __int64 v16; // rcx
  __int64 v17; // rax

  v16 = *(_QWORD *)(a3 + 8);
  v17 = *a2;
  if ( v16 )
    return sub_15DC610(
             v17,
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)(v16 - 4),
             v16,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  else
    return sub_15DC610(v17, *(_QWORD *)(a1 + 8), 0, 0, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

