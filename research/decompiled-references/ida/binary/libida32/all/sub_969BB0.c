__int64 __fastcall sub_969BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r9
  _QWORD *v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rax
  double v18; // xmm0_8
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  int v33; // edx
  __int64 *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 *v37; // rdx
  unsigned __int64 v38; // rsi
  __int64 *v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rdx
  int v44; // eax
  const char *v45; // rdi
  unsigned int *v46; // rdi
  char **v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // r11
  __int64 v55; // rsi
  void (*v56)(); // r10
  __int64 v57; // rcx
  _BOOL8 v58; // r8
  __int64 v59; // rax
  __int64 v60; // r8
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rax
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v66; // [rsp+8h] [rbp-70h]
  __int64 v67; // [rsp+8h] [rbp-70h]
  __int64 v68; // [rsp+8h] [rbp-70h]
  __int64 v69; // [rsp+8h] [rbp-70h]
  __int64 v70; // [rsp+8h] [rbp-70h]
  __int64 v71; // [rsp+8h] [rbp-70h]
  __int64 v72; // [rsp+10h] [rbp-68h]
  __int64 v73; // [rsp+10h] [rbp-68h]
  __int64 v74; // [rsp+10h] [rbp-68h]
  int v75; // [rsp+1Ch] [rbp-5Ch]
  __int64 v76; // [rsp+20h] [rbp-58h]
  void (*v77)(); // [rsp+28h] [rbp-50h]
  __int64 v78[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = 8LL * *(unsigned int *)(a2 + 16);
  v3 = a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
  result = v3 + v2;
  if ( v3 != v3 + v2 )
  {
    v6 = 0;
    v7 = (unsigned __int64)(v2 - 8) >> 3;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v3 + 8 * v6);
      LOBYTE(v78[0]) = 0;
      v9 = sub_969060(v78, v8);
      if ( !v9 )
        goto LABEL_19;
      v10 = *(_QWORD *)(v9 + 16);
      if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B )
        goto LABEL_19;
      v11 = *(_QWORD **)(a1 + 80);
      v12 = *(unsigned int *)(a1 + 88);
      v78[0] = v10;
      v13 = sub_966D20(v11, (__int64)&v11[v12], v78);
      if ( v15 == v13 )
        goto LABEL_19;
      v16 = ((__int64)v13 - v14) >> 3;
      v17 = sub_BD7F30(*(_QWORD *)(a2 + 32));
      if ( !v17 )
        goto LABEL_16;
      if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 34 > 5 )
        goto LABEL_16;
      v66 = v17;
      v18 = sub_B52330(v17);
      if ( v19 <= (unsigned int)v6 )
        goto LABEL_16;
      v20 = v66;
      if ( (*(_BYTE *)(v66 + 29) & 1) != 0 )
      {
        v21 = sub_B68690(v66);
        v20 = v66;
        v22 = *(__int64 **)v21;
        v23 = *(_QWORD *)v21 + 8LL * *(unsigned int *)(v21 + 8);
        if ( (unsigned __int64)v22 >= v23 )
        {
          if ( v22 != (__int64 *)v23 )
          {
            if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 364 )
              goto LABEL_23;
            v34 = (__int64 *)(v23 + 8);
            while ( v22 != v34 )
            {
              v35 = *v34++;
              if ( *(_WORD *)(v35 + 36) == 364 )
                goto LABEL_23;
            }
          }
        }
        else
        {
          v24 = v22;
          while ( *(_WORD *)(*v24 + 36) != 364 )
          {
            if ( (__int64 *)v23 == ++v24 )
              goto LABEL_14;
          }
          if ( (__int64 *)v23 != v24 )
          {
LABEL_23:
            v28 = *v22;
            if ( *(_WORD *)(*v22 + 36) != 364 )
            {
              v29 = v22 + 1;
              do
                v28 = *v29++;
              while ( *(_WORD *)(v28 + 36) != 364 );
            }
            if ( !*(_DWORD *)(v28 + 40)
              || (*(_DWORD *)(v28 + 44) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v28 + 44) >> 30) & 1) != (_DWORD)v6 )
            {
              goto LABEL_16;
            }
            goto LABEL_28;
          }
        }
      }
