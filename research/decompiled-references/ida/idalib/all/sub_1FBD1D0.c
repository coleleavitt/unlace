__int64 __fastcall sub_1FBD1D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // r12
  __int64 *v9; // rsi
  unsigned int v10; // eax
  unsigned int *v11; // r14
  __int64 *v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r14d
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  int v22; // r12d
  unsigned int v23; // r13d
  int v24; // ebp
  int v25; // r12d
  int v26; // r14d
  int v27; // eax
  int v28; // r14d
  int v29; // eax
  int v30; // rax^4
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  unsigned int *v34; // rax
  unsigned int *v35; // rbp
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 *v38; // r13
  __int64 v39; // r12
  __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rbp
  unsigned __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // r8
  __int64 v50; // r9
  __int64 *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 *v54; // rbp
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 result; // rax
  __int64 *i; // r12
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rbp
  unsigned __int64 v62; // rbp
  __int64 v63; // rsi
  __int64 v64; // r13
  __int64 v65; // rdi
  _QWORD *v66; // rdi
  __int64 (*v67)(void); // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  unsigned __int8 v70; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+8h] [rbp-60h]
  int v72; // [rsp+18h] [rbp-50h]
  __int64 v73[8]; // [rsp+28h] [rbp-40h] BYREF

  v7 = (__int64 *)(a1 + 8);
  v9 = (__int64 *)(a2 + 104);
  if ( !a2 )
    v9 = nullptr;
  sub_1FB7700((__int64 *)a1, v9, a3, a4, a5, a6);
  v10 = sub_B778D0(a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), v10);
  switch ( sub_B778D0(a2) )
  {
    case 1LL:
      v69 = sub_B77A30(a2);
      sub_1F92A90(*(_QWORD *)(a1 + 16), v69, *(_QWORD *)(a1 + 24));
      goto LABEL_8;
    case 2LL:
      v61 = sub_B77930(a2);
      sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)v61 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
      sub_9B9C90(*(_QWORD *)(a1 + 24), ((*(__int64 *)v61 >> 1) & 3) + 1);
      sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v61 + 8), *(_QWORD *)(a1 + 24));
      goto LABEL_8;
    case 3LL:
      v62 = sub_B77B20(a2);
      sub_1FBABE0((__int64 *)a1, *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFFF8LL, (char *)a2);
      sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
      sub_9B9C90(*(_QWORD *)(a1 + 24), ((*(__int64 *)(v62 + 16) >> 1) & 3) + 1);
      sub_1F999A0(v7, *(_DWORD **)(v62 + 24));
      sub_9B9C90(*(_QWORD *)(a1 + 24), *(_QWORD *)(v62 + 32) != 0);
      v63 = *(_QWORD *)(v62 + 32);
      if ( v63 )
        sub_1F99A00((__int64)v7, v63);
      sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v62 + 40), *(_QWORD *)(a1 + 24));
      if ( (*(_BYTE *)(v62 + 8) & 4) != 0 )
      {
        v64 = *(_QWORD *)(v62 + 48);
        v65 = *(_QWORD *)(a1 + 24);
        if ( v64 )
        {
          sub_9B9C90(v65, 1);
          sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)v64 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
          sub_9B9C90(*(_QWORD *)(a1 + 24), ((*(__int64 *)v64 >> 1) & 3) + 1);
          sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(v64 + 8), *(_QWORD *)(a1 + 24));
          goto LABEL_39;
        }
      }
      else
      {
        v65 = *(_QWORD *)(a1 + 24);
      }
      sub_1FB1190(v65);
