__int64 __fastcall sub_990E20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // esi
  unsigned int v12; // r8d
  int *v13; // rdx
  int v14; // r9d
  __int64 v15; // r14
  unsigned int v16; // r15d
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  int *v29; // rax
  int v30; // eax
  int v32; // edx
  __int64 v33; // rsi
  __int64 v34; // rax
  unsigned __int16 *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  unsigned int v38; // r13d
  int v39; // esi
  __int64 v40; // rdx
  unsigned int v41; // esi
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  _BYTE *v50; // rax
  int v51; // r11d
  __int64 v52; // rdx
  unsigned __int64 v53; // [rsp+8h] [rbp-E0h]
  int v54; // [rsp+10h] [rbp-D8h]
  unsigned int v56; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v57; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+20h] [rbp-C8h]
  int v59; // [rsp+20h] [rbp-C8h]
  __int64 v60; // [rsp+20h] [rbp-C8h]
  int v61; // [rsp+20h] [rbp-C8h]
  __int64 v62; // [rsp+28h] [rbp-C0h]
  __int64 v63; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v64; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v65; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v66; // [rsp+38h] [rbp-B0h]
  __int64 v67; // [rsp+48h] [rbp-A0h]
  __int64 v68; // [rsp+50h] [rbp-98h]
  char v69; // [rsp+58h] [rbp-90h]
  int v70; // [rsp+60h] [rbp-88h]
  _QWORD v71[3]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v72; // [rsp+88h] [rbp-60h]
  __int64 v73; // [rsp+90h] [rbp-58h]
  int v74; // [rsp+A0h] [rbp-48h]

  v9 = *(unsigned int *)(a3 + 208);
  v10 = *(_QWORD *)(a3 + 192);
  v11 = **(_DWORD **)(*(_QWORD *)(a3 + 32) + 448LL);
  if ( !(_DWORD)v9 )
    goto LABEL_43;
  v12 = (v9 - 1) & (37 * v11);
  v13 = (int *)(v10 + 16LL * v12);
  v14 = *v13;
  if ( v11 != *v13 )
  {
    v32 = 1;
    while ( v14 != -1 )
    {
      v51 = v32 + 1;
      v52 = ((_DWORD)v9 - 1) & (v12 + v32);
      v12 = v52;
      v13 = (int *)(v10 + 16 * v52);
      v14 = *v13;
      if ( v11 == *v13 )
        goto LABEL_3;
      v32 = v51;
    }
    goto LABEL_43;
  }
LABEL_3:
  if ( v13 == (int *)(v10 + 16 * v9) )
  {
LABEL_43:
    v15 = *(_QWORD *)(a3 + 168) + v11 - (unsigned __int64)*(unsigned int *)(a3 + 160);
    goto LABEL_7;
  }
  sub_A1BF70(v71, *((_QWORD *)v13 + 1));
  if ( v74 )
    goto LABEL_5;
  v33 = *(_QWORD *)(v72 + 32);
  if ( *(_DWORD *)(v33 + 16) != (_DWORD)v73 && (_DWORD)v73 )
    v33 = *(_QWORD *)(v72 + (unsigned int)v73 + 32);
  if ( !*(_BYTE *)(v33 + 51) || (v15 = v72 + v71[0] + 72, (unsigned int)v73 != v71[0]) )
LABEL_5:
    v15 = v72 + v71[0] + 40;
  sub_A1C0C0(v71);
