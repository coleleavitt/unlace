__int64 __fastcall sub_859DC0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int *v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  int *v13; // r14
  unsigned int v14; // r14d
  _QWORD *v15; // rax
  __int64 *v16; // r11
  unsigned __int8 v17; // cl
  _QWORD *v18; // r9
  _QWORD *v19; // rsi
  _QWORD *v20; // rax
  int *v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rsi
  __int64 v24; // rdi
  int *v25; // r14
  int *v26; // r13
  unsigned int v27; // ebp
  int *v28; // r12
  int *v29; // rbp
  int *v30; // r15
  int *v31; // rsi
  __int64 v32; // rdi
  int *v33; // r15
  unsigned int v34; // eax
  _QWORD *v35; // rax
  unsigned __int8 v36; // [rsp+8h] [rbp-210h]
  unsigned __int8 v37; // [rsp+8h] [rbp-210h]
  unsigned __int8 v38; // [rsp+8h] [rbp-210h]
  unsigned __int8 v39; // [rsp+8h] [rbp-210h]
  unsigned __int8 v40; // [rsp+18h] [rbp-200h]
  __int64 *v41; // [rsp+20h] [rbp-1F8h]
  __int64 v42; // [rsp+20h] [rbp-1F8h]
  __int64 *v43; // [rsp+38h] [rbp-1E0h]
  unsigned __int8 v44; // [rsp+38h] [rbp-1E0h]
  __int64 v45; // [rsp+40h] [rbp-1D8h]
  unsigned int v46; // [rsp+48h] [rbp-1D0h]
  void *ptr; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-1C0h]
  _BYTE v49[16]; // [rsp+60h] [rbp-1B8h] BYREF
  unsigned int v50; // [rsp+70h] [rbp-1A8h] BYREF
  char v51; // [rsp+74h] [rbp-1A4h]
  __int64 v52; // [rsp+78h] [rbp-1A0h]
  unsigned int v53; // [rsp+B0h] [rbp-168h] BYREF
  char v54; // [rsp+B4h] [rbp-164h]
  _QWORD *v55; // [rsp+B8h] [rbp-160h]
  unsigned int v56; // [rsp+C0h] [rbp-158h]
  int *v57; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-120h]
  _BYTE v59[280]; // [rsp+100h] [rbp-118h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *a1;
  v51 &= ~1u;
  v50 = 0;
  v5 = sub_856400((__int64)&v50, v4, v3);
  v6 = v50;
  if ( !(_BYTE)v5 )
    goto LABEL_4;
  if ( v50 != 8 )
  {
    v5 = 0;
    goto LABEL_4;
  }
  v37 = v5;
  ptr = v49;
  v48 = 0x400000000LL;
  sub_819B80(a2, (__int64)&ptr);
  if ( (_DWORD)v48 != 1 )
  {
    v58 = 0x400000000LL;
    v57 = (int *)v59;
    if ( (_DWORD)v48 )
    {
      v9 = (int *)v59;
      v10 = 0;
      v11 = 4;
      v12 = 0;
      v41 = a1;
      while ( 1 )
      {
        v13 = (int *)(v52 + 56LL * *((unsigned int *)ptr + v12));
        if ( v11 < v10 + 1 )
        {
          if ( v13 < v9 || v13 >= &v9[14 * v10] )
          {
            v45 = -1;
            v44 = 0;
          }
          else
          {
            v44 = v37;
            v45 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v13 - (char *)v9) >> 3);
          }
          v9 = (int *)sub_25D5F70(&v57, v59, v10 + 1, 56, &v53);
          v28 = &v57[14 * (unsigned int)v58];
          if ( v57 != v28 )
          {
            v29 = v57;
            v30 = v9;
            do
            {
              v31 = v29;
              v32 = (__int64)v30;
              v29 += 14;
              v30 += 14;
              sub_69F700(v32, v31);
            }
            while ( v28 != v29 );
            v33 = v57;
            v28 = &v57[14 * (unsigned int)v58];
            if ( v57 != v28 )
            {
              do
              {
                v28 -= 14;
                if ( (unsigned int)*v28 > 1 )
                  sub_69F740((__int64)v28);
              }
              while ( v33 != v28 );
              v28 = v57;
            }
          }
          v34 = v53;
          if ( v28 != (int *)v59 )
          {
            v46 = v53;
            free(v28);
            v34 = v46;
          }
          HIDWORD(v58) = v34;
          v57 = v9;
          v10 = (unsigned int)v58;
          if ( v44 )
            v13 = &v9[14 * v45];
        }
        ++v12;
        sub_6A4260((__int64)&v9[14 * v10], v13);
        v14 = v48;
        v9 = v57;
        v10 = (unsigned int)(v58 + 1);
        LODWORD(v58) = v58 + 1;
        if ( (unsigned int)v12 >= (unsigned int)v48 )
          break;
        v11 = HIDWORD(v58);
      }
      v55 = nullptr;
      v54 &= ~1u;
      v43 = v41;
      v42 = 14LL * (unsigned int)v48;
      v56 = 0;
      v53 = 8;
      v15 = (_QWORD *)operator new[](v42 * 4 + 8);
      v16 = v43;
      v17 = v37;
      *v15 = v14;
      v18 = v15 + 1;
      if ( v14 )
      {
        v19 = v15 + 1;
        v20 = &v15[(unsigned __int64)v42 / 2 + 1];
        do
        {
          *((_BYTE *)v19 + 4) &= ~1u;
          v19 += 7;
          *((_DWORD *)v19 - 14) = 0;
        }
        while ( v20 != v19 );
        v55 = v18;
        v56 = v14;
        v21 = &v9[v42];
        v22 = (__int64)v18;
        do
        {
          v23 = (__int64)v9;
          v24 = v22;
          v9 += 14;
          v22 += 56;
          sub_6A63E0(v24, v23);
        }
        while ( v21 != v9 );
        v17 = v37;
        v16 = v43;
        goto LABEL_19;
      }
    }
    else
    {
      v54 &= ~1u;
      v55 = nullptr;
      v56 = 0;
      v53 = 8;
      v35 = (_QWORD *)operator new[](8u);
      v17 = v37;
      v16 = a1;
      *v35 = 0;
      v18 = v35 + 1;
    }
    v55 = v18;
    v56 = 0;
LABEL_19:
    v40 = v17;
    sub_824D00(v16[1], *(_QWORD **)(*v16 + 16), (__int64)&v53);
    v5 = v40;
    if ( v53 > 1 )
    {
      sub_69F740((__int64)&v53);
      v5 = v40;
    }
    v25 = v57;
    v26 = &v57[14 * (unsigned int)v58];
    if ( v57 != v26 )
    {
      v27 = v5;
      do
      {
        v26 -= 14;
        if ( (unsigned int)*v26 > 1 )
          sub_69F740((__int64)v26);
      }
      while ( v25 != v26 );
      v26 = v57;
      v5 = v27;
    }
    if ( v26 != (int *)v59 )
    {
      v38 = v5;
      free(v26);
      v5 = v38;
    }
    goto LABEL_29;
  }
  sub_824D00(a1[1], *(_QWORD **)(*a1 + 16), v52 + 56LL * *(unsigned int *)ptr);
  v5 = v37;
LABEL_29:
  if ( ptr != v49 )
  {
    v39 = v5;
    free(ptr);
    v5 = v39;
  }
  v6 = v50;
LABEL_4:
  if ( v6 > 1 )
  {
    v36 = v5;
    sub_69F740((__int64)&v50);
    return v36;
  }
  return v5;
}

