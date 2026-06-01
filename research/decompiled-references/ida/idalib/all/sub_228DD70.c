void __fastcall sub_228DD70(char **a1)
{
  char *v1; // rdx
  char *v2; // rbp
  unsigned __int64 v3; // rdx
  char *v4; // rbp
  char *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  void *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r14
  size_t v15; // rcx
  const char *v16; // rdi
  struct passwd *v17; // rax
  const char *pw_dir; // r13
  size_t v19; // rax
  char *v20; // rdi
  size_t v21; // rbp
  char *v22; // rax
  char *v23; // rsi
  void *v24; // r14
  char *v25; // rbp
  char *v26; // r9
  char *v27; // r8
  char *v28; // rcx
  char *v29; // r10
  size_t v30; // r13
  char *v31; // r11
  char *v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  char *v36; // rax
  char *v37; // r15
  char *v38; // rbp
  char *v39; // rdi
  size_t v40; // r15
  char *buffer; // [rsp+8h] [rbp-220h]
  char *bufferb; // [rsp+8h] [rbp-220h]
  char *buffera; // [rsp+8h] [rbp-220h]
  char *bufferc; // [rsp+8h] [rbp-220h]
  char *bufferf; // [rsp+8h] [rbp-220h]
  char *buffere; // [rsp+8h] [rbp-220h]
  char *bufferd; // [rsp+8h] [rbp-220h]
  unsigned __int64 v48; // [rsp+10h] [rbp-218h]
  char *v49; // [rsp+10h] [rbp-218h]
  char *v50; // [rsp+10h] [rbp-218h]
  char *v51; // [rsp+10h] [rbp-218h]
  char *v52; // [rsp+10h] [rbp-218h]
  char *v53; // [rsp+10h] [rbp-218h]
  size_t buflen; // [rsp+18h] [rbp-210h]
  size_t buflena; // [rsp+18h] [rbp-210h]
  size_t buflenb; // [rsp+18h] [rbp-210h]
  char *v57; // [rsp+20h] [rbp-208h]
  char *v58; // [rsp+28h] [rbp-200h]
  struct passwd *result; // [rsp+38h] [rbp-1F0h] BYREF
  char *name[2]; // [rsp+40h] [rbp-1E8h] BYREF
  _BYTE v61[16]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v62[4]; // [rsp+60h] [rbp-1C8h] BYREF
  __int16 v63; // [rsp+80h] [rbp-1A8h]
  char v64[32]; // [rsp+90h] [rbp-198h] BYREF
  __int16 v65; // [rsp+B0h] [rbp-178h]
  char v66[32]; // [rsp+C0h] [rbp-168h] BYREF
  __int16 v67; // [rsp+E0h] [rbp-148h]
  char v68[32]; // [rsp+F0h] [rbp-138h] BYREF
  __int16 v69; // [rsp+110h] [rbp-118h]
  struct passwd resultbuf; // [rsp+120h] [rbp-108h] BYREF
  void *ptr; // [rsp+150h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+158h] [rbp-D0h]
  _BYTE v73[192]; // [rsp+168h] [rbp-C0h] BYREF

  v1 = a1[1];
  v2 = *a1;
  if ( !v1 || *v2 != 126 )
    return;
  v3 = (unsigned __int64)(v1 - 1);
  v4 = v2 + 1;
  v6 = v4;
  if ( v3 )
  {
    while ( !sub_2288010((__int64)&ptr, *v6) )
    {
      v6 = (char *)(v8 + 1);
      if ( v7 == 1 )
        goto LABEL_7;
    }
    v9 = v3 - v7;
    if ( v3 - v7 > v3 )
      v9 = v3;
    v10 = v9 + 1;
    if ( v3 < v9 + 1 )
    {
      v48 = 0;
      v10 = v3;
    }
    else
    {
      v48 = v3 - v10;
    }
  }
  else
  {
LABEL_7:
    v48 = 0;
    v9 = v3;
    v10 = v3;
  }
  ptr = v73;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( v9 )
  {
    v12 = sysconf(70);
    if ( v12 <= 0 )
    {
      v14 = 0x3FFF;
      v13 = 0x4000;
    }
    else
    {
      v13 = v12;
      v14 = v12 - 1;
    }
    buflen = v13;
    buffer = (char *)operator new[](v13);
    memset(buffer, 0, v14 + 1);
    v15 = buflen;
    if ( v4 )
    {
      name[0] = v61;
      sub_2288020(name, v4, (__int64)&v4[v9]);
      v16 = name[0];
      v15 = buflen;
    }
    else
    {
      v61[0] = 0;
      name[1] = nullptr;
      v16 = v61;
      name[0] = v61;
    }
    result = nullptr;
    getpwnam_r(v16, &resultbuf, buffer, v15, &result);
    if ( result && result->pw_dir )
    {
      si128.m128i_i64[0] = 0;
      sub_A1FE50(&ptr, &v4[v10], &v4[v10 + v48]);
      v17 = result;
      a1[1] = nullptr;
      pw_dir = v17->pw_dir;
      v19 = strlen(pw_dir);
      v20 = nullptr;
      v21 = v19;
      if ( v19 > (unsigned __int64)a1[2] )
      {
        sub_2236E10((__int64)a1, a1 + 3, v19, 1);
        v20 = a1[1];
      }
      if ( v21 )
      {
        memcpy(&v20[(_QWORD)*a1], pw_dir, v21);
        v20 = a1[1];
      }
      a1[1] = &v20[v21];
      v69 = 257;
      v67 = 257;
      v62[0] = ptr;
      v65 = 257;
      v63 = 261;
      v62[1] = si128.m128i_i64[0];
      sub_2288C30(a1, (__int64)v62, (__int64)v64, (__int64)v66, (__int64)v68);
      if ( name[0] != v61 )
        operator delete(name[0]);
      operator delete[](buffer);
      v11 = ptr;
      if ( ptr != v73 )
        goto LABEL_11;
      return;
    }
    if ( name[0] != v61 )
      operator delete(name[0]);
    operator delete[](buffer);
  }
  else if ( (unsigned __int8)sub_228D5A0(&ptr) )
  {
    **a1 = *(_BYTE *)ptr;
    v22 = *a1;
    v23 = a1[1];
    v24 = ptr;
    v25 = *a1 + 1;
    v26 = &v23[(_QWORD)*a1];
    v27 = (char *)ptr + 1;
    v28 = v23;
    v29 = (char *)ptr + si128.m128i_i64[0];
    v30 = si128.m128i_i64[0] - 1;
    if ( v25 == v26 )
    {
      if ( &v23[v30] > a1[2] )
      {
        v51 = (char *)ptr + 1;
        bufferc = (char *)ptr + si128.m128i_i64[0];
        sub_2236E10((__int64)a1, a1 + 3, (unsigned __int64)&v23[v30], 1);
        v23 = a1[1];
        v27 = v51;
        v29 = bufferc;
      }
      if ( v27 != v29 )
      {
        memcpy(&v23[(_QWORD)*a1], v27, v30);
        v23 = a1[1];
      }
      a1[1] = &v23[v30];
    }
    else
    {
      if ( &v23[v30] > a1[2] )
      {
        v50 = (char *)ptr + 1;
        buffera = (char *)ptr + si128.m128i_i64[0];
        sub_2236E10((__int64)a1, a1 + 3, (unsigned __int64)&v23[v30], 1);
        v22 = *a1;
        v28 = a1[1];
        v27 = v50;
        v29 = buffera;
        v25 = *a1 + 1;
        v26 = &v28[(_QWORD)*a1];
      }
      v31 = v28 - 1;
      if ( v30 <= (unsigned __int64)(v28 - 1) )
      {
        v39 = v26;
        v40 = (size_t)&v28[-v30];
        if ( &v28[v30] > a1[2] )
        {
          buflenb = (size_t)v26;
          v53 = v27;
          bufferd = v22;
          sub_2236E10((__int64)a1, a1 + 3, (unsigned __int64)&v28[v30], 1);
          v28 = a1[1];
          v26 = (char *)buflenb;
          v27 = v53;
          v39 = &(*a1)[(_QWORD)v28];
          v22 = bufferd;
        }
        if ( v30 )
        {
          v52 = v26;
          buffere = v27;
          memmove(v39, &v22[v40], v30);
          v28 = a1[1];
          v26 = v52;
          v27 = buffere;
        }
        a1[1] = &v28[v30];
        if ( v40 != 1 )
        {
          bufferf = v27;
          memmove(&v26[-v40 + 1], v25, v40 - 1);
          v27 = bufferf;
        }
        if ( v30 )
          memmove(v25, v27, v30);
      }
      else
      {
        v32 = &v28[v30];
        a1[1] = v32;
        if ( v25 != v26 )
        {
          v58 = v26;
          v57 = v28;
          buflena = (size_t)v27;
          v49 = v29;
          bufferb = v28 - 1;
          memcpy(&v22[v32 - v31], v25, (size_t)(v28 - 1));
          v26 = v58;
          v28 = v57;
          v27 = (char *)buflena;
          v29 = v49;
          v31 = bufferb;
        }
        if ( v31 )
        {
          if ( (v27 >= v25 + 16 || v25 >= (char *)v24 + 17) && (unsigned __int64)(v28 - 2) > 0xE )
          {
            v33 = 0;
            v34 = ((unsigned __int64)(v28 - 17) >> 4) + 1;
            do
            {
              ++v9;
              *(__m128i *)&v25[v33] = _mm_loadu_si128((const __m128i *)((char *)v24 + v33 + 1));
              v33 += 16;
            }
            while ( v34 > v9 );
            v35 = 16 * v34;
            v36 = &v31[-v35];
            v37 = &v27[v35];
            v38 = &v25[v35];
            if ( (char *)v35 != v31 )
            {
              *v38 = *v37;
              if ( v36 != (_BYTE *)&dword_0 + 1 )
              {
                v38[1] = v37[1];
                if ( v36 != (_BYTE *)&dword_0 + 2 )
                {
                  v38[2] = v37[2];
                  if ( v36 != (_BYTE *)&dword_0 + 3 )
                  {
                    v38[3] = v37[3];
                    if ( v36 != byte_4 )
                    {
                      v38[4] = v37[4];
                      if ( v36 != &byte_5 )
                      {
                        v38[5] = v37[5];
                        if ( v36 != &byte_6 )
                        {
                          v38[6] = v37[6];
                          if ( v36 != &byte_7 )
                          {
                            v38[7] = v37[7];
                            if ( v36 != byte_8 )
                            {
                              v38[8] = v37[8];
                              if ( v36 != byte_9 )
                              {
                                v38[9] = v37[9];
                                if ( v36 != &byte_9[1] )
                                {
                                  v38[10] = v37[10];
                                  if ( v36 != &byte_9[2] )
                                  {
                                    v38[11] = v37[11];
                                    if ( v36 != &byte_9[3] )
                                    {
                                      v38[12] = v37[12];
                                      if ( v36 != &byte_9[4] )
                                      {
                                        v38[13] = v37[13];
                                        if ( v36 != &byte_9[5] )
                                          v38[14] = v37[14];
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            do
            {
              v25[v9] = *((_BYTE *)v24 + v9 + 1);
              ++v9;
            }
            while ( (char *)v9 != v31 );
          }
          v27 = &v28[(_QWORD)v24];
        }
        if ( v29 != v27 )
          memcpy(v26, v27, v29 - v27);
      }
    }
  }
  v11 = ptr;
  if ( ptr != v73 )
LABEL_11:
    free(v11);
}
