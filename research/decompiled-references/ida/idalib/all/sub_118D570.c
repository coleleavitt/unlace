int __fastcall sub_118D570(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rax
  size_t v6; // r15
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r14
  const char *v10; // r12
  size_t v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  size_t v15; // rax
  unsigned int v16; // ecx
  _BYTE *v17; // rax
  signed __int64 v18; // rdx
  _BOOL4 v19; // r14d
  const char **v20; // rax
  size_t v21; // rsi
  const char *v22; // rbp
  const char **v23; // r12
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  void *v34; // rdi
  __int64 v35; // rbx
  const char **v36; // r14
  const char **v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rbx
  const char **v40; // rbx
  char *s1; // [rsp+28h] [rbp-140h]
  const char *v45; // [rsp+38h] [rbp-130h]
  const char *v46; // [rsp+38h] [rbp-130h]
  const char *v47; // [rsp+38h] [rbp-130h]
  const char *v48; // [rsp+38h] [rbp-130h]
  __int64 *v49; // [rsp+40h] [rbp-128h]
  const char **v50; // [rsp+48h] [rbp-120h]
  char v51; // [rsp+5Dh] [rbp-10Bh]
  char v52; // [rsp+5Eh] [rbp-10Ah]
  char v53; // [rsp+5Fh] [rbp-109h]
  __int64 n; // [rsp+60h] [rbp-108h]
  const char *v55; // [rsp+68h] [rbp-100h]
  _BYTE *v56; // [rsp+70h] [rbp-F8h] BYREF
  signed __int64 v57; // [rsp+78h] [rbp-F0h]
  __m128i v58; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v59; // [rsp+90h] [rbp-D8h] BYREF
  __int16 v60; // [rsp+A0h] [rbp-C8h]
  __m128i v61; // [rsp+B0h] [rbp-B8h] BYREF
  const char *v62; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-A0h]
  __int16 v64; // [rsp+D0h] [rbp-98h]
  char v65; // [rsp+D2h] [rbp-96h]
  __m128i v66[2]; // [rsp+E0h] [rbp-88h] BYREF
  __int16 v67; // [rsp+100h] [rbp-68h]

  if ( !a4 )
  {
    v15 = sub_10DCD30(a2, 0x8FCu);
    v6 = v15;
    if ( !v15 )
      return v15;
    v16 = *(_DWORD *)(a1 + 1796);
    v49 = *(__int64 **)(a1 + 8);
    if ( v16 > 0x22 || ((1LL << v16) & 0x7FE080000LL) != 0 || v16 > 0x1D || ((1LL << v16) & 0x21B80000) == 0 )
    {
      sub_FC70B0((__int64)v66, *v49, 0, 140);
      v17 = (_BYTE *)sub_22B7480(a1 + 1760);
      sub_AEC220((unsigned __int8 **)v66, v17, v18);
      sub_AEA040((__int64)v66);
    }
    if ( (unsigned __int8)sub_21B9810(v6, 2863) )
    {
LABEL_4:
      v7 = **(const char ***)(v6 + 48);
      s1 = (char *)v7;
      v8 = j__strlen("none");
      v9 = v8;
      if ( !v7 )
      {
        v12 = 0;
        if ( !v8 )
          goto LABEL_12;
        v12 = j__strlen("non-leaf");
        if ( !v12 )
          goto LABEL_12;
        v12 = j__strlen("all");
        if ( !v12 )
          goto LABEL_12;
        v12 = 0;
        goto LABEL_11;
      }
      v10 = v7;
      v11 = j__strlen(v7);
      v12 = v11;
      if ( v11 == v9 )
      {
        if ( !v11 || !memcmp(v10, "none", v11) )
          goto LABEL_12;
        if ( v12 == j__strlen("non-leaf") )
        {
LABEL_8:
          if ( !memcmp(s1, "non-leaf", v12) )
            goto LABEL_12;
          if ( v12 != j__strlen("all") )
          {
LABEL_11:
            sub_FC70B0((__int64)v66, *v49, 0, 497);
            sub_AEC220((unsigned __int8 **)v66, *(_BYTE **)(v6 + 24), *(_QWORD *)(v6 + 32));
            sub_AEC220((unsigned __int8 **)v66, s1, v12);
            sub_AEA040((__int64)v66);
            goto LABEL_12;
          }
          goto LABEL_10;
        }
        if ( j__strlen("all") != v12 )
          goto LABEL_11;
      }
      else
      {
        if ( v11 == j__strlen("non-leaf") )
        {
          if ( !v12 )
            goto LABEL_12;
          goto LABEL_8;
        }
        if ( v12 != j__strlen("all") )
          goto LABEL_11;
        if ( !v12 )
          goto LABEL_12;
      }
LABEL_10:
      if ( memcmp(s1, "all", v12) )
        goto LABEL_11;
LABEL_12:
      v52 = 0;
      n = j__strlen("a_key");
      v51 = 0;
      v53 = a4 & (*(_DWORD *)(a1 + 1804) == 12);
      v55 = "a_key";
      goto LABEL_27;
    }
    v56 = nullptr;
    v19 = 0;
    v57 = 0;
    v61 = 0u;
    v62 = nullptr;
    v63 = 0;
LABEL_21:
    v20 = *(const char ***)(v6 + 48);
    v21 = 0;
    v22 = *v20;
    if ( *v20 )
      v21 = j__strlen(*v20);
    if ( !(unsigned __int8)sub_229C6A0(v22, v21, &v61, &v56, v19) )
    {
      sub_FC70B0((__int64)v66, *v49, 0, 497);
      sub_AEC220((unsigned __int8 **)v66, *(_BYTE **)(v6 + 24), *(_QWORD *)(v6 + 32));
      sub_AEC220((unsigned __int8 **)v66, v56, v57);
      sub_AEA040((__int64)v66);
    }
    v55 = v62;
    n = v63;
    if ( !a4 && j__strlen("b_key") == n && (!n || !memcmp(v55, "b_key", n)) )
    {
      sub_FC70B0((__int64)v66, *v49, 0, 633);
      sub_1188FA0((unsigned __int8 **)v66, (__int64)"b-key");
      sub_21B5FF0(&v58, v6, a2);
      sub_AEC220((unsigned __int8 **)v66, v58.m128i_i64[0], v58.m128i_i64[1]);
      if ( (__int64 *)v58.m128i_i64[0] != &v59 )
        operator delete((void *)v58.m128i_i64[0]);
      sub_AEA040((__int64)v66);
      v55 = v62;
      n = v63;
    }
    v12 = v61.m128i_i64[1];
    s1 = (char *)v61.m128i_i64[0];
    v51 = HIBYTE(v64);
    v53 = v64;
    v52 = v65;
LABEL_27:
    v23 = *(const char ***)a3;
    v24 = 8LL * *(unsigned int *)(a3 + 8);
    v25 = *(_QWORD *)a3 + v24;
    v26 = v24 >> 3;
    v27 = v24 >> 5;
    if ( v27 )
    {
      v50 = &v23[4 * v27];
      while ( 1 )
      {
        if ( *v23 )
        {
          v48 = *v23;
          if ( strlen(*v23) == 17 )
          {
            v26 = *(_QWORD *)v48 ^ 0x747561727470662DLL | *((_QWORD *)v48 + 1) ^ 0x6E72757465722D68LL;
            if ( !v26 && v48[16] == 115 )
              goto LABEL_46;
          }
        }
        if ( v23[1] )
        {
          v45 = v23[1];
          if ( strlen(v45) == 17 )
          {
            v26 = *(_QWORD *)v45 ^ 0x747561727470662DLL | *((_QWORD *)v45 + 1) ^ 0x6E72757465722D68LL;
            if ( !v26 && v45[16] == 115 )
            {
              ++v23;
              goto LABEL_46;
            }
          }
        }
        if ( v23[2] )
        {
          v46 = v23[2];
          if ( strlen(v46) == 17 )
          {
            v26 = *(_QWORD *)v46 ^ 0x747561727470662DLL | *((_QWORD *)v46 + 1) ^ 0x6E72757465722D68LL;
            if ( !v26 && v46[16] == 115 )
            {
              v23 += 2;
              goto LABEL_46;
            }
          }
        }
        if ( v23[3] )
        {
          v47 = v23[3];
          if ( strlen(v47) == 17 )
          {
            v26 = *(_QWORD *)v47 ^ 0x747561727470662DLL | *((_QWORD *)v47 + 1) ^ 0x6E72757465722D68LL;
            if ( !v26 && v47[16] == 115 )
            {
              v23 += 3;
              goto LABEL_46;
            }
          }
        }
        v23 += 4;
        if ( v50 == v23 )
        {
          v26 = (v25 - (__int64)v23) >> 3;
          break;
        }
      }
    }
    if ( v26 != 2 )
    {
      if ( v26 != 3 )
      {
        if ( v26 != 1 )
          goto LABEL_52;
LABEL_85:
        if ( !(unsigned __int8)sub_11897A0((__int64)*v23) )
          goto LABEL_52;
LABEL_46:
        if ( (const char **)v25 == v23 || v12 == j__strlen("none") && (!v12 || !memcmp(s1, "none", v12)) && !v51 && !v52 )
        {
LABEL_52:
          v64 = 261;
          v60 = 259;
          v58.m128i_i64[0] = (__int64)"-msign-return-address=";
          v61.m128i_i64[0] = (__int64)s1;
          v61.m128i_i64[1] = v12;
          sub_A41580(v66, &v58, &v61, v26, v13, v14);
          v28 = sub_10DA6C0(a2, (__int64)v66);
          sub_10DC5D0(a3, v28);
          v15 = j__strlen("none");
          if ( v12 != v15 || v12 && (LODWORD(v15) = memcmp(s1, "none", v12), (_DWORD)v15) )
          {
            v64 = 261;
            v61.m128i_i64[0] = (__int64)v55;
            v60 = 259;
            v61.m128i_i64[1] = n;
            v58.m128i_i64[0] = (__int64)"-msign-return-address-key=";
            sub_A41580(v66, &v58, &v61, 259, v29, v30);
            v31 = sub_10DA6C0(a2, (__int64)v66);
            LODWORD(v15) = sub_10DC5D0(a3, v31);
            if ( !v51 )
            {
LABEL_56:
              if ( !v53 )
                goto LABEL_57;
LABEL_62:
              LODWORD(v15) = sub_10DC5D0(a3, (__int64)"-mbranch-target-enforce");
LABEL_57:
              if ( v52 )
                LODWORD(v15) = sub_10DC5D0(a3, (__int64)"-mguarded-control-stack");
              return v15;
            }
          }
          else if ( !v51 )
          {
            goto LABEL_56;
          }
          v66[0].m128i_i64[0] = (__int64)"-mbranch-protection-pauth-lr";
          v67 = 259;
          v32 = sub_10DA6C0(a2, (__int64)v66);
          LODWORD(v15) = sub_10DC5D0(a3, v32);
          if ( !v53 )
            goto LABEL_57;
          goto LABEL_62;
        }
        v33 = *v49;
        if ( *(_DWORD *)(a1 + 1808) == 51 )
        {
          sub_FC70B0((__int64)v66, v33, 0, 495);
          sub_21B5FF0(&v61, v6, a2);
          sub_AEC220((unsigned __int8 **)v66, v61.m128i_i64[0], v61.m128i_i64[1]);
          sub_AEC220((unsigned __int8 **)v66, *(_BYTE **)(a1 + 1760), *(_QWORD *)(a1 + 1768));
          v34 = (void *)v61.m128i_i64[0];
          if ( (const char **)v61.m128i_i64[0] == &v62 )
            goto LABEL_69;
        }
        else
        {
          sub_FC70B0((__int64)v66, v33, 0, 367);
          sub_21B5FF0(&v61, v6, a2);
          sub_AEC220((unsigned __int8 **)v66, v61.m128i_i64[0], v61.m128i_i64[1]);
          sub_1188FA0((unsigned __int8 **)v66, (__int64)"-fptrauth-returns");
          v34 = (void *)v61.m128i_i64[0];
          if ( (const char **)v61.m128i_i64[0] == &v62 )
          {
LABEL_69:
            sub_AEA040((__int64)v66);
            goto LABEL_52;
          }
        }
        operator delete(v34);
        goto LABEL_69;
      }
      if ( (unsigned __int8)sub_11897A0((__int64)*v23) )
        goto LABEL_46;
      ++v23;
    }
    if ( (unsigned __int8)sub_11897A0((__int64)*v23) )
      goto LABEL_46;
    ++v23;
    goto LABEL_85;
  }
  v5 = sub_10DE660(a2, 0xB2Fu, 0x8FCu);
  v6 = v5;
  if ( v5 )
  {
    v49 = *(__int64 **)(a1 + 8);
    if ( (unsigned __int8)sub_21B9810(v5, 2863) )
      goto LABEL_4;
    v56 = nullptr;
    v57 = 0;
    v35 = *(unsigned int *)(a3 + 8);
    v36 = *(const char ***)a3;
    v61 = 0u;
    v62 = nullptr;
    v35 *= 8;
    v37 = (const char **)((char *)v36 + v35);
    v63 = 0;
    v38 = v35 >> 3;
    v39 = v35 >> 5;
    if ( v39 )
    {
      v40 = &v36[4 * v39];
      while ( !sub_1189810(*v36) )
      {
        if ( sub_1189810(v36[1]) )
        {
          v19 = v37 != v36 + 1;
          goto LABEL_21;
        }
        if ( sub_1189810(v36[2]) )
        {
          v19 = v37 != v36 + 2;
          goto LABEL_21;
        }
        if ( sub_1189810(v36[3]) )
        {
          v19 = v37 != v36 + 3;
          goto LABEL_21;
        }
        v36 += 4;
        if ( v40 == v36 )
        {
          v38 = v37 - v36;
          goto LABEL_111;
        }
      }
      goto LABEL_94;
    }
LABEL_111:
    if ( v38 != 2 )
    {
      if ( v38 != 3 )
      {
        if ( v38 != 1 )
        {
LABEL_114:
          v19 = 0;
          goto LABEL_21;
        }
        goto LABEL_122;
      }
      if ( sub_1189810(*v36) )
      {
LABEL_94:
        v19 = v36 != v37;
        goto LABEL_21;
      }
      ++v36;
    }
    if ( sub_1189810(*v36) )
      goto LABEL_123;
    ++v36;
LABEL_122:
    if ( !sub_1189810(*v36) )
      goto LABEL_114;
LABEL_123:
    v19 = v37 != v36;
    goto LABEL_21;
  }
  LODWORD(v15) = a1;
  if ( *(_DWORD *)(a1 + 1804) == 12 )
  {
    sub_10DC5D0(a3, (__int64)"-msign-return-address=non-leaf");
    sub_10DC5D0(a3, (__int64)"-msign-return-address-key=a_key");
    LODWORD(v15) = sub_10DC5D0(a3, (__int64)"-mbranch-target-enforce");
  }
  return v15;
}
