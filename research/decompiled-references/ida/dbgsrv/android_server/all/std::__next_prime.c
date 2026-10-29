/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__next_prime
// Address: 0x00000000000D528C

//----- (00000000000D528C) ----------------------------------------------------
unsigned __int64 __fastcall std::__next_prime(unsigned __int64 a1)
{
  __int64 *v1; // x8
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x10
  _DWORD *v4; // x11
  __int64 *v5; // x11
  unsigned int v6; // t1
  unsigned __int64 result; // x0
  unsigned __int64 v8; // x9
  __int64 v9; // x13
  unsigned __int64 v10; // x12
  __int64 *v11; // x11
  unsigned __int64 v12; // x14
  _DWORD *v13; // x15
  __int64 *v14; // x15
  unsigned int v15; // t1
  __int64 v16; // x11
  __int64 v17; // x13
  unsigned __int64 v18; // x14
  unsigned __int64 v19; // x13
  unsigned __int64 v20; // x15
  unsigned __int64 v21; // x16
  unsigned __int64 v22; // x16
  unsigned __int64 v23; // x16
  unsigned __int64 v24; // x16
  unsigned __int64 v25; // x16
  unsigned __int64 v26; // x16
  unsigned __int64 v27; // x16
  unsigned __int64 v28; // x16
  unsigned __int64 v29; // x16
  unsigned __int64 v30; // x16
  unsigned __int64 v31; // x16
  unsigned __int64 v32; // x16
  unsigned __int64 v33; // x16
  unsigned __int64 v34; // x16
  unsigned __int64 v35; // x16
  unsigned __int64 v36; // x16
  unsigned __int64 v37; // x16
  unsigned __int64 v38; // x16
  unsigned __int64 v39; // x16
  unsigned __int64 v40; // x16
  unsigned __int64 v41; // x16
  unsigned __int64 v42; // x16
  unsigned __int64 v43; // x16
  unsigned __int64 v44; // x16
  unsigned __int64 v45; // x16
  unsigned __int64 v46; // x16
  unsigned __int64 v47; // x16
  unsigned __int64 v48; // x16
  unsigned __int64 v49; // x16
  unsigned __int64 v50; // x16
  unsigned __int64 v51; // x16
  unsigned __int64 v52; // x16
  unsigned __int64 v53; // x16
  unsigned __int64 v54; // x16
  unsigned __int64 v55; // x16
  unsigned __int64 v56; // x16
  unsigned __int64 v57; // x16
  unsigned __int64 v58; // x16
  unsigned __int64 v59; // x16
  unsigned __int64 v60; // x16
  unsigned __int64 v61; // x16
  unsigned __int64 v62; // x16
  unsigned __int64 v63; // x16
  unsigned __int64 v64; // x16
  unsigned __int64 v65; // x16
  unsigned __int64 v66; // x14
  unsigned __int64 v67; // x15
  unsigned __int64 v68; // x16
  unsigned __int64 v69; // x13
  std::runtime_error *exception; // x19

  if ( a1 > 0xD3 )
  {
    if ( a1 >= 0xFFFFFFFFFFFFFFC6LL )
    {
      exception = (std::runtime_error *)_cxa_allocate_exception(0x10u);
      std::runtime_error::runtime_error(exception, "__next_prime overflow");
      *(_QWORD *)exception = off_161608;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::overflow_error,
        (void (*)(void *))std::overflow_error::~overflow_error);
    }
    v8 = a1 / 0xD2;
    v9 = 210 * (a1 / 0xD2);
    v10 = 48;
    v11 = qword_120108;
    do
    {
      v12 = v10 >> 1;
      v13 = (_DWORD *)v11 + (v10 >> 1);
      v15 = *v13;
      v14 = (__int64 *)(v13 + 1);
      v10 += ~(v10 >> 1);
      if ( a1 % 0xD2 > v15 )
        v11 = v14;
      else
        v10 = v12;
    }
    while ( v10 );
    v16 = ((char *)v11 - (char *)qword_120108) >> 2;
LABEL_19:
    result = v9 + *((unsigned int *)qword_120108 + v16);
    v17 = 5;
    while ( 1 )
    {
      v18 = *((unsigned int *)qword_120048 + v17);
      if ( result / v18 < v18 )
        break;
      if ( result == result / v18 * v18 )
      {
LABEL_15:
        if ( v16 == 47 )
        {
          ++v8;
          v16 = 0;
        }
        else
        {
          ++v16;
        }
        v9 = 210 * v8;
        goto LABEL_19;
      }
      if ( (unsigned __int64)++v17 >= 0x2F )
      {
        v19 = 211;
        while ( result / v19 >= v19 )
        {
          if ( result == result / v19 * v19 )
            goto LABEL_15;
          v20 = result / (v19 + 10);
          if ( v20 < v19 + 10 )
            break;
          if ( result == v20 * (v19 + 10) )
            goto LABEL_15;
          v21 = result / (v19 + 12);
          if ( v21 < v19 + 12 )
            break;
          if ( result == v21 * (v19 + 12) )
            goto LABEL_15;
          v22 = result / (v19 + 16);
          if ( v22 < v19 + 16 )
            break;
          if ( result == v22 * (v19 + 16) )
            goto LABEL_15;
          v23 = result / (v19 + 18);
          if ( v23 < v19 + 18 )
            break;
          if ( result == v23 * (v19 + 18) )
            goto LABEL_15;
          v24 = result / (v19 + 22);
          if ( v24 < v19 + 22 )
            break;
          if ( result == v24 * (v19 + 22) )
            goto LABEL_15;
          v25 = result / (v19 + 28);
          if ( v25 < v19 + 28 )
            break;
          if ( result == v25 * (v19 + 28) )
            goto LABEL_15;
          v26 = result / (v19 + 30);
          if ( v26 < v19 + 30 )
            break;
          if ( result == v26 * (v19 + 30) )
            goto LABEL_15;
          v27 = result / (v19 + 36);
          if ( v27 < v19 + 36 )
            break;
          if ( result == v27 * (v19 + 36) )
            goto LABEL_15;
          v28 = result / (v19 + 40);
          if ( v28 < v19 + 40 )
            break;
          if ( result == v28 * (v19 + 40) )
            goto LABEL_15;
          v29 = result / (v19 + 42);
          if ( v29 < v19 + 42 )
            break;
          if ( result == v29 * (v19 + 42) )
            goto LABEL_15;
          v30 = result / (v19 + 46);
          if ( v30 < v19 + 46 )
            break;
          if ( result == v30 * (v19 + 46) )
            goto LABEL_15;
          v31 = result / (v19 + 52);
          if ( v31 < v19 + 52 )
            break;
          if ( result == v31 * (v19 + 52) )
            goto LABEL_15;
          v32 = result / (v19 + 58);
          if ( v32 < v19 + 58 )
            break;
          if ( result == v32 * (v19 + 58) )
            goto LABEL_15;
          v33 = result / (v19 + 60);
          if ( v33 < v19 + 60 )
            break;
          if ( result == v33 * (v19 + 60) )
            goto LABEL_15;
          v34 = result / (v19 + 66);
          if ( v34 < v19 + 66 )
            break;
          if ( result == v34 * (v19 + 66) )
            goto LABEL_15;
          v35 = result / (v19 + 70);
          if ( v35 < v19 + 70 )
            break;
          if ( result == v35 * (v19 + 70) )
            goto LABEL_15;
          v36 = result / (v19 + 72);
          if ( v36 < v19 + 72 )
            break;
          if ( result == v36 * (v19 + 72) )
            goto LABEL_15;
          v37 = result / (v19 + 78);
          if ( v37 < v19 + 78 )
            break;
          if ( result == v37 * (v19 + 78) )
            goto LABEL_15;
          v38 = result / (v19 + 82);
          if ( v38 < v19 + 82 )
            break;
          if ( result == v38 * (v19 + 82) )
            goto LABEL_15;
          v39 = result / (v19 + 88);
          if ( v39 < v19 + 88 )
            break;
          if ( result == v39 * (v19 + 88) )
            goto LABEL_15;
          v40 = result / (v19 + 96);
          if ( v40 < v19 + 96 )
            break;
          if ( result == v40 * (v19 + 96) )
            goto LABEL_15;
          v41 = result / (v19 + 100);
          if ( v41 < v19 + 100 )
            break;
          if ( result == v41 * (v19 + 100) )
            goto LABEL_15;
          v42 = result / (v19 + 102);
          if ( v42 < v19 + 102 )
            break;
          if ( result == v42 * (v19 + 102) )
            goto LABEL_15;
          v43 = result / (v19 + 106);
          if ( v43 < v19 + 106 )
            break;
          if ( result == v43 * (v19 + 106) )
            goto LABEL_15;
          v44 = result / (v19 + 108);
          if ( v44 < v19 + 108 )
            break;
          if ( result == v44 * (v19 + 108) )
            goto LABEL_15;
          v45 = result / (v19 + 112);
          if ( v45 < v19 + 112 )
            break;
          if ( result == v45 * (v19 + 112) )
            goto LABEL_15;
          v46 = result / (v19 + 120);
          if ( v46 < v19 + 120 )
            break;
          if ( result == v46 * (v19 + 120) )
            goto LABEL_15;
          v47 = result / (v19 + 126);
          if ( v47 < v19 + 126 )
            break;
          if ( result == v47 * (v19 + 126) )
            goto LABEL_15;
          v48 = result / (v19 + 130);
          if ( v48 < v19 + 130 )
            break;
          if ( result == v48 * (v19 + 130) )
            goto LABEL_15;
          v49 = result / (v19 + 136);
          if ( v49 < v19 + 136 )
            break;
          if ( result == v49 * (v19 + 136) )
            goto LABEL_15;
          v50 = result / (v19 + 138);
          if ( v50 < v19 + 138 )
            break;
          if ( result == v50 * (v19 + 138) )
            goto LABEL_15;
          v51 = result / (v19 + 142);
          if ( v51 < v19 + 142 )
            break;
          if ( result == v51 * (v19 + 142) )
            goto LABEL_15;
          v52 = result / (v19 + 148);
          if ( v52 < v19 + 148 )
            break;
          if ( result == v52 * (v19 + 148) )
            goto LABEL_15;
          v53 = result / (v19 + 150);
          if ( v53 < v19 + 150 )
            break;
          if ( result == v53 * (v19 + 150) )
            goto LABEL_15;
          v54 = result / (v19 + 156);
          if ( v54 < v19 + 156 )
            break;
          if ( result == v54 * (v19 + 156) )
            goto LABEL_15;
          v55 = result / (v19 + 162);
          if ( v55 < v19 + 162 )
            break;
          if ( result == v55 * (v19 + 162) )
            goto LABEL_15;
          v56 = result / (v19 + 166);
          if ( v56 < v19 + 166 )
            break;
          if ( result == v56 * (v19 + 166) )
            goto LABEL_15;
          v57 = result / (v19 + 168);
          if ( v57 < v19 + 168 )
            break;
          if ( result == v57 * (v19 + 168) )
            goto LABEL_15;
          v58 = result / (v19 + 172);
          if ( v58 < v19 + 172 )
            break;
          if ( result == v58 * (v19 + 172) )
            goto LABEL_15;
          v59 = result / (v19 + 178);
          if ( v59 < v19 + 178 )
            break;
          if ( result == v59 * (v19 + 178) )
            goto LABEL_15;
          v60 = result / (v19 + 180);
          if ( v60 < v19 + 180 )
            break;
          if ( result == v60 * (v19 + 180) )
            goto LABEL_15;
          v61 = result / (v19 + 186);
          if ( v61 < v19 + 186 )
            break;
          if ( result == v61 * (v19 + 186) )
            goto LABEL_15;
          v62 = result / (v19 + 190);
          if ( v62 < v19 + 190 )
            break;
          if ( result == v62 * (v19 + 190) )
            goto LABEL_15;
          v63 = result / (v19 + 192);
          if ( v63 < v19 + 192 )
            break;
          if ( result == v63 * (v19 + 192) )
            goto LABEL_15;
          v64 = result / (v19 + 196);
          if ( v64 < v19 + 196 )
            break;
          if ( result == v64 * (v19 + 196) )
            goto LABEL_15;
          v65 = result / (v19 + 198);
          v66 = v19 + 198;
          if ( v65 < v19 + 198 )
            break;
          if ( result == v65 * (v19 + 198) )
            goto LABEL_15;
          v67 = v19 + 208;
          v68 = result / (v19 + 208);
          v69 = v19 + 208;
          if ( v68 < v66 + 10 )
            break;
          v19 = v69 + 2;
          if ( result == v68 * v67 )
            goto LABEL_15;
        }
        return result;
      }
    }
  }
  else
  {
    v1 = qword_120048;
    v2 = 48;
    do
    {
      v3 = v2 >> 1;
      v4 = (_DWORD *)v1 + (v2 >> 1);
      v6 = *v4;
      v5 = (__int64 *)(v4 + 1);
      v2 += ~(v2 >> 1);
      if ( v6 < a1 )
        v1 = v5;
      else
        v2 = v3;
    }
    while ( v2 );
    return *(unsigned int *)v1;
  }
  return result;
}
// 120048: using guessed type __int64 qword_120048[24];
// 120108: using guessed type __int64 qword_120108[24];
// 161608: using guessed type void (__fastcall *[2])(std::overflow_error *__hidden this);
// 161620: using guessed type __int64 *`typeinfo for'std::overflow_error;
