__int64 __fastcall sub_98F6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v18; // rax
  unsigned __int64 v19; // r14
  _QWORD *v20; // rax
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // ecx
  __int64 v31; // r14
  unsigned int v32; // esi
  __int64 v33; // r8
  unsigned int v34; // edi
  _QWORD *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r15
  __int64 v38; // r14
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // r15
  unsigned int v42; // r14d
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  int v46; // edx
  int v47; // eax
  int v48; // r10d
  __int64 v49; // r8
  unsigned int v50; // ecx
  _QWORD *v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // r9
  __int64 v58; // rsi
  _DWORD *v59; // rax
  int v60; // edx
  int v61; // r9d
  __int64 v62; // rdi
  _QWORD *v63; // rsi
  int v64; // r10d
  __int64 v65; // r11
  __int64 v66; // rcx
  __int64 v67; // rdi
  int v68; // edx
  __int64 v69; // rax
  int v70; // r11d
  _QWORD *v71; // rdi
  __int64 v72; // [rsp+0h] [rbp-78h]
  unsigned int v73; // [rsp+Ch] [rbp-6Ch]
  __int64 v76; // [rsp+20h] [rbp-58h]
  int v77; // [rsp+20h] [rbp-58h]
  __int64 v78; // [rsp+28h] [rbp-50h]
  __int64 v79; // [rsp+28h] [rbp-50h]
  __int64 v80; // [rsp+30h] [rbp-48h]
  __int64 v81; // [rsp+38h] [rbp-40h]

  v6 = a6;
  v7 = a3;
  v8 = *(unsigned int *)(a3 + 32);
  v9 = **(_QWORD **)(a3 + 24);
  if ( (_DWORD)v8 )
  {
    v11 = 0;
    v73 = 0;
    v72 = a3 + 16 * v8;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v7 + 48);
      if ( (v12 & 3) == 1 )
      {
        v18 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v18 + 16LL) != 47 )
          return 0;
        v37 = sub_B14A40(*v18);
        if ( *(char *)(v37 + 28) < 0 )
          return 0;
        v38 = v12 & 0xFFFFFFFFFFFFFFFCLL;
        v39 = v38;
        v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        v41 = sub_AB4240(v40, v37);
        if ( *(char *)(v38 + 29) < 0 )
          v38 = sub_77A0C0(v38);
        if ( *(_DWORD *)(v38 + 68) <= 0xFu )
          sub_78B660(v38);
        v42 = (*(_DWORD *)(v38 + 68) >> 4) - 1;
        v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        v44 = sub_70CF80(v43, *(_QWORD *)(*(_QWORD *)(v41 + 48) + 8LL * v42));
        v9 = *(_QWORD *)(v39 + 48);
        v11 += v44;
        v45 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v45 + 16) - 42 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
          && (v45 = sub_B0D320(v45)) != 0 )
        {
          while ( (*(_BYTE *)(v45 + 18) & 0x10) != 0 )
          {
            while ( 1 )
            {
              v45 = *(_QWORD *)(*(_QWORD *)(v45 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(v45 + 16) - 42 <= 1 )
                break;
              v45 = sub_B0D320(v45);
              if ( (*(_BYTE *)(v45 + 18) & 0x10) == 0 )
                goto LABEL_33;
            }
          }
LABEL_33:
          v9 = *(_QWORD *)(v45 + 32);
        }
        goto LABEL_8;
      }
      if ( (v12 & 3) != 3 )
      {
        if ( (v12 & 3) == 0 )
        {
          v13 = *(_QWORD *)(a4 + 8LL * v73);
          v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
          v15 = sub_6D9A50(v14, v9);
          if ( !v15 )
            return 0;
          v9 = *(_QWORD *)(v15 + 32);
          v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
          ++v73;
          v11 += v13 * sub_70E2F0(v16, v9);
        }
        goto LABEL_8;
      }
      v19 = v12 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)(v19 + 12) & 1) != 0 )
        return 0;
      v20 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v20 + 16LL) != 47 )
        return 0;
      v21 = sub_B14A40(*v20);
      if ( *(char *)(v21 + 28) < 0 )
        return 0;
      v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      v76 = sub_AB4240(v22, v21);
      v23 = *(_QWORD *)(**(_QWORD **)(v19 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      v24 = *(_QWORD *)(v23 + 8);
      if ( (v24 & 7) != 0 || (v9 = v23 & 0xFFFFFFFFFFFFFFF0LL, (v24 & 8) != 0) )
        v9 = sub_B0CF30(**(_QWORD **)(v19 + 16), v21) & 0xFFFFFFFFFFFFFFF0LL;
      v25 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v25 + 16LL) != 47 )
        return 0;
      v26 = sub_B14A40(*v25);
      v27 = *(_QWORD *)(v26 + 128);
      v28 = v26;
      v29 = v27;
      if ( !v27 )
        break;
LABEL_20:
      v27 = *(_QWORD *)(v29 + 88);
