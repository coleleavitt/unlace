/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__next_prime
// Address: 0x000BBAE0

//----- (000BBAE0) --------------------------------------------------------
int __cdecl std::__next_prime(unsigned int a1)
{
  int v1; // edx
  int *v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // edi
  int v5; // edi
  int v6; // ecx
  int *v7; // edx
  unsigned int v8; // eax
  int v9; // edx
  __int64 *v10; // eax
  unsigned int v11; // esi
  __int64 *v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // eax
  int v63; // eax
  char v64; // dl
  std::runtime_error *exception; // esi
  unsigned int v67; // [esp+10h] [ebp-1Ch]
  int v68; // [esp+18h] [ebp-14h]

  if ( a1 > 0xD3 )
  {
    if ( a1 >= 0xFFFFFFFC )
    {
      exception = (std::runtime_error *)_cxa_allocate_exception(8u);
      std::runtime_error::runtime_error(exception, (char *)&qword_13ACD8 - 311553);
      *(_DWORD *)exception = (char *)&qword_13ACD8 - 4356;
      _cxa_throw(exception, (struct type_info *)(&qword_13ACD8 - 543), (void (*)(void *))(&qword_13ACD8 - 62501));
    }
    v67 = a1 / 0xD2;
    v5 = 210 * (a1 / 0xD2);
    v6 = 48;
    v7 = dword_10937C;
    v8 = 48;
    do
    {
      v8 >>= 1;
      if ( v7[v8] < a1 % 0xD2 )
      {
        v7 += v8 + 1;
        v8 = v6 + ~v8;
      }
      v6 = v8;
    }
    while ( v8 );
    v9 = ((char *)v7 - ((char *)&qword_13ACD8 - 203100)) >> 2;
    v10 = &qword_13ACD8 - 25409;
LABEL_16:
    v68 = v9;
    v4 = *((_DWORD *)&qword_13ACD8 + v9 - 50775) + v5;
    v11 = 5;
    v12 = v10;
    while ( 1 )
    {
      v13 = v4 / *(_DWORD *)v12;
      if ( v13 < *(_DWORD *)v12 )
        break;
      if ( v4 == *(_DWORD *)v12 * v13 )
      {
LABEL_13:
        v9 = v68 + 1;
        if ( v68 == 47 )
          v9 = 0;
        v67 += v68 == 47;
        v5 = 210 * v67;
        v10 = &qword_13ACD8 - 25409;
        goto LABEL_16;
      }
      ++v11;
      v12 = (__int64 *)((char *)v12 + 4);
      if ( v11 >= 0x2F )
      {
        v14 = 211;
        while ( v4 / v14 >= v14 )
        {
          if ( v4 == v14 * (v4 / v14) )
            goto LABEL_13;
          v15 = v4 / (v14 + 10);
          if ( v15 < v14 + 10 )
            break;
          if ( v4 == (v14 + 10) * v15 )
            goto LABEL_13;
          v16 = v4 / (v14 + 12);
          if ( v16 < v14 + 12 )
            break;
          if ( v4 == (v14 + 12) * v16 )
            goto LABEL_13;
          v17 = v4 / (v14 + 16);
          if ( v17 < v14 + 16 )
            break;
          if ( v4 == (v14 + 16) * v17 )
            goto LABEL_13;
          v18 = v4 / (v14 + 18);
          if ( v18 < v14 + 18 )
            break;
          if ( v4 == (v14 + 18) * v18 )
            goto LABEL_13;
          v19 = v4 / (v14 + 22);
          if ( v19 < v14 + 22 )
            break;
          if ( v4 == (v14 + 22) * v19 )
            goto LABEL_13;
          v20 = v4 / (v14 + 28);
          if ( v20 < v14 + 28 )
            break;
          if ( v4 == (v14 + 28) * v20 )
            goto LABEL_13;
          v21 = v4 / (v14 + 30);
          if ( v21 < v14 + 30 )
            break;
          if ( v4 == (v14 + 30) * v21 )
            goto LABEL_13;
          v22 = v4 / (v14 + 36);
          if ( v22 < v14 + 36 )
            break;
          if ( v4 == (v14 + 36) * v22 )
            goto LABEL_13;
          v23 = v4 / (v14 + 40);
          if ( v23 < v14 + 40 )
            break;
          if ( v4 == (v14 + 40) * v23 )
            goto LABEL_13;
          v24 = v4 / (v14 + 42);
          if ( v24 < v14 + 42 )
            break;
          if ( v4 == (v14 + 42) * v24 )
            goto LABEL_13;
          v25 = v4 / (v14 + 46);
          if ( v25 < v14 + 46 )
            break;
          if ( v4 == (v14 + 46) * v25 )
            goto LABEL_13;
          v26 = v4 / (v14 + 52);
          if ( v26 < v14 + 52 )
            break;
          if ( v4 == (v14 + 52) * v26 )
            goto LABEL_13;
          v27 = v4 / (v14 + 58);
          if ( v27 < v14 + 58 )
            break;
          if ( v4 == (v14 + 58) * v27 )
            goto LABEL_13;
          v28 = v4 / (v14 + 60);
          if ( v28 < v14 + 60 )
            break;
          if ( v4 == (v14 + 60) * v28 )
            goto LABEL_13;
          v29 = v4 / (v14 + 66);
          if ( v29 < v14 + 66 )
            break;
          if ( v4 == (v14 + 66) * v29 )
            goto LABEL_13;
          v30 = v4 / (v14 + 70);
          if ( v30 < v14 + 70 )
            break;
          if ( v4 == (v14 + 70) * v30 )
            goto LABEL_13;
          v31 = v4 / (v14 + 72);
          if ( v31 < v14 + 72 )
            break;
          if ( v4 == (v14 + 72) * v31 )
            goto LABEL_13;
          v32 = v4 / (v14 + 78);
          if ( v32 < v14 + 78 )
            break;
          if ( v4 == (v14 + 78) * v32 )
            goto LABEL_13;
          v33 = v4 / (v14 + 82);
          if ( v33 < v14 + 82 )
            break;
          if ( v4 == (v14 + 82) * v33 )
            goto LABEL_13;
          v34 = v4 / (v14 + 88);
          if ( v34 < v14 + 88 )
            break;
          if ( v4 == (v14 + 88) * v34 )
            goto LABEL_13;
          v35 = v4 / (v14 + 96);
          if ( v35 < v14 + 96 )
            break;
          if ( v4 == (v14 + 96) * v35 )
            goto LABEL_13;
          v36 = v4 / (v14 + 100);
          if ( v36 < v14 + 100 )
            break;
          if ( v4 == (v14 + 100) * v36 )
            goto LABEL_13;
          v37 = v4 / (v14 + 102);
          if ( v37 < v14 + 102 )
            break;
          if ( v4 == (v14 + 102) * v37 )
            goto LABEL_13;
          v38 = v4 / (v14 + 106);
          if ( v38 < v14 + 106 )
            break;
          if ( v4 == (v14 + 106) * v38 )
            goto LABEL_13;
          v39 = v4 / (v14 + 108);
          if ( v39 < v14 + 108 )
            break;
          if ( v4 == (v14 + 108) * v39 )
            goto LABEL_13;
          v40 = v4 / (v14 + 112);
          if ( v40 < v14 + 112 )
            break;
          if ( v4 == (v14 + 112) * v40 )
            goto LABEL_13;
          v41 = v4 / (v14 + 120);
          if ( v41 < v14 + 120 )
            break;
          if ( v4 == (v14 + 120) * v41 )
            goto LABEL_13;
          v42 = v4 / (v14 + 126);
          if ( v42 < v14 + 126 )
            break;
          if ( v4 == (v14 + 126) * v42 )
            goto LABEL_13;
          v43 = v4 / (v14 + 130);
          if ( v43 < v14 + 130 )
            break;
          if ( v4 == (v14 + 130) * v43 )
            goto LABEL_13;
          v44 = v4 / (v14 + 136);
          if ( v44 < v14 + 136 )
            break;
          if ( v4 == (v14 + 136) * v44 )
            goto LABEL_13;
          v45 = v4 / (v14 + 138);
          if ( v45 < v14 + 138 )
            break;
          if ( v4 == (v14 + 138) * v45 )
            goto LABEL_13;
          v46 = v4 / (v14 + 142);
          if ( v46 < v14 + 142 )
            break;
          if ( v4 == (v14 + 142) * v46 )
            goto LABEL_13;
          v47 = v4 / (v14 + 148);
          if ( v47 < v14 + 148 )
            break;
          if ( v4 == (v14 + 148) * v47 )
            goto LABEL_13;
          v48 = v4 / (v14 + 150);
          if ( v48 < v14 + 150 )
            break;
          if ( v4 == (v14 + 150) * v48 )
            goto LABEL_13;
          v49 = v4 / (v14 + 156);
          if ( v49 < v14 + 156 )
            break;
          if ( v4 == (v14 + 156) * v49 )
            goto LABEL_13;
          v50 = v4 / (v14 + 162);
          if ( v50 < v14 + 162 )
            break;
          if ( v4 == (v14 + 162) * v50 )
            goto LABEL_13;
          v51 = v4 / (v14 + 166);
          if ( v51 < v14 + 166 )
            break;
          if ( v4 == (v14 + 166) * v51 )
            goto LABEL_13;
          v52 = v4 / (v14 + 168);
          if ( v52 < v14 + 168 )
            break;
          if ( v4 == (v14 + 168) * v52 )
            goto LABEL_13;
          v53 = v4 / (v14 + 172);
          if ( v53 < v14 + 172 )
            break;
          if ( v4 == (v14 + 172) * v53 )
            goto LABEL_13;
          v54 = v4 / (v14 + 178);
          if ( v54 < v14 + 178 )
            break;
          if ( v4 == (v14 + 178) * v54 )
            goto LABEL_13;
          v55 = v4 / (v14 + 180);
          if ( v55 < v14 + 180 )
            break;
          if ( v4 == (v14 + 180) * v55 )
            goto LABEL_13;
          v56 = v4 / (v14 + 186);
          if ( v56 < v14 + 186 )
            break;
          if ( v4 == (v14 + 186) * v56 )
            goto LABEL_13;
          v57 = v4 / (v14 + 190);
          if ( v57 < v14 + 190 )
            break;
          if ( v4 == (v14 + 190) * v57 )
            goto LABEL_13;
          v58 = v4 / (v14 + 192);
          if ( v58 < v14 + 192 )
            break;
          if ( v4 == (v14 + 192) * v58 )
            goto LABEL_13;
          v59 = v4 / (v14 + 196);
          if ( v59 < v14 + 196 )
            break;
          if ( v4 == (v14 + 196) * v59 )
            goto LABEL_13;
          v60 = v4 / (v14 + 198);
          if ( v60 < v14 + 198 )
            break;
          if ( v4 == (v14 + 198) * v60 )
            goto LABEL_13;
          v61 = v14 + 208;
          v62 = v4 / (v14 + 208);
          if ( v62 < v14 + 208 )
            break;
          v63 = v61 * v62;
          v14 += 210;
          v64 = 9 * (v4 == v63);
          if ( v4 == v63 )
            v14 = v61;
          if ( (v64 & 0xF) != 0 )
          {
            if ( v64 == 9 || v4 != v63 )
              goto LABEL_13;
            return v4;
          }
        }
        return v4;
      }
    }
  }
  else
  {
    v1 = 48;
    v2 = &dword_1092BC;
    v3 = 48;
    do
    {
      v3 >>= 1;
      if ( v2[v3] < a1 )
      {
        v2 += v3 + 1;
        v3 = v1 + ~v3;
      }
      v1 = v3;
    }
    while ( v3 );
    return *v2;
  }
  return v4;
}
// 1092BC: using guessed type int dword_1092BC;
// 10937C: using guessed type int dword_10937C[48];
// 13ACD8: using guessed type __int64 qword_13ACD8;