LABEL_39:
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) == a2 )
      {
        v66 = (_QWORD *)(*(_QWORD *)(v62 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        v67 = *(__int64 (**)(void))(*v66 + 32LL);
        if ( (char *)v67 == (char *)sub_6EE8E0 )
          v68 = v66[9];
        else
          v68 = v67();
        sub_1F92A90(*(_QWORD *)(a1 + 16), v68, *(_QWORD *)(a1 + 24));
      }
LABEL_8:
      sub_1FBCB60((__int64 *)a1, a2);
      sub_1F9E180((__int64)v7, (__int64 *)(a2 + 160), *(_QWORD *)(a2 + 40), v16, v17, v18);
      sub_9B9C90(*(_QWORD *)(a1 + 24), *(_WORD *)(a2 + 30) & 0x3FFF);
      v70 = sub_B81B70(a2);
      v19 = (*(_BYTE *)(a2 + 84) & 3) << 19;
      v72 = 8 * (*(_BYTE *)(a2 + 81) >> 5);
      v20 = *(_QWORD *)(a2 + 80);
      v21 = v20 >> 16;
      v22 = (((v20 & 0x20000000) != 0) << 21)
          | (((v20 & 0x10000000) != 0) << 18)
          | (((v20 & 0x4000000) != 0) << 17)
          | (((v20 & 0x2000000) != 0) << 16)
          | (BYTE2(v20) >> 7 << 14)
          | (((v20 & 0x400000) != 0) << 13)
          | (((v21 & 0x10) != 0) << 11)
          | (((v21 & 8) != 0) << 10)
          | (((v21 & 4) != 0) << 9)
          | (((v20 >> 37) & 1) << 8)
          | (((v21 & 2) != 0) << 6)
          | (((v20 >> 24) & 1) << 15)
          | ((v21 & 1) << 7)
          | (((v20 & 0x200000) != 0) << 12);
      v23 = (unsigned int)*(char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 84) >> 31 << 22;
      v24 = ((unsigned __int8)BYTE3(*(_QWORD *)(a2 + 80)) >> 7 << 24)
          | v22
          | (((*(_QWORD *)(a2 + 80) & 0x40000000LL) != 0) << 23);
      v25 = ((*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 85) & 0x10) != 0) << 25;
      v26 = v70 | v72 | (((*(_DWORD *)(a2 + 84) & 0x10) != 0) << 26) | v24 | v19;
      LOBYTE(v27) = sub_B74C20(a2);
      v28 = (v27 << 27) | v26;
      LOBYTE(v29) = sub_B74C70(a2);
      sub_9B9C90(*(_QWORD *)(a1 + 24), v25 | v23 | v28 | (v29 << 28));
      v30 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2) >> 32;
      sub_1F6F570(*(_QWORD **)(a1 + 16), v30, *(_QWORD *)(a1 + 24));
      if ( (*(_BYTE *)(a2 + 83) & 4) != 0 )
        sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 144), *(_QWORD *)(a1 + 24));
      v31 = (unsigned int)sub_B77F40(a2);
      sub_9B9C90(*(_QWORD *)(a1 + 24), v31);
      if ( (*(_BYTE *)(a2 + 83) & 2) != 0 || (*(_BYTE *)(a2 + 82) & 0x40) != 0 )
      {
        v34 = (unsigned int *)sub_B74920(a2);
        v35 = v34;
        if ( v34 )
        {
          v36 = *(_QWORD *)(a1 + 24);
          if ( *((_BYTE *)v34 + 4) && (v37 = *(_QWORD *)&v34[2 * *v34 + 2]) != 0 )
          {
            sub_9B9C90(v36, 3);
            sub_183F100(a1 + 32, v37);
          }
          else
          {
            sub_9B9C90(v36, 1);
          }
          v31 = *v35;
          v38 = (__int64 *)(v35 + 2);
          sub_9B9C90(*(_QWORD *)(a1 + 24), v31);
          v39 = (__int64)&v35[2 * *v35 + 2];
          if ( (unsigned int *)v39 != v35 + 2 )
          {
            do
            {
              v40 = *v38;
              v41 = *(_QWORD *)(a1 + 24);
              ++v38;
              v42 = *(_QWORD *)(a1 + 16);
              v73[0] = v40;
              sub_1F92A90(v42, v40 & 0xFFFFFFFFFFFFFFF8LL, v41);
              v31 = v40 & 3;
              sub_9B9C90(*(_QWORD *)(a1 + 24), v31);
            }
            while ( (__int64 *)v39 != v38 );
          }
        }
        else
        {
          sub_1FB1190(*(_QWORD *)(a1 + 24));
        }
      }
      if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
      {
        v43 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
        v44 = (v43 & 4) != 0 ? *(_QWORD *)((v43 & 0xFFFFFFFFFFFFFFF8LL) + 8) : v43 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v44 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v45 = v44 - 64;
          if ( v44 != 64 && (unsigned __int8)sub_B8E180(v44) && (*(_BYTE *)(v44 + 10) & 1) != 0 )
          {
            v46 = *(_QWORD *)a1;
            v73[0] = sub_1F92240(*(_QWORD *)a1, v45);
            v51 = sub_1FB65C0(v46 + 728, v73, v47, v48, v49, v50);
            v52 = sub_1F92240(*(_QWORD *)a1, a2);
            v33 = *((unsigned int *)v51 + 2);
            v31 = *((unsigned int *)v51 + 3);
            if ( v33 + 1 > v31 )
            {
              v31 = (unsigned __int64)(v51 + 2);
              v71 = v52;
              sub_2237220(v51, v51 + 2, v33 + 1, 8);
              v33 = *((unsigned int *)v51 + 2);
              v52 = v71;
            }
            v32 = *v51;
            *(_QWORD *)(*v51 + 8 * v33) = v52;
            ++*((_DWORD *)v51 + 2);
          }
        }
      }
      v53 = (unsigned int)sub_B76070(a2, v31, v32, v33);
      sub_9B9C90(*(_QWORD *)(a1 + 24), v53);
      v54 = *(__int64 **)(a2 + 120);
      result = (unsigned int)sub_B76070(a2, v53, v55, v56);
      for ( i = &v54[(unsigned int)result]; i != v54; result = sub_1F92A90(
                                                                 *(_QWORD *)(a1 + 16),
                                                                 v59,
                                                                 *(_QWORD *)(a1 + 24)) )
        v59 = *v54++;
      *(_DWORD *)(a1 + 224) = 56;
      return result;
    case 4LL:
      v11 = (unsigned int *)sub_B77C50(a2);
      v12 = (__int64 *)(v11 + 4);
      sub_9B9C90(*(_QWORD *)(a1 + 24), *v11);
      v13 = (__int64)&v11[2 * *v11 + 4];
      if ( (unsigned int *)v13 != v11 + 4 )
      {
        do
        {
          v14 = *v12++;
          sub_1F92A90(*(_QWORD *)(a1 + 16), v14, *(_QWORD *)(a1 + 24));
        }
        while ( (__int64 *)v13 != v12 );
      }
      sub_9B9C90(*(_QWORD *)(a1 + 24), *((_QWORD *)v11 + 1) != 0);
      v15 = *((_QWORD *)v11 + 1);
      if ( v15 )
        sub_1F99A00((__int64)v7, v15);
      goto LABEL_8;
    case 5LL:
      v60 = sub_B77AB0(a2);
      sub_1F92A90(*(_QWORD *)(a1 + 16), v60, *(_QWORD *)(a1 + 24));
      goto LABEL_8;
    default:
      goto LABEL_8;
  }
}
