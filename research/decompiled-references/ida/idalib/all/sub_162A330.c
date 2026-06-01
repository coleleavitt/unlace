__int64 __fastcall sub_162A330(_QWORD *a1, int a2, __int64 a3, unsigned int a4, int a5, char a6, double a7)
{
  bool v7; // r15
  bool v8; // r14
  unsigned int v9; // r13d
  unsigned __int64 v10; // rax
  _DWORD *v11; // r12
  __int64 v13; // rbp
  __int64 v14; // rbx
  unsigned __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  size_t v20; // rax
  unsigned int v21; // eax
  int v22; // edx
  char v23; // r13
  int v24; // r12d
  __int64 v25; // rbx
  __int64 v26; // r15
  int v27; // ebp
  char v28; // si
  size_t v29; // rax
  char v30; // al
  char *v31; // rcx
  size_t v32; // rax
  char v33; // al
  char *v34; // r13
  size_t v35; // rax
  char *v36; // rcx
  unsigned int v37; // eax
  _QWORD *v38; // r13
  size_t v39; // rax
  bool v40; // zf
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rsi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  _QWORD *v45; // rdx
  char *v46; // r13
  size_t v47; // rax
  char v48; // al
  _QWORD *v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rax
  size_t v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  char *v56; // r13
  size_t v57; // rax
  char *v58; // rdi
  _BYTE *v60; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v61; // [rsp+8h] [rbp-1C0h]
  char *v62; // [rsp+8h] [rbp-1C0h]
  _DWORD *v63; // [rsp+20h] [rbp-1A8h]
  int v64; // [rsp+28h] [rbp-1A0h]
  __int64 v65; // [rsp+28h] [rbp-1A0h]
  __int64 v66; // [rsp+30h] [rbp-198h]
  __int64 v67; // [rsp+48h] [rbp-180h] BYREF
  __int64 v68; // [rsp+50h] [rbp-178h] BYREF
  __int64 v69; // [rsp+58h] [rbp-170h]
  _BYTE *v70; // [rsp+60h] [rbp-168h] BYREF
  __int64 v71; // [rsp+68h] [rbp-160h]
  _BYTE v72[12]; // [rsp+70h] [rbp-158h] BYREF
  __int64 v73; // [rsp+7Ch] [rbp-14Ch]
  void *ptr; // [rsp+90h] [rbp-138h] BYREF
  __int64 v75; // [rsp+98h] [rbp-130h]
  _BYTE v76[96]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD v77[2]; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+110h] [rbp-B8h]
  int v79; // [rsp+118h] [rbp-B0h]

  if ( a2 == 5966 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 1;
    if ( (unsigned int)(a2 - 5962) > 2 )
      v7 = (a2 & 0xFFFFFFFD) == 5965;
    if ( (unsigned int)(a2 - 11965) <= 1 )
    {
      v8 = 1;
      goto LABEL_6;
    }
  }
  v8 = 1;
  if ( (unsigned int)(a2 - 11960) > 3 )
    v8 = a2 == 11967 || a2 == 11964;
