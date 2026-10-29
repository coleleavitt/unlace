__int64 __fastcall sub_14A5290(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  __int16 v5; // ax
  __int64 v6; // rbx
  int *v8; // r13
  int v9; // eax
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  unsigned int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r12d
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdi
  __int16 v19; // ax
  unsigned int v20; // eax
  __int64 v21; // r13
  int v22; // eax
  __int64 *v23; // rdi
  int *v24; // rsi
  int v25; // eax
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // [rsp+8h] [rbp-C30h]
  char v30; // [rsp+1Ch] [rbp-C1Ch] BYREF
  __int64 v31; // [rsp+20h] [rbp-C18h] BYREF
  __int64 v32; // [rsp+28h] [rbp-C10h] BYREF
  __int128 v33; // [rsp+30h] [rbp-C08h] BYREF
  void *v34[2]; // [rsp+40h] [rbp-BF8h]
  __m128i v35; // [rsp+50h] [rbp-BE8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-BD8h] BYREF
  char v37; // [rsp+68h] [rbp-BD0h]
  __int64 v38; // [rsp+6Ch] [rbp-BCCh]
  char v39; // [rsp+74h] [rbp-BC4h]
  void *v40; // [rsp+78h] [rbp-BC0h]
  __int64 v41; // [rsp+80h] [rbp-BB8h]
  void *v42[2]; // [rsp+88h] [rbp-BB0h] BYREF
  char v43; // [rsp+98h] [rbp-BA0h] BYREF
  __int64 v44; // [rsp+A8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+B0h] [rbp-B88h]
  _QWORD v46[3]; // [rsp+C0h] [rbp-B78h] BYREF
  __int64 v47; // [rsp+D8h] [rbp-B60h] BYREF
  void *v48; // [rsp+E0h] [rbp-B58h]
  int v49; // [rsp+ECh] [rbp-B4Ch]
  __m128i v50; // [rsp+F0h] [rbp-B48h]
  unsigned __int64 v51; // [rsp+100h] [rbp-B38h]
  unsigned __int8 *v52; // [rsp+190h] [rbp-AA8h] BYREF
  __int64 v53; // [rsp+198h] [rbp-AA0h]
  __int128 v54; // [rsp+1A0h] [rbp-A98h]
  __int64 v55; // [rsp+1B0h] [rbp-A88h]
  __int64 v56; // [rsp+1B8h] [rbp-A80h]
  __int64 v57; // [rsp+1C0h] [rbp-A78h]
  int v58; // [rsp+1C8h] [rbp-A70h]
  __int64 v59; // [rsp+1D0h] [rbp-A68h]
  __int64 v60; // [rsp+1E0h] [rbp-A58h]
  unsigned __int64 v61; // [rsp+1E8h] [rbp-A50h]
  int v62; // [rsp+1F0h] [rbp-A48h]
  __int64 v63; // [rsp+1F8h] [rbp-A40h]
  __int64 v64; // [rsp+200h] [rbp-A38h]
  int v65; // [rsp+208h] [rbp-A30h]
  __int64 *v66; // [rsp+210h] [rbp-A28h]
  __int64 v67; // [rsp+218h] [rbp-A20h]
  __int64 v68; // [rsp+220h] [rbp-A18h] BYREF
  __int16 v69; // [rsp+460h] [rbp-7D8h]
  __int64 v70; // [rsp+468h] [rbp-7D0h]
  _QWORD *v71; // [rsp+470h] [rbp-7C8h]
  __int64 v72; // [rsp+478h] [rbp-7C0h]
  _QWORD v73[5]; // [rsp+480h] [rbp-7B8h] BYREF
  _QWORD v74[242]; // [rsp+4A8h] [rbp-790h] BYREF

  if ( *(_WORD *)(a1 + 32) == 151 )
  {
    v8 = (int *)(a1 + 16);
    sub_1564840(&v52, a1, a1 + 16, 1607);
    v9 = *(_DWORD *)(a1 + 16);
    v38 = 0;
    v39 = 0;
    v40 = v42;
    v41 = 0;
    LOBYTE(v42[0]) = 0;
    v43 = 0;
    LODWORD(v36) = v9;
    HIDWORD(v36) = v9;
    v37 = 1;
    if ( v9 )
    {
      sub_14A2370((__int64 *)&v52, (unsigned __int64)&v36);
      if ( v40 != v42 )
        operator delete(v40);
    }
    sub_AEA040((__int64)&v52);
    v10 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v10, v8);
  }
  v33 = 0;
  *(_OWORD *)v34 = 0;
  v35 = 0;
  if ( (unsigned __int8)sub_14D0170(a1, (unsigned int)&v33, 0, 0, 0, 0, 0, 0, 0, 0, 0) )
    goto LABEL_9;
  *a2 = *(_DWORD *)(a1 + 16);
  v5 = *(_WORD *)(a1 + 32);
  if ( v5 == 163 || v5 == 424 )
  {
    if ( (_DWORD)v33 && DWORD1(v33) || *((_QWORD *)&v33 + 1) )
    {
      sub_1564820(&v52, a1, (unsigned int)v33, 1916);
      v38 = 0;
      v39 = 0;
      v40 = v42;
      v41 = 0;
      LOBYTE(v42[0]) = 0;
      v43 = 0;
      v36 = v33;
      v37 = 1;
      if ( (_DWORD)v33 )
      {
        if ( DWORD1(v33) )
        {
          sub_14A2370((__int64 *)&v52, (unsigned __int64)&v36);
          if ( v40 != v42 )
            operator delete(v40);
        }
      }
      sub_AEA040((__int64)&v52);
    }
    sub_147A4A0((__int64)&v36, a1 + 504);
    *a3 = sub_14A27E0(a1, (__int64)&v36);
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    v52 = (unsigned __int8 *)&v36;
    v53 = 0;
    v61 = v51;
    v66 = &v68;
    v67 = 0x400000000LL;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    LOBYTE(v69) = ((((unsigned int)v36 >> 12) & 0x7F) == 69) | v69 & 0xFE;
    v71 = v73;
    v73[2] = v44;
    v62 = 5;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v69 &= 0xFC01u;
    v70 = 0;
    v72 = 0x200000000LL;
    v73[3] = v74;
    v73[4] = 0x200000000LL;
    v74[2] = qword_2CD8AE0;
    memset(&v74[3], 0, 40);
    v74[232] = 0;
  }
  else
  {
    if ( v5 != 425 )
    {
      if ( v5 == 418 )
      {
        v25 = *(_DWORD *)(sub_1565590(a1, a1 + 16) + 32);
        if ( (v25 & 0xFFFFFFFD) == 0 || (unsigned int)(v25 - 4) <= 1 )
        {
          sub_154E5D0(a1, &v33, 0, 1);
          v21 = *(_QWORD *)(a1 + 24);
          v26 = *(_DWORD *)(a1 + 20);
          if ( !v26 )
            v26 = *(_DWORD *)(a1 + 16);
          *a3 = v26;
LABEL_50:
          v22 = *(_DWORD *)(a1 + 20);
          v23 = *(__int64 **)(a1 + 8);
          v24 = (int *)(a1 + 16);
          if ( !v22 )
            v22 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 40) = v22;
          v6 = v21;
          sub_14634E0(v23, v24);
          goto LABEL_10;
        }
        v5 = *(_WORD *)(a1 + 32);
      }
      if ( v5 != 5 )
      {
        sub_1564840(&v52, a1, a1 + 16, 1606);
        sub_AEA040((__int64)&v52);
LABEL_9:
        v6 = 0;
        goto LABEL_10;
      }
      v11 = *(__int64 **)(a1 + 8);
      v29 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v11, (int *)(a1 + 16));
      v12 = *(_DWORD *)(a1 + 40);
      if ( *(_WORD *)(a1 + 32) != 47 )
      {
        v13 = *(_QWORD *)(a1 + 96);
        v31 = 0;
        v14 = sub_18013B0(v13, 0, 0, 0, 1, 0, 0, (__int64)&v31);
        v15 = v14;
        if ( v14 )
        {
          *a3 = v12;
          sub_147A4A0((__int64)&v36, a1 + 504);
          v51 = __PAIR64__(*a3, v12);
          v46[2] = v33;
          sub_E907B0((__int64)&v47, (__int64)&v33 + 8);
          v16 = *(_QWORD *)(a1 + 96);
          v17 = _mm_load_si128(&v35);
          v32 = 0;
          v50 = v17;
          sub_15AD370(
            (unsigned int)&v36,
            28,
            v12,
            (unsigned int)&v32,
            (unsigned int)&v30,
            v15,
            *(_QWORD *)(v16 + 248) + 17464LL);
          if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
          {
            qword_2CD8AE0[0] = 0;
            qword_2CD8AE0[1] = &qword_2CD8AE0[3];
            qword_2CD8AE0[2] = 0x200000000LL;
            __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
            __cxa_guard_release(&qword_2CD8AC8);
          }
          sub_147A650((__int64)&v52, (__int64)&v36, (__int64)qword_2CD8AE0, 5);
          v6 = sub_1E85500(*(_QWORD *)(a1 + 96), &v52);
          sub_147A7A0((char *)&v52);
          sub_147A5F0((__int64)&v36);
        }
        else
        {
          v27 = a1;
          v6 = 0;
          sub_1564820(&v52, v27, v12, 1606);
          sub_AEA040((__int64)&v52);
        }
        goto LABEL_10;
      }
      v18 = *(_QWORD *)(a1 + 96);
      LODWORD(v32) = 0;
      v36 = 0;
      if ( !(unsigned __int8)sub_1CBA4C0(
                               v18,
                               v29,
                               v12,
                               *(_QWORD *)(v18 + 608),
                               (unsigned int)&v33,
                               (unsigned int)&v36,
                               (__int64)&v32) )
      {
        sub_1564820(&v52, a1, v12, 1925);
        sub_AE9DF0(&v52, v29, 5u);
        sub_AEA040((__int64)&v52);
      }
      LODWORD(v52) = 0;
      v53 = v29;
      HIDWORD(v54) = v12;
      DWORD2(v54) = v12;
      if ( (unsigned __int8)sub_1556B20(a1, v36, v32, (unsigned int)&v33, 0, (unsigned int)&v52, 1, 0) )
        goto LABEL_9;
      v19 = *(_WORD *)(a1 + 32);
      if ( v19 == 418 )
      {
        v28 = *(_DWORD *)(sub_1565590(a1, a1 + 16) + 32);
        if ( (unsigned int)(v28 - 4) <= 1 || (v28 & 0xFFFFFFFD) == 0 )
          sub_154E5D0(a1, &v33, 0, 1);
        v19 = *(_WORD *)(a1 + 32);
      }
      if ( v19 != 417 )
        goto LABEL_9;
      v20 = *(_DWORD *)(a1 + 20);
      v21 = *(_QWORD *)(a1 + 24);
      if ( !v20 )
        v20 = *(_DWORD *)(a1 + 16);
      *a3 = v20;
      goto LABEL_50;
    }
    sub_147A4A0((__int64)&v36, a1 + 504);
    sub_14A2C40(a1, &v36);
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    sub_147A650((__int64)&v52, (__int64)&v36, (__int64)qword_2CD8AE0, 5);
  }
  v6 = sub_1E85500(*(_QWORD *)(a1 + 96), &v52);
  sub_147A7A0((char *)&v52);
  if ( v49 )
    free(v48);
  sub_15DCED0(v44, &v44);
  if ( ptr != v46 )
    free(ptr);
  if ( v42[0] != &v43 )
  {
    free(v42[0]);
    if ( !HIDWORD(v34[1]) )
      return v6;
LABEL_27:
    free(v34[0]);
    return v6;
  }
LABEL_10:
  if ( HIDWORD(v34[1]) )
    goto LABEL_27;
  return v6;
}
