unsigned int *__fastcall sub_8BCBC0(__int64 a1)
{
  int v1; // edx
  char v2; // cl
  __int64 v3; // rax
  __int64 v4; // rdx
  char v5; // si
  __int64 v6; // rax
  unsigned int *result; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  void *v10; // r12
  void *v11; // r12
  void *v12; // r12
  void *v13; // r12
  void *v14; // r12
  void *v15; // r12
  void *v16; // r12
  __int64 v17; // r14
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  char v21; // r12
  void *v22; // r14
  int v23; // [rsp+10h] [rbp-238h]
  __int64 v24; // [rsp+40h] [rbp-208h]
  int v25; // [rsp+90h] [rbp-1B8h] BYREF
  char v26; // [rsp+94h] [rbp-1B4h]
  __int64 v27; // [rsp+98h] [rbp-1B0h]
  int v28; // [rsp+A0h] [rbp-1A8h] BYREF
  char v29; // [rsp+A4h] [rbp-1A4h]
  __int64 v30; // [rsp+A8h] [rbp-1A0h]
  int v31; // [rsp+B0h] [rbp-198h] BYREF
  char v32; // [rsp+B4h] [rbp-194h]
  __int64 v33; // [rsp+B8h] [rbp-190h]
  int v34; // [rsp+C0h] [rbp-188h] BYREF
  char v35; // [rsp+C4h] [rbp-184h]
  __int64 v36; // [rsp+C8h] [rbp-180h]
  int v37; // [rsp+D0h] [rbp-178h] BYREF
  char v38; // [rsp+D4h] [rbp-174h]
  __int64 v39; // [rsp+D8h] [rbp-170h]
  int v40; // [rsp+E0h] [rbp-168h] BYREF
  char v41; // [rsp+E4h] [rbp-164h]
  __int64 v42; // [rsp+E8h] [rbp-160h]
  int v43; // [rsp+F0h] [rbp-158h] BYREF
  char v44; // [rsp+F4h] [rbp-154h]
  __int64 v45; // [rsp+F8h] [rbp-150h]
  int v46; // [rsp+100h] [rbp-148h] BYREF
  char v47; // [rsp+104h] [rbp-144h]
  __int64 v48; // [rsp+108h] [rbp-140h]
  int v49; // [rsp+110h] [rbp-138h] BYREF
  char v50; // [rsp+114h] [rbp-134h]
  __int64 v51; // [rsp+118h] [rbp-130h]
  int v52; // [rsp+120h] [rbp-128h] BYREF
  char v53; // [rsp+124h] [rbp-124h]
  __int64 v54; // [rsp+128h] [rbp-120h]
  int v55; // [rsp+130h] [rbp-118h] BYREF
  char v56; // [rsp+134h] [rbp-114h]
  __int64 v57; // [rsp+138h] [rbp-110h]
  int v58; // [rsp+140h] [rbp-108h] BYREF
  char v59; // [rsp+144h] [rbp-104h]
  __int64 v60; // [rsp+148h] [rbp-100h]
  int v61[8]; // [rsp+150h] [rbp-F8h] BYREF
  char v62[32]; // [rsp+170h] [rbp-D8h] BYREF
  char v63[32]; // [rsp+190h] [rbp-B8h] BYREF
  char v64[32]; // [rsp+1B0h] [rbp-98h] BYREF
  char v65[16]; // [rsp+1D0h] [rbp-78h] BYREF
  _BYTE v66[16]; // [rsp+1E0h] [rbp-68h] BYREF
  __int64 v67; // [rsp+1F0h] [rbp-58h] BYREF
  __int64 v68; // [rsp+1F8h] [rbp-50h]
  __int64 v69; // [rsp+200h] [rbp-48h] BYREF
  __int64 v70; // [rsp+208h] [rbp-40h]

  v67 = 1;
  v68 = 0;
  v69 = 1;
  v70 = 0;
  sub_182CBA0(qword_1C7F2C0, &v69);
  v1 = v67;
  v2 = BYTE4(v67);
  LODWORD(v67) = *(_DWORD *)(a1 + 720);
  v3 = *(_QWORD *)(a1 + 728);
  *(_DWORD *)(a1 + 720) = v1;
  v4 = v68;
  v68 = v3;
  LOBYTE(v3) = *(_BYTE *)(a1 + 724);
  *(_QWORD *)(a1 + 728) = v4;
  LOBYTE(v4) = v2;
  v2 &= ~2u;
  LOBYTE(v4) = v3 & 0xFC | v4 & 2;
  v5 = *(_BYTE *)(a1 + 740);
  BYTE4(v67) = v3 & 1 | v2 & 0xFE | v3 & 2;
  LODWORD(v3) = *(_DWORD *)(a1 + 736);
  *(_BYTE *)(a1 + 724) = v2 & 1 | v4;
  LODWORD(v69) = v3;
  v6 = *(_QWORD *)(a1 + 744);
  *(_QWORD *)(a1 + 744) = v70;
  v70 = v6;
  LOBYTE(v6) = BYTE4(v69);
  *(_DWORD *)(a1 + 736) = 1;
  *(_BYTE *)(a1 + 740) = v5 & 0xFC | v6 & 2;
  BYTE4(v69) = v5 & 1 | v5 & 2 | v6 & 0xFC;
  sub_25A130((char *)&v67);
  sub_8BCA00(a1 + 184, *(_DWORD *)(a1 + 556), *(_DWORD *)(a1 + 560));
  result = *(unsigned int **)(a1 + 224);
  if ( result )
  {
    v8 = *(result - 1);
    if ( (_DWORD)v8 )
    {
      v9 = 0;
      v24 = 24 * v8;
      while ( 1 )
      {
        result = (unsigned int *)((char *)result + v9);
        if ( *((_BYTE *)result + 20) )
        {
          v17 = *result;
          v18 = result[2];
          v19 = *(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL * result[1]);
          v23 = v18;
          v26 &= 0xFCu;
          v25 = v19;
          v29 &= 0xFCu;
          v27 = 0;
          v28 = 1;
          v30 = 0;
          sub_182CBA0(qword_1C7F2C0, &v28);
          v28 = 1;
          v29 &= ~1u;
          v32 &= 0xFCu;
          v35 &= 0xFCu;
          v31 = dword_1C7F370;
          v33 = 0;
          v34 = 1;
          v36 = 0;
          sub_182CBA0(qword_1C7F2C0, &v34);
          v20 = *(_QWORD *)(a1 + 208);
          v34 = 1;
          v35 &= ~1u;
          LODWORD(v20) = *(_DWORD *)(v20 + 4 * v17);
          v38 &= 0xFCu;
          v41 &= 0xFCu;
          v37 = v20;
          v39 = 0;
          v40 = 1;
          v42 = 0;
          sub_182CBA0(qword_1C7F2C0, &v40);
          v40 = 1;
          v41 &= ~1u;
          v43 = dword_1C7F370;
          v44 &= 0xFCu;
          v47 &= 0xFCu;
          v45 = 0;
          v46 = 1;
          v48 = 0;
          sub_182CBA0(qword_1C7F2C0, &v46);
          v46 = 1;
          v47 &= ~1u;
          v50 &= 0xFCu;
          v53 &= 0xFCu;
          v51 = 0;
          v52 = 1;
          v54 = 0;
          v49 = v23;
          sub_182CBA0(qword_1C7F2C0, &v52);
          v52 = 1;
          v53 &= ~1u;
          v55 = dword_1C7F370;
          v56 &= 0xFCu;
          v59 &= 0xFCu;
          v57 = 0;
          v58 = 1;
          v60 = 0;
          sub_182CBA0(qword_1C7F2C0, &v58);
          v59 &= ~1u;
          v58 = 1;
          sub_27B340((__int64)v65, (__int64)&v37, &v49);
          if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v25, (__int64)v65) )
          {
            sub_27B340((__int64)&v67, (__int64)&v43, &v55);
            v21 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v67, (__int64)&v31);
            sub_25A130((char *)&v67);
            v22 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v65);
            sub_182CBA0(v22, v66);
            if ( v21 )
            {
              sub_3EBB80((__int64)v63, (__int64)&v31, (__int64)&v43);
              sub_3EBB80((__int64)v64, (__int64)v63, (__int64)&v55);
              v67 = 2;
              v68 = 0;
              v69 = 1;
              v70 = 0;
              sub_182CBA0(qword_1C7F2C0, &v69);
              BYTE4(v69) &= ~1u;
              LODWORD(v69) = 1;
              sub_3EBE30((__int64)v65, (__int64)&v67, (__int64)v64);
              sub_25A130((char *)&v67);
              sub_27B340((__int64)v62, (__int64)&v37, &v49);
              sub_3EBB80((__int64)&v67, (__int64)v62, (__int64)&v25);
              sub_27B620((__int64)v61, (__int64)&v67, (__int64)v65);
              sub_25A130((char *)&v67);
              sub_25A130(v62);
              sub_25A130(v65);
              sub_25A130(v64);
              sub_25A130(v63);
              if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v61, a1 + 720) )
                sub_27B950((__int64)qword_1C7F2C0, a1 + 720, v61);
              sub_25A130((char *)v61);
            }
          }
          else
          {
            v10 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v65);
            sub_182CBA0(v10, v66);
          }
          v11 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v55);
          sub_182CBA0(v11, &v58);
          v12 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v49);
          sub_182CBA0(v12, &v52);
          v13 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v43);
          sub_182CBA0(v13, &v46);
          v14 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v37);
          sub_182CBA0(v14, &v40);
          v15 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v31);
          sub_182CBA0(v15, &v34);
          v16 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v25);
          result = (unsigned int *)sub_182CBA0(v16, &v28);
        }
        v9 += 24;
        if ( v24 == v9 )
          break;
        result = *(unsigned int **)(a1 + 224);
      }
    }
  }
  return result;
}