LABEL_6:
  v9 = 0;
  v10 = a4 + (unsigned __int64)((*(_BYTE *)(a3 + 2) & 8) != 0);
  v11 = *(_DWORD **)(a3 + 8 * v10 + 40);
  if ( ((*v11 >> 14) & 0xC) != 0 )
    return v9;
  v13 = (__int64)a1;
  v14 = a3;
  v16 = sub_BFBAE0(*(_QWORD *)(a3 + 8 * v10 + 40));
  if ( (*(_WORD *)v16 & 0x1FF) != 9 )
  {
    v17 = sub_BF6D70(v14);
    sub_168B9F0(v77, a1, v17, 3798, 0);
    ptr = (void *)sub_EEC8C0((unsigned __int64)v11, (__int64)a1, a7);
    v9 = *(unsigned __int8 *)(sub_1587DB0((__int64)v77, (__int64 *)&ptr) + 120);
    sub_15F7200(v77);
    return v9;
  }
  v18 = *(unsigned int *)(v16 + 4);
  v19 = *(_DWORD *)(v16 + 16) * ((*(_WORD *)(v16 + 2) >> 6) & 7u);
  v75 = 0x600000000LL;
  v68 = v16 + 4 * v18 + 20;
  v69 = v19;
  ptr = v76;
  v20 = j__strlen(":");
  sub_22471D0(&v68, &ptr, ":", v20, 0xFFFFFFFFLL, 1);
  if ( a5 != (_DWORD)v75 )
  {
    if ( (unsigned int)v75 != 1 || a6 != 1 )
    {
      v21 = sub_BF6D70(v14);
      sub_168B9F0(v77, a1, v21, 3064, 0);
      v70 = (_BYTE *)sub_EEC8C0((unsigned __int64)v11, (__int64)a1, a7);
      v9 = *(unsigned __int8 *)(sub_1587DB0((__int64)v77, (__int64 *)&v70) + 120);
      sub_15F7200(v77);
      goto LABEL_17;
    }
    goto LABEL_37;
  }
  if ( (unsigned int)v75 <= 1uLL )
  {
LABEL_37:
    if ( (unsigned int)v75 != 1 || !v8 || *(_DWORD *)(v14 + 16) != 2 || (a2 & 0xFFFFFFFB) == 0x2EBA )
      goto LABEL_34;
    v79 = 0;
    v77[0] = v68;
    LODWORD(v70) = 15;
    v77[1] = v69;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"spsel", 5);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"daifclr", 7);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"daifset", 7);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"pan", 3);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"uao", 3);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"dit", 3);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"ssbs", 4);
    LODWORD(v70) = 15;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"tco", 3);
    LODWORD(v70) = 1;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"allint", 6);
    LODWORD(v70) = 1;
    BYTE4(v70) = 1;
    sub_1628150((__int64)v77, &v70, (__int64)"pm", 2);
    v9 = (unsigned __int8)v79;
    if ( (_BYTE)v79 )
    {
      if ( !BYTE4(v78) )
        goto LABEL_34;
      v9 = sub_16D5460(*a1, v14, 1, 0, v78, 1);
    }
    goto LABEL_17;
  }
  if ( v7 )
  {
    v61 = (unsigned int)v75;
    v29 = j__strlen("cp");
    v30 = sub_2246340(ptr, "cp", v29);
    v31 = (char *)v61;
    if ( v30 || (v32 = j__strlen("p"), v33 = sub_2246340(ptr, "p", v32), v31 = (char *)v61, v33) )
    {
      v38 = ptr;
      v62 = v31;
      v39 = j__strlen("cp");
      v40 = (unsigned __int8)sub_2246340(v38, "cp", v39) == 0;
      v41 = v38[1];
      v42 = 0;
      v43 = !v40 + 1LL;
      if ( v43 <= v41 )
      {
        v42 = v41 - v43;
        v41 = !v40 + 1LL;
      }
      v44 = *v38 + v41;
      v45 = ptr;
      *((_QWORD *)ptr + 1) = v42;
      *v45 = v44;
      v46 = (char *)ptr + 32;
      v47 = j__strlen("c");
      v48 = sub_2246340(v46, "c", v47);
      v36 = v62;
      v23 = v48;
      if ( v48 )
      {
        v49 = ptr;
        v50 = 0;
        v51 = *((_QWORD *)ptr + 5);
        if ( v51 )
        {
          --v51;
          v50 = 1;
        }
        *((_QWORD *)ptr + 4) += v50;
        v49[5] = v51;
        if ( v62 != &byte_5 )
          goto LABEL_49;
        v52 = j__strlen("c");
        v23 = sub_2246340(v49 + 6, "c", v52);
        if ( v23 )
        {
          v53 = ptr;
          v54 = 0;
          v55 = *((_QWORD *)ptr + 7);
          if ( v55 )
          {
            --v55;
            v54 = 1;
          }
          *((_QWORD *)ptr + 6) += v54;
          v53[7] = v55;
        }
        goto LABEL_64;
      }
    }
    else
    {
      v34 = (char *)ptr + 32;
      v35 = j__strlen("c");
      sub_2246340(v34, "c", v35);
      v36 = (char *)v61;
    }
    if ( v36 != &byte_5 )
    {
      v23 = 0;
LABEL_49:
      v22 = v75;
      *(_DWORD *)&v72[8] = 4;
      v70 = v72;
      v71 = 0x500000003LL;
      *(_QWORD *)v72 = 0x300000004LL;
LABEL_24:
      if ( !v22 )
      {
        if ( v23 )
          goto LABEL_34;
        v60 = v70;
        goto LABEL_52;
      }
      goto LABEL_25;
    }
    v56 = (char *)ptr + 48;
    v57 = j__strlen("c");
    v58 = v56;
    v23 = 0;
    sub_2246340(v58, "c", v57);
LABEL_64:
    HIDWORD(v71) = 5;
    v22 = v75;
    v70 = v72;
    goto LABEL_23;
  }
  v70 = v72;
  v71 = 0x500000000LL;
  if ( (unsigned int)v75 == 5 )
  {
    v22 = 5;
    v23 = 1;
LABEL_23:
    LODWORD(v71) = 5;
    *(_DWORD *)v72 = !v8 ? 4 : 2;
    *(_QWORD *)&v72[4] = 0x400000003LL;
    v73 = 0x300000004LL;
    goto LABEL_24;
  }
  *(_DWORD *)&v72[8] = 4;
  v23 = 1;
  *(_QWORD *)v72 = 0x300000004LL;
  LODWORD(v71) = 3;
  if ( !a5 )
    goto LABEL_34;
LABEL_25:
  v63 = v11;
  v24 = v64;
  v66 = v14;
  v25 = 0;
  v60 = v70;
  v26 = (__int64)v70;
  v65 = v13;
  v27 = 0;
  do
  {
    if ( (unsigned __int8)sub_2247A50(*((_QWORD *)ptr + 2 * v25), *((_QWORD *)ptr + 2 * v25 + 1), 10, v77)
      || (v28 = 1, v24 = v77[0], v77[0] != SLODWORD(v77[0])) )
    {
      v28 = 0;
      if ( v24 >= 0 )
      {
LABEL_29:
        v23 &= v28 & (1 << *(_DWORD *)(v26 + 4 * v25) > v24);
        goto LABEL_30;
      }
    }
    else if ( SLODWORD(v77[0]) >= 0 )
    {
      goto LABEL_29;
    }
    v23 = 0;
LABEL_30:
    v25 = (unsigned int)(v27 + 1);
    v27 = v25;
  }
  while ( (unsigned int)v25 < (unsigned int)v75 );
  v11 = v63;
  v13 = v65;
  v14 = v66;
  if ( !v23 )
  {
LABEL_52:
    v37 = sub_BF6D70(v14);
    sub_168B9F0(v77, v13, v37, 3064, 0);
    v67 = sub_EEC8C0((unsigned __int64)v11, v13, a7);
    v9 = *(unsigned __int8 *)(sub_1587DB0((__int64)v77, &v67) + 120);
    sub_15F7200(v77);
    if ( v60 != v72 )
      free(v60);
    goto LABEL_17;
  }
  if ( v60 != v72 )
    free(v60);
LABEL_34:
  v9 = 0;
LABEL_17:
  if ( ptr != v76 )
    free(ptr);
  return v9;
}
