__int64 __fastcall sub_AC79C0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v6; // rax
  _OWORD *v7; // rax
  __int64 v8; // rax
  _OWORD *v9; // rax
  _OWORD *v10; // rax
  _OWORD *v11; // rax
  _OWORD *v12; // rax
  _OWORD *v13; // rax
  _OWORD *v14; // rax
  _OWORD *v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-178h] BYREF
  __int64 v20; // [rsp+8h] [rbp-170h]
  __int64 v21; // [rsp+10h] [rbp-168h]
  __int64 v22; // [rsp+18h] [rbp-160h]
  _OWORD *v23; // [rsp+20h] [rbp-158h]
  __int64 v24; // [rsp+28h] [rbp-150h]
  int v25; // [rsp+30h] [rbp-148h]
  __int64 v26; // [rsp+38h] [rbp-140h]
  __int64 v27; // [rsp+40h] [rbp-138h]
  int v28; // [rsp+48h] [rbp-130h]
  __int64 v29; // [rsp+50h] [rbp-128h]
  _OWORD *v30; // [rsp+58h] [rbp-120h]
  __int64 v31; // [rsp+60h] [rbp-118h]
  int v32; // [rsp+68h] [rbp-110h]
  __int64 v33; // [rsp+70h] [rbp-108h]
  _OWORD *v34; // [rsp+78h] [rbp-100h]
  __int64 v35; // [rsp+80h] [rbp-F8h]
  int v36; // [rsp+88h] [rbp-F0h]
  _OWORD *v37; // [rsp+90h] [rbp-E8h]
  __int64 v38; // [rsp+98h] [rbp-E0h]
  int v39; // [rsp+A0h] [rbp-D8h]
  _OWORD *v40; // [rsp+A8h] [rbp-D0h]
  __int64 v41; // [rsp+B0h] [rbp-C8h]
  int v42; // [rsp+B8h] [rbp-C0h]
  __int128 v43; // [rsp+C0h] [rbp-B8h]
  __int64 (__fastcall ***v44)(); // [rsp+D0h] [rbp-A8h]
  _OWORD *v45; // [rsp+D8h] [rbp-A0h]
  __int64 v46; // [rsp+E0h] [rbp-98h]
  int v47; // [rsp+E8h] [rbp-90h]
  __int128 v48; // [rsp+F0h] [rbp-88h]
  _OWORD *v49; // [rsp+100h] [rbp-78h]
  __int64 v50; // [rsp+108h] [rbp-70h]
  int v51; // [rsp+110h] [rbp-68h]
  __int64 v52; // [rsp+120h] [rbp-58h]
  __int64 v53; // [rsp+128h] [rbp-50h]
  _OWORD *v54; // [rsp+130h] [rbp-48h]
  __int64 v55; // [rsp+138h] [rbp-40h]
  int v56; // [rsp+140h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 8);
  v21 = a1;
  v20 = v6;
  v22 = 0;
  v19 = off_1C61120;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v23 = v7;
  v24 = 8;
  v25 = 0;
  v8 = sub_186B270(0x100u);
  *(_DWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 56) = 0;
  *(_DWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 120) = 0;
  *(_DWORD *)(v8 + 152) = 0;
  *(_DWORD *)(v8 + 184) = 0;
  *(_DWORD *)(v8 + 216) = 0;
  *(_DWORD *)(v8 + 248) = 0;
  *(_OWORD *)v8 = 0;
  *(_OWORD *)(v8 + 32) = 0;
  *(_OWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 96) = 0;
  *(_OWORD *)(v8 + 128) = 0;
  *(_OWORD *)(v8 + 160) = 0;
  *(_OWORD *)(v8 + 192) = 0;
  *(_OWORD *)(v8 + 224) = 0;
  v26 = v8;
  v27 = 8;
  v28 = 0;
  v29 = 0;
  v9 = (_OWORD *)sub_186B270(0x80u);
  v30 = v9;
  *v9 = 0;
  v9[1] = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[6] = 0;
  v9[7] = 0;
  v31 = 8;
  v32 = 0;
  v33 = 0;
  v10 = (_OWORD *)sub_186B270(0x40u);
  v34 = v10;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v35 = 8;
  v36 = 0;
  v11 = (_OWORD *)sub_186B270(0x40u);
  v37 = v11;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v38 = 8;
  v39 = 0;
  v12 = (_OWORD *)sub_186B270(0x40u);
  v40 = v12;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v41 = 8;
  v42 = 0;
  v44 = &v19;
  v43 = 0;
  v13 = (_OWORD *)sub_186B270(0x40u);
  v45 = v13;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v46 = 8;
  v47 = 0;
  v48 = 0;
  v14 = (_OWORD *)sub_186B270(0x80u);
  v49 = v14;
  *v14 = 0;
  v14[1] = 0;
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0;
  v50 = 8;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v15 = (_OWORD *)sub_186B270(0x40u);
  *v15 = 0;
  v15[1] = 0;
  v15[2] = 0;
  v15[3] = 0;
  v54 = v15;
  v55 = 8;
  v56 = 0;
  sub_1352AB0((unsigned int)&v19, a4, a2, a3, v16, v17, (_DWORD)v19, v20);
  return sub_ACC800(&v19);
}

