__int64 __fastcall sub_B17FC0(__int64 a1, char a2, int a3, unsigned int *a4, unsigned int **a5, unsigned __int8 a6)
{
  unsigned int *v7; // rbp
  unsigned int *v8; // r12
  unsigned int *v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // ecx
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int *v17; // r12
  int v18; // r14d
  int v19; // ebx
  _DWORD *v20; // rax
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  __int64 *v23; // r14
  _DWORD *v24; // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  _DWORD *v27; // rbp
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // ebp
  unsigned int v34; // edx
  unsigned int *v35; // rax
  unsigned int v36; // ebp
  __int64 v38; // r14
  int v39; // ebp
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rax
  unsigned int *v43; // rbx
  _QWORD *v44; // rax
  __int64 v45; // rdi
  unsigned int *v46; // rax
  unsigned int v47; // esi
  __int64 v48; // rax
  unsigned int v49; // r8d
  size_t v50; // rsi
  unsigned int *v51; // rax
  unsigned int v52; // ecx
  unsigned int v53; // eax
  unsigned int v54; // esi
  unsigned int v55; // eax
  char **exception; // r13
  unsigned int *i; // [rsp+8h] [rbp-F0h]
  unsigned int v58; // [rsp+8h] [rbp-F0h]
  unsigned int *ptr; // [rsp+10h] [rbp-E8h]
  int v60; // [rsp+18h] [rbp-E0h]
  int v61; // [rsp+18h] [rbp-E0h]
  unsigned int *v62; // [rsp+30h] [rbp-C8h]
  __int64 v63; // [rsp+38h] [rbp-C0h]
  unsigned int v64; // [rsp+40h] [rbp-B8h]
  int v65; // [rsp+44h] [rbp-B4h]
  unsigned int *v66; // [rsp+48h] [rbp-B0h]
  unsigned int v67; // [rsp+50h] [rbp-A8h]
  unsigned int v68; // [rsp+54h] [rbp-A4h]
  unsigned int v69; // [rsp+58h] [rbp-A0h]
  unsigned int v70; // [rsp+5Ch] [rbp-9Ch]
  unsigned int *v72; // [rsp+68h] [rbp-90h]
  unsigned int v76; // [rsp+84h] [rbp-74h] BYREF
  unsigned int *v77; // [rsp+88h] [rbp-70h] BYREF
  unsigned int *v78; // [rsp+90h] [rbp-68h] BYREF
  _DWORD *v79; // [rsp+98h] [rbp-60h] BYREF
  __int64 v80[11]; // [rsp+A0h] [rbp-58h] BYREF

  if ( a3 )
  {
    v7 = a4;
    v8 = &a4[a3];
    v9 = nullptr;
LABEL_3:
    v77 = v9;
    sub_692C60(&v77);
    v9 = v77;
    v10 = *(v77 - 1);
    while ( 1 )
    {
      v11 = *v7++;
      v9[v10] = v11;
      v10 = *(v9 - 1) + 1;
      *(v9 - 1) = v10;
      if ( v8 == v7 )
        break;
      if ( *(v9 - 2) == (_DWORD)v10 )
        goto LABEL_3;
    }
    v66 = v9;
  }
  else
  {
    v66 = nullptr;
  }
  ++*(_DWORD *)(a1 + 20);
  v76 = sub_B036D0(*(__int64 **)(a1 + 8));
  v12 = v76;
  v78 = nullptr;
  sub_B0E5E0(&v78, &v76);
  v72 = v78;
  if ( v66 )
  {
    v70 = 4;
    while ( 2 )
    {
      v69 = *(v66 - 1);
      if ( v69 )
      {
        if ( !*a5 )
        {
          v55 = v69 + 2;
          if ( v69 + 1 != v70 )
            v55 = v70;
          v70 = v55;
          goto LABEL_15;
        }
        *(*a5 - 1) = 0;
        v13 = *(v66 - 1);
        v14 = v13 + 2;
        v69 = v13;
        if ( v13 + 1 != v70 )
          v14 = v70;
        v70 = v14;
        if ( v13 )
        {
LABEL_15:
          v15 = v69;
          v67 = 0;
          if ( v70 <= v69 )
            v15 = v70;
          v68 = v69;
          v65 = v15;
          v62 = v66;
          if ( v15 != 1 )
          {
LABEL_18:
            v16 = v65;
            if ( v65 )
            {
LABEL_19:
              v63 = 0;
              v64 = v16 - 2;
              for ( i = v62; v64 != -1; ++i )
              {
                v17 = i;
                ptr = &v62[v63 + 1 + v64];
                do
                {
                  while ( 1 )
                  {
                    v19 = dword_1C7ED20;
                    v32 = v17[1];
                    v33 = dword_1C7ED20;
                    if ( v32 != dword_1C7ED24 )
                    {
                      v33 = v32 ^ 1;
                      if ( v32 == dword_1C7ED20 )
                        v33 = dword_1C7ED24;
                    }
                    v34 = *i;
                    if ( dword_1C7ED24 != *i )
                      break;
                    v18 = dword_1C7ED20;
LABEL_24:
                    if ( v12 == dword_1C7ED24 )
                      goto LABEL_27;
LABEL_25:
                    if ( v12 != dword_1C7ED20 )
                    {
                      v19 = v12 ^ 1;
LABEL_27:
                      if ( dword_1C7ED24 != v18 && dword_1C7ED24 != v33 && dword_1C7ED24 != v19 )
                      {
                        *(_QWORD *)(a1 + 24) = _mm_add_epi32(
                                                 _mm_loadl_epi64((const __m128i *)(a1 + 24)),
                                                 _mm_loadl_epi64((const __m128i *)&qword_18B5FF0)).m128i_u64[0];
                        v20 = (_DWORD *)sub_186B270(0x10u);
                        v20[2] = v19;
                        v20[3] = v18;
                        *(_QWORD *)v20 = 0x200000002LL;
                        v21 = (_DWORD *)sub_186B300(v20, 0x14u);
                        *v21 = 3;
                        v22 = v21;
                        v23 = *(__int64 **)(a1 + 8);
                        v21[v21[1]++ + 2] = v33;
                        v24 = (_DWORD *)sub_186B270(0x10u);
                        v24[2] = v22[2];
                        v24[3] = v22[3];
                        *(_QWORD *)v24 = 0x200000002LL;
                        v25 = (_DWORD *)sub_186B300(v24, 0x14u);
                        v26 = v25 + 2;
                        *v25 = 3;
                        v27 = v25;
                        v28 = v22[4];
                        v29 = (unsigned int)v25[1];
                        v30 = v23[2];
                        v79 = v26;
                        v26[v29] = v28;
                        v31 = *v23;
                        ++v27[1];
                        v60 = v31;
                        sub_B0D9D0(v30, &v79);
                        sub_B68F30(v60, 3);
                        sub_186B220(v27);
                        sub_186B220(v22);
                      }
                    }
                    if ( ptr == ++v17 )
                      goto LABEL_78;
                  }
                  if ( v34 != dword_1C7ED20 )
                  {
                    v18 = v34 ^ 1;
                    goto LABEL_24;
                  }
                  v18 = dword_1C7ED24;
                  if ( v12 != dword_1C7ED24 )
                    goto LABEL_25;
                  ++v17;
                }
                while ( ptr != v17 );
LABEL_78:
                ++v63;
                --v64;
              }
            }
LABEL_63:
            if ( a2 )
            {
              ++*(_DWORD *)(a1 + 20);
              v61 = sub_B036D0(*(__int64 **)(a1 + 8));
              v39 = 0;
              if ( v65 )
              {
                do
                {
                  v42 = sub_186B270(0x10u);
                  v43 = (unsigned int *)(v42 + 8);
                  v38 = 0;
                  *(_DWORD *)(v42 + 8) = v61;
                  *(_QWORD *)v42 = 0x100000002LL;
                  do
                  {
                    if ( v39 != (_DWORD)v38 )
                    {
                      if ( !v43 )
                      {
                        v44 = (_QWORD *)sub_186B270(0x10u);
                        v43 = (unsigned int *)(v44 + 1);
                        v45 = v38;
                        *v44 = 2;
                        v46 = (unsigned int *)(v44 + 1);
                        goto LABEL_69;
                      }
                      while ( 1 )
                      {
                        v48 = *(v43 - 1);
                        if ( (_DWORD)v48 == *(v43 - 2) )
                        {
                          v49 = (unsigned int)(3 * v48 + 1) >> 1;
                          v50 = 4 * v49 + 8;
                          if ( 4 * (int)v48 + 8 >= (unsigned int)v50 || (unsigned int)v48 >= v49 )
                          {
                            exception = (char **)__cxa_allocate_exception(0x28u);
                            sub_B035D0(v80, "Overflow encountered when expanding vector");
                            *exception = (char *)off_1C63128;
                            sub_2333C0(exception + 1, v80);
                            sub_233E40((__int64)v80);
                            __cxa_throw(
                              exception,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v58 = (unsigned int)(3 * v48 + 1) >> 1;
                          v51 = (unsigned int *)sub_186B300(v43 - 2, v50);
                          v43 = v51 + 2;
                          v45 = v38;
                          *v51 = v58;
                          v46 = &v51[v51[1] + 2];
                        }
                        else
                        {
                          v46 = &v43[v48];
                          v45 = v38;
                        }
LABEL_69:
                        v47 = v62[v38++];
                        *v46 = v47;
                        ++*(v43 - 1);
                        if ( v65 == v38 )
                          goto LABEL_82;
                        if ( v39 == (_DWORD)v38 )
                        {
                          v38 = v45 + 2;
                          if ( v45 + 2 == v65 )
                            goto LABEL_50;
                          if ( v39 == (_DWORD)v38 )
                            break;
                        }
                      }
                    }
                    ++v38;
                  }
                  while ( v65 != v38 );
LABEL_50:
                  if ( !v43 )
                  {
                    sub_B17C90(a1, 0, nullptr);
                    goto LABEL_52;
                  }
LABEL_82:
                  sub_B17C90(a1, *(v43 - 1), v43);
                  sub_186B220(v43 - 2);
LABEL_52:
                  ++v39;
                }
                while ( v65 != v39 );
              }
              v40 = dword_1C7ED20;
              if ( v61 != dword_1C7ED24 )
              {
                v40 = dword_1C7ED24;
                if ( v61 != dword_1C7ED20 )
                  v40 = v61 ^ 1;
              }
              LODWORD(v80[0]) = v40;
              v78 = v72;
              sub_B0E290(&v78, (unsigned int *)v80);
              v72 = v78;
            }
          }
          if ( a6 | (v70 < v69) )
          {
            while ( 1 )
            {
              LODWORD(v80[0]) = sub_B160F0(a1, v65, v62);
              sub_B0E290(a5, (unsigned int *)v80);
              v67 += v70;
              v68 -= v70;
              v41 = v68;
              if ( v67 >= v69 )
                break;
              if ( v70 <= v68 )
                v41 = v70;
              v65 = v41;
              v62 = &v66[v67];
              if ( v41 != 1 )
              {
                v16 = v41;
                if ( v41 )
                  goto LABEL_19;
                goto LABEL_63;
              }
            }
            if ( v70 < v69 )
            {
              *(v66 - 1) = 0;
              v35 = *a5;
              if ( !*a5 )
                continue;
              v36 = 0;
              do
              {
                if ( v36 >= *(v35 - 1) )
                  break;
                v77 = v66;
                sub_B0E5E0(&v77, &v35[v36++]);
                v66 = v77;
                v35 = *a5;
              }
              while ( *a5 );
              if ( v66 )
                continue;
            }
          }
          else
          {
            v52 = v67;
            v53 = v68;
            while ( 1 )
            {
              v52 += v70;
              v53 -= v70;
              if ( v52 >= v69 )
                break;
              v54 = v70;
              if ( v53 <= v70 )
                v54 = v53;
              if ( v54 != 1 )
              {
                v67 = v52;
                v68 = v53;
                v65 = v54;
                v62 = &v66[v52];
                goto LABEL_18;
              }
            }
          }
        }
      }
      break;
    }
    if ( !a2 )
    {
      if ( !v72 )
        goto LABEL_44;
      goto LABEL_75;
    }
    if ( !v72 )
    {
      sub_B17C90(a1, 0, nullptr);
LABEL_44:
      if ( v66 )
        sub_186B220(v66 - 2);
      return v12;
    }
LABEL_74:
    sub_B17C90(a1, *(v72 - 1), v72);
LABEL_75:
    sub_186B220(v72 - 2);
    goto LABEL_44;
  }
  if ( a2 )
  {
    if ( !v78 )
    {
      sub_B17C90(a1, 0, nullptr);
      return v12;
    }
    goto LABEL_74;
  }
  if ( v78 )
    sub_186B220(v78 - 2);
  return v12;
}

