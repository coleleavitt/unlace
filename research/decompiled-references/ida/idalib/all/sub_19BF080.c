__int64 __fastcall sub_19BF080(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rbx
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rsi
  _QWORD *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rsi
  _QWORD *v40; // rax
  unsigned int v41; // esi
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rdi
  int *v45; // rdx
  int v46; // eax
  __int64 v47; // r8
  char v48; // al
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned int v52; // edx
  _QWORD *v53; // rsi
  __int64 v54; // r8
  int v55; // esi
  int v56; // r10d
  __int64 v57; // r11
  __int64 v58; // r8
  __int64 v59; // rsi
  int v60; // edi
  int v61; // edi
  unsigned int v62; // r8d
  int v63; // r8d
  int v64; // r8d
  unsigned int v65; // edi
  int v66; // r11d
  _QWORD *v67; // r10
  int v68; // edx
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 *v72; // r11
  int v73; // r10d
  int v74; // r10d
  __int64 v75; // [rsp+18h] [rbp-60h]
  _QWORD *v76; // [rsp+28h] [rbp-50h] BYREF
  __m128 v77[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a5;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  v15 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v15 + 24) & 1) != 0 )
    v16 = sub_B96980(v15);
  else
    v16 = *(_QWORD *)(v15 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
  v17 = *(_QWORD *)(a1 + 104);
  v18 = v16 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
  result = (__int64)sub_7052B0((__int64 *)(v17 + 96), v17, v19, v20, v21, v22);
  v28 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v28 + 24) & 1) != 0 )
  {
    result = sub_B96980(v28);
    v29 = result;
  }
  else
  {
    v29 = *(_QWORD *)(v28 + 24);
  }
  while ( v29 != v18 )
  {
    v30 = *(_QWORD *)(**(_QWORD **)(v29 + 16) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(v30 + 8) & 0xF) != 0 )
      v30 = sub_F64F00(**(_QWORD **)(v29 + 16), v17, v24, v25, v26);
    v31 = sub_F63270(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL), v17, v24, v25, v26, v27);
    v76 = v31;
    if ( (*(_BYTE *)(v29 + 12) & 1) == 0 )
    {
LABEL_24:
      v41 = *(_DWORD *)(a2 + 16);
      if ( v41 )
      {
        v33 = v76;
        v35 = v41 - 1;
        v42 = v35 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4));
        v43 = *(_QWORD *)a2 + 16LL * v42;
        v44 = *(_QWORD *)v43;
        if ( v76 == *(_QWORD **)v43 )
        {
LABEL_26:
          v45 = (int *)(v43 + 8);
          v46 = *(_DWORD *)(v43 + 8) + 1;
LABEL_27:
          *v45 = v46;
          goto LABEL_28;
        }
        v56 = 1;
        v57 = 0;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( v44 == -8192 && !v57 )
              v57 = v43;
            v42 = v35 & (v56 + v42);
            v43 = *(_QWORD *)a2 + 16LL * v42;
            v44 = *(_QWORD *)v43;
            if ( v76 == *(_QWORD **)v43 )
              goto LABEL_26;
            if ( v44 == -4096 )
              break;
            ++v56;
          }
          if ( v57 )
            v43 = v57;
        }
        v32 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
        v34 = (unsigned int)(4 * v32);
        if ( (unsigned int)v34 < 3 * v41 )
        {
          v58 = v41 >> 3;
          if ( v41 - *(_DWORD *)(a2 + 12) - (unsigned int)v32 > (unsigned int)v58 )
          {
LABEL_49:
            v59 = *(_QWORD *)v43;
            goto LABEL_50;
          }
          sub_19A7890((__int64 *)a2, v41, v32, (__int64)v76, v58, v35);
          v63 = *(_DWORD *)(a2 + 16);
          if ( !v63 )
          {
LABEL_105:
            ++*(_DWORD *)(a2 + 8);
            BUG();
          }
          v33 = v76;
          v64 = v63 - 1;
          v35 = *(_QWORD *)a2;
          LODWORD(v32) = *(_DWORD *)(a2 + 8) + 1;
          v65 = v64 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4));
          v43 = *(_QWORD *)a2 + 16LL * v65;
          v59 = *(_QWORD *)v43;
          if ( *(_QWORD **)v43 == v76 )
          {
            v59 = (__int64)v76;
            goto LABEL_50;
          }
          if ( v59 != -4096 )
          {
            v72 = (__int64 *)(*(_QWORD *)a2 + 16LL * (v64 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4))));
            v73 = 1;
            v43 = 0;
            while ( 1 )
            {
              if ( !v43 && v59 == -8192 )
                v43 = (__int64)v72;
              v65 = v64 & (v73 + v65);
              v72 = (__int64 *)(v35 + 16LL * v65);
              v59 = *v72;
              if ( v76 == (_QWORD *)*v72 )
                break;
              if ( v59 == -4096 )
                goto LABEL_100;
              ++v73;
            }