LABEL_14:
      v25 = *(_QWORD *)(v20 + 120);
      v26 = *(_QWORD *)(v25 + 8LL * (unsigned int)v6);
      if ( (*(_BYTE *)(v26 + 29) & 1) != 0 )
      {
        v72 = v20;
        v67 = *(_QWORD *)(v25 + 8LL * (unsigned int)v6);
        v36 = sub_B68690(v67);
        v26 = v67;
        v20 = v72;
        v37 = *(__int64 **)v36;
        v38 = *(_QWORD *)v36 + 8LL * *(unsigned int *)(v36 + 8);
        if ( *(_QWORD *)v36 < v38 )
        {
          v63 = *(__int64 **)v36;
          while ( *(_WORD *)(*v63 + 36) != 414 )
          {
            if ( (__int64 *)v38 == ++v63 )
              goto LABEL_15;
          }
          if ( (__int64 *)v38 != v63 )
            goto LABEL_28;
        }
        else if ( v37 != (__int64 *)v38 )
        {
          if ( *(_WORD *)(*(_QWORD *)v38 + 36LL) == 414 )
            goto LABEL_28;
          v39 = (__int64 *)(v38 + 8);
          while ( v37 != v39 )
          {
            v40 = *v39++;
            if ( *(_WORD *)(v40 + 36) == 414 )
              goto LABEL_28;
          }
        }
      }
LABEL_15:
      if ( !*(_BYTE *)(a1 + 24) )
        goto LABEL_16;
      v41 = *(_QWORD *)(v26 + 40);
      if ( (v41 & 7) != 0 )
      {
        v41 = 0;
        v45 = &byte_22CD811;
        goto LABEL_54;
      }
      if ( (v41 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        break;
LABEL_52:
      v45 = &byte_22CD811;
      v41 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v41 )
      {
        v46 = *(unsigned int **)(v41 + 16);
        v41 = *v46;
        v45 = (const char *)(v46 + 4);
      }
LABEL_54:
      v73 = v26;
      v68 = v20;
      v47 = sub_9677D0((__int64)v45, v41);
      v26 = v73;
      v20 = v68;
      if ( v47 != (char **)&unk_2B16370 )
        goto LABEL_55;
LABEL_63:
      if ( (*(_QWORD *)(v20 + 40) & 7) != 0 )
      {
        sub_B52330(v20);
LABEL_16:
        v27 = *(_QWORD *)(a1 + 32) + 16LL * (unsigned int)v16;
        if ( *(int *)v27 > 3 && *(_DWORD *)v27 != 15 )
        {
          *(_DWORD *)v27 = 1;
          *(_QWORD *)(v27 + 8) = 0;
        }
        goto LABEL_19;
      }
      v71 = *(_QWORD *)(v20 + 40);
      v18 = sub_B52330(v20);
      if ( v53 != 1
        || (v71 & 0xFFFFFFFFFFFFFFF8LL) == 0
        || sub_9677D0(
             *(_QWORD *)((v71 & 0xFFFFFFFFFFFFFFF8LL) + 16) + 16LL,
             **(unsigned int **)((v71 & 0xFFFFFFFFFFFFFFF8LL) + 16)) == (char **)&unk_2B16370 )
      {
        goto LABEL_16;
      }
LABEL_28:
      v30 = (unsigned int)v16;
      v31 = 16LL * (unsigned int)v16;
      v32 = v31 + *(_QWORD *)(a1 + 32);
      v33 = *(_DWORD *)v32;
      if ( (*(_DWORD *)v32 & 3) != 3 || v33 == 15 )
      {
        if ( v33 != 15 )
        {
          *(_DWORD *)v32 = 3;
          *(_QWORD *)(v32 + 8) = a2;
        }
        goto LABEL_19;
      }
      v54 = *(_QWORD *)(a1 + 16);
      v55 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v30);
      v56 = *(void (**)())(*(_QWORD *)v54 + 16LL);
      if ( (*(_BYTE *)(v55 + 29) & 1) != 0 )
      {
        v77 = *(void (**)())(*(_QWORD *)v54 + 16LL);
        v76 = *(_QWORD *)(a1 + 16);
        v75 = *(_DWORD *)v32;
        v74 = v31;
        v59 = sub_B68690(v55);
        v60 = *(_QWORD *)v59;
        v33 = v75;
        v54 = v76;
        v61 = *(_QWORD *)v59 + 8LL * *(unsigned int *)(v59 + 8);
        v56 = v77;
        if ( *(_QWORD *)v59 < v61 )
        {
          v64 = *(_QWORD *)v59;
          while ( 1 )
          {
            v60 = v64;
            if ( *(_WORD *)(*(_QWORD *)v64 + 36LL) == 414 )
              break;
            v64 += 8;
            if ( v61 == v64 )
            {
              v57 = *(_QWORD *)(a1 + 32) + v74;
              v58 = 1;
              goto LABEL_70;
            }
          }
          v57 = *(_QWORD *)(a1 + 32) + v74;
LABEL_93:
          v58 = v60 == v61;
          goto LABEL_70;
        }
        v57 = *(_QWORD *)(a1 + 32) + v74;
        if ( v60 != v61 )
        {
          if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) == 414 )
            goto LABEL_93;
          v62 = v61 + 8;
          while ( 1 )
          {
            v61 = v62;
            if ( v60 == v62 )
              break;
            v62 += 8LL;
            if ( *(_WORD *)(*(_QWORD *)v61 + 36LL) == 414 )
              goto LABEL_93;
          }
        }
        v58 = 1;
      }
      else
      {
        v57 = v31 + *(_QWORD *)(a1 + 32);
        v58 = 1;
      }
