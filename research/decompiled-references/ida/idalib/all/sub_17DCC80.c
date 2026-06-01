void __fastcall sub_17DCC80(__int64 a1, __int64 a2, __int64 a3, int a4, double a5, __m128 si128)
{
  int v6; // r8d
  _DWORD *v7; // r12
  __int64 v8; // rax
  int v9; // edx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 *v14; // r8
  int v15; // eax
  size_t v16; // rax
  char *v17; // rcx
  size_t v18; // rbp
  unsigned int *v19; // rsi
  size_t v20; // r8
  const void *v21; // rsi
  size_t v22; // rax
  _DWORD *v23; // rax
  _DWORD *v24; // r10
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // rax
  void *v33; // rdi
  unsigned __int64 v34; // [rsp+0h] [rbp-1138h]
  void *dest; // [rsp+8h] [rbp-1130h]
  void *desta; // [rsp+8h] [rbp-1130h]
  __int64 *deste; // [rsp+8h] [rbp-1130h]
  void *destd; // [rsp+8h] [rbp-1130h]
  void *destc; // [rsp+8h] [rbp-1130h]
  void *destb; // [rsp+8h] [rbp-1130h]
  __int64 v43; // [rsp+28h] [rbp-1110h]
  char v44[4]; // [rsp+34h] [rbp-1104h] BYREF
  char v45[8]; // [rsp+38h] [rbp-1100h] BYREF
  __int64 v46[3]; // [rsp+40h] [rbp-10F8h] BYREF
  void *v47; // [rsp+58h] [rbp-10E0h]
  __int64 v48; // [rsp+60h] [rbp-10D8h]
  void *v49[2]; // [rsp+68h] [rbp-10D0h] BYREF
  _BYTE v50[16]; // [rsp+78h] [rbp-10C0h] BYREF
  __int64 (__fastcall ***v51)(); // [rsp+88h] [rbp-10B0h] BYREF
  void *ptr; // [rsp+90h] [rbp-10A8h]
  __int64 v53; // [rsp+98h] [rbp-10A0h]
  _QWORD v54[4]; // [rsp+A0h] [rbp-1098h] BYREF
  void *v55; // [rsp+C0h] [rbp-1078h]
  __int64 v56; // [rsp+C8h] [rbp-1070h]
  __int64 v57; // [rsp+D0h] [rbp-1068h]
  __int64 v58; // [rsp+D8h] [rbp-1060h]
  __int64 v59; // [rsp+E0h] [rbp-1058h]
  __int64 v60; // [rsp+E8h] [rbp-1050h]
  __int64 v61; // [rsp+F0h] [rbp-1048h]
  __int64 v62; // [rsp+F8h] [rbp-1040h]
  __int64 v63; // [rsp+100h] [rbp-1038h]
  __int64 v64; // [rsp+108h] [rbp-1030h]
  __int64 v65; // [rsp+110h] [rbp-1028h]
  __int64 v66; // [rsp+118h] [rbp-1020h]
  __int64 v67; // [rsp+120h] [rbp-1018h]
  __int64 v68; // [rsp+128h] [rbp-1010h]
  __int64 v69; // [rsp+130h] [rbp-1008h]
  __int64 v70; // [rsp+138h] [rbp-1000h]
  __int64 v71; // [rsp+140h] [rbp-FF8h]
  __int64 v72; // [rsp+148h] [rbp-FF0h]
  __int64 v73; // [rsp+150h] [rbp-FE8h]
  __int16 v74; // [rsp+158h] [rbp-FE0h]
  __int64 v75; // [rsp+160h] [rbp-FD8h]
  __int64 (__fastcall **v76)(); // [rsp+170h] [rbp-FC8h] BYREF
  int v77; // [rsp+178h] [rbp-FC0h]
  __int128 v78; // [rsp+180h] [rbp-FB8h]
  void *v79; // [rsp+190h] [rbp-FA8h] BYREF
  char v80; // [rsp+198h] [rbp-FA0h]
  int v81; // [rsp+19Ch] [rbp-F9Ch]
  void **v82; // [rsp+1A0h] [rbp-F98h]
  char v83; // [rsp+1E8h] [rbp-F50h]
  unsigned int v84; // [rsp+1F0h] [rbp-F48h]
  char v85; // [rsp+1F4h] [rbp-F44h]
  void *v86[7]; // [rsp+690h] [rbp-AA8h] BYREF
  int v87; // [rsp+6C8h] [rbp-A70h]
  __int64 v88; // [rsp+6D0h] [rbp-A68h]
  __int64 v89; // [rsp+6E0h] [rbp-A58h]
  __int64 v90; // [rsp+6E8h] [rbp-A50h]
  int v91; // [rsp+6F0h] [rbp-A48h]
  __int64 v92; // [rsp+6F8h] [rbp-A40h]
  __int64 v93; // [rsp+700h] [rbp-A38h]
  int v94; // [rsp+708h] [rbp-A30h]
  __int64 *v95; // [rsp+710h] [rbp-A28h]
  __int64 v96; // [rsp+718h] [rbp-A20h]
  __int64 v97; // [rsp+720h] [rbp-A18h] BYREF
  __int16 v98; // [rsp+960h] [rbp-7D8h]
  __int64 v99; // [rsp+968h] [rbp-7D0h]
  _QWORD *v100; // [rsp+970h] [rbp-7C8h]
  __int64 v101; // [rsp+978h] [rbp-7C0h]
  _QWORD v102[5]; // [rsp+980h] [rbp-7B8h] BYREF
  _QWORD v103[242]; // [rsp+9A8h] [rbp-790h] BYREF

  v6 = *(_DWORD *)(a3 + 136);
  v7 = *(_DWORD **)(a3 + 128);
  if ( v6 )
  {
    v8 = 1LL << *v7;
    if ( (v8 & 0xB7) == 0 && (v8 & 0x40) != 0 )
    {
      v23 = v7 + 36;
      while ( &v7[36 * (v6 - 1) + 36] != v23 )
      {
        v24 = v23;
        v25 = 1LL << *v23;
        if ( (v25 & 0xB7) != 0 )
          break;
        v23 += 36;
        if ( (v25 & 0x40) == 0 )
        {
          v7 = v24;
          break;
        }
      }
    }
  }
  if ( (v7[14] & 1) == 0 )
  {
    v9 = v7[18];
    if ( v9 )
    {
      v11 = 32LL * v9 - 32;
      v34 = 32 * (v9 - (unsigned __int64)(unsigned int)(v9 - 1)) - 64;
      do
      {
        while ( *(_QWORD *)(*((_QWORD *)v7 + 12) + v11 + 16) )
        {
          v11 -= 32;
          if ( v11 == v34 )
            return;
        }
        if ( (**(_BYTE **)(a1 + 232) & 1) != 0 )
        {
          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
          v78 = 0;
          v86[0] = &v86[3];
          *(__m128 *)&v86[1] = si128;
          v77 = 2;
          v76 = &off_2BEBEE0;
          v80 = 0;
          v81 = 1;
          v79 = nullptr;
          v82 = v86;
          sub_227B8B0(&v76, 0, 0, 0);
          v16 = j__strlen("  int ");
          v17 = (char *)v79;
          v18 = *((_QWORD *)&v78 + 1) - (_QWORD)v79;
          if ( v16 > *((_QWORD *)&v78 + 1) - (_QWORD)v79 )
          {
            sub_227BF10(&v76, "  int ", v16);
            v17 = (char *)v79;
            v18 = *((_QWORD *)&v78 + 1) - (_QWORD)v79;
          }
          else if ( v16 )
          {
            destb = (void *)v16;
            memcpy(v79, "  int ", v16);
            v17 = (char *)v79 + (_QWORD)destb;
            v79 = v17;
            v18 = *((_QWORD *)&v78 + 1) - (_QWORD)v17;
          }
          v19 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)v7 + 12) + v11) + 16LL);
          v20 = *v19;
          v21 = v19 + 4;
          if ( v20 > v18 )
          {
            sub_227BF10(&v76, v21, v20);
            v17 = (char *)v79;
            v18 = *((_QWORD *)&v78 + 1) - (_QWORD)v79;
          }
          else if ( v20 )
          {
            destc = (void *)v20;
            memcpy(v17, v21, v20);
            v17 = (char *)v79 + (_QWORD)destc;
            v79 = v17;
            v18 = *((_QWORD *)&v78 + 1) - (_QWORD)v17;
          }
          dest = v17;
          v22 = j__strlen(";\n");
          if ( v22 > v18 )
          {
            sub_227BF10(&v76, ";\n", v22);
          }
          else if ( v22 )
          {
            v33 = dest;
            destd = (void *)v22;
            memcpy(v33, ";\n", v22);
            v79 = (char *)v79 + (_QWORD)destd;
          }
          v76 = (__int64 (__fastcall **)())&unk_2C76288;
          sub_227B7A0(&v76);
          sub_168B9F0((__int64)&v76, (__int64 *)(a1 + 8), *(_DWORD *)(*((_QWORD *)v7 + 12) + v11 + 8), 0x160Fu, 0);
          if ( v83 )
          {
            sub_AE9DF0((unsigned __int8 **)&v79, *(_QWORD *)(v11 + *((_QWORD *)v7 + 12)), 5u);
          }
          else if ( v85 )
          {
            desta = (void *)(v11 + *((_QWORD *)v7 + 12));
            v26 = sub_168B9E0(&v76);
            v29 = (__int64)desta;
            v30 = v26;
            v31 = v78;
            if ( (_QWORD)v78 )
            {
              v43 = v30;
              v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, void *))(*(_QWORD *)v78 + 32LL))(
                      v78,
                      *(_QWORD *)v78,
                      v30,
                      desta);
              v30 = v43;
              v29 = (__int64)desta;
            }
            deste = (__int64 *)v29;
            v46[0] = v31;
            v32 = sub_1587BC0(v30, v46, v30, v29, v27, v28);
            sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v84 + 8), *deste, 5u);
          }
          sub_9EC740((__int64)v46, a4, (_BYTE *)v86[0], (__int64)v86[1], 0);
          sub_1589170((__int64)&v76, v46);
          if ( v47 != v49 )
            operator delete(v47);
          sub_15F7200(&v76);
          if ( v86[0] != &v86[3] )
            free(v86[0]);
        }
        sub_15DCD40((__int64)&v76);
        v51 = &v76;
        v46[0] &= 0xFFFFFFC000000000LL;
        v49[0] = v50;
        v49[1] = (void *)0x200000000LL;
        ptr = v54;
        v53 = 0x200000000LL;
        v46[2] = 0;
        v47 = nullptr;
        v48 = 0;
        v54[2] = 0;
        v54[3] = 0;
        v55 = nullptr;
        v56 = 0;
        v57 = 0;
        v58 = 0;
        v59 = 0;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v70 = 0;
        v71 = 0;
        v72 = 0;
        v73 = 0;
        v74 &= 0xF000u;
        v12 = *(_QWORD *)(a1 + 248);
        v75 = 0;
        sub_15AE040(
          (__int64)v46,
          7,
          *(_DWORD *)(*((_QWORD *)v7 + 12) + v11 + 8),
          (__int64)v45,
          (__int64)v44,
          v12 + 17464);
        LODWORD(v59) = *(_DWORD *)(*((_QWORD *)v7 + 12) + v11 + 8);
        HIDWORD(v59) = v59;
        if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
        {
          qword_2CD8AE0[0] = 0;
          qword_2CD8AE0[1] = &qword_2CD8AE0[3];
          qword_2CD8AE0[2] = 0x200000000LL;
          __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
          __cxa_guard_release(&qword_2CD8AC8);
        }
        v103[2] = qword_2CD8AE0;
        v90 = v59;
        v95 = &v97;
        v96 = 0x400000000LL;
        v86[0] = v46;
        memset(&v86[1], 0, 48);
        v87 = 0;
        v89 = 0;
        LOBYTE(v98) = (((LODWORD(v46[0]) >> 12) & 0x7F) == 69) | v98 & 0xFE;
        v100 = v102;
        v102[2] = v51;
        v101 = 0x200000000LL;
        v102[3] = v103;
        v102[4] = 0x200000000LL;
        v91 = 4;
        v92 = 0;
        v93 = 0;
        v94 = 0;
        v98 &= 0xFC01u;
        v99 = 0;
        memset(&v103[3], 0, 40);
        v13 = *((_QWORD *)v7 + 12);
        v103[232] = 0;
        v14 = (__int64 *)(v11 + v13);
        v15 = *((_DWORD *)v14 + 2);
        v88 = *v14;
        HIDWORD(v89) = v15;
        LODWORD(v89) = v15;
        v14[2] = sub_17D1A30((__int64 *)a1, a2, (char **)v86, 0, (__m128)0LL, si128);
        sub_147A7A0((char *)v86);
        if ( HIDWORD(v56) )
          free(v55);
        sub_15DCED0((__int64)v51, (__int64)&v51);
        if ( ptr != v54 )
          free(ptr);
        if ( v49[0] != v50 )
          free(v49[0]);
        v11 -= 32;
        sub_15D7C30((__int64)&v76);
      }
      while ( v11 != v34 );
    }
  }
}
