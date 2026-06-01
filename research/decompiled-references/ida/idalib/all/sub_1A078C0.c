void __fastcall sub_1A078C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  const __m128i **v22; // rbp
  const __m128i *v23; // r14
  const __m128i *v24; // rbx
  unsigned int *v25; // rdi
  size_t v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // r9d
  unsigned int *v30; // rcx
  __int64 v31; // rax
  int v32; // edx
  bool v33; // r8
  __int64 v34; // rbx
  unsigned int v35; // esi
  __int64 v36; // rdi
  __int64 v37; // r8
  unsigned int v38; // edx
  __int64 *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // r14d
  char v44; // r14
  int v45; // r10d
  __int64 *v46; // r11
  int v47; // ecx
  bool v48; // zf
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-70h]
  int v51; // [rsp+14h] [rbp-64h]
  __int64 v52; // [rsp+28h] [rbp-50h] BYREF
  __int64 v53; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v54; // [rsp+38h] [rbp-40h] BYREF

  v52 = 0;
  v11 = (__int64)&v52;
  if ( (unsigned __int8)sub_B7F5F0((_QWORD *)a2, &v52, a3, a4, a5, a6) )
  {
    v34 = v52;
    v35 = *(_DWORD *)(a1 + 120);
    v36 = v52;
    v53 = v52;
    if ( v35 )
    {
      v15 = v35 - 1;
      v37 = *(_QWORD *)(a1 + 104);
      v38 = v15 & (((unsigned int)v52 >> 9) ^ ((unsigned int)v52 >> 4));
      v39 = (__int64 *)(v37 + 16LL * v38);
      v40 = *v39;
      if ( v52 == *v39 )
      {
LABEL_26:
        if ( ((_DWORD)v39[1] & *(_DWORD *)(a1 + 132)) != 0 )
          return;
        goto LABEL_88;
      }
      v45 = 1;
      v46 = nullptr;
      if ( v40 != -4096 )
      {
        while ( 1 )
        {
          if ( !v46 && v40 == -8192 )
            v46 = v39;
          v38 = v15 & (v45 + v38);
          v39 = (__int64 *)(v37 + 16LL * v38);
          v40 = *v39;
          if ( v52 == *v39 )
            goto LABEL_26;
          if ( v40 == -4096 )
            break;
          ++v45;
        }
        if ( v46 )
          v39 = v46;
      }
      v47 = *(_DWORD *)(a1 + 112);
      v54 = v39;
      v12 = (unsigned int)(v47 + 1);
      v13 = 3 * v35;
      v14 = (unsigned int)(4 * v12);
      if ( (unsigned int)v14 < (unsigned int)v13 )
      {
        v13 = v35 - *(_DWORD *)(a1 + 116) - (unsigned int)v12;
        v14 = v35 >> 3;
        if ( (unsigned int)v13 > (unsigned int)v14 )
        {
LABEL_85:
          v48 = *v39 == -4096;
          *(_DWORD *)(a1 + 112) = v12;
          if ( !v48 )
            --*(_DWORD *)(a1 + 116);
          *((_DWORD *)v39 + 2) = 0;
          *v39 = v36;
          v34 = v52;
LABEL_88:
          v49 = *(unsigned int *)(a1 + 32);
          if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 36) )
          {
            sub_2237220(a1 + 24, a1 + 40, v49 + 1, 8);
            v49 = *(unsigned int *)(a1 + 32);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v49) = v34;
          ++*(_DWORD *)(a1 + 32);
          return;
        }
LABEL_100:
        sub_E3DFA0((__int64 *)(a1 + 104), v35, v12, v13, v14, v15);
        sub_E3BC70((__int64 *)(a1 + 104), &v53, &v54);
        v36 = v53;
        LODWORD(v12) = *(_DWORD *)(a1 + 112) + 1;
        v39 = v54;
        goto LABEL_85;
      }
    }
    else
    {
      v54 = nullptr;
    }
    v35 *= 2;
    goto LABEL_100;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    return;
  v16 = sub_B8C3D0(a2, (__int64)&v52, v12, v13, v14, v15);
  v20 = *((unsigned int *)v16 + 2);
  v21 = *v16 + 8 * v20;
  v50 = v21;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v22 = (const __m128i **)*sub_B8C3D0(a2, (__int64)&v52, v20, v17, v18, v19);
    if ( v22 == (const __m128i **)v50 )
      return;
  }
  else
  {
    v22 = nullptr;
    if ( !v21 )
      return;
  }
  v23 = nullptr;
  do
  {
    v24 = *v22;
    if ( (*v22)[2].m128i_i16[2] == 142 )
    {
      v25 = *(unsigned int **)(v24[2].m128i_i64[1] + 16);
      v26 = *v25;
      v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 248LL) + 17448LL);
      if ( v26 == *(_QWORD *)(v27 + 368) )
      {
        if ( !*v25 || (v11 = *(_QWORD *)(v27 + 360), !memcmp(v25 + 4, (const void *)v11, v26)) )
        {
          v28 = v24[8].m128i_i64[1];
          if ( !v28 )
            goto LABEL_59;
          v29 = *(_DWORD *)(a1 + 128);
          v23 = v24;
          if ( v29 )
          {
            v30 = *(unsigned int **)(v28 + 16);
            v31 = *v30;
            v11 = (__int64)(v30 + 4);
            if ( v31 == 5 )
            {
              if ( v30[4] == 1702390128 && *((_BYTE *)v30 + 20) == 108 )
              {
                v32 = 1;
                v51 = 33;
              }
              else
              {
                v32 = 0;
              }
              v33 = 1;
            }
            else
            {
              if ( v31 == 6 )
              {
                v33 = 1;
                if ( v30[4] == 1953654134 && *((_WORD *)v30 + 10) == 30821 )
                {
                  v32 = 1;
                  v51 = 34;
                  goto LABEL_16;
                }
              }
              else
              {
                if ( v31 == 8 )
                {
                  v32 = 1836016999;
                  v43 = 35;
                  if ( *((_QWORD *)v30 + 2) != 0x797274656D6F6567LL )
                    v43 = v51;
                  v33 = 1;
                  v11 = 1;
                  LOBYTE(v32) = *((_QWORD *)v30 + 2) == 0x797274656D6F6567LL;
                  v51 = v43;
LABEL_44:
                  v44 = v33 | v32;
                  goto LABEL_45;
                }
                v44 = v31 != 7;
                v33 = v31 != 7;
                if ( v31 == 4 )
                {
                  v32 = 0;
                  v11 = 1;
                  if ( v30[4] == 1819047272 )
                  {
                    v11 = 1;
                    v32 = 1;
                    v51 = 36;
                    goto LABEL_46;
                  }
LABEL_45:
                  if ( !v44 )
                  {
                    if ( v30[4] != 1886220131 || *((_WORD *)v30 + 10) != 29813 || *((_BYTE *)v30 + 22) != 101 )
                      goto LABEL_47;
                    v32 = 1;
                    v51 = 38;
                    goto LABEL_48;
                  }
LABEL_46:
                  if ( (unsigned __int8)v11 | (unsigned __int8)v32 )
                  {
LABEL_47:
                    if ( (unsigned __int8)v32 | (v31 != 12) )
                      goto LABEL_48;
                    if ( *((_QWORD *)v30 + 2) == 0x6365737265746E69LL && v30[6] == 1852795252 )
                    {
                      v51 = 41;
                      v32 = 1;
                      goto LABEL_50;
                    }
LABEL_49:
                    if ( !((unsigned __int8)v32 | (v31 != 10)) )
                    {
                      if ( *((_QWORD *)v30 + 2) == 0x68747365736F6C63LL && *((_WORD *)v30 + 12) == 29801 )
                      {
                        v51 = 43;
                        v32 = 1;
                        goto LABEL_31;
                      }
LABEL_51:
                      if ( !((unsigned __int8)v32 | (v31 != 8)) )
                      {
                        v11 = v32 | (unsigned int)v11;
                        if ( *((_QWORD *)v30 + 2) == 0x656C62616C6C6163LL )
                        {
                          LOBYTE(v32) = 1;
                          v51 = 45;
                          goto LABEL_33;
                        }
                        goto LABEL_32;
                      }
LABEL_31:
                      v11 = v32 | (unsigned int)v11;
LABEL_32:
                      if ( !(_BYTE)v11 )
                      {
                        if ( *((_QWORD *)v30 + 2) == 0x636966696C706D61LL
                          && v30[6] == 1869182049
                          && *((_BYTE *)v30 + 28) == 110 )
                        {
                          v51 = 47;
                          goto LABEL_58;
                        }
                        goto LABEL_34;
                      }
LABEL_33:
                      if ( !((unsigned __int8)v32 | v33) )
                      {
                        if ( v30[4] != 1919052140 || *((_WORD *)v30 + 10) != 29281 || *((_BYTE *)v30 + 22) != 121 )
                          goto LABEL_35;
                        v51 = 39;
                        goto LABEL_58;
                      }
LABEL_34:
                      if ( !(_BYTE)v32 )
                      {
LABEL_35:
                        v23 = v24;
                        goto LABEL_36;
                      }
LABEL_58:
                      if ( v29 == v51 )
                      {
LABEL_59:
                        v23 = v24;
                        goto LABEL_38;
                      }
                      goto LABEL_35;
                    }
LABEL_50:
                    if ( !((unsigned __int8)v32 | (v31 != 4)) )
                    {
                      if ( v30[4] == 1936943469 )
                      {
                        LOBYTE(v32) = 1;
                        v51 = 44;
                      }
                      else if ( v30[4] == 1752393069 )
                      {
                        v51 = 46;
                        goto LABEL_58;
                      }
                      goto LABEL_33;
                    }
                    goto LABEL_51;
                  }
                  if ( *((_QWORD *)v30 + 2) == 0x72656E6567796172LL
                    && v30[6] == 1869182049
                    && *((_BYTE *)v30 + 28) == 110 )
                  {
                    v32 = 1;
                    v51 = 40;
                    goto LABEL_49;
                  }
LABEL_48:
                  if ( !((unsigned __int8)v32 | (v31 != 6)) )
                  {
                    if ( v30[4] == 1752788577 && *((_WORD *)v30 + 10) == 29801 )
                    {
                      v32 = 1;
                      v51 = 42;
                      goto LABEL_51;
                    }
                    goto LABEL_50;
                  }
                  goto LABEL_49;
                }
              }
              v32 = 0;
            }
LABEL_16:
            LOBYTE(v11) = v31 != 13;
            if ( v31 == 6 && !(_BYTE)v32 )
            {
              if ( v30[4] == 1634561892 && *((_WORD *)v30 + 10) == 28265 )
              {
                v32 = 1;
                v51 = 37;
              }
              goto LABEL_47;
            }
            goto LABEL_44;
          }
        }
      }
    }
LABEL_36:
    ++v22;
  }
  while ( (const __m128i **)v50 != v22 );
  if ( !v23 )
    return;
LABEL_38:
  v41 = (unsigned int)sub_EEC140(a3);
  v42 = sub_EEB7E0(a3, v11, a7);
  sub_1A06F50(a1, a2, v23, (v41 << 32) | v42);
}
