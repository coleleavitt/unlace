/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__next_prime
// Address: 0x0008F374

//----- (0008F374) --------------------------------------------------------
int __fastcall std::__next_prime(unsigned int a1)
{
  unsigned int v2; // r1
  int *v3; // r0
  unsigned int v4; // r2
  unsigned int *v5; // r3
  int *v6; // r3
  unsigned int v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r8
  int v12; // r12
  int *v13; // r2
  unsigned int i; // r6
  unsigned int v15; // r3
  int *v16; // r5
  unsigned int v17; // r4
  int *v18; // r5
  int v19; // r1
  int v20; // r11
  unsigned int v21; // r6
  unsigned int v22; // r5
  unsigned int v23; // r9
  unsigned int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r0
  unsigned int v27; // r0
  unsigned int v28; // r0
  unsigned int v29; // r0
  unsigned int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r0
  unsigned int v33; // r0
  unsigned int v34; // r0
  unsigned int v35; // r0
  unsigned int v36; // r0
  unsigned int v37; // r0
  unsigned int v38; // r0
  unsigned int v39; // r0
  unsigned int v40; // r0
  unsigned int v41; // r0
  unsigned int v42; // r0
  unsigned int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r0
  unsigned int v46; // r0
  unsigned int v47; // r0
  unsigned int v48; // r0
  unsigned int v49; // r0
  unsigned int v50; // r0
  unsigned int v51; // r0
  unsigned int v52; // r0
  unsigned int v53; // r0
  unsigned int v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r0
  unsigned int v57; // r0
  unsigned int v58; // r0
  unsigned int v59; // r0
  unsigned int v60; // r0
  unsigned int v61; // r0
  unsigned int v62; // r0
  unsigned int v63; // r0
  unsigned int v64; // r0
  unsigned int v65; // r0
  unsigned int v66; // r0
  unsigned int v67; // r0
  unsigned int v68; // r0
  unsigned int v69; // r0
  unsigned int v70; // r5
  unsigned int v71; // r0
  int v72; // r1
  std::runtime_error *exception; // r4

  if ( a1 > 0xD3 )
  {
    if ( a1 >= 0xFFFFFFFC )
    {
      exception = (std::runtime_error *)_cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, "__next_prime overflow");
      *(_DWORD *)exception = &off_DBB50;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::overflow_error,
        (void (*)(void *))std::overflow_error::~overflow_error);
    }
    v9 = a1 / 0xD2;
    v10 = a1 - 210 * v9;
    v11 = a1 / 0xD2;
    v12 = 210 * v9;
    v13 = dword_C9358;
    for ( i = 48; i; i = v15 )
    {
      v15 = i >> 1;
      v16 = &v13[i >> 1];
      v17 = *v16;
      v18 = v16 + 1;
      if ( v17 < v10 )
      {
        v15 = i + ~(i >> 1);
        v13 = v18;
      }
    }
    v19 = v13 - dword_C9358;
