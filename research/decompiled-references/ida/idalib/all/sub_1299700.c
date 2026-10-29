void __fastcall sub_1299700(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __m128i *v8; // rax
  __m128i *v9; // rdx
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __m128i *v15; // rax
  __m128i *v16; // rdx
  __int64 v17; // rsi
  __m128i *v18; // rcx
  _BYTE *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // eax
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rcx
  unsigned __int64 v42; // r13
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 v48; // r8
  __int64 v49; // rdi
  unsigned __int64 v50; // r8
  __int64 v51; // rdi
  unsigned __int64 v52; // r8
  __int64 v53; // rdi
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r8
  __int64 v56; // rdi
  unsigned __int64 v57; // r8
  unsigned __int64 v58; // r8
  __int64 v59; // rdi
  unsigned __int64 v60; // r8
  __int64 v61; // rdi
  __int64 v63; // [rsp+8h] [rbp-120h]
  __int64 v64; // [rsp+8h] [rbp-120h]
  __int64 v65; // [rsp+8h] [rbp-120h]
  __int64 v66; // [rsp+8h] [rbp-120h]
  __int64 v67; // [rsp+8h] [rbp-120h]
  __int64 v68; // [rsp+8h] [rbp-120h]
  __int64 v69; // [rsp+8h] [rbp-120h]
  void *v70[2]; // [rsp+10h] [rbp-118h] BYREF
  _BYTE v71[16]; // [rsp+20h] [rbp-108h] BYREF
  _QWORD v72[4]; // [rsp+30h] [rbp-F8h] BYREF
  __int16 v73; // [rsp+50h] [rbp-D8h]
  _BYTE v74[32]; // [rsp+60h] [rbp-C8h] BYREF
  __int16 v75; // [rsp+80h] [rbp-A8h]
  _BYTE v76[32]; // [rsp+90h] [rbp-98h] BYREF
  __int16 v77; // [rsp+B0h] [rbp-78h]
  _BYTE v78[32]; // [rsp+C0h] [rbp-68h] BYREF
  __int16 v79; // [rsp+E0h] [rbp-48h]

  switch ( *(_DWORD *)(a2 + 32) )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      v20 = *(_QWORD *)(a1 + 8);
      v21 = *(_DWORD *)(a2 + 48);
      v22 = *(_BYTE **)(v20 + 488);
      v23 = *(_QWORD *)(v20 + 496);
      if ( v21 == 7 )
        goto LABEL_47;
      if ( v21 <= 7 )
      {
        if ( v21 != 5 )
        {
LABEL_21:
          v72[0] = "/usr/lib/oabi";
          v73 = 259;
          v79 = 257;
          v77 = 257;
          v75 = 257;
          sub_1130220(v70, v22, v23, (__int64)v72, (__int64)v74, (__int64)v76, (__int64)v78);
          v24 = *(unsigned int *)(a1 + 632);
          v25 = v24 + 1;
          if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
          {
            v60 = *(_QWORD *)(a1 + 624);
            v61 = a1 + 624;
            if ( v60 > (unsigned __int64)v70 || (v69 = *(_QWORD *)(a1 + 624), (unsigned __int64)v70 >= v60 + 32 * v24) )
            {
              sub_A8C1F0(v61, v25);
              v26 = *(_QWORD *)(a1 + 624);
              v24 = *(unsigned int *)(a1 + 632);
              v15 = (__m128i *)v70;
            }
            else
            {
              sub_A8C1F0(v61, v25);
              v26 = *(_QWORD *)(a1 + 624);
              v24 = *(unsigned int *)(a1 + 632);
              v15 = (__m128i *)((char *)v70 + v26 - v69);
            }
          }
          else
          {
            v26 = *(_QWORD *)(a1 + 624);
            v15 = (__m128i *)v70;
          }
          v16 = (__m128i *)(v26 + 32 * v24);
          v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
          v17 = v15->m128i_i64[0];
          v18 = v15 + 1;
          if ( (__m128i *)v15->m128i_i64[0] != &v15[1] )
            goto LABEL_14;
          goto LABEL_50;
        }
      }
      else if ( v21 != 15 )
      {
        if ( v21 != 16 )
          goto LABEL_21;
LABEL_47:
        v72[0] = "/usr/lib/eabihf";
        v73 = 259;
        v79 = 257;
        v77 = 257;
        v75 = 257;
        sub_1130220(v70, v22, v23, (__int64)v72, (__int64)v74, (__int64)v76, (__int64)v78);
        v44 = *(unsigned int *)(a1 + 632);
        v45 = v44 + 1;
        if ( v44 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
        {
          v58 = *(_QWORD *)(a1 + 624);
          v59 = a1 + 624;
          if ( v58 > (unsigned __int64)v70 || (v68 = *(_QWORD *)(a1 + 624), (unsigned __int64)v70 >= v58 + 32 * v44) )
          {
            sub_A8C1F0(v59, v45);
            v46 = *(_QWORD *)(a1 + 624);
            v44 = *(unsigned int *)(a1 + 632);
            v15 = (__m128i *)v70;
          }
          else
          {
            sub_A8C1F0(v59, v45);
            v46 = *(_QWORD *)(a1 + 624);
            v44 = *(unsigned int *)(a1 + 632);
            v15 = (__m128i *)((char *)v70 + v46 - v68);
          }
        }
        else
        {
          v46 = *(_QWORD *)(a1 + 624);
          v15 = (__m128i *)v70;
        }
        v16 = (__m128i *)(v46 + 32 * v44);
        v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
        v17 = v15->m128i_i64[0];
        v18 = v15 + 1;
        if ( (__m128i *)v15->m128i_i64[0] != &v15[1] )
          goto LABEL_14;
        goto LABEL_50;
      }
      v72[0] = "/usr/lib/eabi";
      v73 = 259;
      v79 = 257;
      v77 = 257;
      v75 = 257;
      sub_1130220(v70, v22, v23, (__int64)v72, (__int64)v74, (__int64)v76, (__int64)v78);
      v39 = *(unsigned int *)(a1 + 632);
      v40 = v39 + 1;
      if ( v39 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 636) )
        goto LABEL_40;
      v57 = *(_QWORD *)(a1 + 624);
      v49 = a1 + 624;
      if ( v57 <= (unsigned __int64)v70 )
      {
        v63 = *(_QWORD *)(a1 + 624);
        if ( (unsigned __int64)v70 < v57 + 32 * v39 )
          goto LABEL_55;
      }
LABEL_73:
      sub_A8C1F0(v49, v40);
      v41 = *(_QWORD *)(a1 + 624);
      v39 = *(unsigned int *)(a1 + 632);
      v15 = (__m128i *)v70;
LABEL_41:
      v16 = (__m128i *)(v41 + 32 * v39);
      v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
      v17 = v15->m128i_i64[0];
      v18 = v15 + 1;
      if ( (__m128i *)v15->m128i_i64[0] != &v15[1] )
      {
LABEL_14:
        v16->m128i_i64[0] = v17;
        v16[1].m128i_i64[0] = v15[1].m128i_i64[0];
        goto LABEL_15;
      }
LABEL_50:
      v16[1] = _mm_loadu_si128(v15 + 1);
LABEL_15:
      v16->m128i_i64[1] = v15->m128i_i64[1];
      v15->m128i_i64[0] = (__int64)v18;
      v15->m128i_i64[1] = 0;
      v15[1].m128i_i8[0] = 0;
      v19 = v70[0];
      ++*(_DWORD *)(a1 + 632);
      if ( v19 != v71 )
        operator delete(v19);
LABEL_3:
      v79 = 257;
      v72[0] = "/usr/lib";
      v4 = *(_QWORD *)(a1 + 8);
      v75 = 257;
      v77 = 257;
      v73 = 259;
      sub_1130220(
        v70,
        *(_BYTE **)(v4 + 488),
        *(_QWORD *)(v4 + 496),
        (__int64)v72,
        (__int64)v74,
        (__int64)v76,
        (__int64)v78);
      v5 = *(unsigned int *)(a1 + 632);
      v6 = v5 + 1;
      if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v42 = *(_QWORD *)(a1 + 624);
        v43 = a1 + 624;
        if ( v42 > (unsigned __int64)v70 || (unsigned __int64)v70 >= v42 + 32 * v5 )
        {
          sub_A8C1F0(v43, v6);
          v7 = *(_QWORD *)(a1 + 624);
          v5 = *(unsigned int *)(a1 + 632);
          v8 = (__m128i *)v70;
        }
        else
        {
          sub_A8C1F0(v43, v6);
          v7 = *(_QWORD *)(a1 + 624);
          v5 = *(unsigned int *)(a1 + 632);
          v8 = (__m128i *)((char *)v70 + v7 - v42);
        }
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 624);
        v8 = (__m128i *)v70;
      }
      v9 = (__m128i *)(v7 + 32 * v5);
      v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
      if ( (__m128i *)v8->m128i_i64[0] == &v8[1] )
      {
        v9[1] = _mm_loadu_si128(v8 + 1);
      }
      else
      {
        v9->m128i_i64[0] = v8->m128i_i64[0];
        v9[1].m128i_i64[0] = v8[1].m128i_i64[0];
      }
      v9->m128i_i64[1] = v8->m128i_i64[1];
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v8->m128i_i64[1] = 0;
      v8[1].m128i_i8[0] = 0;
      v10 = v70[0];
      ++*(_DWORD *)(a1 + 632);
      if ( v10 != v71 )
        operator delete(v10);
      return;
    case 0x12:
    case 0x13:
      if ( !(unsigned __int8)sub_11543B0(a3, "o32") )
      {
        if ( !(unsigned __int8)sub_11543B0(a3, "64") )
          goto LABEL_3;
        v73 = 259;
        v72[0] = "/usr/lib/64";
        v47 = *(_QWORD *)(a1 + 8);
        v79 = 257;
        v77 = 257;
        v75 = 257;
        sub_1130220(
          v70,
          *(_BYTE **)(v47 + 488),
          *(_QWORD *)(v47 + 496),
          (__int64)v72,
          (__int64)v74,
          (__int64)v76,
          (__int64)v78);
        v39 = *(unsigned int *)(a1 + 632);
        v40 = v39 + 1;
        if ( v39 + 1 <= (unsigned __int64)*(unsigned int *)(a1 + 636) )
        {
LABEL_40:
          v41 = *(_QWORD *)(a1 + 624);
          v15 = (__m128i *)v70;
          goto LABEL_41;
        }
        v48 = *(_QWORD *)(a1 + 624);
        v49 = a1 + 624;
        if ( v48 <= (unsigned __int64)v70 )
        {
          v63 = *(_QWORD *)(a1 + 624);
          if ( (unsigned __int64)v70 < v48 + 32 * v39 )
          {
LABEL_55:
            sub_A8C1F0(v49, v40);
            v41 = *(_QWORD *)(a1 + 624);
            v39 = *(unsigned int *)(a1 + 632);
            v15 = (__m128i *)((char *)v70 + v41 - v63);
            goto LABEL_41;
          }
        }
        goto LABEL_73;
      }
      v73 = 259;
      v72[0] = "/usr/lib/o32";
      v31 = *(_QWORD *)(a1 + 8);
      v79 = 257;
      v77 = 257;
      v75 = 257;
      sub_1130220(
        v70,
        *(_BYTE **)(v31 + 488),
        *(_QWORD *)(v31 + 496),
        (__int64)v72,
        (__int64)v74,
        (__int64)v76,
        (__int64)v78);
      v32 = *(unsigned int *)(a1 + 632);
      v33 = v32 + 1;
      if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v55 = *(_QWORD *)(a1 + 624);
        v56 = a1 + 624;
        if ( v55 > (unsigned __int64)v70 || (v67 = *(_QWORD *)(a1 + 624), (unsigned __int64)v70 >= v55 + 32 * v32) )
        {
          sub_A8C1F0(v56, v33);
          v34 = *(_QWORD *)(a1 + 624);
          v32 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)v70;
        }
        else
        {
          sub_A8C1F0(v56, v33);
          v34 = *(_QWORD *)(a1 + 624);
          v32 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)((char *)v70 + v34 - v67);
        }
      }
      else
      {
        v34 = *(_QWORD *)(a1 + 624);
        v15 = (__m128i *)v70;
      }
      v16 = (__m128i *)(v34 + 32 * v32);
      v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
      v17 = v15->m128i_i64[0];
      v18 = v15 + 1;
      if ( (__m128i *)v15->m128i_i64[0] != &v15[1] )
        goto LABEL_14;
      goto LABEL_50;
    case 0x15:
      v73 = 259;
      v72[0] = "/usr/lib/powerpc";
      v27 = *(_QWORD *)(a1 + 8);
      v79 = 257;
      v77 = 257;
      v75 = 257;
      sub_1130220(
        v70,
        *(_BYTE **)(v27 + 488),
        *(_QWORD *)(v27 + 496),
        (__int64)v72,
        (__int64)v74,
        (__int64)v76,
        (__int64)v78);
      v28 = *(unsigned int *)(a1 + 632);
      v29 = v28 + 1;
      if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v50 = *(_QWORD *)(a1 + 624);
        v51 = a1 + 624;
        if ( v50 > (unsigned __int64)v70 || (v64 = *(_QWORD *)(a1 + 624), (unsigned __int64)v70 >= v50 + 32 * v28) )
        {
          sub_A8C1F0(v51, v29);
          v30 = *(_QWORD *)(a1 + 624);
          v28 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)v70;
        }
        else
        {
          sub_A8C1F0(v51, v29);
          v30 = *(_QWORD *)(a1 + 624);
          v28 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)((char *)v70 + v30 - v64);
        }
      }
      else
      {
        v30 = *(_QWORD *)(a1 + 624);
        v15 = (__m128i *)v70;
      }
      v16 = (__m128i *)(v30 + 32 * v28);
      v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
      v17 = v15->m128i_i64[0];
      v18 = v15 + 1;
      if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
        goto LABEL_50;
      goto LABEL_14;
    case 0x1D:
      v73 = 259;
      v72[0] = "/usr/lib/sparc";
      v35 = *(_QWORD *)(a1 + 8);
      v79 = 257;
      v77 = 257;
      v75 = 257;
      sub_1130220(
        v70,
        *(_BYTE **)(v35 + 488),
        *(_QWORD *)(v35 + 496),
        (__int64)v72,
        (__int64)v74,
        (__int64)v76,
        (__int64)v78);
      v36 = *(unsigned int *)(a1 + 632);
      v37 = v36 + 1;
      if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v52 = *(_QWORD *)(a1 + 624);
        v53 = a1 + 624;
        if ( v52 > (unsigned __int64)v70 || (v65 = *(_QWORD *)(a1 + 624), (unsigned __int64)v70 >= v52 + 32 * v36) )
        {
          sub_A8C1F0(v53, v37);
          v38 = *(_QWORD *)(a1 + 624);
          v36 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)v70;
        }
        else
        {
          sub_A8C1F0(v53, v37);
          v38 = *(_QWORD *)(a1 + 624);
          v36 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)((char *)v70 + v38 - v65);
        }
      }
      else
      {
        v38 = *(_QWORD *)(a1 + 624);
        v15 = (__m128i *)v70;
      }
      v16 = (__m128i *)(v38 + 32 * v36);
      v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
      v17 = v15->m128i_i64[0];
      v18 = v15 + 1;
      if ( (__m128i *)v15->m128i_i64[0] == &v15[1] )
        goto LABEL_50;
      goto LABEL_14;
    case 0x25:
      v73 = 259;
      v72[0] = "/usr/lib/i386";
      v11 = *(_QWORD *)(a1 + 8);
      v79 = 257;
      v77 = 257;
      v75 = 257;
      sub_1130220(
        v70,
        *(_BYTE **)(v11 + 488),
        *(_QWORD *)(v11 + 496),
        (__int64)v72,
        (__int64)v74,
        (__int64)v76,
        (__int64)v78);
      v12 = *(unsigned int *)(a1 + 632);
      v13 = v12 + 1;
      if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 636) )
      {
        v54 = *(_QWORD *)(a1 + 624);
        if ( v54 > (unsigned __int64)v70 || (unsigned __int64)v70 >= v54 + 32 * v12 )
        {
          sub_A8C1F0(a1 + 624, v13);
          v14 = *(_QWORD *)(a1 + 624);
          v12 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)v70;
        }
        else
        {
          v66 = *(_QWORD *)(a1 + 624);
          sub_A8C1F0(a1 + 624, v13);
          v14 = *(_QWORD *)(a1 + 624);
          v12 = *(unsigned int *)(a1 + 632);
          v15 = (__m128i *)((char *)v70 + v14 - v66);
        }
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 624);
        v15 = (__m128i *)v70;
      }
      v16 = (__m128i *)(v14 + 32 * v12);
      v16->m128i_i64[0] = (__int64)v16[1].m128i_i64;
      v17 = v15->m128i_i64[0];
      v18 = v15 + 1;
      if ( (__m128i *)v15->m128i_i64[0] != &v15[1] )
        goto LABEL_14;
      goto LABEL_50;
    default:
      goto LABEL_3;
  }
}
