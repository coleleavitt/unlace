__int64 __fastcall sub_8592C0(__int64 *a1, __int64 a2)
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
  _QWORD *v15; // rsi
  _QWORD *v16; // r12
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  int *v19; // r14
  int *v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rdx
  int *v25; // r12
  int *v26; // rbp
  __int64 v27; // rax
  int *v28; // rcx
  int *v29; // r14
  __int64 v30; // rdi
  int *v31; // rcx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  void *v34; // rcx
  _QWORD *v35; // rax
  int *v36; // [rsp+8h] [rbp-250h]
  __int64 v37; // [rsp+10h] [rbp-248h]
  int *v38; // [rsp+10h] [rbp-248h]
  unsigned int v39; // [rsp+10h] [rbp-248h]
  __int64 v40; // [rsp+18h] [rbp-240h]
  int *v41; // [rsp+18h] [rbp-240h]
  char v42; // [rsp+37h] [rbp-221h]
  __int64 v43; // [rsp+38h] [rbp-220h]
  void *v44; // [rsp+40h] [rbp-218h] BYREF
  unsigned int v45; // [rsp+48h] [rbp-210h]
  char v46; // [rsp+4Ch] [rbp-20Ch]
  void *ptr; // [rsp+50h] [rbp-208h] BYREF
  __int64 v48; // [rsp+58h] [rbp-200h]
  _BYTE v49[16]; // [rsp+60h] [rbp-1F8h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-1E8h] BYREF
  char v51; // [rsp+74h] [rbp-1E4h]
  __int64 v52; // [rsp+78h] [rbp-1E0h]
  unsigned int v53; // [rsp+B0h] [rbp-1A8h] BYREF
  char v54; // [rsp+B4h] [rbp-1A4h]
  void *v55; // [rsp+B8h] [rbp-1A0h]
  unsigned int v56; // [rsp+C0h] [rbp-198h]
  char v57; // [rsp+C4h] [rbp-194h]
  unsigned int v58; // [rsp+F0h] [rbp-168h] BYREF
  char v59; // [rsp+F4h] [rbp-164h]
  void *v60; // [rsp+F8h] [rbp-160h]
  unsigned int v61; // [rsp+100h] [rbp-158h]
  char v62; // [rsp+104h] [rbp-154h]
  int *v63; // [rsp+130h] [rbp-128h] BYREF
  __int64 v64; // [rsp+138h] [rbp-120h]
  _BYTE v65[280]; // [rsp+140h] [rbp-118h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *a1;
  v51 &= ~1u;
  v50 = 0;
  v6 = sub_856400((__int64)&v50, v5, v4);
  v7 = v50;
  if ( !(_BYTE)v6 )
    goto LABEL_4;
  if ( v50 != 8 )
  {
    v6 = 0;
    goto LABEL_4;
  }
  ptr = v49;
  v48 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v48 != 1 )
  {
    v9 = (int *)v65;
    v64 = 0x400000000LL;
    v63 = (int *)v65;
    if ( (_DWORD)v48 )
    {
      v10 = 0;
      v11 = 4;
      v12 = 0;
      while ( 1 )
      {
        v36 = (int *)(v52 + 56LL * *((unsigned int *)ptr + v10));
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
          v27 = sub_25D5F70(&v63, v65, v12 + 1, 56, &v58);
          v28 = v63;
          v9 = (int *)v27;
          v29 = &v63[14 * (unsigned int)v64];
          if ( v63 != v29 )
          {
            v30 = v27;
            do
            {
              v41 = v28;
              sub_69F700(v30, v28);
              v28 = v41 + 14;
              v30 += 56;
            }
            while ( v29 != v41 + 14 );
            v31 = v63;
            v29 = &v63[14 * (unsigned int)v64];
            if ( v63 != v29 )
            {
              do
              {
                v29 -= 14;
                if ( (unsigned int)*v29 > 1 )
                {
                  v38 = v31;
                  sub_69F740((__int64)v29);
                  v31 = v38;
                }
              }
              while ( v31 != v29 );
              v29 = v63;
            }
          }
          v32 = v58;
          if ( v29 != (int *)v65 )
          {
            v39 = v58;
            free(v29);
            v32 = v39;
          }
          v63 = v9;
          HIDWORD(v64) = v32;
          v12 = (unsigned int)v64;
          if ( v42 )
            v36 = &v9[14 * v43];
        }
        ++v10;
        sub_6A4260((__int64)&v9[14 * v12], v36);
        v13 = v48;
        v9 = v63;
        v12 = (unsigned int)(v64 + 1);
        LODWORD(v64) = v64 + 1;
        if ( (unsigned int)v10 >= (unsigned int)v48 )
          break;
        v11 = HIDWORD(v64);
      }
      v54 &= ~1u;
      v40 = (unsigned int)v48;
      v55 = nullptr;
      v56 = 0;
      v37 = 14LL * (unsigned int)v48;
      v53 = 8;
      v14 = (_QWORD *)operator new[](v37 * 4 + 8);
      v15 = v14 + 1;
      *v14 = v40;
      if ( v40 )
      {
        v16 = v14 + 1;
        v17 = v14 + 1;
        v18 = &v14[(unsigned __int64)v37 / 2 + 1];
        do
        {
          *((_BYTE *)v17 + 4) &= ~1u;
          v17 += 7;
          *((_DWORD *)v17 - 14) = 0;
        }
        while ( v18 != v17 );
        v55 = v15;
        v56 = v13;
        v19 = v9;
        v20 = &v9[v37];
        do
        {
          v21 = (__int64)v19;
          v22 = (__int64)v16;
          v19 += 14;
          v16 += 7;
          sub_6A63E0(v22, v21);
        }
        while ( v20 != v19 );
LABEL_18:
        v23 = a1[1];
        if ( v53 <= 0xD && (v24 = 8322, _bittest64(&v24, v53)) || (v54 & 1) != 0 )
        {
          sub_6A63E0(v23, (__int64)&v53);
        }
        else
        {
          v33 = v56;
          v45 = v56;
          if ( v56 > 0x40 )
          {
            sub_2585B30(&v44);
            v33 = v45;
            v34 = v44;
          }
          else
          {
            v34 = v55;
            v44 = v55;
          }
          v59 &= ~1u;
          v45 = 0;
          v46 = v57;
          v58 = 2;
          v60 = v34;
          v61 = v33;
          v62 = v57;
          sub_6A01B0(v23, (__int64)&v58);
          if ( v58 > 1 )
            sub_69F740((__int64)&v58);
          if ( v45 > 0x40 && v44 )
            operator delete[](v44);
        }
        if ( v53 > 1 )
          sub_69F740((__int64)&v53);
        v25 = v63;
        v26 = &v63[14 * (unsigned int)v64];
        if ( v63 != v26 )
        {
          do
          {
            v26 -= 14;
            if ( (unsigned int)*v26 > 1 )
              sub_69F740((__int64)v26);
          }
          while ( v25 != v26 );
          v26 = v63;
        }
        if ( v26 != (int *)v65 )
          free(v26);
        goto LABEL_31;
      }
    }
    else
    {
      v54 &= ~1u;
      v55 = nullptr;
      v56 = 0;
      v53 = 8;
      v35 = (_QWORD *)operator new[](8u);
      *v35 = 0;
      v15 = v35 + 1;
    }
    v55 = v15;
    v56 = 0;
    goto LABEL_18;
  }
  sub_825510(a1[1], (unsigned int *)(v52 + 56LL * *(unsigned int *)ptr));
LABEL_31:
  if ( ptr != v49 )
    free(ptr);
  v7 = v50;
LABEL_4:
  if ( v7 > 1 )
    sub_69F740((__int64)&v50);
  return v6;
}

