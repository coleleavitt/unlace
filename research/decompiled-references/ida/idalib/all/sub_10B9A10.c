void __fastcall sub_10B9A10(__int64 a1, __int64 a2, __int64 a3, size_t a4, char a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  __int64 *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  __int64 *v24; // rbp
  __int64 *v25; // rax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // r13d
  __int64 *v32; // rbp
  __int64 *v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // r12d
  __int64 *v44; // rbp
  __int64 *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // eax
  unsigned int v48; // [rsp+Ch] [rbp-4Ch]
  __int64 *v49[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( a4 != 7 )
  {
    if ( a4 == 12 && *(_QWORD *)a3 == 0x2D646578616C6572LL && *(_DWORD *)(a3 + 8) == 1684892019 )
    {
      sub_10B9650(a2, 2u, a5);
      return;
    }
LABEL_3:
    v8 = sub_2244B30(a3, a4);
    v9 = (unsigned int)sub_2244CB0(a2, a3, a4, v8);
    v12 = (__int64 *)(*(_QWORD *)a2 + 8 * v9);
    if ( *v12 )
    {
      if ( *v12 != -8 )
      {
        sub_10298F0(v49, v12, 0);
        v13 = v49[0];
LABEL_14:
        *(_BYTE *)(*v13 + 8) = a5;
        return;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v48 = v9;
    v14 = sub_22300B0(a4 + 17, 8, v9, v9, v10, v11);
    v15 = v48;
    v16 = v14;
    if ( a4 )
    {
      memcpy((void *)(v14 + 16), (const void *)a3, a4);
      v15 = v48;
    }
    *(_BYTE *)(v16 + a4 + 16) = 0;
    *(_QWORD *)v16 = a4;
    *(_BYTE *)(v16 + 8) = 0;
    *v12 = v16;
    ++*(_DWORD *)(a2 + 12);
    v17 = sub_22450D0(a2, v15);
    sub_10298F0(v49, (__int64 *)(*(_QWORD *)a2 + 8LL * v17), 0);
    v13 = v49[0];
    goto LABEL_14;
  }
  if ( *(_DWORD *)a3 != 1684892019 || *(_WORD *)(a3 + 4) != 12849 || *(_BYTE *)(a3 + 6) != 56 )
    goto LABEL_3;
  if ( !a5 )
  {
    v18 = sub_2244B30("simd128", 7);
    v19 = sub_2244CB0(a2, "simd128", 7, v18);
    v23 = v19;
    v24 = (__int64 *)(*(_QWORD *)a2 + 8LL * v19);
    if ( *v24 )
    {
      if ( *v24 != -8 )
      {
        sub_10298F0(v49, v24, 0);
        v25 = v49[0];
        goto LABEL_21;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v36 = sub_22300B0(24, 8, v19, v20, v21, v22);
    *(_WORD *)(v36 + 20) = 12849;
    *(_DWORD *)(v36 + 16) = 1684892019;
    *(_BYTE *)(v36 + 22) = 56;
    *(_BYTE *)(v36 + 23) = 0;
    *(_QWORD *)v36 = 7;
    *(_BYTE *)(v36 + 8) = 0;
    *v24 = v36;
    ++*(_DWORD *)(a2 + 12);
    v37 = sub_22450D0(a2, v23);
    sub_10298F0(v49, (__int64 *)(*(_QWORD *)a2 + 8LL * v37), 0);
    v25 = v49[0];
LABEL_21:
    *(_BYTE *)(*v25 + 8) = 0;
    v26 = sub_2244B30("relaxed-simd", 12);
    v27 = sub_2244CB0(a2, "relaxed-simd", 12, v26);
    v31 = v27;
    v32 = (__int64 *)(*(_QWORD *)a2 + 8LL * v27);
    if ( *v32 )
    {
      if ( *v32 != -8 )
      {
        sub_10298F0(v49, v32, 0);
        v33 = v49[0];
LABEL_24:
        *(_BYTE *)(*v33 + 8) = 0;
        return;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v34 = sub_22300B0(29, 8, v27, v28, v29, v30);
    strcpy((char *)(v34 + 16), "relaxed-simd");
    *(_QWORD *)v34 = 12;
    *(_BYTE *)(v34 + 8) = 0;
    *v32 = v34;
    ++*(_DWORD *)(a2 + 12);
    v35 = sub_22450D0(a2, v31);
    sub_10298F0(v49, (__int64 *)(*(_QWORD *)a2 + 8LL * v35), 0);
    v33 = v49[0];
    goto LABEL_24;
  }
  v38 = sub_2244B30("simd128", 7);
  v39 = sub_2244CB0(a2, "simd128", 7, v38);
  v43 = v39;
  v44 = (__int64 *)(*(_QWORD *)a2 + 8LL * v39);
  if ( !*v44 )
    goto LABEL_34;
  if ( *v44 == -8 )
  {
    --*(_DWORD *)(a2 + 16);
LABEL_34:
    v46 = sub_22300B0(24, 8, v39, v40, v41, v42);
    *(_WORD *)(v46 + 20) = 12849;
    *(_DWORD *)(v46 + 16) = 1684892019;
    *(_BYTE *)(v46 + 22) = 56;
    *(_BYTE *)(v46 + 23) = 0;
    *(_QWORD *)v46 = 7;
    *(_BYTE *)(v46 + 8) = 0;
    *v44 = v46;
    ++*(_DWORD *)(a2 + 12);
    v47 = sub_22450D0(a2, v43);
    sub_10298F0(v49, (__int64 *)(*(_QWORD *)a2 + 8LL * v47), 0);
    v45 = v49[0];
    goto LABEL_32;
  }
  sub_10298F0(v49, v44, 0);
  v45 = v49[0];
LABEL_32:
  *(_BYTE *)(*v45 + 8) = 1;
}