LABEL_84:
            v43 = (__int64)v72;
            goto LABEL_50;
          }
          goto LABEL_56;
        }
      }
      sub_19A7890((__int64 *)a2, 2 * v41, v32, (__int64)v33, v34, v35);
      v60 = *(_DWORD *)(a2 + 16);
      if ( !v60 )
        goto LABEL_105;
      v33 = v76;
      v61 = v60 - 1;
      v35 = *(_QWORD *)a2;
      LODWORD(v32) = *(_DWORD *)(a2 + 8) + 1;
      v62 = v61 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4));
      v43 = *(_QWORD *)a2 + 16LL * v62;
      v59 = *(_QWORD *)v43;
      if ( *(_QWORD **)v43 == v76 )
      {
LABEL_50:
        *(_DWORD *)(a2 + 8) = v32;
        if ( v59 != -4096 )
          --*(_DWORD *)(a2 + 12);
      }
      else
      {
        if ( v59 != -4096 )
        {
          v72 = (__int64 *)(*(_QWORD *)a2 + 16LL * (v61 & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4))));
          v74 = 1;
          v43 = 0;
          while ( 1 )
          {
            if ( !v43 && v59 == -8192 )
              v43 = (__int64)v72;
            v62 = v61 & (v74 + v62);
            v72 = (__int64 *)(v35 + 16LL * v62);
            v59 = *v72;
            if ( v76 == (_QWORD *)*v72 )
              goto LABEL_84;
            if ( v59 == -4096 )
            {
LABEL_100:
              if ( v43 )
                goto LABEL_49;
              v43 = (__int64)v72;
              break;
            }
            ++v74;
          }
        }
LABEL_56:
        *(_DWORD *)(a2 + 8) = v32;
      }
      *(_QWORD *)v43 = v33;
      v45 = (int *)(v43 + 8);
      *(_DWORD *)(v43 + 8) = 0;
      v46 = 1;
      goto LABEL_27;
    }
    v32 = *(unsigned __int8 *)(a3 + 20);
    if ( (_BYTE)v32 )
    {
      v36 = *(_QWORD **)a3;
      v35 = *(unsigned int *)(a3 + 12);
      v34 = 8 * v35;
      v37 = (_QWORD *)(*(_QWORD *)a3 + 8 * v35);
      if ( *(_QWORD **)a3 != v37 )
      {
        v33 = *(_QWORD **)a3;
        if ( v31 == (_QWORD *)*v36 )
        {
LABEL_36:
          v32 = 0;
LABEL_37:
          v39 = (__int64)&v36[*(unsigned int *)(a3 + 12)];
          goto LABEL_18;
        }
        while ( v37 != ++v33 )
        {
          if ( v31 == (_QWORD *)*v33 )
            goto LABEL_36;
        }
      }
      if ( (unsigned int)v35 < *(_DWORD *)(a3 + 8) )
      {
        v35 = (unsigned int)(v35 + 1);
        *(_DWORD *)(a3 + 12) = v35;
        *v37 = v31;
        v33 = (_QWORD *)(*(_QWORD *)a3 + v34);
        v39 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 12);
        goto LABEL_18;
      }
    }
    v38 = sub_2236760(a3, v31);
    v36 = *(_QWORD **)a3;
    v33 = (_QWORD *)v38;
    if ( *(_BYTE *)(a3 + 20) )
      goto LABEL_37;
    v39 = (__int64)&v36[*(unsigned int *)(a3 + 8)];
