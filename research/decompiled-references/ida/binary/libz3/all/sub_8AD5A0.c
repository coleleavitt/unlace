__int64 __fastcall sub_8AD5A0(__int64 a1, unsigned int a2, unsigned int a3, int *a4, int *a5)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v10; // rax
  unsigned int v11; // r15d
  int v12; // r9d
  int v13; // eax
  int v14; // r9d
  _QWORD *v15; // r14
  int v16; // eax
  __int64 v17; // rax
  char v18; // si
  unsigned __int64 *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  size_t v26; // rdi
  __int64 v27; // rax
  _QWORD *v28; // r13
  __int64 v29; // rsi
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rcx
  char v34; // di
  __int64 v35; // rcx
  char v36; // di
  __int64 v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rsi
  _QWORD *v40; // rax
  char **exception; // rbp
  __int64 v42; // rdx
  int v43; // [rsp+8h] [rbp-D0h]
  void *v44; // [rsp+8h] [rbp-D0h]
  _QWORD *v45; // [rsp+18h] [rbp-C0h]
  _DWORD *v46; // [rsp+20h] [rbp-B8h]
  unsigned int v47; // [rsp+2Ch] [rbp-ACh]
  unsigned int v48; // [rsp+3Ch] [rbp-9Ch] BYREF
  __int64 v49[4]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v50; // [rsp+60h] [rbp-78h]
  __int64 v51; // [rsp+68h] [rbp-70h] BYREF
  unsigned __int64 v52; // [rsp+70h] [rbp-68h]
  __int64 v53; // [rsp+78h] [rbp-60h]
  unsigned __int64 v54; // [rsp+80h] [rbp-58h]
  int v55; // [rsp+88h] [rbp-50h]
  int v56; // [rsp+90h] [rbp-48h]
  int v57; // [rsp+94h] [rbp-44h]
  char v58; // [rsp+98h] [rbp-40h]

  v7 = a2;
  v8 = a3;
  v10 = *(_QWORD *)(a1 + 40);
  if ( v10 )
    v11 = *(_DWORD *)(v10 - 4);
  else
    v11 = 0;
  v48 = v11;
  v12 = *(_DWORD *)(a1 + 128);
  v50 = __PAIR64__(a3, a2);
  v43 = v12;
  v51 = 0;
  v52 = 0;
  v53 = 1;
  v54 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v51, a4);
  v13 = a4[8];
  v14 = v43;
  v58 = 0;
  v15 = *(_QWORD **)(a1 + 40);
  v55 = v13;
  v16 = *a5;
  v56 = v43;
  v57 = v16;
  if ( v15 )
  {
    v17 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v17 == *((_DWORD *)v15 - 2) )
    {
      v47 = (unsigned int)(3 * v17 + 1) >> 1;
      v26 = (v47 << 6) + 8;
      if ( ((_DWORD)v17 << 6) + 8 >= (unsigned int)v26 || (unsigned int)v17 >= (unsigned int)(3 * v17 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_12D192(v49, "Overflow encountered when expanding vector", v42);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v49);
        sub_233E40((__int64)v49);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v27 = sub_186B270(v26);
      v28 = *(_QWORD **)(a1 + 40);
      v46 = (_DWORD *)v27;
      v15 = (_QWORD *)(v27 + 8);
      if ( v28 )
      {
        v29 = *((unsigned int *)v28 - 1);
        v30 = v27 + 8;
        *(_DWORD *)(v27 + 4) = v29;
        v31 = v28;
        v32 = &v28[8 * v29];
        if ( v28 != v32 )
        {
          do
          {
            v33 = *v31;
            v34 = *(_BYTE *)(v30 + 12);
            v31 += 8;
            v30 += 64;
            *(_QWORD *)(v30 - 64) = v33;
            *(_DWORD *)(v30 - 56) = *((_DWORD *)v31 - 14);
            *(_BYTE *)(v30 - 52) = v34 & 0xFC | *((_BYTE *)v31 - 52) & 3;
            v35 = *(v31 - 6);
            *(v31 - 6) = 0;
            v36 = *(_BYTE *)(v30 - 36);
            *(_QWORD *)(v30 - 48) = v35;
            *(_DWORD *)(v30 - 40) = *((_DWORD *)v31 - 10);
            *(_BYTE *)(v30 - 36) = v36 & 0xFC | *((_BYTE *)v31 - 36) & 3;
            v37 = *(v31 - 4);
            *(v31 - 4) = 0;
            *(_QWORD *)(v30 - 32) = v37;
            *(_DWORD *)(v30 - 24) = *((_DWORD *)v31 - 6);
            *(_DWORD *)(v30 - 16) = *((_DWORD *)v31 - 4);
            *(_DWORD *)(v30 - 12) = *((_DWORD *)v31 - 3);
            *(_BYTE *)(v30 - 8) = *((_BYTE *)v31 - 8);
          }
          while ( v32 != v31 );
        }
        v38 = *((unsigned int *)v28 - 1);
        v45 = &v28[8 * v38];
        if ( (_DWORD)v38 )
        {
          do
          {
            v44 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v28 + 1);
            v39 = v28 + 3;
            v28 += 8;
            sub_182CBA0(v44, v39);
          }
          while ( v45 != v28 );
          v28 = *(_QWORD **)(a1 + 40);
        }
        sub_186B220(v28 - 1);
        v19 = &v15[8 * (unsigned __int64)(unsigned int)v46[1]];
      }
      else
      {
        *(_DWORD *)(v27 + 4) = 0;
        v19 = (unsigned __int64 *)(v27 + 8);
      }
      *(_QWORD *)(a1 + 40) = v15;
      v14 = v56;
      *v46 = v47;
      v18 = v58;
    }
    else
    {
      v18 = 0;
      v19 = &v15[8 * v17];
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0x88u);
    v15 = v40 + 1;
    *v40 = 2;
    v14 = v56;
    *(_QWORD *)(a1 + 40) = v40 + 1;
    v18 = v58;
    v19 = v40 + 1;
  }
  v20 = v50;
  *((_DWORD *)v19 + 12) = v14;
  *((_BYTE *)v19 + 56) = v18;
  *v19 = v20;
  *((_DWORD *)v19 + 2) = v51;
  *((_BYTE *)v19 + 12) = BYTE4(v51) & 3 | *((_BYTE *)v19 + 12) & 0xFC;
  v21 = v52;
  v52 = 0;
  v19[2] = v21;
  *((_DWORD *)v19 + 6) = v53;
  *((_BYTE *)v19 + 28) = BYTE4(v53) & 3 | *((_BYTE *)v19 + 28) & 0xFC;
  v22 = v54;
  v54 = 0;
  v19[4] = v22;
  *((_DWORD *)v19 + 10) = v55;
  *((_DWORD *)v19 + 13) = v57;
  ++*((_DWORD *)v15 - 1);
  sub_25A130((char *)&v51);
  v23 = *(_QWORD *)(a1 + 184);
  if ( !v23 || (v24 = *(unsigned int *)(v23 - 4), (_DWORD)v24 == *(_DWORD *)(v23 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(a1 + 184));
    v23 = *(_QWORD *)(a1 + 184);
    v24 = *(unsigned int *)(v23 - 4);
  }
  *(_DWORD *)(v23 + 4 * v24) = 0;
  ++*(_DWORD *)(v23 - 4);
  sub_893BD0((unsigned int **)(*(_QWORD *)(a1 + 48) + 8 * v7), &v48);
  sub_893BD0((unsigned int **)(*(_QWORD *)(a1 + 56) + 8 * v8), &v48);
  return v11;
}

