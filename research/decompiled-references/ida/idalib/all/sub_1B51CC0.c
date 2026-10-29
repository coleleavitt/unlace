__int64 *__fastcall sub_1B51CC0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // r8d
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 *result; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  bool v18; // cl
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  bool v22; // cl
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rdx
  bool v26; // cl
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  bool v30; // cl
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  bool v34; // cl
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  bool v38; // cl
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  bool v42; // cl
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rdx
  bool v46; // cl
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  double v57[2]; // [rsp+0h] [rbp-10h] BYREF

  v2 = *(_DWORD *)a2 & 0xFFFFFFFE;
  *(_DWORD *)a2 = *(_DWORD *)a1 & 0xFFFFFFFE | *(_DWORD *)a2 & 1;
  *(_DWORD *)a1 = v2 | *(_DWORD *)a1 & 1;
  v3 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v3;
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v6 = (__int64 *)(a1 + 8);
    result = (__int64 *)(a2 + 8);
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 8);
      v18 = v17 != -8192 && v17 != -4096;
      v19 = *(_QWORD *)(a2 + 8);
      if ( v19 == -4096 || v19 == -8192 )
      {
        *(_QWORD *)(a1 + 8) = v19;
        *(_QWORD *)(a2 + 8) = v17;
        if ( v18 )
          *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
      }
      else
      {
        v20 = *(_QWORD *)(a2 + 16);
        if ( v18 )
        {
          v57[0] = *(double *)(a2 + 16);
          v49 = *(_QWORD *)(a1 + 16);
          *(__m128 *)(a1 + 8) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 8) = v17;
          *(_QWORD *)(a2 + 16) = v49;
        }
        else
        {
          *(_QWORD *)(a1 + 8) = v19;
          *(_QWORD *)(a2 + 8) = v17;
          *(_QWORD *)(a1 + 16) = v20;
        }
      }
      v21 = *(_QWORD *)(a1 + 24);
      v22 = v21 != -8192 && v21 != -4096;
      v23 = *(_QWORD *)(a2 + 24);
      if ( v23 == -4096 || v23 == -8192 )
      {
        *(_QWORD *)(a1 + 24) = v23;
        *(_QWORD *)(a2 + 24) = v21;
        if ( v22 )
          *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
      }
      else
      {
        v24 = *(_QWORD *)(a2 + 32);
        if ( v22 )
        {
          v57[0] = *(double *)(a2 + 32);
          v53 = *(_QWORD *)(a1 + 32);
          *(__m128 *)(a1 + 24) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 24) = v21;
          *(_QWORD *)(a2 + 32) = v53;
        }
        else
        {
          *(_QWORD *)(a1 + 24) = v23;
          *(_QWORD *)(a2 + 24) = v21;
          *(_QWORD *)(a1 + 32) = v24;
        }
      }
      v25 = *(_QWORD *)(a1 + 40);
      v26 = v25 != -8192 && v25 != -4096;
      v27 = *(_QWORD *)(a2 + 40);
      if ( v27 == -4096 || v27 == -8192 )
      {
        *(_QWORD *)(a1 + 40) = v27;
        *(_QWORD *)(a2 + 40) = v25;
        if ( v26 )
          *(_QWORD *)(a2 + 48) = *(_QWORD *)(a1 + 48);
      }
      else
      {
        v28 = *(_QWORD *)(a2 + 48);
        if ( v26 )
        {
          v57[0] = *(double *)(a2 + 48);
          v52 = *(_QWORD *)(a1 + 48);
          *(__m128 *)(a1 + 40) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 40) = v25;
          *(_QWORD *)(a2 + 48) = v52;
        }
        else
        {
          *(_QWORD *)(a1 + 40) = v27;
          *(_QWORD *)(a2 + 40) = v25;
          *(_QWORD *)(a1 + 48) = v28;
        }
      }
      v29 = *(_QWORD *)(a1 + 56);
      v30 = v29 != -8192 && v29 != -4096;
      v31 = *(_QWORD *)(a2 + 56);
      if ( v31 == -4096 || v31 == -8192 )
      {
        *(_QWORD *)(a1 + 56) = v31;
        *(_QWORD *)(a2 + 56) = v29;
        if ( v30 )
          *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 64);
      }
      else
      {
        v32 = *(_QWORD *)(a2 + 64);
        if ( v30 )
        {
          v57[0] = *(double *)(a2 + 64);
          v51 = *(_QWORD *)(a1 + 64);
          *(__m128 *)(a1 + 56) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 56) = v29;
          *(_QWORD *)(a2 + 64) = v51;
        }
        else
        {
          *(_QWORD *)(a1 + 56) = v31;
          *(_QWORD *)(a2 + 56) = v29;
          *(_QWORD *)(a1 + 64) = v32;
        }
      }
      v33 = *(_QWORD *)(a1 + 72);
      v34 = v33 != -8192 && v33 != -4096;
      v35 = *(_QWORD *)(a2 + 72);
      if ( v35 == -4096 || v35 == -8192 )
      {
        *(_QWORD *)(a1 + 72) = v35;
        *(_QWORD *)(a2 + 72) = v33;
        if ( v34 )
          *(_QWORD *)(a2 + 80) = *(_QWORD *)(a1 + 80);
      }
      else
      {
        v36 = *(_QWORD *)(a2 + 80);
        if ( v34 )
        {
          v57[0] = *(double *)(a2 + 80);
          v50 = *(_QWORD *)(a1 + 80);
          *(__m128 *)(a1 + 72) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 72) = v33;
          *(_QWORD *)(a2 + 80) = v50;
        }
        else
        {
          *(_QWORD *)(a1 + 72) = v35;
          *(_QWORD *)(a2 + 72) = v33;
          *(_QWORD *)(a1 + 80) = v36;
        }
      }
      v37 = *(_QWORD *)(a1 + 88);
      v38 = v37 != -8192 && v37 != -4096;
      v39 = *(_QWORD *)(a2 + 88);
      if ( v39 == -4096 || v39 == -8192 )
      {
        *(_QWORD *)(a1 + 88) = v39;
        *(_QWORD *)(a2 + 88) = v37;
        if ( v38 )
          *(_QWORD *)(a2 + 96) = *(_QWORD *)(a1 + 96);
      }
      else
      {
        v40 = *(_QWORD *)(a2 + 96);
        if ( v38 )
        {
          v57[0] = *(double *)(a2 + 96);
          v56 = *(_QWORD *)(a1 + 96);
          *(__m128 *)(a1 + 88) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 88) = v37;
          *(_QWORD *)(a2 + 96) = v56;
        }
        else
        {
          *(_QWORD *)(a1 + 88) = v39;
          *(_QWORD *)(a2 + 88) = v37;
          *(_QWORD *)(a1 + 96) = v40;
        }
      }
      v41 = *(_QWORD *)(a1 + 104);
      v42 = v41 != -8192 && v41 != -4096;
      v43 = *(_QWORD *)(a2 + 104);
      if ( v43 == -4096 || v43 == -8192 )
      {
        *(_QWORD *)(a1 + 104) = v43;
        *(_QWORD *)(a2 + 104) = v41;
        if ( v42 )
          *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 112);
      }
      else
      {
        v44 = *(_QWORD *)(a2 + 112);
        if ( v42 )
        {
          v57[0] = *(double *)(a2 + 112);
          v55 = *(_QWORD *)(a1 + 112);
          *(__m128 *)(a1 + 104) = _mm_loadh_ps(v57);
          *(_QWORD *)(a2 + 104) = v41;
          *(_QWORD *)(a2 + 112) = v55;
        }
        else
        {
          *(_QWORD *)(a1 + 104) = v43;
          *(_QWORD *)(a2 + 104) = v41;
          *(_QWORD *)(a1 + 112) = v44;
        }
      }
      v45 = *(_QWORD *)(a1 + 120);
      v46 = v45 != -8192 && v45 != -4096;
      result = *(__int64 **)(a2 + 120);
      if ( result == (__int64 *)-4096LL )
      {
        *(_QWORD *)(a1 + 120) = -4096;
        *(_QWORD *)(a2 + 120) = v45;
        if ( !v46 )
          return result;
      }
      else
      {
        if ( result != (__int64 *)-8192LL )
        {
          v47 = *(_QWORD *)(a2 + 128);
          if ( v46 )
          {
            v57[0] = *(double *)(a2 + 128);
            v54 = *(_QWORD *)(a1 + 128);
            *(__m128 *)(a1 + 120) = _mm_loadh_ps(v57);
            *(_QWORD *)(a2 + 120) = v45;
            *(_QWORD *)(a2 + 128) = v54;
          }
          else
          {
            *(_QWORD *)(a1 + 120) = result;
            *(_QWORD *)(a2 + 120) = v45;
            *(_QWORD *)(a1 + 128) = v47;
          }
          return result;
        }
        *(_QWORD *)(a1 + 120) = -8192;
        *(_QWORD *)(a2 + 120) = v45;
        if ( !v46 )
          return result;
      }
      result = *(__int64 **)(a1 + 128);
      *(_QWORD *)(a2 + 128) = result;
      return result;
    }
    v4 = *(_DWORD *)(a2 + 16);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v48 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a2 + 8) = v48;
      result = (__int64 *)*(unsigned int *)(a2 + 16);
      *(_DWORD *)(a1 + 16) = (_DWORD)result;
      *(_DWORD *)(a2 + 16) = v4;
      return result;
    }
    v5 = a2;
    v6 = (__int64 *)(a2 + 8);
    result = (__int64 *)(a1 + 8);
    a2 = a1;
    a1 = v5;
  }
  *(_BYTE *)a2 |= 1u;
  v8 = *v6;
  v9 = *(_QWORD *)(a2 + 8);
  *result = *v6;
  if ( v8 != -8192 && v8 != -4096 )
    result[1] = v6[1];
  v10 = v6[2];
  result[2] = v10;
  if ( v10 != -8192 && v10 != -4096 )
    result[3] = v6[3];
  v11 = v6[4];
  result[4] = v11;
  if ( v11 != -8192 && v11 != -4096 )
    result[5] = v6[5];
  v12 = v6[6];
  result[6] = v12;
  if ( v12 != -8192 && v12 != -4096 )
    result[7] = v6[7];
  v13 = v6[8];
  result[8] = v13;
  if ( v13 != -8192 && v13 != -4096 )
    result[9] = v6[9];
  v14 = v6[10];
  result[10] = v14;
  if ( v14 != -8192 && v14 != -4096 )
    result[11] = v6[11];
  v15 = v6[12];
  result[12] = v15;
  if ( v15 != -8192 && v15 != -4096 )
    result[13] = v6[13];
  v16 = v6[14];
  result[14] = v16;
  if ( v16 != -8192 && v16 != -4096 )
    result[15] = v6[15];
  *(_BYTE *)a1 &= ~1u;
  *(_QWORD *)(a1 + 8) = v9;
  *(_DWORD *)(a1 + 16) = v4;
  return result;
}
