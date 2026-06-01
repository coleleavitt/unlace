/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: std::__next_prime
// Address: 0x00000000000CE0A0

//----- (00000000000CE0A0) ----------------------------------------------------
unsigned __int64 __fastcall std::__next_prime(unsigned __int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rsi
  unsigned __int64 v64; // r10
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rax
  std::runtime_error *exception; // rbx

  if ( a1 > 0xD3 )
  {
    if ( a1 >= 0xFFFFFFFFFFFFFFC6LL )
    {
      exception = (std::runtime_error *)_cxa_allocate_exception(0x10u);
      std::runtime_error::runtime_error(exception, "__next_prime overflow");
      *(_QWORD *)exception = off_151788;
      _cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::overflow_error,
        (void (*)(void *))std::overflow_error::~overflow_error);
    }
    v5 = a1 / 0xD2;
    v6 = 210 * (a1 / 0xD2);
    v7 = a1 % 0xD2;
    v8 = qword_118A20;
    v9 = 48;
    v10 = 48;
    do
    {
      v10 >>= 1;
      if ( v7 > *((unsigned int *)v8 + v10) )
      {
        v8 = (__int64 *)((char *)v8 + 4 * v10 + 4);
        v10 = v9 + ~v10;
      }
      v9 = v10;
    }
    while ( v10 );
    v11 = ((char *)v8 - (char *)qword_118A20) >> 2;
LABEL_16:
    v4 = v6 + *((unsigned int *)qword_118A20 + v11);
    v13 = 5;
    while ( 1 )
    {
      v14 = *((unsigned int *)qword_118960 + v13);
      if ( v4 / v14 < v14 )
        break;
      if ( v4 == v14 * (v4 / v14) )
        goto LABEL_13;
      v15 = *((unsigned int *)qword_118960 + v13 + 1);
      if ( v4 / v15 < v15 )
        return v4;
      if ( v4 == v15 * (v4 / v15) )
      {
LABEL_13:
        v12 = ++v11 == 48;
        if ( v11 == 48 )
          v11 = 0;
        v5 += v12;
        v6 = 210 * v5;
        goto LABEL_16;
      }
      v13 += 2LL;
      if ( v13 >= 0x2F )
      {
        v16 = 211;
        while ( v4 / v16 >= v16 )
        {
          if ( v4 == v16 * (v4 / v16) )
            goto LABEL_13;
          v17 = v4 / (v16 + 10);
          if ( v17 < v16 + 10 )
            break;
          if ( v4 == (v16 + 10) * v17 )
            goto LABEL_13;
          v18 = v4 / (v16 + 12);
          if ( v18 < v16 + 12 )
            break;
          if ( v4 == (v16 + 12) * v18 )
            goto LABEL_13;
          v19 = v4 / (v16 + 16);
          if ( v19 < v16 + 16 )
            break;
          if ( v4 == (v16 + 16) * v19 )
            goto LABEL_13;
          v20 = v4 / (v16 + 18);
          if ( v20 < v16 + 18 )
            break;
          if ( v4 == (v16 + 18) * v20 )
            goto LABEL_13;
          v21 = v4 / (v16 + 22);
          if ( v21 < v16 + 22 )
            break;
          if ( v4 == (v16 + 22) * v21 )
            goto LABEL_13;
          v22 = v4 / (v16 + 28);
          if ( v22 < v16 + 28 )
            break;
          if ( v4 == (v16 + 28) * v22 )
            goto LABEL_13;
          v23 = v4 / (v16 + 30);
          if ( v23 < v16 + 30 )
            break;
          if ( v4 == (v16 + 30) * v23 )
            goto LABEL_13;
          v24 = v4 / (v16 + 36);
          if ( v24 < v16 + 36 )
            break;
          if ( v4 == (v16 + 36) * v24 )
            goto LABEL_13;
          v25 = v4 / (v16 + 40);
          if ( v25 < v16 + 40 )
            break;
          if ( v4 == (v16 + 40) * v25 )
            goto LABEL_13;
          v26 = v4 / (v16 + 42);
          if ( v26 < v16 + 42 )
            break;
          if ( v4 == (v16 + 42) * v26 )
            goto LABEL_13;
          v27 = v4 / (v16 + 46);
          if ( v27 < v16 + 46 )
            break;
          if ( v4 == (v16 + 46) * v27 )
            goto LABEL_13;
          v28 = v4 / (v16 + 52);
          if ( v28 < v16 + 52 )
            break;
          if ( v4 == (v16 + 52) * v28 )
            goto LABEL_13;
          v29 = v4 / (v16 + 58);
          if ( v29 < v16 + 58 )
            break;
          if ( v4 == (v16 + 58) * v29 )
            goto LABEL_13;
          v30 = v4 / (v16 + 60);
          if ( v30 < v16 + 60 )
            break;
          if ( v4 == (v16 + 60) * v30 )
            goto LABEL_13;
          v31 = v4 / (v16 + 66);
          if ( v31 < v16 + 66 )
            break;
          if ( v4 == (v16 + 66) * v31 )
            goto LABEL_13;
          v32 = v4 / (v16 + 70);
          if ( v32 < v16 + 70 )
            break;
          if ( v4 == (v16 + 70) * v32 )
            goto LABEL_13;
          v33 = v4 / (v16 + 72);
          if ( v33 < v16 + 72 )
            break;
          if ( v4 == (v16 + 72) * v33 )
            goto LABEL_13;
          v34 = v4 / (v16 + 78);
          if ( v34 < v16 + 78 )
            break;
          if ( v4 == (v16 + 78) * v34 )
            goto LABEL_13;
          v35 = v4 / (v16 + 82);
          if ( v35 < v16 + 82 )
            break;
          if ( v4 == (v16 + 82) * v35 )
            goto LABEL_13;
          v36 = v4 / (v16 + 88);
          if ( v36 < v16 + 88 )
            break;
          if ( v4 == (v16 + 88) * v36 )
            goto LABEL_13;
          v37 = v4 / (v16 + 96);
          if ( v37 < v16 + 96 )
            break;
          if ( v4 == (v16 + 96) * v37 )
            goto LABEL_13;
          v38 = v4 / (v16 + 100);
          if ( v38 < v16 + 100 )
            break;
          if ( v4 == (v16 + 100) * v38 )
            goto LABEL_13;
          v39 = v4 / (v16 + 102);
          if ( v39 < v16 + 102 )
            break;
          if ( v4 == (v16 + 102) * v39 )
            goto LABEL_13;
          v40 = v4 / (v16 + 106);
          if ( v40 < v16 + 106 )
            break;
          if ( v4 == (v16 + 106) * v40 )
            goto LABEL_13;
          v41 = v4 / (v16 + 108);
          if ( v41 < v16 + 108 )
            break;
          if ( v4 == (v16 + 108) * v41 )
            goto LABEL_13;
          v42 = v4 / (v16 + 112);
          if ( v42 < v16 + 112 )
            break;
          if ( v4 == (v16 + 112) * v42 )
            goto LABEL_13;
          v43 = v4 / (v16 + 120);
          if ( v43 < v16 + 120 )
            break;
          if ( v4 == (v16 + 120) * v43 )
            goto LABEL_13;
          v44 = v4 / (v16 + 126);
          if ( v44 < v16 + 126 )
            break;
          if ( v4 == (v16 + 126) * v44 )
            goto LABEL_13;
          v45 = v4 / (v16 + 130);
          if ( v45 < v16 + 130 )
            break;
          if ( v4 == (v16 + 130) * v45 )
            goto LABEL_13;
          v46 = v4 / (v16 + 136);
          if ( v46 < v16 + 136 )
            break;
          if ( v4 == (v16 + 136) * v46 )
            goto LABEL_13;
          v47 = v4 / (v16 + 138);
          if ( v47 < v16 + 138 )
            break;
          if ( v4 == (v16 + 138) * v47 )
            goto LABEL_13;
          v48 = v4 / (v16 + 142);
          if ( v48 < v16 + 142 )
            break;
          if ( v4 == (v16 + 142) * v48 )
            goto LABEL_13;
          v49 = v4 / (v16 + 148);
          if ( v49 < v16 + 148 )
            break;
          if ( v4 == (v16 + 148) * v49 )
            goto LABEL_13;
          v50 = v4 / (v16 + 150);
          if ( v50 < v16 + 150 )
            break;
          if ( v4 == (v16 + 150) * v50 )
            goto LABEL_13;
          v51 = v4 / (v16 + 156);
          if ( v51 < v16 + 156 )
            break;
          if ( v4 == (v16 + 156) * v51 )
            goto LABEL_13;
          v52 = v4 / (v16 + 162);
          if ( v52 < v16 + 162 )
            break;
          if ( v4 == (v16 + 162) * v52 )
            goto LABEL_13;
          v53 = v4 / (v16 + 166);
          if ( v53 < v16 + 166 )
            break;
          if ( v4 == (v16 + 166) * v53 )
            goto LABEL_13;
          v54 = v4 / (v16 + 168);
          if ( v54 < v16 + 168 )
            break;
          if ( v4 == (v16 + 168) * v54 )
            goto LABEL_13;
          v55 = v4 / (v16 + 172);
          if ( v55 < v16 + 172 )
            break;
          if ( v4 == (v16 + 172) * v55 )
            goto LABEL_13;
          v56 = v4 / (v16 + 178);
          if ( v56 < v16 + 178 )
            break;
          if ( v4 == (v16 + 178) * v56 )
            goto LABEL_13;
          v57 = v4 / (v16 + 180);
          if ( v57 < v16 + 180 )
            break;
          if ( v4 == (v16 + 180) * v57 )
            goto LABEL_13;
          v58 = v4 / (v16 + 186);
          if ( v58 < v16 + 186 )
            break;
          if ( v4 == (v16 + 186) * v58 )
            goto LABEL_13;
          v59 = v4 / (v16 + 190);
          if ( v59 < v16 + 190 )
            break;
          if ( v4 == (v16 + 190) * v59 )
            goto LABEL_13;
          v60 = v4 / (v16 + 192);
          if ( v60 < v16 + 192 )
            break;
          if ( v4 == (v16 + 192) * v60 )
            goto LABEL_13;
          v61 = v4 / (v16 + 196);
          if ( v61 < v16 + 196 )
            break;
          if ( v4 == (v16 + 196) * v61 )
            goto LABEL_13;
          v62 = v4 / (v16 + 198);
          v63 = v16 + 198;
          if ( v62 < v16 + 198 )
            break;
          if ( v4 == (v16 + 198) * v62 )
            goto LABEL_13;
          v64 = v16 + 208;
          v65 = v63 + 10;
          if ( v4 / v64 < v65 )
            break;
          v66 = v64 * (v4 / v64);
          v16 = v65 + 2;
          if ( v4 == v66 )
            goto LABEL_13;
        }
        return v4;
      }
    }
  }
  else
  {
    v1 = qword_118960;
    v2 = 48;
    v3 = 48;
    do
    {
      v3 >>= 1;
      if ( *((unsigned int *)v1 + v3) < a1 )
      {
        v1 = (__int64 *)((char *)v1 + 4 * v3 + 4);
        v3 = v2 + ~v3;
      }
      v2 = v3;
    }
    while ( v3 );
    return *(unsigned int *)v1;
  }
  return v4;
}
// 118960: using guessed type __int64 qword_118960[24];
// 118A20: using guessed type __int64 qword_118A20[24];
// 151788: using guessed type void (__fastcall *[2])(std::overflow_error *__hidden this);
// 1517A0: using guessed type void (__fastcall *`typeinfo for'std::overflow_error)(std::type_info *__hidden this);
