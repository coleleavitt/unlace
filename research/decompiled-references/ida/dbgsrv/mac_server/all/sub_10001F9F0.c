/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F9F0
// Address: 0x000000010001F9F0

//----- (000000010001F9F0) ----------------------------------------------------
bool __fastcall sub_10001F9F0(__int64 a1, int a2, int *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v18; // rax
  thread_act_t v19; // edi
  thread_state_flavor_t v20; // esi
  mach_msg_type_number_t v21; // ecx
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int64 v31; // rax
  natural_t new_state[2]; // [rsp+Ch] [rbp-354h] BYREF
  int v34; // [rsp+14h] [rbp-34Ch]
  char v35; // [rsp+18h] [rbp-348h]
  __int16 v36; // [rsp+1Ah] [rbp-346h]
  int v37; // [rsp+1Ch] [rbp-344h]
  __int16 v38; // [rsp+20h] [rbp-340h]
  int v39; // [rsp+24h] [rbp-33Ch]
  __int16 v40; // [rsp+28h] [rbp-338h]
  __int64 v41; // [rsp+2Ch] [rbp-334h]
  __int128 v42; // [rsp+34h] [rbp-32Ch]
  __int128 v43; // [rsp+44h] [rbp-31Ch]
  __int128 v44; // [rsp+54h] [rbp-30Ch]
  __int128 v45; // [rsp+64h] [rbp-2FCh]
  __int128 v46; // [rsp+74h] [rbp-2ECh]
  __int128 v47; // [rsp+84h] [rbp-2DCh]
  __int128 v48; // [rsp+94h] [rbp-2CCh]
  __int128 v49; // [rsp+A4h] [rbp-2BCh]
  __int128 v50; // [rsp+B4h] [rbp-2ACh]
  __int128 v51; // [rsp+C4h] [rbp-29Ch]
  __int128 v52; // [rsp+D4h] [rbp-28Ch]
  __int128 v53; // [rsp+E4h] [rbp-27Ch]
  __int128 v54; // [rsp+F4h] [rbp-26Ch]
  __int128 v55; // [rsp+104h] [rbp-25Ch]
  __int128 v56; // [rsp+114h] [rbp-24Ch]
  __int128 v57; // [rsp+124h] [rbp-23Ch]
  __int128 v58; // [rsp+134h] [rbp-22Ch]
  __int128 v59; // [rsp+144h] [rbp-21Ch]
  __int128 v60; // [rsp+154h] [rbp-20Ch]
  __int128 v61; // [rsp+164h] [rbp-1FCh]
  __int128 v62; // [rsp+174h] [rbp-1ECh]
  __int128 v63; // [rsp+184h] [rbp-1DCh]
  __int128 v64; // [rsp+194h] [rbp-1CCh]
  __int128 v65; // [rsp+1A4h] [rbp-1BCh]
  __int128 v66; // [rsp+258h] [rbp-108h]
  __int128 v67; // [rsp+268h] [rbp-F8h]
  __int128 v68; // [rsp+278h] [rbp-E8h]
  __int128 v69; // [rsp+288h] [rbp-D8h]
  __int128 v70; // [rsp+298h] [rbp-C8h]
  __int128 v71; // [rsp+2A8h] [rbp-B8h]
  __int128 v72; // [rsp+2B8h] [rbp-A8h]
  __int128 v73; // [rsp+2C8h] [rbp-98h]
  __int128 v74; // [rsp+2D8h] [rbp-88h]
  __int128 v75; // [rsp+2E8h] [rbp-78h]
  __int128 v76; // [rsp+2F8h] [rbp-68h]
  __int128 v77; // [rsp+308h] [rbp-58h]
  __int128 v78; // [rsp+318h] [rbp-48h]
  __int128 v79; // [rsp+328h] [rbp-38h]
  __int128 v80; // [rsp+338h] [rbp-28h]
  __int128 v81; // [rsp+348h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 1233) == 1 )
  {
    v34 = *a3;
    v35 = *((_BYTE *)a3 + 4);
    v36 = *((_WORD *)a3 + 3);
    v37 = a3[2];
    v38 = *((_WORD *)a3 + 6);
    v39 = a3[4];
    v40 = *((_WORD *)a3 + 10);
    v41 = *((_QWORD *)a3 + 3);
    v49 = *((_OWORD *)a3 + 9);
    v48 = *((_OWORD *)a3 + 8);
    v47 = *((_OWORD *)a3 + 7);
    v46 = *((_OWORD *)a3 + 6);
    v3 = *((_OWORD *)a3 + 2);
    v4 = *((_OWORD *)a3 + 3);
    v5 = *((_OWORD *)a3 + 4);
    v45 = *((_OWORD *)a3 + 5);
    v44 = v5;
    v43 = v4;
    v42 = v3;
    v6 = *((_OWORD *)a3 + 11);
    v7 = *((_OWORD *)a3 + 12);
    v8 = *((_OWORD *)a3 + 13);
    v50 = *((_OWORD *)a3 + 10);
    v51 = v6;
    v52 = v7;
    v53 = v8;
    v54 = *((_OWORD *)a3 + 14);
    v55 = *((_OWORD *)a3 + 15);
    v56 = *((_OWORD *)a3 + 16);
    v57 = *((_OWORD *)a3 + 17);
    v9 = *((_OWORD *)a3 + 27);
    v10 = *((_OWORD *)a3 + 28);
    v11 = *((_OWORD *)a3 + 29);
    v66 = *((_OWORD *)a3 + 26);
    v67 = v9;
    v68 = v10;
    v69 = v11;
    v70 = *((_OWORD *)a3 + 30);
    v71 = *((_OWORD *)a3 + 31);
    v72 = *((_OWORD *)a3 + 32);
    v73 = *((_OWORD *)a3 + 33);
    v12 = *((_OWORD *)a3 + 19);
    v13 = *((_OWORD *)a3 + 20);
    v14 = *((_OWORD *)a3 + 21);
    v58 = *((_OWORD *)a3 + 18);
    v59 = v12;
    v60 = v13;
    v61 = v14;
    v62 = *((_OWORD *)a3 + 22);
    v63 = *((_OWORD *)a3 + 23);
    v65 = *((_OWORD *)a3 + 25);
    v64 = *((_OWORD *)a3 + 24);
    v15 = *((_OWORD *)a3 + 35);
    v16 = *((_OWORD *)a3 + 36);
    v17 = *((_OWORD *)a3 + 37);
    v74 = *((_OWORD *)a3 + 34);
    v75 = v15;
    v76 = v16;
    v77 = v17;
    v78 = *((_OWORD *)a3 + 38);
    v79 = *((_OWORD *)a3 + 39);
    v80 = *((_OWORD *)a3 + 40);
    v81 = *((_OWORD *)a3 + 41);
    v18 = sub_100001D80(a1, a2);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 4);
      v20 = 17;
      v21 = 211;
      return thread_set_state(v19, v20, new_state, v21) == 0;
    }
  }
  else
  {
    v34 = *a3;
    v35 = *((_BYTE *)a3 + 4);
    v36 = *((_WORD *)a3 + 3);
    v37 = a3[2];
    v38 = *((_WORD *)a3 + 6);
    v39 = a3[4];
    v40 = *((_WORD *)a3 + 10);
    v41 = *((_QWORD *)a3 + 3);
    v49 = *((_OWORD *)a3 + 9);
    v48 = *((_OWORD *)a3 + 8);
    v47 = *((_OWORD *)a3 + 7);
    v46 = *((_OWORD *)a3 + 6);
    v22 = *((_OWORD *)a3 + 2);
    v23 = *((_OWORD *)a3 + 3);
    v24 = *((_OWORD *)a3 + 4);
    v45 = *((_OWORD *)a3 + 5);
    v44 = v24;
    v43 = v23;
    v42 = v22;
    v25 = *((_OWORD *)a3 + 11);
    v26 = *((_OWORD *)a3 + 12);
    v27 = *((_OWORD *)a3 + 13);
    v50 = *((_OWORD *)a3 + 10);
    v51 = v25;
    v52 = v26;
    v53 = v27;
    v54 = *((_OWORD *)a3 + 14);
    v55 = *((_OWORD *)a3 + 15);
    v56 = *((_OWORD *)a3 + 16);
    v57 = *((_OWORD *)a3 + 17);
    v28 = *((_OWORD *)a3 + 27);
    v29 = *((_OWORD *)a3 + 28);
    v30 = *((_OWORD *)a3 + 29);
    v66 = *((_OWORD *)a3 + 26);
    v67 = v28;
    v68 = v29;
    v69 = v30;
    v70 = *((_OWORD *)a3 + 30);
    v71 = *((_OWORD *)a3 + 31);
    v72 = *((_OWORD *)a3 + 32);
    v73 = *((_OWORD *)a3 + 33);
    v31 = sub_100001D80(a1, a2);
    if ( v31 )
    {
      v19 = *(_DWORD *)(v31 + 4);
      v20 = 16;
      v21 = 179;
      return thread_set_state(v19, v20, new_state, v21) == 0;
    }
  }
  return 0;
}
