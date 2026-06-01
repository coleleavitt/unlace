void __fastcall sub_11BDEA0(__int64 *a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r12
  const char **v8; // rax
  char *v9; // rbx
  char *v10; // r13
  int v11; // r14d
  int v12; // eax
  __int64 v13; // rax
  size_t v14; // r14
  __int64 v15; // rbx
  size_t v16; // rbp
  const char *v17; // rbx
  size_t v18; // rax
  size_t v19; // r13
  size_t v20; // rax
  size_t v21; // r14
  bool v22; // r12
  bool v23; // bp
  __int64 *v24; // rbx
  __m128i v25; // rax
  __int64 v26; // rdi
  _QWORD *v27; // rdx
  _QWORD *v28; // rsi
  char *v29; // rax
  signed __int64 v30; // rdx
  size_t v31; // r14
  char v32; // al
  size_t v33; // rax
  int v34; // r14d
  size_t v35; // rax
  __m128 v36; // xmm0
  const char *v37; // r14
  const char *v38; // r14
  const char *v39; // r14
  size_t v40; // r13
  __m128i v41; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v42; // [rsp+18h] [rbp-C0h]
  char *s; // [rsp+20h] [rbp-B8h] BYREF
  size_t v44; // [rsp+28h] [rbp-B0h]
  void *v45[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v46[16]; // [rsp+40h] [rbp-98h] BYREF
  char *v47[2]; // [rsp+50h] [rbp-88h] BYREF
  char *v48[2]; // [rsp+60h] [rbp-78h]
  __int16 v49; // [rsp+70h] [rbp-68h]

  v42 = a1;
  s = a4;
  v41.m128i_i64[0] = a5;
  v6 = sub_10DCD30(a2, 0x909u);
  if ( v6 )
  {
    v7 = v6;
    v8 = *(const char ***)(v6 + 48);
    v9 = nullptr;
    v10 = (char *)*v8;
    if ( *v8 )
      v9 = (char *)j__strlen(*v8);
    v11 = *(_DWORD *)(a3 + 44);
    if ( v11 == 20 && (char *)j__strlen("medium") == v9 && (!v9 || !memcmp(v10, "medium", (size_t)v9)) )
    {
      v10 = "large";
      v9 = (char *)j__strlen("large");
    }
    v12 = *(_DWORD *)(a3 + 32);
    if ( v12 == 3 )
      goto LABEL_18;
    if ( (unsigned int)(v12 - 4) <= 1 )
    {
      if ( v12 == 5 )
      {
        if ( v11 == 20 )
        {
LABEL_9:
          if ( (char *)j__strlen("small") == v9 )
          {
            if ( !v9 || !memcmp(v10, "small", (size_t)v9) )
              goto LABEL_15;
            if ( (char *)j__strlen("medium") != v9 )
              goto LABEL_13;
            goto LABEL_74;
          }
          if ( (char *)j__strlen("medium") == v9 )
          {
            if ( !v9 )
              goto LABEL_15;
LABEL_74:
            if ( !memcmp(v10, "medium", (size_t)v9) )
              goto LABEL_15;
            if ( (char *)j__strlen("large") != v9 )
              goto LABEL_54;
            goto LABEL_14;
          }
          if ( (char *)j__strlen("large") != v9 )
            goto LABEL_54;
          if ( !v9 )
            goto LABEL_15;
LABEL_14:
          if ( !memcmp(v10, "large", (size_t)v9) )
          {
LABEL_15:
            v48[0] = v10;
            v49 = 1283;
            v47[0] = "-mcmodel=";
            v48[1] = v9;
            v13 = sub_10DA6C0(a2, (__int64)v47);
            sub_10DC5D0(v41.m128i_i64[0], v13);
            goto LABEL_16;
          }
          goto LABEL_54;
        }
LABEL_144:
        if ( ((v12 - 25) & 0xFFFFFFEE) == 0 || (unsigned int)(v12 - 49) <= 2 )
          goto LABEL_15;
        if ( v12 != 30 )
          goto LABEL_54;
        if ( (char *)j__strlen("medlow") == v9 )
        {
          if ( !v9 || !memcmp(v10, "medlow", (size_t)v9) )
          {
            v10 = "small";
            v9 = (char *)j__strlen("small");
LABEL_204:
            if ( !v9 )
              goto LABEL_15;
            goto LABEL_205;
          }
          if ( (char *)j__strlen("medmid") != v9 )
            goto LABEL_151;
        }
        else
        {
          if ( (char *)j__strlen("medmid") != v9 )
          {
            if ( (char *)j__strlen("medany") != v9 )
              goto LABEL_203;
            if ( !v9 )
            {
LABEL_202:
              v10 = "large";
              v9 = (char *)j__strlen("large");
LABEL_203:
              if ( (char *)j__strlen("small") != v9 )
              {
LABEL_154:
                if ( v9 != (char *)j__strlen("medium") )
                {
LABEL_155:
                  if ( v9 != (char *)j__strlen("large") )
                    goto LABEL_54;
                  if ( !v9 )
                    goto LABEL_15;
                  goto LABEL_14;
                }
                goto LABEL_214;
              }
              goto LABEL_204;
            }
LABEL_152:
            v34 = memcmp(v10, "medany", (size_t)v9);
            v35 = j__strlen("small");
            if ( v34 )
            {
              if ( (char *)v35 != v9 )
                goto LABEL_154;
LABEL_205:
              if ( !memcmp(v10, "small", (size_t)v9) )
                goto LABEL_15;
              if ( v9 != (char *)j__strlen("medium") )
                goto LABEL_155;
LABEL_207:
              if ( !memcmp(v10, "medium", (size_t)v9) )
                goto LABEL_15;
LABEL_13:
              if ( v9 == (char *)j__strlen("large") )
                goto LABEL_14;
LABEL_54:
              sub_FC70B0((__int64)v47, *v42, 0, 498);
              sub_AEC220((unsigned __int8 **)v47, *(_BYTE **)(v7 + 24), *(_QWORD *)(v7 + 32));
              sub_AEC220((unsigned __int8 **)v47, v10, (signed __int64)v9);
              sub_AEC220((unsigned __int8 **)v47, *(_BYTE **)a3, *(_QWORD *)(a3 + 8));
              sub_AEA040((__int64)v47);
              goto LABEL_16;
            }
            goto LABEL_202;
          }
          if ( !v9 )
          {
LABEL_212:
            v40 = j__strlen("medium");
            v9 = (char *)j__strlen("small");
            if ( (char *)v40 != v9 )
            {
              v9 = (char *)v40;
              v10 = "medium";
LABEL_214:
              if ( !v9 )
                goto LABEL_15;
              goto LABEL_207;
            }
            v10 = "medium";
            goto LABEL_204;
          }
        }
        if ( memcmp(v10, "medmid", (size_t)v9) )
        {
LABEL_151:
          if ( (char *)j__strlen("medany") != v9 )
            goto LABEL_203;
          goto LABEL_152;
        }
        goto LABEL_212;
      }
LABEL_18:
      if ( *(_DWORD *)(a3 + 48) != 13 )
      {
        v44 = j__strlen("tiny");
        v14 = j__strlen("large");
        if ( (char *)v44 == v9 )
        {
          if ( !v9 )
          {
LABEL_22:
            if ( v14 )
            {
              v9 = nullptr;
              goto LABEL_15;
            }
            goto LABEL_61;
          }
          if ( !memcmp(v10, "tiny", (size_t)v9) )
          {
            if ( (char *)v14 != v9 )
              goto LABEL_15;
LABEL_110:
            if ( memcmp(v10, "large", (size_t)v9) )
              goto LABEL_15;
            goto LABEL_61;
          }
          if ( (char *)j__strlen("small") == v9 )
            goto LABEL_58;
        }
        else if ( (char *)j__strlen("small") == v9 )
        {
          if ( !v9 )
            goto LABEL_22;
LABEL_58:
          if ( !memcmp(v10, "small", (size_t)v9) )
          {
            if ( (char *)v14 != v9 )
              goto LABEL_15;
            goto LABEL_110;
          }
          if ( (char *)v14 != v9 )
            goto LABEL_54;
          goto LABEL_79;
        }
        if ( (char *)v14 != v9 )
          goto LABEL_54;
        if ( !v9 )
        {
LABEL_61:
          if ( *(_DWORD *)(a3 + 52) != 5 && *(_DWORD *)s )
          {
            LOBYTE(v44) = 1;
            sub_FC70B0((__int64)v47, *v42, 0, 324);
            s = (char *)v45;
            sub_21B5FF0(v45, v7, a2);
            sub_AEC220((unsigned __int8 **)v47, (_BYTE *)v45[0], (signed __int64)v45[1]);
            sub_AE9DF0((unsigned __int8 **)v47, (__int64)"-fno-pic", 1u);
            v32 = 1;
            if ( v45[0] != v46 )
            {
              operator delete(v45[0]);
              v32 = v44;
            }
            LOBYTE(s) = v32;
            sub_AEA040((__int64)v47);
          }
          goto LABEL_15;
        }
LABEL_79:
        if ( memcmp(v10, "large", (size_t)v9) )
          goto LABEL_54;
        goto LABEL_61;
      }
LABEL_89:
      if ( (unsigned int)(v12 - 23) <= 1 || v11 == 20 )
        goto LABEL_9;
      if ( (unsigned int)(v12 - 27) <= 1 )
      {
        if ( (char *)j__strlen("large") == v9 )
        {
          if ( v9 && memcmp(v10, "large", (size_t)v9) )
          {
            v31 = j__strlen("medlow");
            s = (char *)j__strlen("small");
            if ( (char *)v31 == v9 )
            {
LABEL_96:
              if ( memcmp(v10, "medlow", (size_t)v9) )
              {
                if ( (char *)j__strlen("medany") == v9 )
                  goto LABEL_98;
LABEL_164:
                if ( s != v9 )
                {
LABEL_100:
                  if ( (char *)j__strlen("medium") != v9 )
                    goto LABEL_101;
                  goto LABEL_161;
                }
                goto LABEL_133;
              }
LABEL_132:
              v9 = s;
              v10 = "small";
LABEL_133:
              if ( !v9 )
                goto LABEL_15;
              goto LABEL_134;
            }
            if ( (char *)j__strlen("medany") != v9 )
              goto LABEL_164;
            goto LABEL_98;
          }
          if ( *(_DWORD *)s )
          {
            sub_FC70B0((__int64)v47, *v42, 0, 323);
            sub_21B5FF0(v45, v7, a2);
            sub_AEC220((unsigned __int8 **)v47, (_BYTE *)v45[0], (signed __int64)v45[1]);
            sub_AE9DF0((unsigned __int8 **)v47, (__int64)"-fpic", 1u);
            if ( v45[0] != v46 )
              operator delete(v45[0]);
            sub_AEA040((__int64)v47);
          }
        }
        v44 = j__strlen("medlow");
        s = (char *)j__strlen("small");
        if ( (char *)v44 == v9 )
        {
          if ( !v9 )
            goto LABEL_132;
          goto LABEL_96;
        }
        if ( (char *)j__strlen("medany") != v9 )
          goto LABEL_164;
        if ( !v9 )
        {
LABEL_160:
          v10 = "medium";
          v9 = (char *)j__strlen("medium");
          if ( v9 != s )
          {
LABEL_161:
            if ( !v9 )
              goto LABEL_15;
            goto LABEL_136;
          }
          v9 = s;
          goto LABEL_133;
        }
LABEL_98:
        if ( memcmp(v10, "medany", (size_t)v9) )
        {
          if ( s != v9 )
            goto LABEL_100;
LABEL_134:
          if ( !memcmp(v10, "small", (size_t)v9) )
            goto LABEL_15;
          if ( v9 != (char *)j__strlen("medium") )
          {
LABEL_101:
            if ( (char *)j__strlen("large") != v9 )
              goto LABEL_54;
            if ( !v9 )
            {
LABEL_104:
              if ( *(_DWORD *)(a3 + 32) == 28 )
                goto LABEL_15;
              goto LABEL_54;
            }
LABEL_103:
            if ( memcmp(v10, "large", (size_t)v9) )
              goto LABEL_54;
            goto LABEL_104;
          }
LABEL_136:
          if ( !memcmp(v10, "medium", (size_t)v9) )
            goto LABEL_15;
          if ( v9 != (char *)j__strlen("large") )
            goto LABEL_54;
          goto LABEL_103;
        }
        goto LABEL_160;
      }
      if ( v12 != 38 )
        goto LABEL_144;
      s = "kernel";
      v36 = _mm_loadh_ps((const double *)&s);
      *(__m128 *)v47 = v36;
      s = "large";
      *(__m128 *)v48 = _mm_loadh_ps((const double *)&s);
      if ( v36.m128_u64[0] )
      {
        if ( (char *)strlen((const char *)v36.m128_u64[0]) == v9
          && (!v9 || !memcmp((const void *)v36.m128_u64[0], v10, (size_t)v9)) )
        {
          goto LABEL_15;
        }
        v37 = v47[1];
        if ( v47[1] )
          goto LABEL_172;
        if ( !v9 )
          goto LABEL_15;
      }
      else
      {
        if ( !v9 )
          goto LABEL_15;
        v37 = v47[1];
        if ( v47[1] )
        {
LABEL_172:
          if ( (char *)strlen(v37) == v9 && (!v9 || !memcmp(v37, v10, (size_t)v9)) )
            goto LABEL_15;
          v38 = v48[0];
          if ( !v48[0] )
          {
            if ( !v9 )
              goto LABEL_15;
            goto LABEL_179;
          }
LABEL_176:
          if ( (char *)strlen(v38) != v9 )
          {
            v39 = v48[1];
            if ( !v48[1] )
            {
              if ( !v9 )
                goto LABEL_15;
              goto LABEL_54;
            }
            goto LABEL_180;
          }
          if ( !v9 || !memcmp(v38, v10, (size_t)v9) )
            goto LABEL_15;
LABEL_179:
          v39 = v48[1];
          if ( !v48[1] )
            goto LABEL_54;
LABEL_180:
          if ( (char *)strlen(v39) == v9 && (!v9 || !memcmp(v39, v10, (size_t)v9)) )
            goto LABEL_15;
          goto LABEL_54;
        }
      }
      v38 = v48[0];
      if ( !v48[0] )
        goto LABEL_179;
      goto LABEL_176;
    }
    if ( (unsigned int)(v12 - 13) > 1 )
      goto LABEL_89;
    if ( (char *)j__strlen("extreme") == v9
      && (!v9 || !memcmp(v10, "extreme", (size_t)v9))
      && (unsigned __int8)sub_21B73A0(a2, 1611, 1282, 0) )
    {
      sub_FC70B0((__int64)v47, *v42, 0, 323);
      s = (char *)v45;
      sub_21B5FF0(v45, v7, a2);
      sub_AEC220((unsigned __int8 **)v47, (_BYTE *)v45[0], (signed __int64)v45[1]);
      sub_AE9DF0((unsigned __int8 **)v47, (__int64)"-fplt", 1u);
      if ( v45[0] != v46 )
        operator delete(v45[0]);
      sub_AEA040((__int64)v47);
    }
    if ( (char *)j__strlen("normal") == v9 )
    {
      if ( !v9 )
        goto LABEL_15;
      if ( !memcmp(v10, "normal", (size_t)v9) )
        goto LABEL_34;
      if ( (char *)j__strlen("medium") != v9 )
        goto LABEL_53;
    }
    else
    {
      if ( (char *)j__strlen("medium") != v9 )
      {
        if ( (char *)j__strlen("extreme") != v9 )
          goto LABEL_54;
        if ( !v9 )
          goto LABEL_15;
LABEL_83:
        if ( memcmp(v10, "extreme", (size_t)v9) )
          goto LABEL_54;
LABEL_34:
        if ( v9 == &byte_6 )
        {
          v33 = j__strlen("small");
          if ( *(_DWORD *)v10 == 1836216174 && *((_WORD *)v10 + 2) == 27745 )
          {
            v9 = (char *)v33;
            v10 = "small";
          }
        }
        else if ( v9 == &byte_7 && *(_DWORD *)v10 == 1920235621 && *((_WORD *)v10 + 2) == 28005 && v10[6] == 101 )
        {
          v10 = "large";
          v9 = (char *)j__strlen("large");
        }
        goto LABEL_15;
      }
      if ( !v9 )
        goto LABEL_15;
    }
    if ( !memcmp(v10, "medium", (size_t)v9) )
      goto LABEL_34;
LABEL_53:
    if ( (char *)j__strlen("extreme") != v9 )
      goto LABEL_54;
    goto LABEL_83;
  }
LABEL_16:
  if ( *(_DWORD *)(a3 + 32) != 38 )
    return;
  v15 = sub_10DCD30(a2, 0x909u);
  if ( !v15 )
    goto LABEL_64;
  v16 = j__strlen("medium");
  v17 = **(const char ***)(v15 + 48);
  v18 = j__strlen("large");
  v19 = v18;
  if ( v17 )
  {
    v20 = j__strlen(v17);
    v21 = v20;
    if ( v20 == v16 )
    {
      if ( v20 )
      {
        v22 = memcmp(v17, "medium", v20) == 0;
        v23 = 0;
        if ( v21 != v19 )
          goto LABEL_46;
        goto LABEL_45;
      }
      v24 = (__int64 *)sub_10DCD30(a2, 0x996u);
      if ( !v24 )
        goto LABEL_88;
      goto LABEL_49;
    }
    if ( v20 == v19 )
    {
      if ( v19 )
      {
        v22 = 0;
LABEL_45:
        v23 = memcmp(v17, "large", v19) == 0;
        goto LABEL_46;
      }
      v24 = (__int64 *)sub_10DCD30(a2, 0x996u);
      if ( !v24 )
        goto LABEL_143;
LABEL_49:
      sub_21B5A40(v24, a2, v41.m128i_i64[0]);
      return;
    }
LABEL_64:
    v24 = (__int64 *)sub_10DCD30(a2, 0x996u);
    if ( !v24 )
      return;
    goto LABEL_65;
  }
  v22 = v16 == 0;
  if ( !v18 )
  {
    v24 = (__int64 *)sub_10DCD30(a2, 0x996u);
    if ( !v24 )
    {
      if ( v16 )
        goto LABEL_143;
      goto LABEL_88;
    }
    goto LABEL_49;
  }
  v23 = 0;
LABEL_46:
  v24 = (__int64 *)sub_10DCD30(a2, 0x996u);
  if ( !v24 )
  {
    if ( !v22 )
    {
      if ( !v23 )
        return;
LABEL_143:
      sub_10DC5D0(v41.m128i_i64[0], (__int64)"-mlarge-data-threshold=0");
      return;
    }
LABEL_88:
    sub_10DC5D0(v41.m128i_i64[0], (__int64)"-mlarge-data-threshold=65536");
    return;
  }
  if ( v23 || v22 )
    goto LABEL_49;
LABEL_65:
  sub_FC70B0((__int64)v47, *v42, 0, 563);
  v25.m128i_i64[0] = sub_21BB380(v24[1], *(unsigned __int16 *)(*v24 + 58));
  v41 = v25;
  *(__m128i *)v45 = _mm_load_si128(&v41);
  if ( v45[0] )
  {
    v26 = sub_11BAC70(v45);
    v28 = v27;
  }
  else
  {
    v26 = *v24;
    v28 = (_QWORD *)v24[1];
  }
  v29 = (char *)sub_11BA9E0(v26, v28);
  sub_AEC220((unsigned __int8 **)v47, v29, v30);
  sub_AEA040((__int64)v47);
}