LABEL_15:
    v20 = v19;
    v21 = 5;
    v8 = dword_C9358[v19] + v12;
    while ( v21 < 0x2F )
    {
      v22 = dword_C9298[v21];
      if ( v8 / v22 < v22 )
        return v8;
      ++v21;
      if ( v8 == v8 / v22 * v22 )
      {
LABEL_19:
        v19 = v20 + 1;
        if ( v20 == 47 )
        {
          ++v11;
          v19 = 0;
        }
        v12 = 210 * v11;
        goto LABEL_15;
      }
    }
    v23 = 211;
    while ( v8 / v23 >= v23 )
    {
      if ( v8 == v8 / v23 * v23 )
        goto LABEL_19;
      v24 = v8 / (v23 + 10);
      if ( v24 < v23 + 10 )
        break;
      if ( v8 == v24 * (v23 + 10) )
        goto LABEL_19;
      v25 = v8 / (v23 + 12);
      if ( v25 < v23 + 12 )
        break;
      if ( v8 == v25 * (v23 + 12) )
        goto LABEL_19;
      v26 = v8 / (v23 + 16);
      if ( v26 < v23 + 16 )
        break;
      if ( v8 == v26 * (v23 + 16) )
        goto LABEL_19;
      v27 = v8 / (v23 + 18);
      if ( v27 < v23 + 18 )
        break;
      if ( v8 == v27 * (v23 + 18) )
        goto LABEL_19;
      v28 = v8 / (v23 + 22);
      if ( v28 < v23 + 22 )
        break;
      if ( v8 == v28 * (v23 + 22) )
        goto LABEL_19;
      v29 = v8 / (v23 + 28);
      if ( v29 < v23 + 28 )
        break;
      if ( v8 == v29 * (v23 + 28) )
        goto LABEL_19;
      v30 = v8 / (v23 + 30);
      if ( v30 < v23 + 30 )
        break;
      if ( v8 == v30 * (v23 + 30) )
        goto LABEL_19;
      v31 = v8 / (v23 + 36);
      if ( v31 < v23 + 36 )
        break;
      if ( v8 == v31 * (v23 + 36) )
        goto LABEL_19;
      v32 = v8 / (v23 + 40);
      if ( v32 < v23 + 40 )
        break;
      if ( v8 == v32 * (v23 + 40) )
        goto LABEL_19;
      v33 = v8 / (v23 + 42);
      if ( v33 < v23 + 42 )
        break;
      if ( v8 == v33 * (v23 + 42) )
        goto LABEL_19;
      v34 = v8 / (v23 + 46);
      if ( v34 < v23 + 46 )
        break;
      if ( v8 == v34 * (v23 + 46) )
        goto LABEL_19;
      v35 = v8 / (v23 + 52);
      if ( v35 < v23 + 52 )
        break;
      if ( v8 == v35 * (v23 + 52) )
        goto LABEL_19;
      v36 = v8 / (v23 + 58);
      if ( v36 < v23 + 58 )
        break;
      if ( v8 == v36 * (v23 + 58) )
        goto LABEL_19;
      v37 = v8 / (v23 + 60);
      if ( v37 < v23 + 60 )
        break;
      if ( v8 == v37 * (v23 + 60) )
        goto LABEL_19;
      v38 = v8 / (v23 + 66);
      if ( v38 < v23 + 66 )
        break;
      if ( v8 == v38 * (v23 + 66) )
        goto LABEL_19;
      v39 = v8 / (v23 + 70);
      if ( v39 < v23 + 70 )
        break;
      if ( v8 == v39 * (v23 + 70) )
        goto LABEL_19;
      v40 = v8 / (v23 + 72);
      if ( v40 < v23 + 72 )
        break;
      if ( v8 == v40 * (v23 + 72) )
        goto LABEL_19;
      v41 = v8 / (v23 + 78);
      if ( v41 < v23 + 78 )
        break;
      if ( v8 == v41 * (v23 + 78) )
        goto LABEL_19;
      v42 = v8 / (v23 + 82);
      if ( v42 < v23 + 82 )
        break;
      if ( v8 == v42 * (v23 + 82) )
        goto LABEL_19;
      v43 = v8 / (v23 + 88);
      if ( v43 < v23 + 88 )
        break;
      if ( v8 == v43 * (v23 + 88) )
        goto LABEL_19;
      v44 = v8 / (v23 + 96);
      if ( v44 < v23 + 96 )
        break;
      if ( v8 == v44 * (v23 + 96) )
        goto LABEL_19;
      v45 = v8 / (v23 + 100);
      if ( v45 < v23 + 100 )
        break;
      if ( v8 == v45 * (v23 + 100) )
        goto LABEL_19;
      v46 = v8 / (v23 + 102);
      if ( v46 < v23 + 102 )
        break;
      if ( v8 == v46 * (v23 + 102) )
        goto LABEL_19;
      v47 = v8 / (v23 + 106);
      if ( v47 < v23 + 106 )
        break;
      if ( v8 == v47 * (v23 + 106) )
        goto LABEL_19;
      v48 = v8 / (v23 + 108);
      if ( v48 < v23 + 108 )
        break;
      if ( v8 == v48 * (v23 + 108) )
        goto LABEL_19;
      v49 = v8 / (v23 + 112);
      if ( v49 < v23 + 112 )
        break;
      if ( v8 == v49 * (v23 + 112) )
        goto LABEL_19;
      v50 = v8 / (v23 + 120);
      if ( v50 < v23 + 120 )
        break;
      if ( v8 == v50 * (v23 + 120) )
        goto LABEL_19;
      v51 = v8 / (v23 + 126);
      if ( v51 < v23 + 126 )
        break;
      if ( v8 == v51 * (v23 + 126) )
        goto LABEL_19;
      v52 = v8 / (v23 + 130);
      if ( v52 < v23 + 130 )
        break;
      if ( v8 == v52 * (v23 + 130) )
        goto LABEL_19;
      v53 = v8 / (v23 + 136);
      if ( v53 < v23 + 136 )
        break;
      if ( v8 == v53 * (v23 + 136) )
        goto LABEL_19;
      v54 = v8 / (v23 + 138);
      if ( v54 < v23 + 138 )
        break;
      if ( v8 == v54 * (v23 + 138) )
        goto LABEL_19;
      v55 = v8 / (v23 + 142);
      if ( v55 < v23 + 142 )
        break;
      if ( v8 == v55 * (v23 + 142) )
        goto LABEL_19;
      v56 = v8 / (v23 + 148);
      if ( v56 < v23 + 148 )
        break;
      if ( v8 == v56 * (v23 + 148) )
        goto LABEL_19;
      v57 = v8 / (v23 + 150);
      if ( v57 < v23 + 150 )
        break;
      if ( v8 == v57 * (v23 + 150) )
        goto LABEL_19;
      v58 = v8 / (v23 + 156);
      if ( v58 < v23 + 156 )
        break;
      if ( v8 == v58 * (v23 + 156) )
        goto LABEL_19;
      v59 = v8 / (v23 + 162);
      if ( v59 < v23 + 162 )
        break;
      if ( v8 == v59 * (v23 + 162) )
        goto LABEL_19;
      v60 = v8 / (v23 + 166);
      if ( v60 < v23 + 166 )
        break;
      if ( v8 == v60 * (v23 + 166) )
        goto LABEL_19;
      v61 = v8 / (v23 + 168);
      if ( v61 < v23 + 168 )
        break;
      if ( v8 == v61 * (v23 + 168) )
        goto LABEL_19;
      v62 = v8 / (v23 + 172);
      if ( v62 < v23 + 172 )
        break;
      if ( v8 == v62 * (v23 + 172) )
        goto LABEL_19;
      v63 = v8 / (v23 + 178);
      if ( v63 < v23 + 178 )
        break;
      if ( v8 == v63 * (v23 + 178) )
        goto LABEL_19;
      v64 = v8 / (v23 + 180);
      if ( v64 < v23 + 180 )
        break;
      if ( v8 == v64 * (v23 + 180) )
        goto LABEL_19;
      v65 = v8 / (v23 + 186);
      if ( v65 < v23 + 186 )
        break;
      if ( v8 == v65 * (v23 + 186) )
        goto LABEL_19;
      v66 = v8 / (v23 + 190);
      if ( v66 < v23 + 190 )
        break;
      if ( v8 == v66 * (v23 + 190) )
        goto LABEL_19;
      v67 = v8 / (v23 + 192);
      if ( v67 < v23 + 192 )
        break;
      if ( v8 == v67 * (v23 + 192) )
        goto LABEL_19;
      v68 = v8 / (v23 + 196);
      if ( v68 < v23 + 196 )
        break;
      if ( v8 == v68 * (v23 + 196) )
        goto LABEL_19;
      v69 = v8 / (v23 + 198);
      if ( v69 < v23 + 198 )
        break;
      if ( v8 == v69 * (v23 + 198) )
        goto LABEL_19;
      v70 = v23 + 208;
      v71 = v8 / (v23 + 208);
      if ( v71 < v23 + 208 )
        break;
      v72 = 0;
      if ( v8 == v71 * v70 )
        v72 = 9;
      else
        v70 = v23 + 210;
      v23 = v70;
      if ( v72 )
        goto LABEL_19;
    }
  }
  else
  {
    v2 = 48;
    v3 = dword_C9298;
    while ( v2 )
    {
      v4 = v2 >> 1;
      v5 = (unsigned int *)&v3[v2 >> 1];
      v7 = *v5;
      v6 = (int *)(v5 + 1);
      if ( v7 < a1 )
      {
        v4 = v2 + ~(v2 >> 1);
        v3 = v6;
      }
      v2 = v4;
    }
    return *v3;
  }
  return v8;
}
// 8F918: conditional instruction was optimized away because r1.4==9
// C9298: using guessed type int dword_C9298[];
// C9358: using guessed type int dword_C9358[48];
// DBB50: using guessed type _UNKNOWN *;
// DBB5C: using guessed type _UNKNOWN *`typeinfo for'std::overflow_error;
