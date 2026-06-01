void __fastcall sub_9B7D80(void *a1)
{
  __int64 v2; // rdi
  bool v3; // zf
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  int v10; // r13d
  __int64 v11; // r9
  _QWORD *v12; // rax
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // esi
  unsigned int v18; // edx
  __int64 v19; // r15
  __int64 v20; // r8
  int v21; // r13d
  int v22; // esi
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r8
  int v26; // ecx
  __int64 v27; // r10
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // r14
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // r13
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rdi
  int *v42; // rdx
  __int64 v43; // r14
  __int64 v44; // r11
  int v45; // edx
  int v46; // eax
  int v47; // eax
  __int64 v48; // r11
  __int64 v49; // r10
  int v50; // eax
  int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // rdi
  int *v54; // rdx
  __int64 v55; // [rsp+8h] [rbp-190h]
  int v56; // [rsp+8h] [rbp-190h]
  __int64 v57; // [rsp+8h] [rbp-190h]
  __int64 v58; // [rsp+8h] [rbp-190h]
  __int64 v59; // [rsp+8h] [rbp-190h]
  __int64 v60; // [rsp+8h] [rbp-190h]
  __int64 v61; // [rsp+8h] [rbp-190h]
  int v62; // [rsp+8h] [rbp-190h]
  __int64 v63; // [rsp+10h] [rbp-188h]
  __int64 v64; // [rsp+10h] [rbp-188h]
  int v65; // [rsp+10h] [rbp-188h]
  __int64 v66; // [rsp+10h] [rbp-188h]
  __int64 v67; // [rsp+10h] [rbp-188h]
  __int64 v68; // [rsp+10h] [rbp-188h]
  __int64 v69; // [rsp+10h] [rbp-188h]
  __int64 v70; // [rsp+10h] [rbp-188h]
  __int64 v71; // [rsp+10h] [rbp-188h]
  __int64 v72; // [rsp+10h] [rbp-188h]
  __int64 v73; // [rsp+10h] [rbp-188h]
  __int64 v74; // [rsp+18h] [rbp-180h]
  int v75; // [rsp+18h] [rbp-180h]
  int v76; // [rsp+18h] [rbp-180h]
  __int64 v77; // [rsp+18h] [rbp-180h]
  __int64 v78; // [rsp+18h] [rbp-180h]
  __int64 v79; // [rsp+18h] [rbp-180h]
  __int64 v80; // [rsp+20h] [rbp-178h]
  __int64 v81; // [rsp+20h] [rbp-178h]
  __int64 v82; // [rsp+20h] [rbp-178h]
  __int64 v83; // [rsp+20h] [rbp-178h]
  __int64 v84; // [rsp+28h] [rbp-170h]
  __int64 v85; // [rsp+28h] [rbp-170h]
  unsigned int v86; // [rsp+3Ch] [rbp-15Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __int64 v88; // [rsp+48h] [rbp-150h]
  _BYTE v89[128]; // [rsp+50h] [rbp-148h] BYREF
  void *v90; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v91; // [rsp+D8h] [rbp-C0h]
  int v92; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v93; // [rsp+E4h] [rbp-B4h]
  int v94; // [rsp+ECh] [rbp-ACh] BYREF

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 68))-- == 1;
    if ( v3 )
      sub_9B7D80();
  }
  v4 = *((_QWORD *)a1 + 2);
  if ( v4 )
  {
    v3 = (*(_DWORD *)(v4 + 68))-- == 1;
    if ( v3 )
      sub_9B7D80();
  }
  v5 = *((_BYTE *)a1 + 43);
  v6 = *(_QWORD *)a1;
  if ( (v5 & 0x40) != 0 )
  {
    v7 = *((_QWORD *)a1 + 4);
    v8 = *((_QWORD *)a1 + 3);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 24) = v8;
      v8 = *((_QWORD *)a1 + 3);
    }
    if ( v8 )
    {
      *(_QWORD *)(v8 + 32) = v7;
      goto LABEL_12;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v10 = *((_DWORD *)a1 + 16);
    }
    else
    {
      v19 = *((_QWORD *)a1 + 1);
      v20 = *((_QWORD *)a1 + 2);
      v21 = 0;
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 43) & 0x20) != 0 )
        {
          v21 = *(_DWORD *)(v19 + 64);
        }
        else
        {
          v32 = *(_QWORD *)(v19 + 8);
          v33 = *(_QWORD *)(v19 + 16);
          v34 = 0;
          if ( v32 )
          {
            if ( (*(_BYTE *)(v32 + 43) & 0x20) != 0 )
            {
              v34 = *(_DWORD *)(v32 + 64);
            }
            else
            {
              v67 = *(_QWORD *)(v19 + 16);
              v60 = *((_QWORD *)a1 + 2);
              v39 = sub_9B7200(*(_QWORD *)(v32 + 8), *(_QWORD *)(v32 + 16), (int *)(v32 + 48));
              *(_BYTE *)(v32 + 43) |= 0x20u;
              v33 = v67;
              v34 = v39;
              *(_DWORD *)(v32 + 64) = v39;
              v20 = v60;
            }
          }
          v75 = v34;
          v66 = v33;
          v90 = &v92;
          v91 = 0x2000000000LL;
          v58 = v20;
          sub_9B7040((__int64)&v90, *(_DWORD *)(v19 + 48));
          v35 = *(_QWORD *)(v19 + 56);
          sub_9B7040((__int64)&v90, v35);
          sub_9B7040((__int64)&v90, SHIDWORD(v35));
          v36 = sub_985B10(v90, (__int64)v90 + 4 * (unsigned int)v91);
          v37 = v66;
          v20 = v58;
          v21 = v75 + v36;
          if ( v66 )
          {
            if ( (*(_BYTE *)(v66 + 43) & 0x20) != 0 )
            {
              v38 = *(_DWORD *)(v66 + 64);
            }
            else
            {
              v40 = *(_QWORD *)(v66 + 16);
              v41 = *(_QWORD *)(v66 + 8);
              v42 = (int *)(v66 + 48);
              v68 = v58;
              v61 = v37;
              v38 = sub_9B7200(v41, v40, v42);
              *(_BYTE *)(v61 + 43) |= 0x20u;
              v20 = v68;
              *(_DWORD *)(v61 + 64) = v38;
            }
            v21 += v38;
          }
          if ( v90 != &v92 )
          {
            v59 = v20;
            free(v90);
            v20 = v59;
          }
          *(_DWORD *)(v19 + 64) = v21;
          *(_BYTE *)(v19 + 43) |= 0x20u;
        }
      }
      v22 = *((_DWORD *)a1 + 12);
      v55 = v20;
      ptr = v89;
      v88 = 0x2000000000LL;
      sub_9B7040((__int64)&ptr, v22);
      v23 = *((_QWORD *)a1 + 7);
      sub_9B7040((__int64)&ptr, v23);
      sub_9B7040((__int64)&ptr, SHIDWORD(v23));
      v24 = sub_985B10(ptr, (__int64)ptr + 4 * (unsigned int)v88);
      v25 = v55;
      v10 = v24 + v21;
      if ( v55 )
      {
        if ( (*(_BYTE *)(v55 + 43) & 0x20) != 0 )
        {
          v26 = *(_DWORD *)(v55 + 64);
        }
        else
        {
          v27 = *(_QWORD *)(v55 + 8);
          v28 = *(_QWORD *)(v55 + 16);
          if ( v27 )
          {
            if ( (*(_BYTE *)(v27 + 43) & 0x20) != 0 )
            {
              v56 = *(_DWORD *)(v27 + 64);
            }
            else
            {
              v43 = *(_QWORD *)(v27 + 8);
              v44 = *(_QWORD *)(v27 + 16);
              v45 = 0;
              if ( v43 )
              {
                if ( (*(_BYTE *)(v43 + 43) & 0x20) != 0 )
                {
                  v45 = *(_DWORD *)(v43 + 64);
                }
                else
                {
                  v83 = *(_QWORD *)(v27 + 16);
                  v79 = *(_QWORD *)(v55 + 8);
                  v72 = *(_QWORD *)(v55 + 16);
                  v51 = sub_9B7200(*(_QWORD *)(v43 + 8), *(_QWORD *)(v43 + 16), (int *)(v43 + 48));
                  *(_BYTE *)(v43 + 43) |= 0x20u;
                  v44 = v83;
                  v45 = v51;
                  v27 = v79;
                  v28 = v72;
                  *(_DWORD *)(v43 + 64) = v51;
                  v25 = v55;
                }
              }
              v46 = *(_DWORD *)(v27 + 48);
              v62 = v45;
              v84 = v44;
              v90 = &v92;
              v92 = v46;
              v81 = v28;
              v93 = *(_QWORD *)(v27 + 56);
              v77 = v25;
              v70 = v27;
              v91 = 0x2000000003LL;
              v47 = sub_985B10(&v92, (__int64)&v94);
              v48 = v84;
              v49 = v70;
              v25 = v77;
              v28 = v81;
              v56 = v62 + v47;
              if ( v84 )
              {
                if ( (*(_BYTE *)(v84 + 43) & 0x20) != 0 )
                {
                  v50 = *(_DWORD *)(v84 + 64);
                }
                else
                {
                  v52 = *(_QWORD *)(v84 + 16);
                  v53 = *(_QWORD *)(v84 + 8);
                  v54 = (int *)(v84 + 48);
                  v85 = v70;
                  v73 = v48;
                  v50 = sub_9B7200(v53, v52, v54);
                  *(_BYTE *)(v73 + 43) |= 0x20u;
                  v49 = v85;
                  v28 = v81;
                  v25 = v77;
                  *(_DWORD *)(v73 + 64) = v50;
                }
                v56 += v50;
              }
              if ( v90 != &v92 )
              {
                v82 = v49;
                v78 = v28;
                v71 = v25;
                free(v90);
                v49 = v82;
                v28 = v78;
                v25 = v71;
              }
              *(_BYTE *)(v49 + 43) |= 0x20u;
              *(_DWORD *)(v49 + 64) = v56;
            }
          }
          else
          {
            v56 = 0;
          }
          v80 = v28;
          v90 = &v92;
          v91 = 0x2000000000LL;
          v63 = v25;
          sub_9B7040((__int64)&v90, *(_DWORD *)(v25 + 48));
          v74 = v63;
          v64 = *(_QWORD *)(v63 + 56);
          sub_9B7040((__int64)&v90, v64);
          sub_9B7040((__int64)&v90, SHIDWORD(v64));
          v29 = sub_985B10(v90, (__int64)v90 + 4 * (unsigned int)v91);
          v30 = v74;
          v26 = v29 + v56;
          if ( v80 )
          {
            if ( (*(_BYTE *)(v80 + 43) & 0x20) != 0 )
            {
              v31 = *(_DWORD *)(v80 + 64);
            }
            else
            {
              v76 = v29 + v56;
              v69 = v30;
              v31 = sub_9B7200(*(_QWORD *)(v80 + 8), *(_QWORD *)(v80 + 16), (int *)(v80 + 48));
              *(_BYTE *)(v80 + 43) |= 0x20u;
              v26 = v76;
              *(_DWORD *)(v80 + 64) = v31;
              v30 = v69;
            }
            v26 += v31;
          }
          if ( v90 != &v92 )
          {
            v65 = v26;
            v57 = v30;
            free(v90);
            v26 = v65;
            v30 = v57;
          }
          *(_DWORD *)(v30 + 64) = v26;
          *(_BYTE *)(v30 + 43) |= 0x20u;
        }
        v10 += v26;
      }
      if ( ptr != v89 )
        free(ptr);
      *((_DWORD *)a1 + 16) = v10;
      *((_BYTE *)a1 + 43) |= 0x20u;
    }
    v86 = v10 & 0xFFFFFFFD;
    v3 = (unsigned __int8)sub_9B57D0((__int64 *)v6, (int *)&v86, &ptr) == 0;
    v12 = ptr;
    if ( !v3 )
      goto LABEL_23;
    v13 = *(_DWORD *)(v6 + 8);
    v90 = ptr;
    v14 = (unsigned int)(v13 + 1);
    v15 = *(unsigned int *)(v6 + 16);
    v16 = (unsigned int)(4 * v14);
    v17 = 2 * v15;
    if ( (unsigned int)v16 < 3 * (int)v15 )
    {
      if ( (int)v15 - *(_DWORD *)(v6 + 12) - (int)v14 > (unsigned int)v15 >> 3 )
      {
LABEL_20:
        *(_DWORD *)(v6 + 8) = v14;
        if ( *(_DWORD *)v12 != -1 )
          --*(_DWORD *)(v6 + 12);
        v18 = v86;
        v12[1] = 0;
        *(_DWORD *)v12 = v18;
LABEL_23:
        v12[1] = v7;
        v6 = *(_QWORD *)a1;
        goto LABEL_12;
      }
      v17 = *(_DWORD *)(v6 + 16);
    }
    sub_9B5EF0(v6, v17, v14, v15, v16, v11);
    sub_9B57D0((__int64 *)v6, (int *)&v86, &v90);
    LODWORD(v14) = *(_DWORD *)(v6 + 8) + 1;
    v12 = v90;
    goto LABEL_20;
  }
LABEL_12:
  *((_BYTE *)a1 + 43) &= ~0x10u;
  v9 = *(_QWORD **)(v6 + 64);
  v90 = a1;
  if ( v9 == *(_QWORD **)(v6 + 72) )
  {
    sub_9B61D0(v6 + 56, v9, (__int64 *)&v90);
  }
  else
  {
    *v9 = a1;
    *(_QWORD *)(v6 + 64) = v9 + 1;
  }
}
