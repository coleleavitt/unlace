__int64 __fastcall sub_85BF80(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int *v9; // r15
  __int64 v10; // r12
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // r14d
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD *v17; // r12
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  int *v20; // r14
  int *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rbp
  bool v25; // cc
  int *v26; // r12
  int *v27; // rbp
  __int64 v28; // rax
  int *v29; // rcx
  int *v30; // r14
  __int64 v31; // rdi
  int *v32; // rcx
  unsigned int v33; // ecx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  int *v36; // [rsp+8h] [rbp-200h]
  __int64 v37; // [rsp+10h] [rbp-1F8h]
  int *v38; // [rsp+10h] [rbp-1F8h]
  unsigned int v39; // [rsp+10h] [rbp-1F8h]
  __int64 v40; // [rsp+18h] [rbp-1F0h]
  int *v41; // [rsp+18h] [rbp-1F0h]
  char v42; // [rsp+37h] [rbp-1D1h]
  __int64 v43; // [rsp+38h] [rbp-1D0h]
  void *ptr; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-1C0h]
  _BYTE v46[16]; // [rsp+50h] [rbp-1B8h] BYREF
  unsigned int v47; // [rsp+60h] [rbp-1A8h] BYREF
  char v48; // [rsp+64h] [rbp-1A4h]
  __int64 v49; // [rsp+68h] [rbp-1A0h]
  unsigned int v50; // [rsp+A0h] [rbp-168h] BYREF
  char v51; // [rsp+A4h] [rbp-164h]
  __int64 v52; // [rsp+A8h] [rbp-160h] BYREF
  unsigned int v53; // [rsp+B0h] [rbp-158h]
  char v54; // [rsp+B4h] [rbp-154h]
  __int64 v55; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v56; // [rsp+C0h] [rbp-148h] BYREF
  int *v57; // [rsp+E0h] [rbp-128h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-120h]
  _BYTE v59[280]; // [rsp+F0h] [rbp-118h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *a1;
  v48 &= ~1u;
  v47 = 0;
  v6 = sub_856400((__int64)&v47, v5, v4);
  v7 = v47;
  if ( !(_BYTE)v6 )
    goto LABEL_4;
  if ( v47 != 8 )
  {
    v6 = 0;
    goto LABEL_4;
  }
  ptr = v46;
  v45 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v45 != 1 )
  {
    v9 = (int *)v59;
    v58 = 0x400000000LL;
    v57 = (int *)v59;
    if ( (_DWORD)v45 )
    {
      v10 = 0;
      v11 = 4;
      v12 = 0;
      while ( 1 )
      {
        v36 = (int *)(v49 + 56LL * *((unsigned int *)ptr + v10));
        if ( v11 < (unsigned __int64)(v12 + 1) )
        {
          if ( v36 < v9 || v36 >= &v9[14 * v12] )
          {
            v43 = -1;
            v42 = 0;
          }
          else
          {
            v42 = v6;
            v43 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v36 - (char *)v9) >> 3);
          }
          v28 = sub_25D5F70(&v57, v59, v12 + 1, 56, &v50);
          v29 = v57;
          v9 = (int *)v28;
          v30 = &v57[14 * (unsigned int)v58];
          if ( v57 != v30 )
          {
            v31 = v28;
            do
            {
              v41 = v29;
              sub_69F700(v31, v29);
              v29 = v41 + 14;
              v31 += 56;
            }
            while ( v30 != v41 + 14 );
            v32 = v57;
            v30 = &v57[14 * (unsigned int)v58];
            if ( v57 != v30 )
            {
              do
              {
                v30 -= 14;
                if ( (unsigned int)*v30 > 1 )
                {
                  v38 = v32;
                  sub_69F740((__int64)v30);
                  v32 = v38;
                }
              }
              while ( v32 != v30 );
              v30 = v57;
            }
          }
          v33 = v50;
          if ( v30 != (int *)v59 )
          {
            v39 = v50;
            free(v30);
            v33 = v39;
          }
          v57 = v9;
          HIDWORD(v58) = v33;
          v12 = (unsigned int)v58;
          if ( v42 )
            v36 = &v9[14 * v43];
        }
        ++v10;
        sub_6A4260((__int64)&v9[14 * v12], v36);
        v13 = v45;
        v9 = v57;
        v12 = (unsigned int)(v58 + 1);
        LODWORD(v58) = v58 + 1;
        if ( (unsigned int)v10 >= (unsigned int)v45 )
          break;
        v11 = HIDWORD(v58);
      }
      v51 &= ~1u;
      v40 = (unsigned int)v45;
      v52 = 0;
      v53 = 0;
      v37 = 14LL * (unsigned int)v45;
      v50 = 8;
      v14 = (_QWORD *)operator new[](v37 * 4 + 8);
      v16 = (__int64)(v14 + 1);
      *v14 = v40;
      if ( v40 )
      {
        v17 = v14 + 1;
        v18 = v14 + 1;
        v19 = &v14[(unsigned __int64)v37 / 2 + 1];
        do
        {
          *((_BYTE *)v18 + 4) &= ~1u;
          v18 += 7;
          *((_DWORD *)v18 - 14) = 0;
        }
        while ( v19 != v18 );
        v52 = v16;
        v53 = v13;
        v20 = v9;
        v21 = &v9[v37];
        do
        {
          v22 = (__int64)v20;
          v23 = (__int64)v17;
          v20 += 14;
          v17 += 7;
          sub_6A63E0(v23, v22);
        }
        while ( v21 != v20 );
        goto LABEL_18;
      }
    }
    else
    {
      v51 &= ~1u;
      v52 = 0;
      v53 = 0;
      v50 = 8;
      v35 = (_QWORD *)operator new[](8u);
      *v35 = 0;
      v16 = (__int64)(v35 + 1);
    }
    v52 = v16;
    v53 = 0;
