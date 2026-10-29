__int64 __fastcall sub_101D6D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbp
  unsigned int v23; // r13d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v36; // rax
  __int64 v37; // r9
  unsigned int v38; // r8d
  __int64 *v39; // rdx
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // [rsp+8h] [rbp-40h] BYREF
  __m128 v43; // [rsp+10h] [rbp-38h] BYREF

  v3 = sub_227D6D0(a1, a2);
  sub_995540(v3, "\n*** Source Manager Stats:\n");
  v4 = sub_227D6D0(v3, "\n*** Source Manager Stats:\n");
  v5 = sub_227B910(v4, *(unsigned int *)(a1 + 128));
  v6 = sub_995540(v5, " files mapped, ");
  v7 = sub_227B910(v6, (__int64)(*(_QWORD *)(a1 + 168) - *(_QWORD *)(a1 + 160)) >> 3);
  sub_995540(v7, " mem buffers mapped.\n");
  v8 = sub_227D6D0(v7, " mem buffers mapped.\n");
  v9 = sub_227B910(v8, *(unsigned int *)(a1 + 192));
  v10 = sub_995540(v9, " local SLocEntries allocated (");
  v11 = sub_227B910(v10, 24LL * *(unsigned int *)(a1 + 196));
  v12 = sub_995540(v11, " bytes of capacity), ");
  v13 = sub_227B910(v12, *(unsigned int *)(a1 + 312));
  sub_995540(v13, "B of SLoc address space used.\n");
  v14 = sub_227D6D0(v13, "B of SLoc address space used.\n");
  v15 = sub_227B910(v14, *(_QWORD *)(a1 + 264));
  v16 = sub_995540(v15, " loaded SLocEntries allocated (");
  v17 = sub_227B910(v16, 768LL * *(unsigned int *)(a1 + 280));
  v18 = sub_995540(v17, " bytes of capacity), ");
  v19 = (__int64)"B of SLoc address space used.\n";
  v20 = sub_227B910(v18, 0x80000000 - *(_DWORD *)(a1 + 316));
  sub_995540(v20, "B of SLoc address space used.\n");
  if ( !*(_DWORD *)(a1 + 128)
    || (v19 = *(_QWORD *)(a1 + 120) + 16LL * *(unsigned int *)(a1 + 136),
        v42 = v19,
        v43 = _mm_loadh_ps((const double *)&v42),
        sub_101C770(&v43, (_QWORD *)v19),
        v20 = v43.m128_i64[1],
        v36 = (_QWORD *)v43.m128_u64[0],
        v37 = *(_QWORD *)(a1 + 120) + 16LL * *(unsigned int *)(a1 + 136),
        v37 == v43.m128_u64[0]) )
  {
    v21 = 0;
    v22 = 0;
  }
  else
  {
    v38 = 0;
    LODWORD(v19) = 0;
    do
    {
LABEL_8:
      v39 = (__int64 *)v36[1];
      v40 = v39[5] == 0;
      v41 = *v39;
      v19 = !v40 + (unsigned int)v19;
      if ( v41 )
        v38 += *(_DWORD *)(v41 + 16) - *(_DWORD *)(v41 + 8);
      v36 += 2;
      if ( v36 != (_QWORD *)v43.m128_u64[1] )
      {
        while ( *v36 == -4096 || *v36 == -8192 )
        {
          v36 += 2;
          if ( (_QWORD *)v43.m128_u64[1] == v36 )
          {
            if ( v36 != (_QWORD *)v37 )
              goto LABEL_8;
            goto LABEL_14;
          }
        }
      }
    }
    while ( v36 != (_QWORD *)v37 );
LABEL_14:
    v22 = (unsigned int)v19;
    v21 = v38;
  }
  v23 = *(_DWORD *)(a1 + 640);
  v24 = sub_227D6D0(v20, v19);
  v25 = sub_227B910(v24, v21);
  v26 = sub_995540(v25, " bytes of files mapped, ");
  v27 = sub_227B910(v26, v22);
  v28 = sub_995540(v27, " files with line #'s computed, ");
  v29 = sub_227B910(v28, v23);
  sub_995540(v29, " files with macro args computed.\n");
  v30 = sub_227D6D0(v29, " files with macro args computed.\n");
  v31 = sub_995540(v30, "FileID scans: ");
  v32 = sub_227B910(v31, *(unsigned int *)(a1 + 528));
  v33 = sub_995540(v32, " linear, ");
  v34 = sub_227B910(v33, *(unsigned int *)(a1 + 532));
  return sub_995540(v34, " binary.\n");
}
