void __fastcall sub_1095910(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r13d
  __int64 *v9; // r12
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 *v16; // r12
  __int64 *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebp
  __int64 *v24; // r12
  __int64 *v25; // rax
  __int64 v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // r13d
  __int64 *v36; // r12
  __int64 *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // eax
  __int64 *v42[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !a3 )
  {
    if ( a2 > 1 )
    {
      if ( a2 != 2 )
        return;
LABEL_4:
      v3 = sub_2220DF0("relaxed-simd", 12);
      v4 = sub_2220F70(a1, "relaxed-simd", 12, v3);
      v8 = v4;
      v9 = (__int64 *)(*(_QWORD *)a1 + 8LL * v4);
      if ( *v9 )
      {
        if ( *v9 != -8 )
        {
          sub_1005BB0(v42, v9, 0);
          *(_BYTE *)(*v42[0] + 8) = 0;
          return;
        }
        --*(_DWORD *)(a1 + 16);
      }
      v26 = sub_220C370(29, 8, v4, v5, v6, v7);
      strcpy((char *)(v26 + 16), "relaxed-simd");
      *(_QWORD *)v26 = 12;
      *(_BYTE *)(v26 + 8) = 0;
      *v9 = v26;
      ++*(_DWORD *)(a1 + 12);
      v27 = sub_2221390(a1, v8);
      sub_1005BB0(v42, (__int64 *)(*(_QWORD *)a1 + 8LL * v27), 0);
      *(_BYTE *)(*v42[0] + 8) = 0;
      return;
    }
    v10 = sub_2220DF0("simd128", 7);
    v11 = sub_2220F70(a1, "simd128", 7, v10);
    v15 = v11;
    v16 = (__int64 *)(*(_QWORD *)a1 + 8LL * v11);
    if ( *v16 )
    {
      if ( *v16 != -8 )
      {
        sub_1005BB0(v42, v16, 0);
        v17 = v42[0];
LABEL_11:
        *(_BYTE *)(*v17 + 8) = 0;
        goto LABEL_4;
      }
      --*(_DWORD *)(a1 + 16);
    }
    v28 = sub_220C370(24, 8, v11, v12, v13, v14);
    *(_WORD *)(v28 + 20) = 12849;
    *(_DWORD *)(v28 + 16) = 1684892019;
    *(_BYTE *)(v28 + 22) = 56;
    *(_BYTE *)(v28 + 23) = 0;
    *(_QWORD *)v28 = 7;
    *(_BYTE *)(v28 + 8) = 0;
    *v16 = v28;
    ++*(_DWORD *)(a1 + 12);
    v29 = sub_2221390(a1, v15);
    sub_1005BB0(v42, (__int64 *)(*(_QWORD *)a1 + 8LL * v29), 0);
    v17 = v42[0];
    goto LABEL_11;
  }
  if ( a2 == 1 )
  {
LABEL_21:
    v30 = sub_2220DF0("simd128", 7);
    v31 = sub_2220F70(a1, "simd128", 7, v30);
    v35 = v31;
    v36 = (__int64 *)(*(_QWORD *)a1 + 8LL * v31);
    if ( *v36 )
    {
      if ( *v36 != -8 )
      {
        sub_1005BB0(v42, v36, 0);
        v37 = v42[0];
LABEL_24:
        *(_BYTE *)(*v37 + 8) = 1;
        return;
      }
      --*(_DWORD *)(a1 + 16);
    }
    v38 = sub_220C370(24, 8, v31, v32, v33, v34);
    *(_WORD *)(v38 + 20) = 12849;
    *(_DWORD *)(v38 + 16) = 1684892019;
    *(_BYTE *)(v38 + 22) = 56;
    *(_BYTE *)(v38 + 23) = 0;
    *(_QWORD *)v38 = 7;
    *(_BYTE *)(v38 + 8) = 0;
    *v36 = v38;
    ++*(_DWORD *)(a1 + 12);
    v39 = sub_2221390(a1, v35);
    sub_1005BB0(v42, (__int64 *)(*(_QWORD *)a1 + 8LL * v39), 0);
    v37 = v42[0];
    goto LABEL_24;
  }
  if ( a2 == 2 )
  {
    v18 = sub_2220DF0("relaxed-simd", 12);
    v19 = sub_2220F70(a1, "relaxed-simd", 12, v18);
    v23 = v19;
    v24 = (__int64 *)(*(_QWORD *)a1 + 8LL * v19);
    if ( *v24 )
    {
      if ( *v24 != -8 )
      {
        sub_1005BB0(v42, v24, 0);
        v25 = v42[0];
LABEL_29:
        *(_BYTE *)(*v25 + 8) = 1;
        goto LABEL_21;
      }
      --*(_DWORD *)(a1 + 16);
    }
    v40 = sub_220C370(29, 8, v19, v20, v21, v22);
    strcpy((char *)(v40 + 16), "relaxed-simd");
    *(_QWORD *)v40 = 12;
    *(_BYTE *)(v40 + 8) = 0;
    *v24 = v40;
    ++*(_DWORD *)(a1 + 12);
    v41 = sub_2221390(a1, v23);
    sub_1005BB0(v42, (__int64 *)(*(_QWORD *)a1 + 8LL * v41), 0);
    v25 = v42[0];
    goto LABEL_29;
  }
}

