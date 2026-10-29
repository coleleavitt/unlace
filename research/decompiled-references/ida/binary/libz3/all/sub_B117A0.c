__int64 __fastcall sub_B117A0(int *a1)
{
  int *v1; // rax
  unsigned int v2; // r12d
  __int64 v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rax
  int *v6; // rbp
  int *v7; // r15
  _DWORD *v8; // rbx
  int v9; // eax
  int v10; // eax
  void *v11; // r14
  _DWORD *v12; // r15
  int v13; // r12d
  int v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // esi
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // r12d
  _DWORD *v25; // rbx
  __int64 v26; // rax
  _DWORD *v27; // r14
  void *v28; // rbp
  _DWORD *v29; // rsi
  int v31; // ebx
  int v32; // ebp
  int v33; // r15d
  int v34; // r12d
  int v35; // ebp
  int v36; // ebx
  int v37; // r12d
  unsigned int v38; // eax
  int v39; // r15d
  unsigned int v40; // r14d
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // esi
  int v46; // edx
  unsigned int v47; // ecx
  int v48; // edi
  unsigned int v49; // edx
  unsigned int v50; // esi
  unsigned int v51; // eax
  int v52; // ebp
  int v53; // r12d
  int v54; // ebx
  int v55; // r12d
  int v56; // ebp
  unsigned int v57; // eax
  int v58; // ecx
  unsigned int v59; // r14d
  unsigned int v60; // r14d
  unsigned int v61; // ebp
  int v62; // ebx
  int *v63; // r15
  int *v64; // r15
  int v65; // ebp
  int *v66; // r15
  unsigned int v67; // eax
  int v68; // edx
  unsigned int v69; // ebp
  unsigned int v70; // eax
  int v71; // ecx
  unsigned int v72; // edx
  unsigned int v73; // eax
  int v74; // ebx
  int v75; // r15d
  int v76; // r15d
  int v77; // ebx
  int v78; // [rsp+0h] [rbp-88h]
  int v79; // [rsp+0h] [rbp-88h]
  int v80; // [rsp+0h] [rbp-88h]
  int v81; // [rsp+0h] [rbp-88h]
  int v82; // [rsp+0h] [rbp-88h]
  int v83; // [rsp+8h] [rbp-80h]
  int v84; // [rsp+8h] [rbp-80h]
  int v85; // [rsp+8h] [rbp-80h]
  int v86; // [rsp+18h] [rbp-70h]
  int v87; // [rsp+18h] [rbp-70h]
  int v88; // [rsp+1Ch] [rbp-6Ch]
  _DWORD *v89; // [rsp+20h] [rbp-68h]
  _QWORD v90[12]; // [rsp+28h] [rbp-60h] BYREF

  v1 = *(int **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *(v1 - 1);
    v3 = (unsigned int)*(v1 - 2);
    v4 = (_DWORD *)sub_186B270(40 * v3 + 8);
    *v4 = v3;
    v5 = v4 + 2;
    *(v5 - 1) = v2;
    v89 = v5;
    v6 = *(int **)a1;
    if ( *(_QWORD *)a1 )
    {
      v7 = &v6[10 * *(v6 - 1)];
      if ( v6 != v7 )
      {
        v8 = v5;
        while ( 1 )
        {
          v10 = *v6;
          v11 = qword_1C7F2C0;
          v8[2] = 0;
          *((_BYTE *)v8 + 12) &= 0xFCu;
          *((_BYTE *)v8 + 28) &= 0xFCu;
          *v8 = v10;
          *((_QWORD *)v8 + 2) = 0;
          v8[6] = 1;
          *((_QWORD *)v8 + 4) = 0;
          if ( (v6[3] & 1) != 0 )
          {
            sub_182C690(v11, v8 + 2, v6 + 2);
            if ( (v6[7] & 1) != 0 )
              goto LABEL_9;
LABEL_6:
            v9 = v6[6];
            v6 += 10;
            *((_BYTE *)v8 + 28) &= ~1u;
            v8 += 10;
            *(v8 - 4) = v9;
            if ( v7 == v6 )
              break;
          }
          else
          {
            v8[2] = v6[2];
            if ( (v6[7] & 1) == 0 )
              goto LABEL_6;
LABEL_9:
            sub_182C690(v11, v8 + 6, v6 + 6);
            v6 += 10;
            v8 += 10;
            if ( v7 == v6 )
              break;
          }
        }
      }
    }
  }
  else
  {
    v89 = nullptr;
    v2 = 0;
  }
  v90[0] = 0;
  v90[1] = 0;
  v90[2] = 1;
  v90[3] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v90, a1 + 2);
  v12 = v89;
  if ( v89 )
    v88 = *(v89 - 1);
  else
    v88 = 0;
  if ( v2 == 2 )
  {
    v52 = *v89;
    v53 = sub_182DB30(v89 + 2);
    v54 = v52 ^ (v53 + 3 * sub_182DB30(v89 + 6));
    v55 = v89[10];
    v56 = sub_182DB30(v89 + 12);
    v57 = (v55 ^ (v56 + 3 * sub_182DB30(v89 + 16))) + 11;
    v58 = (v88 - v54 - v57) ^ (v57 >> 13);
    v59 = (v54 - 1640531527 - v57 - v58) ^ (v58 << 8);
    v19 = (v59 >> 13) ^ (v57 - v58 - v59);
    v20 = (v58 - v59 - v19) ^ (v19 >> 12);
    v21 = (v59 - v19 - v20) ^ (v20 << 16);
    goto LABEL_18;
  }
  if ( v2 > 2 )
  {
    if ( v2 == 3 )
    {
      v31 = *v89;
      v32 = sub_182DB30(v89 + 2);
      v33 = v31 ^ (v32 + 3 * sub_182DB30(v89 + 6));
      v34 = v89[10];
      v35 = sub_182DB30(v89 + 12);
      v36 = v34 ^ (v35 + 3 * sub_182DB30(v89 + 16));
      v37 = v89[20];
      v78 = sub_182DB30(v89 + 22);
      v38 = (v37 ^ (v78 + 3 * sub_182DB30(v89 + 26))) + 11;
      v39 = (v33 - v36 - v38) ^ (v38 >> 13);
      v40 = (v36 - 1640531527 - v38 - v39) ^ (v39 << 8);
      v41 = (v38 - v39 - v40) ^ (v40 >> 13);
      v42 = (v39 - v40 - v41) ^ (v41 >> 12);
      v43 = (v40 - v41 - v42) ^ (v42 << 16);
      v44 = (v41 - v42 - v43) ^ (v43 >> 5);
      v45 = v43 - v44;
      v46 = (v42 - v43 - v44) ^ (v44 >> 3);
      v47 = v44 - v46;
      v48 = v46 + v88;
      v49 = (v45 - v46) ^ (v46 << 10);
      v50 = (v47 - v49) ^ (v49 >> 15);
      v16 = (v48 - v49 - v50) ^ (v50 >> 13);
      v51 = v49 - v50 - v16;
      v17 = v50 - v16;
      v18 = v51 ^ (v16 << 8);
      goto LABEL_16;
    }
    v60 = 11;
    v61 = -1640531527;
    v62 = -1640531527;
    while ( 1 )
    {
      v63 = &v12[10 * v2 - 10];
      v79 = *v63;
      v83 = sub_182DB30(v63 + 2);
      v80 = (v83 + 3 * sub_182DB30(v63 + 6)) ^ v79;
      v64 = &v89[10 * v2 - 20];
      v84 = *v64;
      v86 = sub_182DB30(v64 + 2);
      v65 = (v84 ^ (v86 + 3 * sub_182DB30(v64 + 6))) + v61;
      v2 -= 3;
      v66 = &v89[10 * v2];
      v85 = *v66;
      v87 = sub_182DB30(v66 + 2);
      v67 = v60 + (v85 ^ (v87 + 3 * sub_182DB30(v66 + 6)));
      v68 = (v62 + v80 - v65 - v67) ^ (v67 >> 13);
      v69 = (v65 - v67 - v68) ^ (v68 << 8);
      v70 = (v67 - v68 - v69) ^ (v69 >> 13);
      v71 = (v68 - v69 - v70) ^ (v70 >> 12);
      v72 = (v69 - v70 - v71) ^ (v71 << 16);
      v73 = (v70 - v71 - v72) ^ (v72 >> 5);
      v62 = (v71 - v72 - v73) ^ (v73 >> 3);
      v61 = (v72 - v73 - v62) ^ (v62 << 10);
      v60 = (v73 - v62 - v61) ^ (v61 >> 15);
      if ( v2 <= 2 )
        break;
      v12 = v89;
    }
    v74 = v62 + v88;
    if ( v2 != 1 )
    {
      if ( v2 != 2 )
      {
LABEL_36:
        v77 = (v74 - v61 - v60) ^ (v60 >> 13);
        v18 = (v61 - v60 - v77) ^ (v77 << 8);
        v19 = (v60 - v77 - v18) ^ (v18 >> 13);
        v20 = (v77 - v18 - v19) ^ (v19 >> 12);
        goto LABEL_17;
      }
      v75 = v89[10];
      v81 = sub_182DB30(v89 + 12);
      v61 += v75 ^ (v81 + 3 * sub_182DB30(v89 + 16));
    }
    v76 = *v89;
    v82 = sub_182DB30(v89 + 2);
    v60 += v76 ^ (v82 + 3 * sub_182DB30(v89 + 6));
    goto LABEL_36;
  }
  if ( v2 )
  {
    v13 = *v89;
    v14 = sub_182DB30(v89 + 2);
    v15 = v13 ^ (v14 + 3 * sub_182DB30(v89 + 6));
    v16 = v88 - 1640531538 - v15;
    v17 = v15 - (v88 - 1640531538) + 11;
    v18 = (1640531527 - v88 + 2 * v15) ^ (v16 << 8);
LABEL_16:
    v19 = (v17 - v18) ^ (v18 >> 13);
    v20 = (v16 - v18 - v19) ^ (v19 >> 12);
LABEL_17:
    v21 = (v18 - v19 - v20) ^ (v20 << 16);
LABEL_18:
    v22 = (v19 - v20 - v21) ^ (v21 >> 5);
    v23 = (v22 >> 3) ^ (v20 - v21 - v22);
    v24 = (v22 - v23 - ((v21 - v22 - v23) ^ (v23 << 10))) ^ (((v21 - v22 - v23) ^ (v23 << 10)) >> 15);
    goto LABEL_19;
  }
  v24 = 11;
LABEL_19:
  sub_25A130((char *)v90);
  v25 = v89;
  if ( v89 )
  {
    v26 = (unsigned int)*(v89 - 1);
    if ( (_DWORD)v26 )
    {
      v27 = &v89[10 * v26];
      do
      {
        v28 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v25 + 2);
        v29 = v25 + 6;
        v25 += 10;
        sub_182CBA0(v28, v29);
      }
      while ( v25 != v27 );
      v25 = v89;
    }
    sub_186B220(v25 - 2);
  }
  return v24;
}

