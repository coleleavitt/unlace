__int64 __fastcall sub_85CB20(__int64 *a1, __int64 a2)
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
  unsigned int v26; // eax
  void *v27; // r8
  __int64 v28; // rdi
  int *v29; // r14
  int *v30; // r13
  int *v31; // r12
  int *v32; // r15
  int *v33; // rbp
  int *v34; // rsi
  __int64 v35; // rdi
  int *v36; // rbp
  unsigned int v37; // eax
  _QWORD *v38; // rax
  unsigned __int8 v39; // [rsp+20h] [rbp-258h]
  unsigned __int8 v41; // [rsp+3Fh] [rbp-239h]
  __int64 v42; // [rsp+40h] [rbp-238h]
  unsigned int v43; // [rsp+48h] [rbp-230h]
  void *v44; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-220h]
  char v46; // [rsp+5Ch] [rbp-21Ch]
  int v47; // [rsp+60h] [rbp-218h]
  void *ptr; // [rsp+70h] [rbp-208h] BYREF
  __int64 v49; // [rsp+78h] [rbp-200h]
  _BYTE v50[16]; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned int v51; // [rsp+90h] [rbp-1E8h] BYREF
  char v52; // [rsp+94h] [rbp-1E4h]
  __int64 v53; // [rsp+98h] [rbp-1E0h]
  unsigned int v54; // [rsp+D0h] [rbp-1A8h] BYREF
  char v55; // [rsp+D4h] [rbp-1A4h]
  void *v56; // [rsp+D8h] [rbp-1A0h]
  unsigned int v57; // [rsp+E0h] [rbp-198h]
  char v58; // [rsp+E4h] [rbp-194h]
  int v59; // [rsp+E8h] [rbp-190h]
  unsigned int v60; // [rsp+110h] [rbp-168h] BYREF
  char v61; // [rsp+114h] [rbp-164h]
  void *v62; // [rsp+118h] [rbp-160h]
  unsigned int v63; // [rsp+120h] [rbp-158h]
  char v64; // [rsp+124h] [rbp-154h]
  int v65; // [rsp+128h] [rbp-150h]
  int *v66; // [rsp+150h] [rbp-128h] BYREF
  __int64 v67; // [rsp+158h] [rbp-120h]
  _BYTE v68[280]; // [rsp+160h] [rbp-118h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *a1;
  v52 &= ~1u;
  v51 = 0;
  v5 = sub_856400((__int64)&v51, v4, v3);
  v6 = v51;
  if ( !(_BYTE)v5 )
    goto LABEL_4;
  if ( v51 != 8 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  ptr = v50;
  v49 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v49 != 1 )
  {
    v67 = 0x400000000LL;
    v66 = (int *)v68;
    if ( (_DWORD)v49 )
    {
      v8 = 4;
      v9 = 0;
      v39 = v5;
      v10 = (int *)v68;
      v11 = 0;
      while ( 1 )
      {
        v12 = (int *)(v53 + 56LL * *((unsigned int *)ptr + v11));
        if ( v8 < v9 + 1 )
        {
          if ( v12 < v10 || v12 >= &v10[14 * v9] )
          {
            v42 = -1;
            v41 = 0;
          }
          else
          {
            v41 = v39;
            v42 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v12 - (char *)v10) >> 3);
          }
          v10 = (int *)sub_25D5F70(&v66, v68, v9 + 1, 56, &v60);
          v31 = &v66[14 * (unsigned int)v67];
          if ( v66 != v31 )
          {
            v32 = v66;
            v33 = v10;
            do
            {
              v34 = v32;
              v35 = (__int64)v33;
              v32 += 14;
              v33 += 14;
              sub_69F700(v35, v34);
            }
            while ( v31 != v32 );
            v36 = v66;
            v31 = &v66[14 * (unsigned int)v67];
            if ( v66 != v31 )
            {
              do
              {
                v31 -= 14;
                if ( (unsigned int)*v31 > 1 )
                  sub_69F740((__int64)v31);
              }
              while ( v36 != v31 );
              v31 = v66;
            }
          }
          v37 = v60;
          if ( v31 != (int *)v68 )
          {
            v43 = v60;
            free(v31);
            v37 = v43;
          }
          HIDWORD(v67) = v37;
          v66 = v10;
          v9 = (unsigned int)v67;
          if ( v41 )
            v12 = &v10[14 * v42];
        }
        ++v11;
        sub_6A4260((__int64)&v10[14 * v9], v12);
        v13 = v49;
        v10 = v66;
        v9 = (unsigned int)(v67 + 1);
        LODWORD(v67) = v67 + 1;
        if ( (unsigned int)v11 >= (unsigned int)v49 )
          break;
        v8 = HIDWORD(v67);
      }
      v14 = v66;
      v55 &= ~1u;
      v5 = v39;
      v56 = nullptr;
      v57 = 0;
      v15 = 14LL * (unsigned int)v49;
      v54 = 8;
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
        v56 = v18;
        v22 = &v14[v15];
        v57 = v13;
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
        v26 = v57;
        v17 = a1;
        v45 = v57;
        if ( v57 > 0x40 )
        {
          sub_2585B30(&v44);
          v26 = v45;
          v27 = v44;
          v17 = a1;
          goto LABEL_20;
        }
LABEL_19:
        v27 = v56;
        v44 = v56;
LABEL_20:
        v63 = v26;
        v61 &= ~1u;
        v46 = v58;
        v64 = v58;
        v28 = v17[1];
        v47 = v59;
        v65 = v59;
        v62 = v27;
        v45 = 0;
        v60 = 4;
        sub_6A01B0(v28, (__int64)&v60);
        if ( v60 > 1 )
          sub_69F740((__int64)&v60);
        if ( v45 > 0x40 && v44 )
          operator delete[](v44);
        if ( v54 > 1 )
          sub_69F740((__int64)&v54);
        v29 = v66;
        v30 = &v66[14 * (unsigned int)v67];
        if ( v66 != v30 )
        {
          do
          {
            v30 -= 14;
            if ( (unsigned int)*v30 > 1 )
              sub_69F740((__int64)v30);
          }
          while ( v29 != v30 );
          v30 = v66;
        }
        if ( v30 != (int *)v68 )
          free(v30);
        goto LABEL_34;
      }
    }
    else
    {
      v55 &= ~1u;
      v56 = nullptr;
      v57 = 0;
      v54 = 8;
      v38 = (_QWORD *)operator new[](8u);
      v17 = a1;
      *v38 = 0;
      v18 = v38 + 1;
    }
    v56 = v18;
    v26 = 0;
    v57 = 0;
    goto LABEL_19;
  }
  sub_821070((__int64)a1, v53 + 56LL * *(unsigned int *)ptr + 8);
LABEL_34:
  if ( ptr != v50 )
    free(ptr);
  v6 = v51;
LABEL_4:
  if ( v6 > 1 )
    sub_69F740((__int64)&v51);
  return v5;
}

