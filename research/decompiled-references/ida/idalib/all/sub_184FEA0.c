__int64 __fastcall sub_184FEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  char v17; // al
  char v18; // dl
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rdx
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // eax
  __int64 v36; // r13
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // rax
  unsigned __int8 v47; // al
  unsigned int v48; // edx
  __int64 *v49; // rbp
  unsigned int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // rax
  char v62; // al
  __int64 v63; // [rsp+0h] [rbp-108h]
  unsigned __int8 v64; // [rsp+0h] [rbp-108h]
  __int64 v65; // [rsp+0h] [rbp-108h]
  unsigned __int64 v66; // [rsp+8h] [rbp-100h]
  __int64 v67; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v68; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v69; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v70; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v71; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall **v72)(); // [rsp+40h] [rbp-C8h] BYREF
  int v73; // [rsp+48h] [rbp-C0h]
  __int64 *v74; // [rsp+50h] [rbp-B8h]

  v9 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 25;
  if ( (unsigned int)v10 > 1 )
    v9 = sub_F63050(v9, a2, v10, a4);
  v67 = *(_QWORD *)(v9 + 24);
  v11 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = (unsigned int)*(unsigned __int8 *)(v11 + 16) - 25;
  if ( (unsigned int)v12 > 1 )
    v11 = sub_F63050(v11, a2, v12, a4);
  v68 = *(_QWORD *)(v11 + 24);
  v13 = (__int64 *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (__int64 *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)&byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL];
  v16 = *(_QWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL];
  v17 = v15 | v68;
  v18 = v16 | v67;
  v19 = v15 & 0xFFFFFFFFFFFFFFF8LL;
  v20 = v16 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v20 | v18 & 7) == (v19 | v17 & 7) )
    return 0;
  v21 = 0;
  if ( (*(_BYTE *)(*v14 + 17) & 4) == 0 )
  {
    v22 = *v13;
    v21 = *(_BYTE *)(*v14 + 17) & 4;
    if ( (*(_BYTE *)(*v13 + 17) & 4) == 0 )
    {
      v69 = 0;
      v23 = *v14;
      if ( *(_BYTE *)(*v14 + 16) != 42 )
      {
        v23 = sub_1838030(*v14, (__int64)v14, v22, v19);
        if ( !v23 )
        {
          v36 = *(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v36 + 16) - 43 > 1 )
          {
            v36 = sub_1838000(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v14, v22, v19);
            if ( !v36 )
              goto LABEL_25;
          }
          v37 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
          v38 = *(unsigned __int8 *)(v37 + 16);
          if ( (unsigned int)(v38 - 43) > 1 )
          {
            v61 = sub_1838000(*(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v14, v38, v19);
            v37 = v61;
            if ( !v61 )
              goto LABEL_25;
            v38 = *(unsigned __int8 *)(v61 + 16);
          }
          if ( *(_BYTE *)(v36 + 16) != (_BYTE)v38 )
          {
LABEL_25:
            v42 = (__int64 *)(a1 + 8);
            sub_168B9F0((__int64)&v72, v42, *(_DWORD *)(a2 + 24), 0xE74u, 0);
            v70 = *(_QWORD *)(a2 + 40);
            v43 = sub_15894B0((__int64)&v72, &v70);
            v44 = sub_1605D30(v43, &v67);
            v45 = sub_1605D30(v44, &v68);
            v71 = sub_B77620(a2);
            sub_1587DB0(v45, &v71);
            sub_15F7200(&v72);
            sub_168B9F0((__int64)&v72, v42, *(_DWORD *)(a3 + 24), 0x183Cu, 0);
            v71 = sub_B77620(a3);
            sub_1587DB0((__int64)&v72, &v71);
            v21 = 1;
            sub_15F7200(&v72);
            return v21;
          }
          v25 = sub_9B4870(v36, (__int64)v14, v38, v19, v20);
          v69 = sub_9B4870(v37, (__int64)v14, v39, v40, v41);
LABEL_11:
          v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (v25 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v21 = sub_F613D0(*v26, (__int64)v14, v22, v19, v20, a6);
            if ( (_BYTE)v21 )
            {
              v30 = (_QWORD *)(*(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
              if ( *v30 != *(_QWORD *)(*(_QWORD *)&byte_8[v69 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
              {
                v31 = (__int64 *)(*(_QWORD *)(*v26 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                if ( *(_BYTE *)(*v31 + 16) == 48
                  && !(unsigned __int8)sub_F60F20(*v31, (__int64)v14, (__int64)v30, v27, v28, v29) )
                {
                  v32 = *(_QWORD *)(a2 + 40);
                  v33 = *(unsigned int *)(a2 + 24);
                  v73 = 3552;
                  v71 = v32;
                  v72 = off_2BC6CB8;
                  v74 = &v71;
                  v34 = sub_1E63C20(a1, v33, v25, 1, &v72);
                  if ( (_BYTE)v34 )
                    return v34;
                }
                if ( !(unsigned __int8)sub_183BD10(a1, *(unsigned int *)(a2 + 24), v25, v69, v28, v29) )
                {
                  v49 = (__int64 *)(a1 + 8);
                  v48 = *(_DWORD *)(a2 + 24);
                  v50 = 3553;
                  goto LABEL_37;
                }
                v63 = *(_QWORD *)(a2 + 40);
                v46 = sub_B77620(a2);
                v47 = sub_184FA20(a1, v25, v69, 3551, 3550, *(unsigned int *)(a2 + 24), v46, v63, 0, 0);
                if ( v47 )
                {
                  v64 = v47;
                  sub_168B9F0((__int64)&v72, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x183Cu, 0);
                  v71 = sub_B77620(a3);
                  sub_1587DB0((__int64)&v72, &v71);
                  sub_15F7200(&v72);
                  return v64;
                }
              }
              if ( (v68 & 7) != (v67 & 7) )
              {
                v48 = *(_DWORD *)(a2 + 24);
                v49 = (__int64 *)(a1 + 8);
                v50 = 3555;
LABEL_37:
                sub_168B9F0((__int64)&v72, v49, v48, v50, 0);
                v70 = *(_QWORD *)(a2 + 40);
                v51 = sub_15894B0((__int64)&v72, &v70);
                v52 = sub_1605D30(v51, &v67);
                v53 = sub_1605D30(v52, &v68);
                v71 = sub_B77620(a2);
                sub_1587DB0(v53, &v71);
                sub_15F7200(&v72);
                sub_168B9F0((__int64)&v72, v49, *(_DWORD *)(a3 + 24), 0x183Cu, 0);
                v71 = sub_B77620(a3);
                sub_1587DB0((__int64)&v72, &v71);
                sub_15F7200(&v72);
                return v21;
              }
              v54 = 0;
              v65 = *(_QWORD *)(a1 + 248);
              v55 = *(_QWORD *)&byte_8[v25 & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v55 & 8) != 0 )
                v54 = *(__int64 *)((char *)&qword_18 + (v55 & 0xFFFFFFFFFFFFFFF0LL));
              v56 = v54 | ((unsigned __int8)v55 | (unsigned __int8)v25) & 7;
              v57 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_6D5440(&v69) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v57 + 16) == 13 && ((*(_WORD *)(v57 + 18) >> 3) & 0x1FF) == 0x1B3 )
                v56 &= ~8uLL;
              v58 = *(_QWORD *)&byte_8[v69 & 0xFFFFFFFFFFFFFFF0LL];
              v59 = 0;
              if ( (v58 & 8) != 0 )
                v59 = *(__int64 *)((char *)&qword_18 + (v58 & 0xFFFFFFFFFFFFFFF0LL));
              v60 = v59 | ((unsigned __int8)v69 | (unsigned __int8)v58) & 7;
              if ( (unsigned int)v56 >> 9 != (unsigned int)v60 >> 9
                && (v66 = v60, v62 = sub_F56A30((unsigned int)v60 >> 9, (unsigned int)v56 >> 9, v65), v60 = v66, !v62)
                || ((v60 >> 4) & 3) != ((v56 >> 4) & 3) && (v60 & 0x30) != 0 && (v56 & 0x30) != 0
                || HIDWORD(v56) != HIDWORD(v60)
                || ((v60 >> 6) & 7) != ((v56 >> 6) & 7)
                || ((unsigned __int8)v56 & (unsigned __int8)~(_BYTE)v60 & 7) != 0
                || (v56 & 8) != 0 && (v60 & 8) == 0 )
              {
                v49 = (__int64 *)(a1 + 8);
                v48 = *(_DWORD *)(a2 + 24);
                v50 = 3554;
                goto LABEL_37;
              }
              return 0;
            }
          }
          goto LABEL_25;
        }
        v13 = (__int64 *)(v68 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v24 = *v13;
      if ( *(_BYTE *)(*v13 + 16) != 42 )
      {
        v24 = sub_1838030(*v13, (__int64)v14, v22, v19);
        if ( !v24 )
          goto LABEL_25;
      }
      v25 = *(_QWORD *)(v23 + 32);
      v69 = *(_QWORD *)(v24 + 32);
      goto LABEL_11;
    }
  }
  return v21;
}
