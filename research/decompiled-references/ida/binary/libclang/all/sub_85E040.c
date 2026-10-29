__int64 __fastcall sub_85E040(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int v6; // eax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  int *v10; // rbx
  __int64 v11; // r13
  int *v12; // r14
  unsigned int v13; // r14d
  int *v14; // r13
  __int64 v15; // r12
  _QWORD *v16; // rax
  __int64 *v17; // rcx
  _QWORD *v18; // r9
  _QWORD *v19; // rbp
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  int *v22; // r12
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rdi
  int *v26; // r14
  int *v27; // r13
  int *v28; // r12
  int *v29; // r15
  int *v30; // rbp
  int *v31; // rsi
  __int64 v32; // rdi
  int *v33; // rbp
  unsigned int v34; // eax
  _QWORD *v35; // rax
  unsigned __int8 v36; // [rsp+20h] [rbp-1F8h]
  unsigned __int8 v38; // [rsp+3Fh] [rbp-1D9h]
  __int64 v39; // [rsp+40h] [rbp-1D8h]
  unsigned int v40; // [rsp+48h] [rbp-1D0h]
  void *ptr; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-1C0h]
  _BYTE v43[16]; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v44; // [rsp+70h] [rbp-1A8h] BYREF
  char v45; // [rsp+74h] [rbp-1A4h]
  __int64 v46; // [rsp+78h] [rbp-1A0h]
  unsigned int v47; // [rsp+B0h] [rbp-168h] BYREF
  char v48; // [rsp+B4h] [rbp-164h]
  _QWORD *v49; // [rsp+B8h] [rbp-160h]
  unsigned int v50; // [rsp+C0h] [rbp-158h]
  int *v51; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v52; // [rsp+F8h] [rbp-120h]
  _BYTE v53[280]; // [rsp+100h] [rbp-118h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *a1;
  v45 &= ~1u;
  v44 = 0;
  v5 = sub_856400((__int64)&v44, v4, v3);
  v6 = v44;
  if ( !(_BYTE)v5 )
    goto LABEL_4;
  if ( v44 != 8 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  ptr = v43;
  v42 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v42 != 1 )
  {
    v52 = 0x400000000LL;
    v51 = (int *)v53;
    if ( (_DWORD)v42 )
    {
      v8 = 4;
      v9 = 0;
      v36 = v5;
      v10 = (int *)v53;
      v11 = 0;
      while ( 1 )
      {
        v12 = (int *)(v46 + 56LL * *((unsigned int *)ptr + v11));
        if ( v8 < v9 + 1 )
        {
          if ( v12 < v10 || v12 >= &v10[14 * v9] )
          {
            v39 = -1;
            v38 = 0;
          }
          else
          {
            v38 = v36;
            v39 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v12 - (char *)v10) >> 3);
          }
          v10 = (int *)sub_25D5F70(&v51, v53, v9 + 1, 56, &v47);
          v28 = &v51[14 * (unsigned int)v52];
          if ( v51 != v28 )
          {
            v29 = v51;
            v30 = v10;
            do
            {
              v31 = v29;
              v32 = (__int64)v30;
              v29 += 14;
              v30 += 14;
              sub_69F700(v32, v31);
            }
            while ( v28 != v29 );
            v33 = v51;
            v28 = &v51[14 * (unsigned int)v52];
            if ( v51 != v28 )
            {
              do
              {
                v28 -= 14;
                if ( (unsigned int)*v28 > 1 )
                  sub_69F740((__int64)v28);
              }
              while ( v33 != v28 );
              v28 = v51;
            }
          }
          v34 = v47;
          if ( v28 != (int *)v53 )
          {
            v40 = v47;
            free(v28);
            v34 = v40;
          }
          HIDWORD(v52) = v34;
          v51 = v10;
          v9 = (unsigned int)v52;
          if ( v38 )
            v12 = &v10[14 * v39];
        }
        ++v11;
        sub_6A4260((__int64)&v10[14 * v9], v12);
        v13 = v42;
        v10 = v51;
        v9 = (unsigned int)(v52 + 1);
        LODWORD(v52) = v52 + 1;
        if ( (unsigned int)v11 >= (unsigned int)v42 )
          break;
        v8 = HIDWORD(v52);
      }
      v14 = v51;
      v48 &= ~1u;
      v5 = v36;
      v49 = nullptr;
      v50 = 0;
      v15 = 14LL * (unsigned int)v42;
      v47 = 8;
      v16 = (_QWORD *)operator new[](v15 * 4 + 8);
      v17 = a1;
      *v16 = v13;
      v18 = v16 + 1;
      if ( v13 )
      {
        v19 = v16 + 1;
        v20 = &v16[(unsigned __int64)v15 / 2 + 1];
        v21 = v18;
        do
        {
          *((_BYTE *)v21 + 4) &= ~1u;
          v21 += 7;
          *((_DWORD *)v21 - 14) = 0;
        }
        while ( v20 != v21 );
        v49 = v18;
        v22 = &v14[v15];
        v50 = v13;
        v23 = (__int64)v14;
        do
        {
          v24 = v23;
          v25 = (__int64)v19;
          v23 += 56;
          v19 += 7;
          sub_6A63E0(v25, v24);
        }
        while ( v22 != (int *)v23 );
        v17 = a1;
        goto LABEL_19;
      }
    }
    else
    {
      v48 &= ~1u;
      v49 = nullptr;
      v50 = 0;
      v47 = 8;
      v35 = (_QWORD *)operator new[](8u);
      v17 = a1;
      *v35 = 0;
      v18 = v35 + 1;
    }
    v49 = v18;
    v50 = 0;
LABEL_19:
    sub_6A63E0(v17[2], (__int64)&v47);
    if ( v47 > 1 )
      sub_69F740((__int64)&v47);
    v26 = v51;
    v27 = &v51[14 * (unsigned int)v52];
    if ( v51 != v27 )
    {
      do
      {
        v27 -= 14;
        if ( (unsigned int)*v27 > 1 )
          sub_69F740((__int64)v27);
      }
      while ( v26 != v27 );
      v27 = v51;
    }
    if ( v27 != (int *)v53 )
      free(v27);
    goto LABEL_28;
  }
  sub_6A63E0(a1[2], v46 + 56LL * *(unsigned int *)ptr);
LABEL_28:
  if ( ptr != v43 )
    free(ptr);
  v6 = v44;
LABEL_4:
  if ( v6 > 1 )
    sub_69F740((__int64)&v44);
  return v5;
}

