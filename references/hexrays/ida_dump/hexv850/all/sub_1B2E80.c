unsigned __int64 __fastcall sub_1B2E80(
        __int64 a1,
        const char *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // r9d
  const char *v9; // rcx
  int v10; // eax
  __m128i v11; // xmm0
  const char *v12; // rsi
  __int64 *v13; // r13
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r12
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  _QWORD *v21; // r15
  int v22; // r13d
  __int64 *v23; // r12
  const char *v24; // rdi
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  unsigned __int64 v30; // rax
  int i; // ecx
  const char *v32; // rdx
  const char **v33; // rax
  char *v34; // rax
  const char *v35; // rdx
  const char *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 v40; // r15
  __int64 v41; // rdi
  const char *v43; // rax
  int v44; // [rsp+8h] [rbp-1118h]
  __int64 *v45; // [rsp+18h] [rbp-1108h]
  int v46; // [rsp+24h] [rbp-10FCh]
  int v47; // [rsp+24h] [rbp-10FCh]
  int v48; // [rsp+24h] [rbp-10FCh]
  const char *v50; // [rsp+30h] [rbp-10F0h] BYREF
  __int128 v51; // [rsp+38h] [rbp-10E8h]
  __int64 *v52; // [rsp+50h] [rbp-10D0h]
  __m128i v53; // [rsp+58h] [rbp-10C8h]
  __m128i v54; // [rsp+70h] [rbp-10B0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-10A0h]
  _QWORD v56[5]; // [rsp+90h] [rbp-1090h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-1068h]
  __int128 v58; // [rsp+C0h] [rbp-1060h]
  __int64 v59; // [rsp+D0h] [rbp-1050h]
  char v60[4096]; // [rsp+E0h] [rbp-1040h] BYREF
  _BYTE v61[8]; // [rsp+10E0h] [rbp-40h] BYREF
  unsigned __int64 v62; // [rsp+10E8h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 480);
  v62 = __readfsqword(0x28u);
  if ( under_debugger || *(_BYTE *)(v6 + 1424) )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v7 = *(_QWORD *)(v6 + 1024);
      if ( *(_QWORD *)(v7 + 120) > 1u )
      {
        v50 = nullptr;
        v51 = 0;
        sub_66D20((__int64 *)&v50, (__int64)a2, a3, (__int64)&under_debugger, a5, a6);
        if ( (**(_DWORD **)(a1 + 64) & 0x200) != 0 || !strncmp(a2, "debug", 5u) )
        {
          v8 = *(_DWORD *)(v7 + 140);
          v9 = *(const char **)(v7 + 112);
          v10 = *(_DWORD *)(a1 + 72);
          *(_DWORD *)(v7 + 140) = v8 + 1;
          qsnprintf(v60, 4096, "%s%cb%05dd%03d.dmp", v9, 47, v8, v10);
          v11 = _mm_loadu_si128((const __m128i *)(v7 + 88));
          v12 = (const char *)(v7 + 40);
          v13 = *(__int64 **)(v7 + 80);
          *(_DWORD *)(v7 + 104) = 0;
          v14 = v11.m128i_i64[0];
          v53 = v11;
          *(_QWORD *)(v7 + 80) = 0;
          *(_OWORD *)(v7 + 88) = 0;
          v45 = v13;
          *(_DWORD *)(v7 + 108) = *(_DWORD *)(a1 + 72);
          v15 = *(_QWORD *)(a1 + 64);
          v16 = *(_QWORD *)(a1 + 480);
          v52 = v13;
          v55 = 0;
          *(_QWORD *)(v16 + 1344) = v15;
          v17 = *(_QWORD *)(a1 + 480);
          v18 = *(_QWORD *)(v17 + 1344);
          *(_QWORD *)(v17 + 1344) = v15;
          v19 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(v15 + 1496)), (__m128i)v15);
          v54 = v19;
          sub_1B0B00(a1, (void (***)(_QWORD, _QWORD, const char *, ...))(v7 + 40), (__int64)&v54);
          *(_QWORD *)(*(_QWORD *)(a1 + 480) + 1344LL) = v18;
          v20 = *(_QWORD *)(v7 + 88);
          if ( v14 <= v20 )
            LODWORD(v20) = v14;
          v44 = v20;
          v46 = v20;
          if ( (int)v20 > 0 )
          {
            v21 = v13 + 1;
            v22 = 0;
            v23 = (__int64 *)(*(_QWORD *)(v7 + 80) + 8LL);
            while ( 1 )
            {
              v25 = *v23;
              if ( *v21 )
                break;
              v12 = s1;
              if ( v25 )
                goto LABEL_12;
LABEL_14:
              ++v22;
              v21 += 3;
              v23 += 3;
              if ( v46 == v22 )
                goto LABEL_46;
            }
            v12 = (const char *)*(v21 - 1);
            v24 = s1;
            if ( v25 )
LABEL_12:
              v24 = (const char *)*(v23 - 1);
            if ( strcmp(v24, v12) )
              goto LABEL_19;
            goto LABEL_14;
          }
          v22 = 0;
LABEL_19:
          if ( v44 == v22 )
LABEL_46:
            v22 = *(_DWORD *)(v7 + 136);
          v47 = 20 * (v22 / 20);
          v26 = v47;
          v27 = fopenWT(v60, v12);
          v29 = v27;
          if ( v27 )
          {
            if ( *(_DWORD *)(v7 + 136) != v47 )
            {
              *(_DWORD *)(v7 + 136) = v47;
              sub_62040(v27, (__int64)"; block %d: scrolling to %d\n\n", *(_DWORD *)(a1 + 72), v47);
              v30 = v47;
              for ( i = v47; v30 < v14; v30 = v48 + 1 )
              {
                v32 = s1;
                v33 = (const char **)&v45[3 * v30];
                if ( v33[1] )
                  v32 = *v33;
                v48 = i;
                sub_62040(v29, (__int64)&unk_3F60D3, v32);
                i = v48 + 1;
              }
              qfclose(v29);
              v34 = strrchr(v60, 46);
              qstrncpy(v34, "a.dmp", v61 - v34);
              v29 = fopenWT(v60, "a.dmp");
            }
            sub_62040(v29, (__int64)"pattern block_%d 0x%a; ", *(_DWORD *)(a1 + 72), *(double *)v19.m128i_i64);
            v35 = s1;
            if ( (_QWORD)v51 )
              v35 = v50;
            sub_62040(v29, (__int64)"%s\n\n", v35);
            while ( 1 )
            {
              v38 = v26;
              if ( (unsigned __int64)v26 >= *(_QWORD *)(v7 + 88) )
                break;
              ++v26;
              v36 = s1;
              v37 = *(_QWORD *)(v7 + 80) + 24 * v38;
              if ( *(_QWORD *)(v37 + 8) )
                v36 = *(const char **)v37;
              qfputs(v36, v29);
            }
            sub_62040(v29, (__int64)"\nendp\n");
            qfclose(v29);
          }
          else
          {
            v43 = (const char *)qstrerror(0xFFFFFFFFLL, v12, v28, (unsigned int)v47);
            sub_68620((__int64)"%s: %s\n", v60, v43);
          }
          memset(&v56[1], 0, 32);
          v56[0] = off_4B1DB8;
          v57 = 0;
          v59 = 0;
          v58 = 0;
          sub_319500(a1, v56);
          v56[0] = off_4B1DB8;
          if ( v57 )
          {
            *(_QWORD *)&v58 = 0;
            qfree(v57);
          }
          if ( v45 )
          {
            v39 = v45;
            v40 = 0;
            if ( v14 )
            {
              do
              {
                v41 = *v39;
                if ( *v39 )
                {
                  v39[1] = 0;
                  qfree(v41);
                }
                v39 += 3;
                ++v40;
              }
              while ( v14 != v40 );
            }
            qfree(v45);
          }
        }
        if ( v50 )
        {
          *(_QWORD *)&v51 = 0;
          qfree(v50);
        }
      }
    }
  }
  return v62 - __readfsqword(0x28u);
}
