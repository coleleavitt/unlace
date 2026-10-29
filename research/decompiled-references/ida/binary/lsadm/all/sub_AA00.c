__int64 __fastcall sub_AA00(_QWORD *a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 i; // rax
  int v19; // eax
  __int64 j; // rax
  int v21; // edx
  const char *v22; // r13
  size_t v23; // rax
  size_t v24; // r15
  size_t v25; // r14
  char *v26; // rax
  unsigned __int64 v27; // r15
  char *v28; // rax
  int v29; // r13d
  size_t v30; // r14
  __int64 v31; // r15
  void *v32; // rax
  void *v33; // rdi
  void *v34; // rdi
  unsigned __int64 v35; // r13
  void *v36; // r15
  __int128 v37; // kr40_16
  void *v38; // rdi
  void *v39; // rdi
  const char *v40; // rsi
  void *v41; // rax
  char *v42; // r15
  size_t v43; // rax
  size_t v44; // r14
  void *v45; // rdi
  void *v46; // rdx
  int v47; // [rsp-10h] [rbp-B8h]
  char *src; // [rsp+8h] [rbp-A0h]
  void *srca; // [rsp+8h] [rbp-A0h]
  void *srcb; // [rsp+8h] [rbp-A0h]
  char *s; // [rsp+10h] [rbp-98h] BYREF
  __int128 v52; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v54; // [rsp+38h] [rbp-70h]
  _DWORD v55[1]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v56[4]; // [rsp+54h] [rbp-54h] BYREF
  _BYTE v57[4]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v58[4]; // [rsp+5Ch] [rbp-4Ch] BYREF
  _BYTE v59[4]; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v60[4]; // [rsp+64h] [rbp-44h] BYREF
  unsigned __int64 v61; // [rsp+68h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 9u:
      return a2;
    case 4u:
    case 5u:
    case 7u:
      goto LABEL_5;
    case 6u:
      v8 = *(_QWORD *)(a4 + 16);
      ptr = nullptr;
      v54 = 0;
      v9 = sub_16870(&ptr, v8);
      a1[7] = v9;
      if ( v9 != -1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v54 = 0;
          j__free(ptr);
        }
LABEL_5:
        if ( (unsigned int)sub_2BE80(
                             *(_QWORD *)(a4 + 8),
                             (unsigned int)"%02X-%02X%02X-%02X%02X-%02X",
                             (unsigned int)v55,
                             (unsigned int)v56,
                             (unsigned int)v57,
                             (unsigned int)v58,
                             v59,
                             v60) != 6 )
        {
LABEL_10:
          sub_1D2A0(
            (unsigned int)"Invalid license ID: %s, expected format: XX-XXXX-XXXX-XX\n",
            *(_QWORD *)(a4 + 8),
            v13,
            v14,
            v15,
            v16);
          return 0;
        }
        for ( i = 0; i != 6; ++i )
          *((_BYTE *)a1 + i + 64) = v55[i];
        return a2;
      }
      v40 = s1;
      if ( (_QWORD)v54 )
        LODWORD(v40) = (_DWORD)ptr;
      sub_1D2A0(
        (unsigned int)"%s: %s, expected format: YYYY-MM-DD | +Nd | +Nw | DD-MON-YYYY\n",
        (_DWORD)v40,
        *(_QWORD *)(a4 + 16),
        v10,
        v11,
        v12);
      if ( ptr )
      {
        *(_QWORD *)&v54 = 0;
        j__free(ptr);
        return 0;
      }
      return 0;
    case 8u:
      v19 = sub_2BE80(
              *(_QWORD *)(a4 + 8),
              (unsigned int)"%02X-%02X%02X-%02X%02X-%02X",
              (unsigned int)v55,
              (unsigned int)v56,
              (unsigned int)v57,
              (unsigned int)v58,
              v59,
              v60);
      v16 = v47;
      if ( v19 != 6 )
        goto LABEL_10;
      for ( j = 0; j != 6; ++j )
      {
        v21 = v55[j];
        *((_BYTE *)a1 + j + 64) = v21;
      }
      if ( a3 <= 2 )
      {
        sub_1D2A0(
          (unsigned int)"force-return requires username@hostname argument\n",
          (unsigned int)"%02X-%02X%02X-%02X%02X-%02X",
          v21,
          v14,
          v15,
          v47);
        return 0;
      }
      v22 = *(const char **)(a4 + 16);
      s = nullptr;
      v52 = 0;
      if ( !v22 )
        goto LABEL_52;
      v23 = strlen(v22);
      v24 = v23 + 1;
      v25 = v23;
      v26 = (char *)sub_29E60(&s, 0, v23 + 1, 1);
      *(_QWORD *)&v52 = v24;
      s = v26;
      memmove(v26, v22, v25);
      s[v25] = 0;
      if ( (_QWORD)v52
        && (v27 = v52 - 1, src = s, v28 = strchr(s, 64), v15 = (int)src, v28)
        && (v29 = (_DWORD)v28 - (_DWORD)src, (_DWORD)v28 - (_DWORD)src != -1) )
      {
        v30 = v29;
        v54 = 0;
        ptr = nullptr;
        if ( v29 > v27 )
          v30 = v27;
        v31 = 0;
        v32 = nullptr;
        if ( v30 )
        {
          v41 = (void *)sub_29E60(&ptr, 0, v30 + 1, 1);
          *(_QWORD *)&v54 = v30 + 1;
          ptr = v41;
          memmove(v41, src, v30);
          *((_BYTE *)ptr + v30) = 0;
          v32 = ptr;
          v31 = *((_QWORD *)&v54 + 1);
          v30 = v54;
        }
        v33 = (void *)a1[1];
        ptr = nullptr;
        v54 = 0;
        if ( v33 )
        {
          a1[2] = 0;
          srca = v32;
          j__free(v33);
          v34 = ptr;
          a1[2] = v30;
          a1[3] = v31;
          a1[1] = srca;
          if ( v34 )
          {
            *(_QWORD *)&v54 = 0;
            j__free(v34);
          }
        }
        else
        {
          a1[1] = v32;
          a1[2] = v30;
          a1[3] = v31;
        }
        v35 = v29 + 1;
        if ( !(_QWORD)v52 )
          goto LABEL_27;
        v42 = s;
        ptr = nullptr;
        v54 = 0;
        if ( v35 > (__int64)v52 - 1 )
          v35 = v52 - 1;
        v43 = v52 - 1 - v35;
        v44 = v43;
        if ( v43 )
        {
          v45 = nullptr;
          v46 = (void *)(v52 - v35);
          if ( v43 != -1 )
          {
            srcb = (void *)(v52 - v35);
            ptr = (void *)sub_29E60(&ptr, 0, v46, 1);
            v46 = srcb;
            v45 = ptr;
          }
          *(_QWORD *)&v54 = v46;
          memmove(v45, &v42[v35], v44);
          *((_BYTE *)ptr + v44) = 0;
          v36 = ptr;
          v37 = v54;
        }
        else
        {
LABEL_27:
          v36 = nullptr;
          v37 = 0u;
        }
        v38 = (void *)a1[4];
        ptr = nullptr;
        v54 = 0;
        if ( v38 )
        {
          a1[5] = 0;
          j__free(v38);
          v39 = ptr;
          a1[4] = v36;
          *(_OWORD *)(a1 + 5) = v37;
          if ( v39 )
          {
            *(_QWORD *)&v54 = 0;
            j__free(v39);
          }
        }
        else
        {
          a1[4] = v36;
          *(_OWORD *)(a1 + 5) = v37;
        }
        if ( a1[2] > 1u && a1[5] > 1u )
        {
          if ( s )
          {
            *(_QWORD *)&v52 = 0;
            j__free(s);
          }
          return a2;
        }
        sub_1D2A0((unsigned int)"Invalid username@hostname format: %s\n", *(_QWORD *)(a4 + 16), v21, v14, v15, v16);
      }
      else
      {
        v22 = *(const char **)(a4 + 16);
LABEL_52:
        sub_1D2A0((unsigned int)"Invalid username@hostname format: %s\n", (_DWORD)v22, v21, v14, v15, v16);
      }
      if ( !s )
        return 0;
      *(_QWORD *)&v52 = 0;
      j__free(s);
      return 0;
    default:
      return 0;
  }
}