LABEL_70:
      if ( v56 != nullsub_311 )
        ((void (__fastcall *)(__int64, __int64, _QWORD, __int64, _BOOL8, bool, double))v56)(
          v54,
          v55,
          *(_QWORD *)(v57 + 8),
          a2,
          v58,
          v33 == 3,
          v18);
      *(_DWORD *)v32 = 15;
      *(_QWORD *)(v32 + 8) = 0;
LABEL_19:
      result = v6 + 1;
      if ( v6 == v7 )
        return result;
      ++v6;
    }
    v42 = *(unsigned int **)((v41 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v43 = *v42;
    if ( v43 == 17 )
    {
      if ( *((_QWORD *)v42 + 2) ^ 0x6974656C706D6F63LL | *((_QWORD *)v42 + 3) ^ 0x656C646E61486E6FLL
        || *((_BYTE *)v42 + 32) != 114 )
      {
LABEL_50:
        v44 = 1;
        goto LABEL_51;
      }
    }
    else
    {
      if ( v43 != 10 )
      {
        if ( v43 == 21 )
        {
          if ( *((_QWORD *)v42 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v42 + 3) ^ 0x61486E6F6974656CLL
            || v42[8] != 1701602414
            || *((_BYTE *)v42 + 36) != 114 )
          {
            goto LABEL_50;
          }
          v44 = 0;
        }
        else if ( v43 == 14 )
        {
          if ( *((_QWORD *)v42 + 2) != 0x706D6F4368746977LL || v42[6] != 1769235820 || *((_WORD *)v42 + 14) != 28271 )
            goto LABEL_50;
          v44 = 0;
        }
        else if ( v43 == 15 )
        {
          if ( *((_QWORD *)v42 + 2) != 0x6974656C706D6F63LL
            || v42[6] != 1816292975
            || *((_WORD *)v42 + 14) != 25455
            || *((_BYTE *)v42 + 30) != 107 )
          {
            goto LABEL_50;
          }
          v44 = 0;
        }
        else
        {
          if ( v43 != 19 )
          {
            if ( v43 == 7 )
            {
              if ( v42[4] == 1819305330 && *((_WORD *)v42 + 10) == 21625 && *((_BYTE *)v42 + 22) == 111 )
                goto LABEL_55;
            }
            else if ( v43 == 5 )
            {
              if ( v42[4] == 1819305330 && *((_BYTE *)v42 + 20) == 121 )
                goto LABEL_55;
            }
            else if ( v43 == 11
                   && *((_QWORD *)v42 + 2) == 0x6C70655268746977LL
                   && *((_WORD *)v42 + 12) == 21625
                   && *((_BYTE *)v42 + 26) == 111 )
            {
LABEL_55:
              v48 = *(_QWORD *)(*(_QWORD *)(v26 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v49 = *(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v49 + 16) == 11 )
              {
                if ( *(_BYTE *)(v48 + 16) != 11 )
                {
                  v69 = v20;
                  v48 = sub_F3F310(v48, v41, v49, v20, v26);
                  v20 = v69;
                }
                v50 = *(_QWORD *)(*(_QWORD *)(v48 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                v51 = (unsigned int)*(unsigned __int8 *)(v50 + 16) - 25;
                if ( (unsigned int)v51 > 1 )
                {
                  v70 = v20;
                  v50 = sub_F3F310(v50, v41, v51, v20, v26);
                  v20 = v70;
                }
                v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(v52 + 16) == 13 && ((*(_WORD *)(v52 + 18) >> 3) & 0x1FF) == 0x1B3 )
                  goto LABEL_28;
                if ( !*(_BYTE *)(a1 + 24) )
                  goto LABEL_16;
              }
              goto LABEL_63;
            }
            goto LABEL_52;
          }
          if ( *((_QWORD *)v42 + 2) ^ 0x706D6F4368746977LL | *((_QWORD *)v42 + 3) ^ 0x6C426E6F6974656CLL
            || *((_WORD *)v42 + 16) != 25455
            || *((_BYTE *)v42 + 34) != 107 )
          {
            goto LABEL_50;
          }
          v44 = 0;
        }
LABEL_51:
        if ( !v44 )
          goto LABEL_55;
        goto LABEL_52;
      }
      if ( *((_QWORD *)v42 + 2) != 0x6974656C706D6F63LL || *((_WORD *)v42 + 12) != 28271 )
        goto LABEL_50;
    }
    v44 = 0;
    goto LABEL_51;
  }
  return result;
}

