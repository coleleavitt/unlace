void __fastcall sub_1494F10(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int8 *),
        __int64 a4,
        __int64 a5,
        __m128i a6,
        __m128 a7)
{
  __int64 v8; // r13
  __int16 v9; // ax
  char v10; // si
  unsigned __int8 *v11; // r14
  int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  int v18; // edx
  __int64 v19; // rax
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // r12
  __int64 v24; // rbp
  __int64 v25; // rdx
  unsigned __int8 *v26; // rbp
  unsigned __int8 *v27; // rbx
  unsigned __int8 *v28; // rdi
  __int64 v29; // rdi
  char v30; // bl
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  size_t v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // r13
  _QWORD *v38; // rbx
  _QWORD *i; // r14
  unsigned __int64 v40; // rsi
  unsigned int *v41; // rax
  unsigned __int64 (__fastcall *v42)(__int64); // rdx
  __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rsi
  unsigned __int64 (__fastcall *v46)(__int64); // rax
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  int v49; // esi
  __int64 *v50; // rdi
  unsigned __int8 *v51; // r12
  unsigned __int8 *v52; // rbx
  unsigned __int8 *v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v60; // [rsp+28h] [rbp-CE0h]
  __int64 v61; // [rsp+38h] [rbp-CD0h]
  __int64 v62; // [rsp+38h] [rbp-CD0h]
  __int64 v63; // [rsp+40h] [rbp-CC8h]
  unsigned __int8 *v64; // [rsp+48h] [rbp-CC0h]
  unsigned __int8 *v65[10]; // [rsp+50h] [rbp-CB8h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-C68h] BYREF
  void *v67; // [rsp+A8h] [rbp-C60h]
  __int64 v68; // [rsp+B0h] [rbp-C58h]
  _BYTE v69[16]; // [rsp+B8h] [rbp-C50h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-C40h] BYREF
  void *ptr; // [rsp+D0h] [rbp-C38h]
  __int64 v72; // [rsp+D8h] [rbp-C30h]
  _BYTE v73[16]; // [rsp+E0h] [rbp-C28h] BYREF
  _QWORD v74[2]; // [rsp+F0h] [rbp-C18h] BYREF
  __int128 v75; // [rsp+100h] [rbp-C08h]
  __int64 v76; // [rsp+110h] [rbp-BF8h]
  __int64 v77; // [rsp+118h] [rbp-BF0h]
  __int64 v78; // [rsp+120h] [rbp-BE8h]
  int v79; // [rsp+128h] [rbp-BE0h]
  __int64 v80; // [rsp+130h] [rbp-BD8h]
  __int64 v81; // [rsp+140h] [rbp-BC8h]
  __int64 v82; // [rsp+148h] [rbp-BC0h]
  int v83; // [rsp+150h] [rbp-BB8h]
  __int64 v84; // [rsp+158h] [rbp-BB0h]
  __int64 v85; // [rsp+160h] [rbp-BA8h]
  int v86; // [rsp+168h] [rbp-BA0h]
  unsigned __int8 *v87; // [rsp+170h] [rbp-B98h]
  __int64 v88; // [rsp+178h] [rbp-B90h]
  __int16 v89; // [rsp+3C0h] [rbp-948h]
  __int64 v90; // [rsp+3C8h] [rbp-940h]
  unsigned __int8 *v91; // [rsp+3D0h] [rbp-938h]
  __int64 v92; // [rsp+3D8h] [rbp-930h]
  __int64 v93; // [rsp+3F0h] [rbp-918h]
  unsigned __int8 *v94; // [rsp+3F8h] [rbp-910h]
  __int64 v95; // [rsp+400h] [rbp-908h]
  __int64 *v96; // [rsp+418h] [rbp-8F0h]
  __int64 v97; // [rsp+420h] [rbp-8E8h]
  __int64 v98; // [rsp+428h] [rbp-8E0h]
  __int64 v99; // [rsp+430h] [rbp-8D8h]
  __int64 v100; // [rsp+438h] [rbp-8D0h]
  __int64 v101; // [rsp+440h] [rbp-8C8h]
  int v102; // [rsp+B48h] [rbp-1C0h]
  int v103; // [rsp+B4Ch] [rbp-1BCh]
  unsigned __int64 v104; // [rsp+B58h] [rbp-1B0h]
  __int64 v105; // [rsp+B60h] [rbp-1A8h]
  __int64 v106; // [rsp+B68h] [rbp-1A0h]
  unsigned __int8 *v107; // [rsp+B70h] [rbp-198h]
  __int64 v108; // [rsp+B78h] [rbp-190h]
  __int64 v109; // [rsp+CC0h] [rbp-48h]
  char v110; // [rsp+CC8h] [rbp-40h]

  v8 = a2;
  v9 = *(_WORD *)(a1 + 32);
  if ( v9 == 201 )
  {
    v54 = *(_QWORD *)(a1 + 104);
    ++*(_BYTE *)(v54 + 4);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    sub_1494F10(a1, a2, a3, a4, a5);
    --*(_BYTE *)(v54 + 4);
  }
  else
  {
    v66 = 0;
    v67 = v69;
    v70 = a1 + 504;
    v68 = 0x200000000LL;
    ptr = v73;
    v72 = 0x200000000LL;
    if ( (unsigned __int16)(v9 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14AB020(a1, &v66);
    sub_148B330(a1, a2, 0, 3u, 0, a6, a7);
    if ( *(_WORD *)(a1 + 32) != 63 )
    {
      v10 = 1;
      v60 = v8 + 304;
      v11 = (unsigned __int8 *)v74;
      v12 = 0;
      while ( 1 )
      {
        v13 = *(_QWORD *)(v8 + 160);
        v74[0] = v8;
        v88 = 0x400000000LL;
        v82 = v13;
        v87 = v11 + 144;
        LODWORD(v13) = *(_DWORD *)v8;
        v74[1] = 0;
        v75 = 0;
        v76 = 0;
        v77 = 0;
        v78 = 0;
        v79 = 0;
        v80 = 0;
        v14 = *(_QWORD *)(v8 + 72);
        LOBYTE(v89) = ((((unsigned int)v13 >> 12) & 0x7F) == 69) | v89 & 0xFE;
        v91 = v11 + 752;
        v92 = 0x200000000LL;
        v95 = 0x200000000LL;
        v93 = v14;
        v94 = v11 + 792;
        v96 = &v66;
        v81 = 0;
        v83 = 7;
        v84 = 0;
        v85 = 0;
        v86 = 0;
        v89 &= 0xFC01u;
        v90 = 0;
        v97 = 0;
        v98 = 0;
        v15 = *(_QWORD *)(a1 + 96);
        v109 = 0;
        v101 = 0;
        v104 = 0;
        v105 = v15;
        v106 = v60;
        v107 = v11 + 2704;
        v16 = *(_QWORD *)(v15 + 512);
        v108 = 0x400000000LL;
        v99 = 0;
        v100 = 0;
        v103 = 0;
        *(_QWORD *)(v15 + 512) = v11 + 2680;
        v109 = v16;
        v110 = 0;
        v102 = v12;
        if ( !v10 )
        {
          sub_14A1D90(a1);
          if ( *(_WORD *)(a1 + 32) == 189 )
            sub_1490D80((const __m128i *)a1, (__int64)v11, 0, (__m128i)0LL, a7);
          sub_14A1D90(a1);
        }
        if ( *(_WORD *)(a1 + 32) == 62 )
          break;
        v29 = *(_QWORD *)(a1 + 96);
        v30 = *(_BYTE *)(a1 + 2040);
        *(_BYTE *)(a1 + 2040) = 1;
        v65[0] = v11;
        v65[1] = (unsigned __int8 *)a1;
        sub_15F0FC0(v29, (unsigned int)v82, sub_1498E10, v65);
        *(_BYTE *)(a1 + 2040) = v30;
        if ( ((*(_DWORD *)v8 >> 12) & 0x7F) == 0x19 )
          goto LABEL_38;
LABEL_62:
        v20 = *(_WORD *)(a1 + 32);
        if ( v20 != 62 )
          goto LABEL_12;
        v18 = *(_DWORD *)(a1 + 16);
LABEL_9:
        *(_DWORD *)(a1 + 40) = v18;
        sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
        v19 = sub_14C4CD0(a1);
        if ( v19 == 1 )
        {
          LOWORD(v65[0]) = 63;
          sub_15680D0(a1, v65, 1, 2);
        }
        else
        {
          v104 = v19 & 0xFFFFFFFFFFFFFFFELL;
        }
        v20 = *(_WORD *)(a1 + 32);
LABEL_12:
        if ( v20 == 189 )
          sub_1490D80((const __m128i *)a1, (__int64)v11, a5, (__m128i)0LL, a7);
        v21 = a3(a4, v11);
        if ( v21 )
        {
          if ( a5 )
          {
            v22 = *(__int64 **)a5;
            v23 = *(_QWORD *)a5 + 8LL * *(unsigned int *)(a5 + 8);
            if ( *(_QWORD *)a5 != v23 )
            {
              do
              {
                while ( 1 )
                {
                  v24 = *v22;
                  v25 = *(unsigned int *)(*v22 + 160);
                  if ( !(_DWORD)v25 )
                    break;
                  if ( (__int64 *)v23 == ++v22 )
                    goto LABEL_23;
                }
                if ( !*(_DWORD *)(v24 + 164) )
                {
                  v62 = v21;
                  sub_2237220(v24 + 152, v24 + 168, 1, 8);
                  v25 = *(unsigned int *)(v24 + 160);
                  v21 = v62;
                }
                ++v22;
                *(_QWORD *)(*(_QWORD *)(v24 + 152) + 8 * v25) = v21;
                ++*(_DWORD *)(v24 + 160);
              }
              while ( (__int64 *)v23 != v22 );
            }
          }
        }
LABEL_23:
        if ( *(_WORD *)(a1 + 32) != 66 )
        {
          if ( !v110 )
          {
            sub_1818070(v105, v109, 0);
            v110 = 1;
          }
          v26 = v107;
          v27 = &v107[80 * (unsigned int)v108];
          if ( v107 != v27 )
          {
            do
            {
              v28 = v26;
              v26 += 80;
              sub_15B6850(v28);
            }
            while ( v27 != v26 );
            v27 = v107;
          }
          if ( v27 != v11 + 2704 )
            free(v27);
          sub_147A7A0((char *)v11);
          goto LABEL_32;
        }
        v50 = *(__int64 **)(a1 + 8);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v50, (int *)(a1 + 16));
        v12 = *(_DWORD *)(a1 + 40);
        if ( !v110 )
        {
          sub_1818070(v105, v109, 0);
          v110 = 1;
        }
        v51 = v107;
        v52 = &v107[80 * (unsigned int)v108];
        if ( v107 != v52 )
        {
          do
          {
            v53 = v51;
            v51 += 80;
            sub_15B6850(v53);
          }
          while ( v52 != v51 );
          v52 = v107;
        }
        if ( v52 != v11 + 2704 )
          free(v52);
        sub_147A7A0((char *)v11);
        v10 = 0;
      }
      v17 = *(_DWORD *)v8;
      v18 = *(_DWORD *)(a1 + 16);
      v79 = 0;
      v80 = 0;
      HIDWORD(v81) = v18;
      LODWORD(v81) = v18;
      if ( ((v17 >> 12) & 0x7F) != 0x19 )
        goto LABEL_9;
LABEL_38:
      v31 = *(_QWORD *)(v8 + 8);
      if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 58 <= 3 )
      {
        v32 = *(_QWORD *)(v31 + 40);
        if ( (v32 & 7) != 0 || (v33 = v32 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          v34 = j__strlen(&byte_22F0C30);
        else
          v34 = **(unsigned int **)(v33 + 16);
        if ( !v34 && (*(_BYTE *)(v31 + 75) & 1) == 0 )
        {
          v61 = v31 + 64;
          v35 = sub_B8E970(v31 + 64);
          if ( v35 )
          {
            v63 = v8;
            v64 = v11;
            do
            {
              if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 26 <= 0x1A )
              {
                v36 = sub_F6A430(*(_QWORD *)(*(_QWORD *)(v35 + 48) & 0xFFFFFFFFFFFFFFF0LL));
                v37 = v36;
                if ( v36 )
                {
                  v38 = *(_QWORD **)(v36 + 40);
                  for ( i = &v38[*(_QWORD *)(v36 + 48)]; i != v38; ++v38 )
                  {
                    v45 = sub_F5D790(v38);
                    if ( !sub_B8E9C0(v61, v45) )
                    {
                      v46 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL);
                      if ( v46 == sub_B70840 )
                        v47 = *(unsigned int *)(v35 + 24);
                      else
                        v47 = (unsigned int)v46(v35);
                      sub_1564820(v65, a1, v47, 3542);
                      v48 = sub_F5D790(v38);
                      sub_AE9DF0(v65, v48, 0xAu);
                      v49 = *(_DWORD *)(v37 + 16);
                      if ( (v49 & 0x1000000) != 0 )
                        v40 = ((unsigned __int64)SBYTE2(v49) >> 63) + 2;
                      else
                        v40 = (unsigned __int64)SBYTE2(v49) >> 63;
                      sub_14780E0(v65, v40);
                      sub_14780E0(
                        v65,
                        (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u);
                      sub_AEA040((__int64)v65);
                      v41 = (unsigned int *)sub_F5D790(v38);
                      v42 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL);
                      if ( v42 == sub_B70840 )
                        v43 = v41[6];
                      else
                        v43 = (unsigned int)v42((__int64)v41);
                      sub_1564820(v65, a1, v43, 5984);
                      v44 = sub_F5D790(v38);
                      sub_AE9DF0(v65, v44, 0xAu);
                      sub_AEA040((__int64)v65);
                    }
                  }
                }
              }
              v35 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            while ( v35 );
            v8 = v63;
            v11 = v64;
          }
        }
      }
      goto LABEL_62;
    }
    sub_1481E50(a1, (__int64)&v66, 0);
    v55 = *(_QWORD *)(a1 + 96);
    v74[0] = 0;
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    v56 = sub_17D91F0(v55, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), 3, a2, qword_2CD8AE0, v74);
    if ( !*(_BYTE *)(a2 + 656) )
    {
      sub_1818070(*(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 648), v56);
      *(_BYTE *)(a2 + 656) = 1;
    }
LABEL_32:
    sub_15DCED0(v70, &v70);
    if ( ptr != v73 )
      free(ptr);
    if ( v67 != v69 )
      free(v67);
  }
}