LABEL_7:
  sub_A1BFE0(v71, v15);
  if ( a4 == 1207 || a4 == 1452 )
    sub_9908C0(a1, a2, a4);
  if ( (unsigned __int8)sub_9D4C70(a1, a2, v71) )
  {
    if ( (unsigned __int8)sub_9D4CF0(a1, a2, v71, 0) )
    {
      v16 = sub_9E25F0(a1, a2, v71, 0);
      if ( (_BYTE)v16 )
      {
        v54 = *(_DWORD *)(sub_8E5480((__int64)v71) + 8);
        if ( a4 - 1451 <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        v17 = v74;
        if ( v74 )
        {
          v18 = v71[0];
          if ( v74 == 1 )
          {
            if ( v72 )
              v18 = *(unsigned int *)(v72 + 8) * v71[0];
            v53 = v73 + v18;
          }
          else
          {
            v53 = v72 + v71[0];
          }
LABEL_17:
          v19 = 0;
          if ( v54 != 1 )
          {
            v20 = v53;
            if ( v17 == 1 )
              goto LABEL_37;
LABEL_19:
            if ( v17 == 2 )
            {
              v65 = v20;
              v70 = 2;
              v67 = v72;
              v68 = 0;
              v69 = 1;
              v66 = 0;
              goto LABEL_28;
            }
            v56 = v73;
            if ( (_DWORD)v73 == -1 )
            {
              if ( v17 != 3 )
              {
                sub_A1C030(&v65, v72, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v72 + 32) + 12LL));
                goto LABEL_28;
              }
LABEL_109:
              BUG();
            }
            v21 = v20 * *(unsigned int *)(sub_8E5480((__int64)v71) + 8);
            if ( v17 )
            {
              if ( v17 == 3 )
LABEL_110:
                BUG();
              v22 = v72;
              v23 = *(_QWORD *)(v72 + 32);
            }
            else
            {
              v22 = v72;
              v23 = *(_QWORD *)(v72 + 32);
              if ( *(_DWORD *)(v23 + 16) != v56 && v56 )
              {
                v24 = v56;
                v23 = *(_QWORD *)(v72 + v56 + 32);
                goto LABEL_25;
              }
            }
            v24 = v56;
LABEL_25:
            v25 = v21 + 16;
            if ( !*(_QWORD *)(v23 + 32) )
              v25 = v21 + 32;
            sub_A1C030(&v65, v22, v56, v24 + v25);
LABEL_28:
            while ( (unsigned __int8)sub_9D52F0(a1, a2, &v65, 0) )
            {
              v26 = v67;
              v27 = v65;
              if ( v54 == 2 )
              {
                if ( !v70
                  && (v63 = v67, v58 = v65, v34 = sub_8E5480((__int64)&v65), v27 = v58, v26 = v63, *(_BYTE *)(v34 + 51))
                  && (unsigned int)v68 == v58 )
                {
                  v35 = (unsigned __int16 *)(v63 + (unsigned int)v68 + 72);
                }
                else
                {
                  v35 = (unsigned __int16 *)(v26 + v27 + 40);
                }
                v30 = *v35;
              }
              else
              {
                if ( !v70
                  && (v62 = v67, v57 = v65, v28 = sub_8E5480((__int64)&v65), v27 = v57, v26 = v62, *(_BYTE *)(v28 + 51))
                  && (unsigned int)v68 == v57 )
                {
                  v29 = (int *)(v62 + (unsigned int)v68 + 72);
                }
                else
                {
                  v29 = (int *)(v26 + v27 + 40);
                }
                v30 = *v29;
              }
              if ( !v30 )
                goto LABEL_71;
              ++v19;
              sub_A1C0C0(&v65);
              v17 = v74;
              v20 = v53 + v19;
              if ( v74 != 1 )
                goto LABEL_19;
LABEL_37:
              v65 = v20;
              v70 = 1;
              v68 = v73;
              v66 = 0;
              v67 = v72;
            }
LABEL_38:
            sub_A1C0C0(&v65);
            goto LABEL_39;
          }
          while ( 1 )
          {
            if ( v17 == 1 )
            {
              v65 = v19 + v53;
              v70 = 1;
              v68 = v73;
              v66 = 0;
              v67 = v72;
              goto LABEL_83;
            }
            if ( v17 == 2 )
            {
              v65 = v19 + v53;
              v70 = 2;
              v67 = v72;
              v68 = 0;
              v69 = 1;
              v66 = 0;
              goto LABEL_83;
            }
            if ( (_DWORD)v73 != -1 )
              break;
            if ( v17 == 3 )
              goto LABEL_109;
            sub_A1C030(&v65, v72, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v72 + 32) + 12LL));
LABEL_83:
            if ( !(unsigned __int8)sub_9D52F0(a1, a2, &v65, 0) )
              goto LABEL_38;
            v47 = v67;
            v48 = v65;
            if ( v70
              || (v64 = v65, v60 = v67, v49 = sub_8E5480((__int64)&v65), v47 = v60, v48 = v64, !*(_BYTE *)(v49 + 51))
              || (v50 = (_BYTE *)(v60 + (unsigned int)v68 + 72), (unsigned int)v68 != v64) )
            {
              v50 = (_BYTE *)(v47 + v48 + 40);
            }
            if ( !*v50 )
            {
LABEL_71:
              sub_A1C0C0(&v65);
              LODWORD(v66) = 64;
              v40 = *(_QWORD *)(a5 + 8);
              v65 = v19;
              BYTE4(v66) = 1;
              sub_97E3E0(a1, (__int64)&v65, v40);
              goto LABEL_40;
            }
            ++v19;
            sub_A1C0C0(&v65);
            v17 = v74;
          }
          v41 = v73;
          v42 = (v19 + v53) * *(unsigned int *)(sub_8E5480((__int64)v71) + 8);
          if ( v17 )
          {
            if ( v17 == 3 )
              goto LABEL_110;
            v43 = v72;
            v44 = *(_QWORD *)(v72 + 32);
          }
          else
          {
            v43 = v72;
            v44 = *(_QWORD *)(v72 + 32);
            if ( *(_DWORD *)(v44 + 16) != v41 && v41 )
            {
              v45 = v41;
              v44 = *(_QWORD *)(v72 + v41 + 32);
              goto LABEL_79;
            }
          }
          v45 = v41;
LABEL_79:
          v46 = v42 + 32;
          if ( *(_QWORD *)(v44 + 32) )
            v46 = v42 + 16;
          sub_A1C030(&v65, v43, v41, v46 + v45);
          goto LABEL_83;
        }
        if ( !v72 )
        {
          v53 = 0;
          goto LABEL_17;
        }
        if ( (unsigned int)v73 > 0x10 )
        {
          v53 = 0;
          v38 = v71[0];
          if ( (unsigned int)v73 == v71[0] )
            goto LABEL_17;
          if ( (_DWORD)v73 == -1 )
          {
            v53 = *(unsigned int *)(*(_QWORD *)(v72 + 32) + 12LL);
            if ( !*(_DWORD *)(*(_QWORD *)(v72 + 32) + 12LL) )
              goto LABEL_17;
            goto LABEL_100;
          }
          v61 = v73;
          v36 = sub_8E5480((__int64)v71);
          v37 = v61;
          v53 = *(unsigned int *)(v36 + 8);
          if ( !*(_DWORD *)(v36 + 8) )
            goto LABEL_17;
        }
        else
        {
          v59 = v73;
          v36 = sub_8E5480((__int64)v71);
          v37 = v59;
          v53 = *(unsigned int *)(v36 + 8);
          if ( !*(_DWORD *)(v36 + 8) )
            goto LABEL_17;
          v38 = v71[0];
          v39 = 0;
          if ( v71[0] == v59 )
            goto LABEL_70;
        }
        v39 = 32;
        if ( *(_QWORD *)(v36 + 32) )
          v39 = 16;
LABEL_70:
        v38 = v38 - v39 - v37;
LABEL_100:
        v53 = v38 / v53;
        goto LABEL_17;
      }
    }
  }
LABEL_39:
  v16 = 0;
LABEL_40:
  sub_A1C0C0(v71);
  return v16;
}