LABEL_18:
    v24 = a1[1];
    if ( v50 == 6 )
    {
      *(_BYTE *)v24 = 0;
      sub_834130((__int64 *)(v24 + 40), &v52, v15);
      sub_834130((__int64 *)(v24 + 64), &v56, v34);
    }
    else
    {
      v25 = *(_DWORD *)(v24 + 16) <= 0x40u;
      *(_BYTE *)v24 = 1;
      if ( v25 && v53 <= 0x40 )
      {
        *(_QWORD *)(v24 + 8) = v52;
        *(_DWORD *)(v24 + 16) = v53;
      }
      else
      {
        sub_2585EA0(v24 + 8, &v52);
      }
      v25 = *(_DWORD *)(v24 + 32) <= 0x40u;
      *(_BYTE *)(v24 + 20) = v54;
      if ( v25 && (unsigned int)v56 <= 0x40 )
      {
        *(_QWORD *)(v24 + 24) = v55;
        *(_DWORD *)(v24 + 32) = v56;
      }
      else
      {
        sub_2585EA0(v24 + 24, &v55);
      }
      *(_BYTE *)(v24 + 36) = BYTE4(v56);
    }
    if ( v50 > 1 )
      sub_69F740((__int64)&v50);
    v26 = v57;
    v27 = &v57[14 * (unsigned int)v58];
    if ( v57 != v27 )
    {
      do
      {
        v27 -= 14;
        if ( (unsigned int)*v27 > 1 )
          sub_69F740((__int64)v27);
      }
      while ( v26 != v27 );
      v27 = v57;
    }
    if ( v27 != (int *)v59 )
      free(v27);
    goto LABEL_37;
  }
  sub_833810(a1[1], v49 + 56LL * *(unsigned int *)ptr, v49);
LABEL_37:
  if ( ptr != v46 )
    free(ptr);
  v7 = v47;
LABEL_4:
  if ( v7 > 1 )
    sub_69F740((__int64)&v47);
  return v6;
}

