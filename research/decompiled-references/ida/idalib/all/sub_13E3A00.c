__int64 __fastcall sub_13E3A00(__int64 a1, int *a2, int a3, char *a4, size_t a5)
{
  __int64 v6; // r12
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int8 *v12; // r10
  int v13; // ecx
  unsigned __int8 *v14; // rbp
  unsigned int v15; // eax
  __int64 v16; // r10
  __int64 v17; // rsi
  unsigned __int8 *v18; // rax
  unsigned __int8 *v19; // rsi
  unsigned int v20; // eax
  unsigned int v21; // r11d
  unsigned __int8 *v22; // r10
  unsigned __int8 *v23; // r11
  signed __int64 v24; // rax
  _BYTE *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rdx
  unsigned __int8 *v28; // rsi
  unsigned int v29; // r14d
  unsigned __int8 *v30; // r15
  unsigned int v31; // eax
  unsigned __int8 *v32; // rax
  __int64 v33; // rbx
  int v34; // r13d
  unsigned int v35; // ecx
  _QWORD *v36; // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v43; // rdx
  int v44; // eax
  void **v45; // rbp
  unsigned __int64 v46; // rax
  void **v47; // r12
  void **v48; // rbx
  void **v49; // rdi
  void **v50; // rdi
  void **v51; // rbx
  void **v52; // r12
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rbx
  _QWORD *v58; // r12
  void *v59; // rdi
  __int64 v60; // [rsp+0h] [rbp-318h]
  unsigned int v61; // [rsp+8h] [rbp-310h]
  unsigned __int8 *v62; // [rsp+8h] [rbp-310h]
  signed __int64 v63; // [rsp+8h] [rbp-310h]
  unsigned __int8 *v64; // [rsp+8h] [rbp-310h]
  unsigned __int8 *v65; // [rsp+8h] [rbp-310h]
  unsigned __int8 *v67; // [rsp+20h] [rbp-2F8h]
  unsigned int v68; // [rsp+20h] [rbp-2F8h]
  __int64 v69; // [rsp+20h] [rbp-2F8h]
  int v70; // [rsp+28h] [rbp-2F0h]
  unsigned int v71; // [rsp+28h] [rbp-2F0h]
  unsigned int *v72; // [rsp+28h] [rbp-2F0h]
  unsigned int v73; // [rsp+28h] [rbp-2F0h]
  int v74; // [rsp+30h] [rbp-2E8h]
  __int16 v75; // [rsp+36h] [rbp-2E2h]
  __int64 v76; // [rsp+48h] [rbp-2D0h]
  unsigned __int8 *v77; // [rsp+50h] [rbp-2C8h]
  _BYTE *v78; // [rsp+58h] [rbp-2C0h] BYREF
  unsigned __int64 v79; // [rsp+64h] [rbp-2B4h]
  int v80; // [rsp+6Ch] [rbp-2ACh]
  void *v81; // [rsp+70h] [rbp-2A8h] BYREF
  unsigned __int64 v82; // [rsp+78h] [rbp-2A0h]
  __int64 v83; // [rsp+80h] [rbp-298h]
  void *v84; // [rsp+90h] [rbp-288h]
  __int64 v85; // [rsp+A0h] [rbp-278h] BYREF
  __int16 v86; // [rsp+B0h] [rbp-268h]
  void *ptr; // [rsp+C0h] [rbp-258h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-250h]
  _BYTE v89[576]; // [rsp+D8h] [rbp-240h] BYREF

  v6 = a1;
  v9 = sub_2219080(*(unsigned int *)(a1 + 40), a4, a5, a1 + 584);
  LODWORD(v10) = 0;
  if ( !v9 )
  {
    v75 = *(_WORD *)(a1 + 44);
    if ( v75 == 14 )
    {
      memcpy(*(void **)(a1 + 584), a4, a5);
      v11 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 584) += a5;
      if ( v11 )
      {
        v12 = v77;
        v13 = 1309;
        v60 = *(_QWORD *)a1;
        v74 = *a2;
        goto LABEL_5;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 24);
      if ( v11 )
      {
        v12 = v77;
        v13 = 1024;
        v60 = *(_QWORD *)a1;
        v74 = *a2;
LABEL_5:
        v14 = (unsigned __int8 *)&a4[a5];
        v61 = (_DWORD)v14 - (_DWORD)v12;
        if ( v14 == v12 )
        {
          v65 = v12;
          sub_13DFB00((__int64)&v81, v11, *(_QWORD *)(a1 + 8), v74, v60, a3, (__int64)v12, (__int64)v12, v13);
          v24 = 0;
          v22 = v65;
        }
        else
        {
          v70 = v13;
          v67 = v12;
          v15 = sub_2218990(*v12);
          v16 = (__int64)v67;
          if ( v61 <= v15 )
            v15 = v61;
          v17 = v15;
          v18 = v67;
          v19 = &v67[v17];
          do
            ++v18;
          while ( v19 != v18 && (*v18 & 0xC0) == 0x80 );
          v68 = v61;
          v62 = (unsigned __int8 *)v16;
          sub_13DFB00((__int64)&v81, *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 8), v74, v60, a3, v16, (__int64)v18, v70);
          v20 = sub_2218990(*v62);
          v21 = v68;
          v22 = v62;
          if ( v68 > v20 )
            v21 = v20;
          v23 = &v62[v21];
          do
            ++v22;
          while ( v23 != v22 && (*v22 & 0xC0) == 0x80 );
          v24 = v14 - v22;
        }
        v25 = v89;
        v26 = *(unsigned int *)(a1 + 40);
        ptr = v89;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8EA0);
        if ( a5 * v26 > 0x200 )
        {
          v69 = v24;
          v64 = v22;
          sub_2236E10(&ptr, v89, a5 * v26, 1);
          v26 = *(unsigned int *)(v6 + 40);
          v24 = v69;
          v25 = ptr;
          v22 = v64;
        }
        v78 = v25;
        v27 = v24;
        v28 = v22;
        while ( !(unsigned __int8)sub_2219080(v26, v28, v27, &v78) )
        {
          v29 = (_DWORD)v14 - (_DWORD)v77;
          if ( v77 == v14 )
          {
            v63 = 0;
            v30 = v14;
          }
          else
          {
            v30 = v77;
            v31 = sub_2218990(*v77);
            if ( v31 > (int)v14 - (int)v77 )
              v31 = (_DWORD)v14 - (_DWORD)v77;
            v32 = &v77[v31];
            do
              ++v30;
            while ( v32 != v30 && (*v30 & 0xC0) == 0x80 );
            v29 = (_DWORD)v30 - (_DWORD)v77;
            v63 = v14 - v30;
          }
          v33 = *(_QWORD *)(v6 + 8);
          v34 = sub_13D1C70(v74, (int)v77 - a3, v60, v33) + v74;
          v35 = v34 + sub_13D1C70(v34, v29, v60, v33);
          v36 = v81;
          if ( v81 )
          {
            v37 = *((unsigned int *)v81 + 106);
            v38 = *((unsigned int *)v81 + 107);
            v39 = v37 + 1;
          }
          else
          {
            v43 = v82;
            v44 = *(_DWORD *)(v82 + 14976);
            if ( v44 )
            {
              v53 = (unsigned int)(v44 - 1);
              *(_DWORD *)(v82 + 14976) = v53;
              v36 = *(_QWORD **)(v43 + 8 * v53 + 14848);
              v54 = *((unsigned int *)v36 + 134);
              *(_BYTE *)v36 = 0;
              v55 = v36[66];
              *((_DWORD *)v36 + 106) = 0;
              v56 = v55 + (v54 << 6);
              if ( v55 == v56 )
              {
                v39 = 1;
                v37 = 0;
              }
              else
              {
                v76 = v6;
                v57 = v56;
                v58 = v36;
                do
                {
                  while ( 1 )
                  {
                    v57 -= 64;
                    v59 = *(void **)(v57 + 24);
                    if ( v59 == (void *)(v57 + 40) )
                      break;
                    v73 = v35;
                    operator delete(v59);
                    v35 = v73;
                    if ( v55 == v57 )
                      goto LABEL_66;
                  }
                }
                while ( v55 != v57 );
LABEL_66:
                v36 = v58;
                v6 = v76;
                v37 = *((unsigned int *)v36 + 106);
                v39 = v37 + 1;
              }
              *((_DWORD *)v36 + 134) = 0;
              v38 = *((unsigned int *)v36 + 107);
            }
            else
            {
              v71 = v35;
              v36 = (_QWORD *)operator new(0x3A0u);
              v38 = 8;
              v37 = 0;
              *(_BYTE *)v36 = 0;
              v36[12] = v36 + 14;
              v36[16] = v36 + 18;
              v36[20] = v36 + 22;
              v36[24] = v36 + 26;
              v36[28] = v36 + 30;
              v36[32] = v36 + 34;
              v36[36] = v36 + 38;
              v36[40] = v36 + 42;
              v36[44] = v36 + 46;
              v36[48] = v36 + 50;
              v36[52] = v36 + 54;
              v36[13] = 0;
              *((_BYTE *)v36 + 112) = 0;
              v36[17] = 0;
              *((_BYTE *)v36 + 144) = 0;
              v36[21] = 0;
              *((_BYTE *)v36 + 176) = 0;
              v36[25] = 0;
              *((_BYTE *)v36 + 208) = 0;
              v36[29] = 0;
              *((_BYTE *)v36 + 240) = 0;
              v36[33] = 0;
              *((_BYTE *)v36 + 272) = 0;
              v36[37] = 0;
              *((_BYTE *)v36 + 304) = 0;
              v36[41] = 0;
              *((_BYTE *)v36 + 336) = 0;
              v36[45] = 0;
              *((_BYTE *)v36 + 368) = 0;
              v36[49] = 0;
              *((_BYTE *)v36 + 400) = 0;
              v36[53] = 0x800000000LL;
              v35 = v71;
              v36[67] = 0x600000000LL;
              v36[66] = v36 + 68;
              v39 = 1;
            }
            v81 = v36;
          }
          v79 = __PAIR64__(v35, v34);
          LOBYTE(v80) = 0;
          if ( v39 > v38 )
          {
            v72 = (unsigned int *)v36;
            sub_2237220(v36 + 52, v36 + 54, v39, 12);
            v36 = v72;
            v37 = v72[106];
          }
          v40 = 3 * v37;
          v28 = v30;
          v41 = v36[52] + 4 * v40;
          *(_QWORD *)v41 = v79;
          *(_DWORD *)(v41 + 8) = v80;
          v27 = v63;
          ++*((_DWORD *)v36 + 106);
          v26 = *(unsigned int *)(v6 + 40);
        }
        if ( ptr != v89 )
          free(ptr);
        if ( (_BYTE)v86 )
        {
          sub_FC7790(v83, (__int64 *)&v81, SHIBYTE(v86));
          v83 = 0;
          v86 = 0;
        }
        if ( v84 != &v85 )
          operator delete(v84);
        v45 = (void **)v81;
        if ( v81 )
        {
          v46 = v82;
          if ( v82 )
          {
            if ( (unsigned __int64)v81 >= v82 && (unsigned __int64)v81 <= v82 + 14848 )
            {
              v10 = *(unsigned int *)(v82 + 14976);
              *(_DWORD *)(v82 + 14976) = v10 + 1;
              *(_QWORD *)(v46 + 8 * v10 + 14848) = v45;
            }
            else
            {
              v47 = *((void ***)v81 + 66);
              v48 = &v47[8 * (unsigned __int64)*((unsigned int *)v81 + 134)];
              if ( v47 != v48 )
              {
                do
                {
                  while ( 1 )
                  {
                    v48 -= 8;
                    v49 = (void **)v48[3];
                    if ( v49 == v48 + 5 )
                      break;
                    operator delete(v49);
                    if ( v47 == v48 )
                      goto LABEL_53;
                  }
                }
                while ( v47 != v48 );
LABEL_53:
                v48 = (void **)v45[66];
              }
              if ( v48 != v45 + 68 )
                free(v48);
              v50 = (void **)v45[52];
              v51 = v45 + 52;
              if ( v50 != v45 + 54 )
                free(v50);
              v52 = v45 + 12;
              do
              {
                while ( 1 )
                {
                  v51 -= 4;
                  if ( *v51 == v51 + 2 )
                    break;
                  operator delete(*v51);
                  if ( v51 == v52 )
                    goto LABEL_61;
                }
              }
              while ( v51 != v52 );
LABEL_61:
              operator delete(v45, 0x3A0u);
            }
          }
        }
      }
    }
    LOBYTE(v10) = v75 != 14;
  }
  return (unsigned int)v10;
}
