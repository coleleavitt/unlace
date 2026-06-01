__int64 __fastcall sub_14F3F70(unsigned int **a1, __int64 *a2)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  __int64 v6; // rcx
  unsigned int *v7; // r8
  __int64 v8; // rsi
  _QWORD *v9; // r9
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edi
  unsigned int v21; // r14d
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // r14
  __int64 v28; // rbp
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // r12
  __int16 v34; // ax
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r15
  __int64 v41; // r12
  __int16 v42; // ax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned int *v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // [rsp+8h] [rbp-A0h]
  unsigned int *v50; // [rsp+8h] [rbp-A0h]
  unsigned int *v51; // [rsp+8h] [rbp-A0h]
  __int64 v52; // [rsp+14h] [rbp-94h] BYREF
  int v53; // [rsp+1Ch] [rbp-8Ch]
  __int64 v54; // [rsp+20h] [rbp-88h] BYREF
  __int64 v55; // [rsp+28h] [rbp-80h]

  if ( !*((_DWORD *)a2 + 14) )
  {
    v4 = a2[8];
    if ( v4 )
    {
      if ( a2[333] )
      {
        sub_1564820(&v54, a1[1], **a1, 1769);
        v19 = a2[11];
        LOBYTE(v53) = 1;
        v52 = v19;
        sub_AEC610(&v54, &v52);
        sub_AEA040((__int64)&v54);
        return 0;
      }
      v5 = a1[2];
      if ( (*v5 & 0x80000) != 0 )
      {
        v7 = a1[1];
        v20 = *((_DWORD *)a2 + 34);
        v21 = v5[1];
        v22 = (*((_WORD *)v5 + 1) >> 7) & 3;
        if ( v20 )
        {
          v31 = a2[16];
          v32 = sub_1E61BD0(*((_QWORD *)v7 + 12), v22);
          v33 = sub_15D92D0(a2[96], 80);
          v34 = sub_F963B0(v32, 0, 8);
          *(_BYTE *)(v33 + 35) &= 0xFCu;
          *(_QWORD *)(v33 + 56) &= 0x7F800000uLL;
          *(_QWORD *)v33 = v32;
          *(_QWORD *)(v33 + 8) = 0;
          *(_QWORD *)(v33 + 16) = 0;
          *(_DWORD *)(v33 + 24) = v21;
          *(_DWORD *)(v33 + 28) = v21;
          *(_WORD *)(v33 + 32) = v34;
          *(_BYTE *)(v33 + 34) = -8;
          *(_QWORD *)(v33 + 40) = 0;
          *(_QWORD *)(v33 + 48) = 0;
          v35 = sub_15D7D80(v33);
          v36 = *((unsigned int *)a2 + 197);
          *(_QWORD *)(v33 + 72) = v35;
          v37 = *((unsigned int *)a2 + 196);
          if ( v37 + 1 > v36 )
          {
            sub_2237220(a2 + 97, a2 + 99, v37 + 1, 8);
            v37 = *((unsigned int *)a2 + 196);
          }
          *(_QWORD *)(a2[97] + 8 * v37) = v33;
          ++*((_DWORD *)a2 + 196);
          v38 = *(unsigned int *)(v31 + 32);
          if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(v31 + 36) )
          {
            sub_2237220(v31 + 24, v31 + 40, v38 + 1, 8);
            v38 = *(unsigned int *)(v31 + 32);
          }
          *(_QWORD *)(*(_QWORD *)(v31 + 24) + 8 * v38) = v33;
          v5 = a1[2];
          ++*(_DWORD *)(v31 + 32);
          v7 = a1[1];
        }
        else if ( !*(_BYTE *)a1[3] )
        {
          v39 = *a2;
          v50 = a1[3];
          v40 = sub_1E61BD0(*((_QWORD *)v7 + 12), v22);
          v41 = sub_15D92D0(*(_QWORD *)(v39 + 72), 80);
          v42 = sub_F963B0(v40, 0, 8);
          *(_BYTE *)(v41 + 35) &= 0xFCu;
          *(_QWORD *)(v41 + 56) &= 0x7F800000uLL;
          *(_QWORD *)v41 = v40;
          *(_QWORD *)(v41 + 8) = 0;
          *(_QWORD *)(v41 + 16) = 0;
          *(_DWORD *)(v41 + 24) = v21;
          *(_DWORD *)(v41 + 28) = v21;
          *(_WORD *)(v41 + 32) = v42;
          *(_BYTE *)(v41 + 34) = -8;
          *(_QWORD *)(v41 + 40) = 0;
          *(_QWORD *)(v41 + 48) = 0;
          v43 = sub_15D7D80(v41);
          v44 = *(unsigned int *)(v39 + 92);
          v45 = v50;
          *(_QWORD *)(v41 + 72) = v43;
          v46 = *(unsigned int *)(v39 + 88);
          if ( v46 + 1 > v44 )
          {
            sub_2237220(v39 + 80, v39 + 96, v46 + 1, 8);
            v46 = *(unsigned int *)(v39 + 88);
            v45 = v50;
          }
          *(_QWORD *)(*(_QWORD *)(v39 + 80) + 8 * v46) = v41;
          v47 = *(unsigned int *)(v39 + 48);
          v48 = *(unsigned int *)(v39 + 52);
          ++*(_DWORD *)(v39 + 88);
          if ( v47 + 1 > v48 )
          {
            v51 = v45;
            sub_2237220(v39 + 40, v39 + 56, v47 + 1, 8);
            v47 = *(unsigned int *)(v39 + 48);
            v45 = v51;
          }
          *(_QWORD *)(*(_QWORD *)(v39 + 40) + 8 * v47) = v41;
          v5 = a1[2];
          ++*(_DWORD *)(v39 + 48);
          v7 = a1[1];
          *(_BYTE *)v45 = 1;
        }
        v6 = *((_QWORD *)v5 + 1);
        if ( v6 )
          goto LABEL_6;
        v8 = *((_QWORD *)v7 + 1);
        v4 = *((_QWORD *)v5 + 2);
        v9 = (_QWORD *)(v8 + 680);
        if ( *((_DWORD *)a2 + 14) )
        {
          v10 = 1;
          v54 = *((_QWORD *)v5 + 2);
          if ( v4 )
            goto LABEL_7;
          goto LABEL_17;
        }
        v4 = a2[8];
      }
      else
      {
        v6 = *((_QWORD *)v5 + 1);
        v7 = a1[1];
        if ( v6 )
        {
LABEL_6:
          v8 = *((_QWORD *)v7 + 1);
          v4 = *((_QWORD *)v5 + 2);
          v9 = (_QWORD *)(v8 + 680);
          v10 = v6 & 0xFFFFFFFFFFFFFFF8LL | 1;
          v54 = v4;
          if ( v4 )
          {
LABEL_7:
            v11 = sub_FE3230(v9, 1u, (unsigned __int64 *)&v54);
            goto LABEL_8;
          }
          if ( !*((_DWORD *)a2 + 14) )
            v4 = a2[8];
LABEL_17:
          v11 = sub_FE87C0(v8 + 552, (__int64)v9, v4);
LABEL_8:
          result = sub_1A9C4A0(
                     *(_QWORD *)(*((_QWORD *)a1[1] + 12) + 736LL),
                     *(_QWORD *)(*((_QWORD *)a1[1] + 12) + 608LL),
                     **a1,
                     *a1[4],
                     (_DWORD)a2,
                     (unsigned int)a1[2],
                     v10,
                     v11,
                     *a1[5],
                     0);
          if ( !*((_BYTE *)a2 + 3032) )
          {
            v49 = result;
            sub_1818070(a2[334], a2[378], result);
            *((_BYTE *)a2 + 3032) = 1;
            return v49;
          }
          return result;
        }
      }
      v8 = *((_QWORD *)v7 + 1);
      v9 = (_QWORD *)(v8 + 680);
      v10 = v4 & 0xFFFFFFFFFFFFFFF8LL | 1;
      v54 = *((_QWORD *)v5 + 2);
      if ( v54 )
        goto LABEL_7;
      goto LABEL_17;
    }
  }
  sub_1564820(&v54, a1[1], **a1, 1770);
  v13 = a2[11];
  v14 = v54;
  if ( v54 )
  {
    v15 = *(unsigned int *)(v54 + 424);
    v16 = *(unsigned int *)(v54 + 428);
    v17 = v15 + 1;
  }
  else
  {
    v23 = v55;
    v24 = *(_DWORD *)(v55 + 14976);
    if ( v24 )
    {
      v25 = (unsigned int)(v24 - 1);
      *(_DWORD *)(v55 + 14976) = v25;
      v14 = *(_QWORD *)(v23 + 8 * v25 + 14848);
      v26 = *(unsigned int *)(v14 + 536);
      *(_BYTE *)v14 = 0;
      v27 = *(_QWORD *)(v14 + 528);
      *(_DWORD *)(v14 + 424) = 0;
      v28 = v27 + (v26 << 6);
      if ( v27 == v28 )
      {
        v17 = 1;
        v15 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v28 -= 64;
            v29 = *(void **)(v28 + 24);
            if ( v29 == (void *)(v28 + 40) )
              break;
            operator delete(v29);
            if ( v27 == v28 )
              goto LABEL_30;
          }
        }
        while ( v27 != v28 );
LABEL_30:
        v15 = *(unsigned int *)(v14 + 424);
        v17 = v15 + 1;
      }
      *(_DWORD *)(v14 + 536) = 0;
      v16 = *(unsigned int *)(v14 + 428);
    }
    else
    {
      v30 = operator new(0x3A0u);
      v16 = 8;
      v17 = 1;
      v14 = v30;
      *(_BYTE *)v30 = 0;
      *(_QWORD *)(v30 + 96) = v30 + 112;
      *(_QWORD *)(v30 + 128) = v30 + 144;
      *(_QWORD *)(v30 + 160) = v30 + 176;
      *(_QWORD *)(v30 + 192) = v30 + 208;
      *(_QWORD *)(v30 + 224) = v30 + 240;
      *(_QWORD *)(v30 + 256) = v30 + 272;
      *(_QWORD *)(v30 + 288) = v30 + 304;
      *(_QWORD *)(v30 + 320) = v30 + 336;
      *(_QWORD *)(v30 + 352) = v30 + 368;
      *(_QWORD *)(v30 + 384) = v30 + 400;
      *(_QWORD *)(v30 + 416) = v30 + 432;
      *(_QWORD *)(v30 + 104) = 0;
      *(_BYTE *)(v30 + 112) = 0;
      *(_QWORD *)(v30 + 136) = 0;
      *(_BYTE *)(v30 + 144) = 0;
      *(_QWORD *)(v30 + 168) = 0;
      *(_BYTE *)(v30 + 176) = 0;
      *(_QWORD *)(v30 + 200) = 0;
      *(_BYTE *)(v30 + 208) = 0;
      *(_QWORD *)(v30 + 232) = 0;
      *(_BYTE *)(v30 + 240) = 0;
      *(_QWORD *)(v30 + 264) = 0;
      *(_BYTE *)(v30 + 272) = 0;
      *(_QWORD *)(v30 + 296) = 0;
      *(_BYTE *)(v30 + 304) = 0;
      *(_QWORD *)(v30 + 328) = 0;
      *(_BYTE *)(v30 + 336) = 0;
      *(_QWORD *)(v30 + 360) = 0;
      *(_BYTE *)(v30 + 368) = 0;
      *(_QWORD *)(v30 + 392) = 0;
      *(_BYTE *)(v30 + 400) = 0;
      *(_QWORD *)(v30 + 424) = 0x800000000LL;
      *(_QWORD *)(v30 + 528) = v30 + 544;
      *(_QWORD *)(v30 + 536) = 0x600000000LL;
      v15 = 0;
    }
    v54 = v14;
  }
  v52 = v13;
  LOBYTE(v53) = 1;
  if ( v17 > v16 )
  {
    sub_2237220(v14 + 416, v14 + 432, v17, 12);
    v15 = *(unsigned int *)(v14 + 424);
  }
  v18 = *(_QWORD *)(v14 + 416) + 12 * v15;
  *(_QWORD *)v18 = v52;
  *(_DWORD *)(v18 + 8) = v53;
  ++*(_DWORD *)(v14 + 424);
  sub_AEA040((__int64)&v54);
  return 0;
}
