__int64 __fastcall sub_148DF40(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __m128i a5, __m128 a6)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // r13d
  unsigned int v11; // r14d
  size_t v12; // rax
  _DWORD *v13; // rdx
  int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // r13d
  _DWORD *v18; // r8
  int v19; // eax
  char v20; // al
  __int16 v21; // ax
  __int64 v23; // r15
  unsigned int v24; // r12d
  unsigned int *v25; // rax
  size_t v26; // r14
  const void *v27; // rbx
  size_t v28; // rax
  __int64 v29; // rbx
  unsigned int v30; // eax
  int *v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rsi
  int v34; // eax
  int v35; // eax
  __int128 v36; // kr00_16
  __int64 v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 *v40; // rdi
  __int64 *v41; // rdi
  __int16 v42; // ax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  unsigned __int64 v46; // rax
  __int16 v47; // ax
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 *v53; // rdi
  __int16 v54; // ax
  __int64 *v55; // rdi
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rsi
  _DWORD *v59; // [rsp+0h] [rbp-168h]
  unsigned __int8 v60; // [rsp+0h] [rbp-168h]
  _BYTE *s1; // [rsp+8h] [rbp-160h]
  unsigned int v63; // [rsp+24h] [rbp-144h]
  __int64 v64; // [rsp+44h] [rbp-124h]
  __int128 v65; // [rsp+50h] [rbp-118h]
  _BYTE *v66; // [rsp+60h] [rbp-108h] BYREF
  char v67; // [rsp+68h] [rbp-100h]
  __int64 v68; // [rsp+70h] [rbp-F8h]
  int v69; // [rsp+78h] [rbp-F0h]
  __int16 v70; // [rsp+7Ch] [rbp-ECh]
  __int64 (__fastcall *v71)(__int64); // [rsp+80h] [rbp-E8h]
  __int64 v72; // [rsp+88h] [rbp-E0h]
  __int64 v73; // [rsp+90h] [rbp-D8h]
  _DWORD v74[6]; // [rsp+A0h] [rbp-C8h] BYREF
  void *v75; // [rsp+B8h] [rbp-B0h]
  char v76; // [rsp+C8h] [rbp-A0h] BYREF
  unsigned __int8 *v77[17]; // [rsp+E0h] [rbp-88h] BYREF

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v9 = a4;
  v10 = *(_DWORD *)(a4 + 16);
  if ( (unsigned int)sub_FBCE00(
                       4u,
                       0,
                       a2,
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL),
                       *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL)) )
  {
    v11 = *(_DWORD *)(a1 + 16);
    v12 = j__strlen("property");
    v13 = *(_DWORD **)(a2 + 16);
    if ( v12 == *v13 )
    {
      v18 = v13 + 4;
      if ( !v12 || (v59 = v13 + 4, v19 = memcmp(v13 + 4, "property", v12), v18 = v59, !v19) )
      {
        v66 = (_BYTE *)(a1 + 1952);
        v20 = *(_BYTE *)(a1 + 1952);
        *(_BYTE *)(a1 + 1952) = 1;
        v67 = v20;
        v71 = sub_146A990;
        v68 = a1;
        v69 = 1507350;
        v70 = 63;
        v72 = 0;
        v73 = 0;
        sub_156A040(&v66, 1625, v18, 23);
        v21 = *(_WORD *)(a1 + 32);
        v65 = 0;
        if ( v21 == 5 )
        {
          v60 = 0;
          v63 = v7;
          v23 = v9;
          while ( 1 )
          {
            v24 = *(_DWORD *)(a1 + 16);
            v25 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
            v26 = *v25;
            v27 = v25 + 4;
            s1 = v25 + 4;
            if ( j__strlen("get") == v26 )
            {
              if ( !v26 || !memcmp(v27, "get", v26) )
              {
                v30 = v24;
                v29 = 1;
LABEL_24:
                *(_DWORD *)(a1 + 40) = v30;
                v31 = (int *)(a1 + 16);
                sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
                if ( *(_WORD *)(a1 + 32) != 64 )
                {
                  v9 = v23;
                  v7 = v63;
                  v32 = *(unsigned int *)(a1 + 16);
                  v33 = a1;
                  v8 = a2;
                  sub_1564820(v77, v33, v32, 1744);
                  sub_AEC220(v77, s1, v26);
                  sub_AEA040((__int64)v77);
                  v16 = v60 ^ 1;
                  goto LABEL_26;
                }
                v40 = *(__int64 **)(a1 + 8);
                *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                sub_14634E0(v40, (int *)(a1 + 16));
                if ( *(_WORD *)(a1 + 32) != 5 )
                {
                  v9 = v23;
                  v7 = v63;
                  v57 = *(unsigned int *)(a1 + 16);
                  v58 = a1;
                  v8 = a2;
                  sub_1564820(v77, v58, v57, 1742);
                  sub_AEA040((__int64)v77);
                  v16 = v60 ^ 1;
                  goto LABEL_26;
                }
                if ( (_DWORD)v29 != -1 )
                {
                  if ( *((_QWORD *)&v65 + v29) )
                  {
                    sub_1564820(v77, a1, v24, 1741);
                    sub_AEC220(v77, s1, v26);
                    sub_AEA040((__int64)v77);
                  }
                  else
                  {
                    if ( !sub_1477AB0(5) )
                      v56 = *(_QWORD *)(a1 + 24);
                    *((_QWORD *)&v65 + v29) = v56;
                  }
                }
                v41 = *(__int64 **)(a1 + 8);
                *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
                sub_14634E0(v41, (int *)(a1 + 16));
                goto LABEL_42;
              }
              if ( v26 != j__strlen("put") )
              {
                if ( j__strlen("set") != v26 )
                  goto LABEL_50;
LABEL_15:
                if ( !memcmp(s1, "set", v26) )
                  goto LABEL_16;
                goto LABEL_50;
              }
            }
            else
            {
              if ( v26 != j__strlen("put") )
              {
                if ( v26 != j__strlen("set") )
                  goto LABEL_50;
                if ( !v26 )
                {
LABEL_16:
                  sub_1564820(v77, a1, v24, 1745);
                  v28 = j__strlen("put");
                  LODWORD(v64) = v24;
                  HIDWORD(v64) = v24;
                  sub_1478E60((__int64)v74, v64, 1, "put", v28);
                  if ( v74[0] && v74[1] )
                    sub_1480470((__int64 *)v77, (unsigned __int64)v74);
                  if ( v75 != &v76 )
                    operator delete(v75);
                  v29 = 0;
                  sub_AEA040((__int64)v77);
                  v30 = *(_DWORD *)(a1 + 16);
                  goto LABEL_24;
                }
                goto LABEL_15;
              }
              if ( !v26 )
              {
                v30 = v24;
                v29 = 0;
                goto LABEL_24;
              }
            }
            v35 = memcmp(s1, "put", v26);
            v29 = v35;
            if ( !v35 )
            {
              v30 = v24;
              goto LABEL_24;
            }
            if ( v26 == j__strlen("set") )
              goto LABEL_15;
LABEL_50:
            v45 = *(_QWORD *)(a1 + 8);
            v46 = *(_QWORD *)(v45 + 2944);
            if ( v46 >= *(unsigned int *)(v45 + 2912) )
            {
              if ( *(_WORD *)(sub_14180A0(v45, 1u) + 16) == 66 )
                goto LABEL_65;
              v51 = *(_QWORD *)(a1 + 8);
              v52 = *(_QWORD *)(v51 + 2944);
              if ( v52 < *(unsigned int *)(v51 + 2912) )
                v47 = *(_WORD *)(*(_QWORD *)(v51 + 2904) + 24 * v52 + 16);
              else
                v47 = *(_WORD *)(sub_14180A0(v51, 1u) + 16);
            }
            else
            {
              v47 = *(_WORD *)(*(_QWORD *)(v45 + 2904) + 24 * v46 + 16);
              if ( v47 == 66 )
                goto LABEL_65;
            }
            if ( v47 != 23 )
            {
              sub_1564820(v77, a1, v24, 1749);
              sub_AEA040((__int64)v77);
              v48 = *(_QWORD *)(a1 + 8);
              v49 = *(_QWORD *)(v48 + 2944);
              if ( v49 >= *(unsigned int *)(v48 + 2912) )
                v50 = sub_14180A0(v48, 1u);
              else
                v50 = *(_QWORD *)(v48 + 2904) + 24 * v49;
              if ( *(_WORD *)(v50 + 16) != 64 )
              {
                v16 = 0;
                goto LABEL_27;
              }
              v30 = *(_DWORD *)(a1 + 16);
              v29 = -1;
              v60 = 1;
              goto LABEL_24;
            }
LABEL_65:
            v31 = (int *)(a1 + 16);
            sub_1564820(v77, a1, v24, 1747);
            sub_AEA040((__int64)v77);
            v55 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v55, (int *)(a1 + 16));
            v60 = 1;
LABEL_42:
            v42 = *(_WORD *)(a1 + 32);
            if ( v42 != 66 )
            {
              v9 = v23;
              v7 = v63;
              v6 = a1;
              v8 = a2;
              v16 = v60 ^ 1;
              if ( v42 == 23 )
                goto LABEL_26;
              v43 = *(unsigned int *)(v6 + 16);
              v44 = 1743;
              goto LABEL_45;
            }
            v53 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
            sub_14634E0(v53, v31);
            v54 = *(_WORD *)(a1 + 32);
            if ( v54 != 5 )
            {
              v9 = v23;
              v7 = v63;
              v6 = a1;
              v8 = a2;
              if ( v60 | (v54 != 23) )
              {
                v16 = v60 ^ 1;
              }
              else
              {
                v60 = 0;
                v16 = 1;
                if ( !(_QWORD)v65 )
                  goto LABEL_71;
              }
              goto LABEL_64;
            }
          }
        }
        v16 = 1;
        v60 = 0;
        if ( v21 == 23 )
        {
LABEL_71:
          if ( !*((_QWORD *)&v65 + 1) )
          {
            sub_1564820(v77, v6, (unsigned int)v7, 1748);
            v16 = 1;
            sub_AEA040((__int64)v77);
LABEL_36:
            v36 = v65;
            v37 = sub_15D92D0(*(_QWORD *)(v9 + 40), 96);
            sub_14798C0(v37, v8, 0, 0, v7 | (v7 << 32), 244);
            v38 = *(_QWORD *)(v37 + 56);
            *(_QWORD *)(v37 + 40) = 0;
            *(_QWORD *)(v37 + 48) = 0;
            *(_QWORD *)(v37 + 56) = v38 & 0x7F800000 | 0x100000;
            *(_QWORD *)(v37 + 72) = sub_15D7D80(v37);
            v39 = (_QWORD *)(v37
                           + 16LL * ((*(_BYTE *)(v37 + 58) & 8) != 0)
                           + 104LL * ((*(_BYTE *)(v37 + 58) & 4) != 0)
                           + 80
                           + 8
                           * (*(unsigned __int16 *)(v37 + 56) + (unsigned __int64)((*(_BYTE *)(v37 + 58) & 0x20) != 0)));
            *v39 = *((_QWORD *)&v36 + 1);
            v39[1] = v36;
            sub_147F4B0(v9 + 48, v37);
            sub_147F4B0(v9 + 8, v37);
LABEL_27:
            sub_156E210(&v66);
            *v66 = v67;
            return v16;
          }
          v16 = 1;
          v60 = 0;
        }
LABEL_64:
        v43 = *(unsigned int *)(v6 + 16);
        v44 = 1749;
LABEL_45:
        sub_1564820(v77, v6, v43, v44);
        sub_AEA040((__int64)v77);
LABEL_26:
        if ( v60 )
          goto LABEL_27;
        goto LABEL_36;
      }
    }
    v14 = sub_148B990(a1, a2, v7, v9, nullptr, 0, a5, a6, 0, 0xF4u);
    v15 = *(unsigned int *)(v9 + 16);
    if ( v10 >= (unsigned int)v15 )
      return 1;
    v34 = sub_15D8240(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * v15 - 8));
    if ( v14 || !v34 )
    {
      return 1;
    }
    else
    {
      v16 = 0;
      sub_1564820(v77, a1, v11, 1556);
      sub_1478560(v77, a2);
      sub_AEA040((__int64)v77);
    }
  }
  else
  {
    v16 = 0;
    sub_146A990(a1);
    LOWORD(v77[0]) = 23;
    sub_15680D0(a1, v77, 1, 0);
  }
  return v16;
}
