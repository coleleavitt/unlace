/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99F2C
// Address: 0x00099F2C

//----- (00099F2C) --------------------------------------------------------
int __fastcall sub_99F2C(int *a1, int a2, _DWORD *a3)
{
  int v4; // r5
  int v5; // r6
  char *v6; // r1
  int *v7; // r0
  int v8; // r2
  int v9; // r3
  int v10; // r8
  int v11; // r6
  char *v12; // lr
  int v13; // r12
  int v14; // r3
  int v15; // r6
  int v16; // r5
  int v17; // r3
  int v19; // r6
  const char *v20; // r4
  _DWORD v21[3]; // [sp+14h] [bp-34h] BYREF
  int v22; // [sp+20h] [bp-28h] BYREF

  v4 = 0;
  v22 = a2;
  v5 = a3[1];
  sub_9A0FC(v21, 0, a1[1], a3, v5, a1[1], (int)a3, &v22);
  if ( !v21[0] || v21[0] == v5 )
    return v4;
  v6 = (char *)(*(_DWORD *)v21[2] + 8 * v21[0]);
  v7 = (int *)(v6 - 4);
  v8 = *(_DWORD *)v6;
  if ( v6 == byte_4 )
    return 0;
  v9 = *v7;
  if ( *v7 == 1 )
    return 0;
  v10 = *((_DWORD *)v6 - 2);
  if ( v9 < 0 )
  {
    v13 = 1;
    goto LABEL_11;
  }
  v11 = v9 | (2 * (v9 & 0x40000000));
  v9 = *(int *)((char *)v7 + v11);
  v7 = (int *)((char *)v7 + v11);
  if ( v9 <= -1 )
  {
    v13 = 0;
LABEL_11:
    v15 = HIBYTE(v9) & 0xF;
    if ( v15 == 2 )
    {
      v12 = (char *)_aeabi_unwind_cpp_pr2;
      v16 = 1;
    }
    else
    {
      if ( v15 != 1 )
      {
        if ( !v15 )
        {
          v14 = (int)(v7 + 1);
          if ( v13 )
            v14 = 0;
          v12 = (char *)_aeabi_unwind_cpp_pr0;
          goto LABEL_17;
        }
        v19 = 814;
        v20 = "unknown personality routine";
LABEL_30:
        fprintf(
          (FILE *)((char *)&_sF + 168),
          "libunwind: %s %s:%d - %s\n",
          "getInfoFromEHABISection",
          "/usr/local/google/buildbot/src/android/ndk-release-r19/external/libcxx/../../external/libunwind_llvm/src/UnwindCursor.hpp",
          v19,
          v20);
        fflush((FILE *)((char *)&_sF + 168));
        abort();
      }
      v12 = (char *)_aeabi_unwind_cpp_pr1;
      v16 = 0;
    }
    v17 = BYTE2(v9);
    if ( (v17 == 0) | v13 ^ 1 )
    {
      v14 = (int)&v7[v17 + 1];
      goto LABEL_22;
    }
    v19 = 821;
    v20 = "index inlined table detected but pr function requires extra words";
    goto LABEL_30;
  }
  v12 = (char *)v7 + (v9 | (2 * (v9 & 0x40000000)));
  v13 = 0;
  v14 = (int)&v7[HIBYTE(v7[1]) + 2];
LABEL_17:
  v16 = 0;
LABEL_22:
  a1[94] = (int)v7;
  a1[86] = (int)&v6[(v10 | (2 * (v10 & 0x40000000))) - 8];
  a1[87] = (int)&v6[v8 | (2 * (v8 & 0x40000000))];
  a1[88] = v14;
  a1[89] = (int)v12;
  if ( v16 )
    v16 = 2;
  if ( v13 )
    v16 = 1;
  a1[91] = v16;
  return 1;
}
// E0A90: using guessed type FILE _sF;
