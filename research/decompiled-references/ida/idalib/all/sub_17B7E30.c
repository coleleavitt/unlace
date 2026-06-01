__int64 __fastcall sub_17B7E30(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6, __int64 a7)
{
  char v8; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int8 v15; // al
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rcx
  const void *v21; // rax
  __int64 v22; // rsi
  signed __int64 v23; // r13
  __int64 v24; // r12
  unsigned int v25; // r12d
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r12
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 *v42; // rdx
  __int64 *v43; // r13
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned __int64 v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp-8h] [rbp-90h]
  __int64 v58; // [rsp+20h] [rbp-68h]
  unsigned __int8 v60; // [rsp+36h] [rbp-52h]
  char v61; // [rsp+37h] [rbp-51h]
  __int64 v62; // [rsp+38h] [rbp-50h]
  const void *v63; // [rsp+38h] [rbp-50h]
  unsigned int v65; // [rsp+44h] [rbp-44h]
  __int64 v66; // [rsp+48h] [rbp-40h]

  v8 = a5;
  v10 = sub_B8E970(a4 + 64);
  if ( v10 )
  {
    v11 = v10;
    v60 = 0;
    v61 = 32 * (v8 & 3);
    v66 = a7 + 16;
    v12 = a4;
    v13 = v11;
    v14 = v12;
    while ( 1 )
    {
      v15 = *(_BYTE *)(v13 + 28) & 0x7F;
      if ( (unsigned int)v15 - 49 > 2 && v15 != 32 )
        goto LABEL_4;
      v16 = *(_QWORD *)(v13 + 40);
      if ( !v16 )
        goto LABEL_4;
      v17 = sub_17B3E80(a1, a2, a3, v16, *(_DWORD *)(v13 + 24), *(_BYTE *)(v14 + 73) >> 5 == 2, a6);
      if ( v17 )
      {
        v60 = v17;
LABEL_4:
        v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          return v60;
      }
      else
      {
        v20 = *(unsigned int *)(a7 + 12);
        v65 = *(_DWORD *)(a7 + 8);
        if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x20 )
        {
          v21 = *(const void **)(v13 + 56);
          v22 = v65;
          v23 = 8LL * *(unsigned int *)(v13 + 64);
          v24 = v23 >> 3;
          if ( (unsigned __int64)v65 + (v23 >> 3) > v20 )
          {
            v63 = *(const void **)(v13 + 56);
            sub_2237220(a7, v66, v65 + v24, 8);
            v22 = *(unsigned int *)(a7 + 8);
            v21 = v63;
            if ( v23 )
            {
LABEL_12:
              memcpy((void *)(*(_QWORD *)a7 + 8 * v22), v21, v23);
              LODWORD(v22) = *(_DWORD *)(a7 + 8);
            }
          }
          else if ( v23 )
          {
            goto LABEL_12;
          }
          v25 = v22 + v24;
          *(_DWORD *)(a7 + 8) = v25;
          v26 = v25;
          goto LABEL_14;
        }
        v54 = v65;
        if ( (unsigned __int64)v65 + 1 > v20 )
        {
          sub_2237220(a7, v66, v65 + 1LL, 8);
          v54 = *(unsigned int *)(a7 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a7 + 8 * v54) = v13;
        v26 = (unsigned int)(*(_DWORD *)(a7 + 8) + 1);
        *(_DWORD *)(a7 + 8) = v26;
LABEL_14:
        v27 = *(_QWORD **)(a1 + 248);
        v28 = 8 * v26;
        v29 = v27[294];
        v27[304] += v28;
        v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v27[295] >= v28 + v30 && v29 )
          v27[294] = v28 + v30;
        else
          v30 = sub_986170((__int64)(v27 + 294), v28, v28, 3, v18, v19);
        v31 = *(unsigned int *)(a7 + 8);
        if ( (_DWORD)v31 )
        {
          v32 = 0;
          do
          {
            *(_QWORD *)(v30 + v32) = *(_QWORD *)(*(_QWORD *)a7 + v32);
            v32 += 8;
          }
          while ( 8LL * (unsigned int)(v31 - 1) + 8 != v32 );
        }
        v58 = v30;
        v33 = *(_QWORD *)(v13 + 40);
        v34 = v33 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v33 & 7) != 0 )
          v34 = 0;
        v38 = sub_B7A390(*(_QWORD *)(a1 + 248), a3, *(_DWORD *)(v13 + 24), v34, *(_QWORD *)(v13 + 48), v19, v58, v31);
        if ( (*(_BYTE *)(v13 + 29) & 1) != 0 )
        {
          v39 = sub_B8C3D0(v13, a3, v55, v35, v36, v37);
          v41 = *((unsigned int *)v39 + 2);
          v62 = *v39 + 8 * v41;
          v42 = (*(_BYTE *)(v13 + 29) & 1) != 0 ? (__int64 *)*sub_B8C3D0(v13, a3, v41, v40, v36, v37) : nullptr;
          if ( (__int64 *)v62 != v42 )
          {
            v43 = v42;
            do
            {
              v44 = *v43++;
              v45 = sub_B395B0(v44, *(_QWORD *)(a1 + 248));
              sub_B8CC60(v38, v45, v46, v47, v48, v49);
            }
            while ( (__int64 *)v62 != v43 );
          }
        }
        *(_BYTE *)(v38 + 29) = v61 | *(_BYTE *)(v38 + 29) & 0x9F | 2;
        sub_17B7670(a1, v38, (__int64)a2, 1, v36, v37);
        if ( a5 != 3 )
          *(_BYTE *)(v38 + 29) = v61 | *(_BYTE *)(v38 + 29) & 0x9F;
        v50 = *(unsigned int *)(a7 + 8);
        if ( v65 == v50 )
          goto LABEL_4;
        if ( v65 >= v50 )
        {
          if ( v65 > (unsigned __int64)*(unsigned int *)(a7 + 12) )
          {
            sub_2237220(a7, v66, v65, 8);
            v50 = *(unsigned int *)(a7 + 8);
          }
          v51 = (void *)(*(_QWORD *)a7 + 8 * v50);
          v52 = *(_QWORD *)a7 + 8LL * v65;
          if ( v51 != (void *)v52 )
            memset(v51, 0, 8 * ((unsigned __int64)(v52 - 8 - (_QWORD)v51) >> 3) + 8);
        }
        *(_DWORD *)(a7 + 8) = v65;
        v13 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v13 )
          return v60;
      }
    }
  }
  return 0;
}
