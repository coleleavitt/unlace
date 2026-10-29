__int64 __fastcall sub_85B3A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int *v9; // r15
  __int64 v10; // r12
  unsigned int v11; // edi
  __int64 v12; // rax
  int v13; // r14d
  __int64 v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v18; // r12
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  int *v21; // r14
  int *v22; // r15
  __int64 v23; // rsi
  _QWORD *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r14
  int *v27; // r12
  int *v28; // rbp
  __int64 v29; // rax
  int *v30; // rcx
  int *v31; // r14
  __int64 v32; // rdi
  int *v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  int *v39; // [rsp+8h] [rbp-200h]
  __int64 v40; // [rsp+8h] [rbp-200h]
  __int64 v41; // [rsp+10h] [rbp-1F8h]
  int *v42; // [rsp+10h] [rbp-1F8h]
  unsigned int v43; // [rsp+10h] [rbp-1F8h]
  __int64 v44; // [rsp+10h] [rbp-1F8h]
  __int64 v45; // [rsp+18h] [rbp-1F0h]
  int *v46; // [rsp+18h] [rbp-1F0h]
  char v47; // [rsp+37h] [rbp-1D1h]
  __int64 v48; // [rsp+38h] [rbp-1D0h]
  void *ptr; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v50; // [rsp+48h] [rbp-1C0h]
  _BYTE v51[16]; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned int v52; // [rsp+60h] [rbp-1A8h] BYREF
  char v53; // [rsp+64h] [rbp-1A4h]
  __int64 v54; // [rsp+68h] [rbp-1A0h]
  unsigned int v55; // [rsp+A0h] [rbp-168h] BYREF
  char v56; // [rsp+A4h] [rbp-164h]
  _QWORD *v57; // [rsp+A8h] [rbp-160h] BYREF
  int v58; // [rsp+B0h] [rbp-158h]
  int *v59; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-120h]
  _BYTE v61[280]; // [rsp+F0h] [rbp-118h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)a1;
  v53 &= ~1u;
  v52 = 0;
  v6 = sub_856400((__int64)&v52, v5, v4);
  v7 = v52;
  if ( !(_BYTE)v6 )
    goto LABEL_4;
  if ( v52 != 8 )
  {
    v6 = 0;
    goto LABEL_4;
  }
  ptr = v51;
  v50 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v50 != 1 )
  {
    v9 = (int *)v61;
    v60 = 0x400000000LL;
    v59 = (int *)v61;
    if ( (_DWORD)v50 )
    {
      v10 = 0;
      v11 = 4;
      v12 = 0;
      while ( 1 )
      {
        v39 = (int *)(v54 + 56LL * *((unsigned int *)ptr + v10));
        if ( v11 < (unsigned __int64)(v12 + 1) )
        {
          if ( v39 < v9 || v39 >= &v9[14 * v12] )
          {
            v48 = -1;
            v47 = 0;
          }
          else
          {
            v47 = v6;
            v48 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v39 - (char *)v9) >> 3);
          }
          v29 = sub_25D5F70(&v59, v61, v12 + 1, 56, &v55);
          v30 = v59;
          v9 = (int *)v29;
          v31 = &v59[14 * (unsigned int)v60];
          if ( v59 != v31 )
          {
            v32 = v29;
            do
            {
              v46 = v30;
              sub_69F700(v32, v30);
              v30 = v46 + 14;
              v32 += 56;
            }
            while ( v31 != v46 + 14 );
            v33 = v59;
            v31 = &v59[14 * (unsigned int)v60];
            if ( v59 != v31 )
            {
              do
              {
                v31 -= 14;
                if ( (unsigned int)*v31 > 1 )
                {
                  v42 = v33;
                  sub_69F740((__int64)v31);
                  v33 = v42;
                }
              }
              while ( v33 != v31 );
              v31 = v59;
            }
          }
          v34 = v55;
          if ( v31 != (int *)v61 )
          {
            v43 = v55;
            free(v31);
            v34 = v43;
          }
          v59 = v9;
          HIDWORD(v60) = v34;
          v12 = (unsigned int)v60;
          if ( v47 )
            v39 = &v9[14 * v48];
        }
        ++v10;
        sub_6A4260((__int64)&v9[14 * v12], v39);
        v13 = v50;
        v9 = v59;
        v12 = (unsigned int)(v60 + 1);
        LODWORD(v60) = v60 + 1;
        if ( (unsigned int)v10 >= (unsigned int)v50 )
          break;
        v11 = HIDWORD(v60);
      }
      v56 &= ~1u;
      v45 = (unsigned int)v50;
      v57 = nullptr;
      v58 = 0;
      v41 = 14LL * (unsigned int)v50;
      v14 = v41 * 4 + 8;
      v55 = 8;
      v15 = (_QWORD *)operator new[](v41 * 4 + 8);
      v17 = v15 + 1;
      *v15 = v45;
      if ( v45 )
      {
        v18 = v15 + 1;
        v19 = v15 + 1;
        v20 = &v15[(unsigned __int64)v41 / 2 + 1];
        do
        {
          *((_BYTE *)v19 + 4) &= ~1u;
          v19 += 7;
          *((_DWORD *)v19 - 14) = 0;
        }
        while ( v20 != v19 );
        v57 = v17;
        v58 = v13;
        v21 = v9;
        v22 = &v9[v41];
        do
        {
          v23 = (__int64)v21;
          v14 = (__int64)v18;
          v21 += 14;
          v18 += 7;
          sub_6A63E0(v14, v23);
        }
        while ( v22 != v21 );
        v17 = v57;
LABEL_19:
        v24 = *(_QWORD **)(a1 + 8);
        v25 = sub_2575D20(v14, v17, v16);
        v26 = v25;
        if ( *v24 == v25 )
        {
          if ( (_QWORD *)v25 == v17 )
          {
            sub_257D030(v24, &v57);
            goto LABEL_22;
          }
          if ( v24 == &v57 )
          {
LABEL_22:
            if ( v55 > 1 )
              sub_69F740((__int64)&v55);
            v27 = v59;
            v28 = &v59[14 * (unsigned int)v60];
            if ( v59 != v28 )
            {
              do
              {
                v28 -= 14;
                if ( (unsigned int)*v28 > 1 )
                  sub_69F740((__int64)v28);
              }
              while ( v27 != v28 );
              v28 = v59;
            }
            if ( v28 != (int *)v61 )
              free(v28);
            goto LABEL_31;
          }
          v35 = v24[1];
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 - 8);
            v37 = v35 + 24 * v36;
            if ( v35 != v37 )
            {
              do
              {
                v44 = v35;
                v40 = v37 - 24;
                sub_5FF3B0((__int64 *)(v37 - 24));
                v37 = v40;
                v35 = v44;
              }
              while ( v44 != v40 );
              v36 = *(_QWORD *)(v44 - 8);
            }
            operator delete[]((void *)(v35 - 8), 24 * v36 + 8);
          }
          v24[1] = 0;
        }
        else
        {
          if ( (_QWORD *)v25 != v17 )
          {
            sub_2576220(v24, &v57);
            goto LABEL_22;
          }
          if ( v24 == &v57 )
            goto LABEL_22;
          sub_25769A0(v24);
        }
        if ( (_QWORD *)v26 == v57 )
          sub_257CF50(v24, &v57);
        else
          sub_25768A0(v24, &v57);
        goto LABEL_22;
      }
    }
    else
    {
      v14 = 8;
      v56 &= ~1u;
      v57 = nullptr;
      v58 = 0;
      v55 = 8;
      v38 = (_QWORD *)operator new[](8u);
      *v38 = 0;
      v17 = v38 + 1;
    }
    v57 = v17;
    v58 = 0;
    goto LABEL_19;
  }
  sub_834130(*(__int64 **)(a1 + 8), (__int64 *)(v54 + 56LL * *(unsigned int *)ptr + 8), v54);
LABEL_31:
  if ( ptr != v51 )
    free(ptr);
  v7 = v52;
LABEL_4:
  if ( v7 > 1 )
    sub_69F740((__int64)&v52);
  return v6;
}