LABEL_18:
    if ( (_QWORD *)v39 != v33 && *v33 >= 0xFFFFFFFFFFFFFFFELL )
    {
      ++v33;
      do
      {
        v40 = v33;
        if ( (_QWORD *)v39 == v33 )
          break;
        ++v33;
      }
      while ( *v40 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( (_BYTE)v32 )
      goto LABEL_24;
LABEL_28:
    v47 = 0;
    if ( v6 )
    {
      v48 = *(_BYTE *)(v29 + 12);
      v49 = v48 & 0xC;
      if ( (_BYTE)v49 == 12 )
      {
        if ( (v48 & 2) != 0 )
          goto LABEL_34;
        v50 = *(unsigned int *)(a4 + 16);
        if ( !(_DWORD)v50 )
        {
LABEL_40:
          v77[0].m128_u64[0] = 0;
          goto LABEL_41;
        }
      }
      else
      {
        if ( (v48 & 0xC) != 0 )
          goto LABEL_34;
        v50 = *(unsigned int *)(a4 + 16);
        if ( !(_DWORD)v50 )
          goto LABEL_40;
      }
      v33 = v76;
      v51 = *(_QWORD *)a4;
      v52 = (v50 - 1) & (((unsigned int)v76 >> 9) ^ ((unsigned int)v76 >> 4));
      v53 = (_QWORD *)(*(_QWORD *)a4 + 8LL * v52);
      v54 = *v53;
      if ( (_QWORD *)*v53 != v76 )
      {
        v66 = 1;
        v67 = nullptr;
        if ( v54 == -4096 )
        {
LABEL_61:
          v68 = *(_DWORD *)(a4 + 8);
          v47 = (unsigned int)(3 * v50);
          v77[0].m128_u64[0] = (unsigned __int64)v53;
          v49 = (unsigned int)(v68 + 1);
          v35 = (unsigned int)(4 * v49);
          if ( (unsigned int)v35 < (unsigned int)v47 )
          {
            v47 = (unsigned int)(v50 - *(_DWORD *)(a4 + 12) - v49);
            v35 = (unsigned int)v50 >> 3;
            if ( (unsigned int)v47 > (unsigned int)v35 )
              goto LABEL_63;
            v55 = v50;
LABEL_42:
            sub_19BEE20(a4, v55, v49, (__int64)v33, v47, v35);
            sub_19A75B0((__int64 *)a4, (__int64 *)&v76, v77);
            v33 = v76;
            v51 = *(_QWORD *)a4;
            v50 = *(unsigned int *)(a4 + 16);
            LODWORD(v49) = *(_DWORD *)(a4 + 8) + 1;
            v53 = (_QWORD *)v77[0].m128_u64[0];
LABEL_63:
            v69 = *v53 == -4096;
            *(_DWORD *)(a4 + 8) = v49;
            if ( !v69 )
              --*(_DWORD *)(a4 + 12);
            *v53 = v33;
            sub_19A7A90(v77, v53, (_QWORD *)(v51 + 8 * v50), a4, 1);
            v70 = *(unsigned int *)(a4 + 32);
            v71 = (__int64)v76;
            if ( v70 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 36) )
            {
              v75 = (__int64)v76;
              sub_2237220(a4 + 24, a4 + 40, v70 + 1, 8);
              v70 = *(unsigned int *)(a4 + 32);
              v71 = v75;
            }
            *(_QWORD *)(*(_QWORD *)(a4 + 24) + 8 * v70) = v71;
            v47 = 1;
            ++*(_DWORD *)(a4 + 32);
            goto LABEL_34;
          }
LABEL_41:
          v55 = 2 * v50;
          goto LABEL_42;
        }
        while ( 1 )
        {
          if ( !v67 && v54 == -8192 )
            v67 = v53;
          v52 = (v50 - 1) & (v66 + v52);
          v53 = (_QWORD *)(v51 + 8LL * v52);
          v54 = *v53;
          if ( v76 == (_QWORD *)*v53 )
            break;
          if ( v54 == -4096 )
          {
            if ( v67 )
              v53 = v67;
            goto LABEL_61;
          }
          ++v66;
        }
      }
      sub_19A7A90(v77, v53, (_QWORD *)(v51 + 8 * v50), a4, 1);
      v47 = 1;
    }
LABEL_34:
    v17 = a2;
    v29 += 24;
    result = sub_19BF080(v76, a2, a3, a4, v47);
  }
  return result;
}
