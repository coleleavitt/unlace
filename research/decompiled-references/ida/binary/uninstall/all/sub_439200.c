__int64 __fastcall sub_439200(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebp
  int v9; // r13d
  int v10; // r15d
  int v11; // r14d
  int v12; // r12d
  int v13; // edx
  int *v14; // rbx
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ebp
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r14
  bool v27; // zf
  int v28; // eax
  const void *v29; // rsi
  int v30; // eax
  int v31; // eax
  int v32; // r8d
  int v33; // r9d
  int v34; // ecx
  __int64 v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // rax
  char *v38; // rbx
  char *v39; // rbx
  _DWORD *v40; // rcx
  int v41; // r12d
  int v42; // esi
  int v43; // r13d
  char *v44; // rbx
  int *v45; // r15
  int *v46; // rbp
  int v47; // edx
  _BYTE *v48; // rbx
  int v49; // r12d
  int *v50; // rbp
  int v51; // edx
  _BYTE *v52; // rbx
  int v53; // r12d
  __int64 v54; // rsi
  int v55; // edx
  _BYTE *v56; // rbx
  int v57; // r12d
  int *v58; // rbp
  int v59; // edx
  _BYTE *v60; // rbx
  __int64 v61; // rax
  void (__fastcall *v62)(__int64, __int64); // rax
  __int64 result; // rax
  __int64 v64; // rdx
  int v65; // [rsp+4h] [rbp-84h]
  int v66; // [rsp+8h] [rbp-80h]
  int v67; // [rsp+Ch] [rbp-7Ch]
  __int64 v68; // [rsp+10h] [rbp-78h]
  __int64 v69; // [rsp+18h] [rbp-70h]
  int v70; // [rsp+20h] [rbp-68h]
  __int64 v71; // [rsp+28h] [rbp-60h]
  int v72; // [rsp+34h] [rbp-54h]
  size_t n; // [rsp+38h] [rbp-50h]
  __int64 *v74; // [rsp+40h] [rbp-48h]
  char v75[52]; // [rsp+54h] [rbp-34h] BYREF

  v6 = *a2;
  v7 = *((_DWORD *)a2 + 38);
  v74 = a2;
  v72 = v7;
  if ( !*a2 )
  {
    sub_47D740((unsigned int)"TclInitByteCodeObj() called on uninitialized CompileEnv", (_DWORD)a2, a3, 0, a5, a6);
    v7 = *((_DWORD *)a2 + 38);
    v6 = *a2;
  }
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v70 = 8 * v7;
  v11 = 0;
  v12 = 0;
  v71 = v6;
  v66 = 0;
  v65 = 0;
  n = a2[15] - a2[14];
  v69 = 28LL * *((int *)a2 + 44);
  v68 = 16LL * *((int *)a2 + 54);
  v13 = *((_DWORD *)a2 + 8);
  v67 = v13;
  if ( v13 > 0 )
  {
    v14 = (int *)a2[24];
    do
    {
      v15 = *v14 - v8;
      if ( v15 < 0 )
      {
        sub_47D740((unsigned int)"GetCmdLocEncodingSize: bad code offset", (_DWORD)a2, v13, v15, a5, a6);
      }
      else
      {
        v16 = v11 + 1;
        v17 = v11 + 5;
        ++v11;
        if ( v15 > 127 )
          v11 = v17;
      }
      v18 = v14[1];
      v8 = *v14;
      if ( v18 < 0 )
      {
        sub_47D740((unsigned int)"GetCmdLocEncodingSize: bad code length", (_DWORD)a2, v16, v18, a5, a6);
      }
      else
      {
        v19 = v10 + 5;
        ++v10;
        if ( v18 > 127 )
          v10 = v19;
      }
      LODWORD(a2) = v14[2];
      v20 = v9 + 5;
      ++v9;
      v21 = v14[3];
      v22 = (_DWORD)a2 - v65;
      v65 = (int)a2;
      if ( (unsigned int)(v22 + 127) > 0xFE )
        v9 = v20;
      if ( v21 < 0 )
      {
        sub_47D740((unsigned int)"GetCmdLocEncodingSize: bad source length", (_DWORD)a2, v20, v21, a5, a6);
      }
      else
      {
        v13 = v66 + 1;
        if ( v21 > 127 )
          v13 = v66 + 5;
        v66 = v13;
      }
      ++v12;
      v14 += 4;
    }
    while ( v12 < v67 );
    v6 = *v74;
  }
  v23 = v66 + v9 + v11 + v10;
  v24 = *(__int64 **)(v6 + 168);
  if ( v24 )
    v25 = *v24;
  else
    v25 = *(_QWORD *)(v6 + 40);
  v26 = sub_40FB00(v23 + v68 + ((v69 + 7) & 0xFFFFFFF8) + ((n + 7) & 0xFFFFFFF8) + v70 + 176);
  *(_QWORD *)v26 = sub_487840(*(_QWORD *)(v71 + 32));
  v27 = *(_QWORD *)(v25 + 384) == 0;
  *(_QWORD *)(v26 + 16) = v25;
  *(_DWORD *)(v26 + 8) = *(_DWORD *)(v71 + 392);
  v28 = *(_DWORD *)(v25 + 364);
  *(_DWORD *)(v26 + 28) = 1;
  *(_DWORD *)(v26 + 24) = v28;
  if ( v27 && !*(_QWORD *)(v71 + 408) )
    *(_DWORD *)(v26 + 32) = 0;
  else
    *(_DWORD *)(v26 + 32) = 2;
  *(_QWORD *)(v26 + 104) = v26 + 176;
  v29 = (const void *)v74[14];
  *(_QWORD *)(v26 + 40) = v74[1];
  *(_QWORD *)(v26 + 48) = v74[3];
  *(_DWORD *)(v26 + 64) = *((_DWORD *)v74 + 8);
  v30 = *((_DWORD *)v74 + 4);
  *(_DWORD *)(v26 + 72) = n;
  *(_DWORD *)(v26 + 68) = v30;
  *(_DWORD *)(v26 + 76) = v72;
  *(_DWORD *)(v26 + 80) = *((_DWORD *)v74 + 44);
  v31 = *((_DWORD *)v74 + 54);
  *(_DWORD *)(v26 + 88) = v23;
  *(_DWORD *)(v26 + 84) = v31;
  *(_DWORD *)(v26 + 92) = *((_DWORD *)v74 + 10);
  *(_DWORD *)(v26 + 96) = *((_DWORD *)v74 + 11);
  memcpy((void *)(v26 + 176), v29, n);
  v34 = 0;
  v35 = (int)((n + 7) & 0xFFFFFFF8) + v26 + 176;
  *(_QWORD *)(v26 + 112) = v35;
  if ( v72 > 0 )
  {
    v36 = v74[18];
    do
    {
      v37 = v34++;
      *(_QWORD *)(v35 + 8 * v37) = *(_QWORD *)(32 * v37 + v36 + 8);
    }
    while ( v34 < v72 );
  }
  v38 = (char *)(v70 + v35);
  if ( v69 )
  {
    *(_QWORD *)(v26 + 120) = v38;
    memcpy(v38, (const void *)v74[21], v69);
  }
  else
  {
    *(_QWORD *)(v26 + 120) = 0;
  }
  v39 = &v38[(v69 + 7) & 0xFFFFFFF8];
  if ( v68 )
  {
    *(_QWORD *)(v26 + 128) = v39;
    memcpy(v39, (const void *)v74[26], v68);
  }
  else
  {
    *(_QWORD *)(v26 + 128) = 0;
  }
  LODWORD(v40) = v68;
  v41 = 0;
  v42 = 0;
  v43 = *((_DWORD *)v74 + 8);
  v44 = &v39[v68];
  v45 = (int *)v74[24];
  *(_QWORD *)(v26 + 136) = v44;
  if ( v43 > 0 )
  {
    v46 = v45;
    while ( 1 )
    {
      v47 = *v46 - v42;
      if ( v47 < 0 )
        break;
      if ( v47 <= 127 )
      {
        *v44++ = v47;
LABEL_34:
        ++v41;
        v42 = *v46;
        v46 += 4;
        if ( v41 >= v43 )
          goto LABEL_38;
      }
      else
      {
        *v44 = -1;
        v48 = v44 + 1;
        ++v41;
        v48[3] = v47;
        *v48 = HIBYTE(v47);
        v48[1] = BYTE2(v47);
        v48[2] = BYTE1(v47);
        v44 = v48 + 4;
        v42 = *v46;
        v46 += 4;
        if ( v41 >= v43 )
          goto LABEL_38;
      }
    }
    sub_47D740((unsigned int)"EncodeCmdLocMap: bad code offset", v42, v47, (_DWORD)v40, v32, v33);
    goto LABEL_34;
  }
LABEL_38:
  v49 = 0;
  *(_QWORD *)(v26 + 144) = v44;
  if ( v43 > 0 )
  {
    v50 = v45 + 1;
    while ( 1 )
    {
      v51 = *v50;
      if ( *v50 < 0 )
        break;
      if ( v51 <= 127 )
      {
        *v44++ = v51;
LABEL_41:
        ++v49;
        v50 += 4;
        if ( v49 >= v43 )
          goto LABEL_45;
      }
      else
      {
        *v44 = -1;
        v52 = v44 + 1;
        ++v49;
        v52[3] = v51;
        *v52 = HIBYTE(v51);
        v50 += 4;
        v52[1] = BYTE2(v51);
        v52[2] = BYTE1(v51);
        v44 = v52 + 4;
        if ( v49 >= v43 )
          goto LABEL_45;
      }
    }
    sub_47D740((unsigned int)"EncodeCmdLocMap: bad code length", v42, v51, (_DWORD)v40, v32, v33);
    goto LABEL_41;
  }
LABEL_45:
  v53 = 0;
  v54 = 0;
  *(_QWORD *)(v26 + 152) = v44;
  if ( v43 > 0 )
  {
    v40 = v45 + 2;
    do
    {
      while ( 1 )
      {
        v55 = *v40 - v54;
        if ( (unsigned int)(v55 + 127) > 0xFE )
          break;
        ++v53;
        *v44++ = v55;
        v54 = (unsigned int)*v40;
        v40 += 4;
        if ( v53 >= v43 )
          goto LABEL_50;
      }
      *v44 = -1;
      v56 = v44 + 1;
      ++v53;
      v56[3] = v55;
      *v56 = HIBYTE(v55);
      v56[1] = BYTE2(v55);
      v56[2] = BYTE1(v55);
      v44 = v56 + 4;
      v54 = (unsigned int)*v40;
      v40 += 4;
    }
    while ( v53 < v43 );
  }
LABEL_50:
  v57 = 0;
  *(_QWORD *)(v26 + 160) = v44;
  if ( v43 > 0 )
  {
    v58 = v45 + 3;
    while ( 1 )
    {
      v59 = *v58;
      if ( *v58 < 0 )
        break;
      if ( v59 <= 127 )
      {
        *v44++ = v59;
LABEL_53:
        ++v57;
        v58 += 4;
        if ( v57 >= v43 )
          goto LABEL_57;
      }
      else
      {
        *v44 = -1;
        v60 = v44 + 1;
        ++v57;
        v60[3] = v59;
        *v60 = HIBYTE(v59);
        v58 += 4;
        v60[1] = BYTE2(v59);
        v60[2] = BYTE1(v59);
        v44 = v60 + 4;
        if ( v57 >= v43 )
          goto LABEL_57;
      }
    }
    sub_47D740((unsigned int)"EncodeCmdLocMap: bad source length", v54, v59, (_DWORD)v40, v32, v33);
    goto LABEL_53;
  }
LABEL_57:
  v61 = *(_QWORD *)(a1 + 24);
  if ( v61 )
  {
    v62 = *(void (__fastcall **)(__int64, __int64))(v61 + 8);
    if ( v62 )
      v62(a1, v54);
  }
  *(_QWORD *)(a1 + 32) = v26;
  *(_QWORD *)(a1 + 24) = &off_6543C0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)(v71 + 984) + 72LL))(
             *(_QWORD *)(v71 + 984),
             v26,
             v75);
  *(_QWORD *)(v26 + 168) = 0;
  v64 = v74[408];
  *v74 = 0;
  v74[408] = 0;
  *(_QWORD *)(result + 24) = v64;
  return result;
}

