__int64 __fastcall sub_15812E0(_DWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ecx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax

  v3 = sub_227D6D0(a1, a2);
  sub_995540(v3, "\n*** Analysis Based Warnings Stats:\n");
  v4 = a1[11] - a1[12];
  if ( v4 )
    v5 = a1[13] / v4;
  else
    v5 = 0;
  v6 = sub_227D6D0(v3, "\n*** Analysis Based Warnings Stats:\n");
  v7 = sub_227B910(v6, (unsigned int)a1[11]);
  v8 = sub_995540(v7, " functions analyzed (");
  v9 = sub_227B910(v8, (unsigned int)a1[12]);
  v10 = sub_995540(v9, " w/o CFGs).\n");
  v11 = sub_995540(v10, "  ");
  v12 = sub_227B910(v11, (unsigned int)a1[13]);
  v13 = sub_995540(v12, " CFG blocks built.\n");
  v14 = sub_995540(v13, "  ");
  v15 = sub_227B910(v14, v5);
  v16 = sub_995540(v15, " average CFG blocks per function.\n");
  v17 = sub_995540(v16, "  ");
  v18 = sub_227B910(v17, (unsigned int)a1[14]);
  sub_995540(v18, " max CFG blocks per function.\n");
  v19 = a1[15];
  if ( v19 )
  {
    v20 = a1[18] / v19;
    v21 = a1[16] / v19;
  }
  else
  {
    v21 = 0;
    v20 = 0;
  }
  v22 = sub_227D6D0(v18, " max CFG blocks per function.\n");
  v23 = sub_227B910(v22, (unsigned int)a1[15]);
  v24 = sub_995540(v23, " functions analyzed for uninitialiazed variables\n");
  v25 = sub_995540(v24, "  ");
  v26 = sub_227B910(v25, (unsigned int)a1[16]);
  v27 = sub_995540(v26, " variables analyzed.\n");
  v28 = sub_995540(v27, "  ");
  v29 = sub_227B910(v28, v21);
  v30 = sub_995540(v29, " average variables per function.\n");
  v31 = sub_995540(v30, "  ");
  v32 = sub_227B910(v31, (unsigned int)a1[17]);
  v33 = sub_995540(v32, " max variables per function.\n");
  v34 = sub_995540(v33, "  ");
  v35 = sub_227B910(v34, (unsigned int)a1[18]);
  v36 = sub_995540(v35, " block visits.\n");
  v37 = sub_995540(v36, "  ");
  v38 = sub_227B910(v37, v20);
  v39 = sub_995540(v38, " average block visits per function.\n");
  v40 = sub_995540(v39, "  ");
  v41 = sub_227B910(v40, (unsigned int)a1[19]);
  return sub_995540(v41, " max block visits per function.\n");
}