LABEL_21:
      v30 = 0;
      v31 = *(_QWORD *)(v76 + 72);
      v32 = *(_DWORD *)(v31 + 80);
      if ( !v32 )
        goto LABEL_38;
      v33 = *(_QWORD *)(v31 + 64);
      v34 = (v32 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v35 = (_QWORD *)(v33 + 16LL * v34);
      v36 = *v35;
      if ( v27 != *v35 )
      {
        v77 = 1;
        v51 = nullptr;
        while ( v36 != -4096 )
        {
          if ( v36 == -8192 && !v51 )
            v51 = v35;
          v34 = (v32 - 1) & (v77 + v34);
          v35 = (_QWORD *)(v33 + 16LL * v34);
          v36 = *v35;
          if ( v27 == *v35 )
            goto LABEL_23;
          ++v77;
        }
        v30 = 2 * v32;
        if ( !v51 )
          v51 = v35;
        v47 = *(_DWORD *)(v31 + 72) + 1;
        if ( 4 * v47 >= 3 * v32 )
        {
LABEL_38:
          sub_98F480(v31 + 64, v30);
          v46 = *(_DWORD *)(v31 + 80);
          v47 = *(_DWORD *)(v31 + 72) + 1;
          if ( !v46 )
            goto LABEL_95;
          v48 = v46 - 1;
          v49 = *(_QWORD *)(v31 + 64);
          v50 = (v46 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v51 = (_QWORD *)(v49 + 16LL * v50);
          v52 = *v51;
          if ( v27 != *v51 )
          {
            v70 = 1;
            v71 = nullptr;
            while ( v52 != -4096 )
            {
              if ( v52 == -8192 && !v71 )
                v71 = v51;
              v50 = v48 & (v50 + v70);
              v51 = (_QWORD *)(v49 + 16LL * v50);
              v52 = *v51;
              if ( v27 == *v51 )
                goto LABEL_40;
              ++v70;
            }
            if ( v71 )
              v51 = v71;
          }
        }
        else if ( v32 >> 3 >= v32 - *(_DWORD *)(v31 + 76) - v47 )
        {
          sub_98F480(v31 + 64, v32);
          v60 = *(_DWORD *)(v31 + 80);
          v47 = *(_DWORD *)(v31 + 72) + 1;
          if ( !v60 )
          {
LABEL_95:
            ++*(_DWORD *)(v31 + 72);
            BUG();
          }
          v61 = v60 - 1;
          v62 = *(_QWORD *)(v31 + 64);
          v63 = nullptr;
          v64 = 1;
          LODWORD(v65) = (v60 - 1) & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
          v51 = (_QWORD *)(v62 + 16LL * (unsigned int)v65);
          v66 = *v51;
          if ( v27 != *v51 )
          {
            while ( v66 != -4096 )
            {
              if ( !v63 && v66 == -8192 )
                v63 = v51;
              v65 = v61 & (unsigned int)(v65 + v64);
              v51 = (_QWORD *)(v62 + 16 * v65);
              v66 = *v51;
              if ( v27 == *v51 )
                goto LABEL_40;
              ++v64;
            }
            if ( v63 )
              v51 = v63;
          }
        }
LABEL_40:
        *(_DWORD *)(v31 + 72) = v47;
        if ( *v51 != -4096 )
          --*(_DWORD *)(v31 + 76);
        *v51 = v27;
        v51[1] = 0;
        goto LABEL_8;
      }
LABEL_23:
      v11 += v35[1];
LABEL_8:
      v7 += 16;
      if ( v7 == v72 )
      {
        v6 = a6;
        goto LABEL_10;
      }
    }
    v53 = *(_QWORD *)(v28 + 104);
    v54 = *(_QWORD *)(v53 + 96);
    v55 = v54 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v54 & 1) != 0 )
    {
      if ( !v55 )
        goto LABEL_21;
    }
    else
    {
      if ( v55 <= 3 || (v54 & 2) == 0 )
        goto LABEL_21;
      v56 = (_QWORD *)(v54 & 0xFFFFFFFFFFFFFFFCLL);
      v57 = v56[2275];
      if ( !v57 )
      {
        *(_QWORD *)(v53 + 96) = v53 & 0xFFFFFFFFFFFFFFFALL | 1;
        v29 = *(_QWORD *)(v28 + 128);
        goto LABEL_54;
      }
      v58 = v56[274];
      v56[284] += 24LL;
      v55 = (v58 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v56[275] >= v55 + 24 && v58 )
      {
        v56[274] = v55 + 24;
      }
      else
      {
        v81 = v57;
        v80 = v53;
        v79 = v28;
        v69 = sub_97DC20((__int64)(v56 + 274), 24, 3);
        v57 = v81;
        v53 = v80;
        v28 = v79;
        v55 = v69;
      }
      *(_QWORD *)v55 = v57;
      v54 = v55 | 5;
      *(_DWORD *)(v55 + 8) = 0;
      *(_QWORD *)(v55 + 16) = v53;
      *(_QWORD *)(v53 + 96) = v55 | 5;
      LOBYTE(v55) = v55 & 0xFA | 4;
    }
    if ( (v55 & 4) != 0 )
    {
      v59 = (_DWORD *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v59 )
      {
        v67 = *(_QWORD *)v59;
        v68 = *(_DWORD *)(*(_QWORD *)v59 + 12LL);
        if ( v59[2] != v68 )
        {
          v59[2] = v68;
          v78 = v28;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v67 + 144LL))(v67, v53);
          v28 = v78;
        }
      }
    }
    v29 = *(_QWORD *)(v28 + 128);
LABEL_54:
    if ( !v29 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v11 = 0;
LABEL_10:
  *v6 = v11;
  return 1;
}

