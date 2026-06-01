void __fastcall sub_83BB30(int **a1, int *a2, int a3)
{
  int *v5; // r14
  __int64 v6; // rax
  int *v7; // rax
  void *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  unsigned int v11; // r13d
  size_t v12; // rdi
  __int64 v13; // rax
  int *v14; // r15
  __int64 v15; // rdi
  __int64 v16; // rax
  int *v17; // rdx
  int *v18; // rdi
  int *i; // rax
  int v20; // ecx
  char v21; // si
  __int64 v22; // rcx
  char v23; // si
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // r13
  int *v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rdx
  char v32; // cl
  char v33; // si
  __int64 v34; // rdx
  char v35; // cl
  char v36; // si
  _QWORD *v37; // rax
  char **exception; // rbp
  int *v39; // [rsp+8h] [rbp-B0h]
  _DWORD *v40; // [rsp+10h] [rbp-A8h]
  unsigned int v41; // [rsp+1Ch] [rbp-9Ch]
  __int64 v42[4]; // [rsp+30h] [rbp-88h] BYREF
  __int64 v43; // [rsp+50h] [rbp-68h] BYREF
  __int64 v44; // [rsp+58h] [rbp-60h]
  __int64 v45; // [rsp+60h] [rbp-58h] BYREF
  __int64 v46; // [rsp+68h] [rbp-50h]
  int v47; // [rsp+70h] [rbp-48h]

  if ( *a1 && *((_DWORD *)a1 + 6) < (unsigned int)*(*a1 - 1) )
  {
    v43 = 0;
    v44 = 0;
    v45 = 1;
    v46 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, a2);
    v28 = *((unsigned int *)a1 + 6);
    v47 = a3;
    v29 = (__int64)&(*a1)[10 * v28];
    v30 = *(_DWORD *)v29;
    *(_DWORD *)v29 = v43;
    LODWORD(v43) = v30;
    v31 = *(_QWORD *)(v29 + 8);
    *(_QWORD *)(v29 + 8) = v44;
    v44 = v31;
    v32 = *(_BYTE *)(v29 + 4);
    *(_BYTE *)(v29 + 4) = BYTE4(v43) & 2 | v32 & 0xFD;
    BYTE4(v43) = v32 & 2 | BYTE4(v43) & 0xFD;
    v33 = *(_BYTE *)(v29 + 4);
    *(_BYTE *)(v29 + 4) = BYTE4(v43) & 1 | v33 & 0xFE;
    BYTE4(v43) = v33 & 1 | BYTE4(v43) & 0xFE;
    LODWORD(v31) = *(_DWORD *)(v29 + 16);
    *(_DWORD *)(v29 + 16) = v45;
    LODWORD(v45) = v31;
    v34 = *(_QWORD *)(v29 + 24);
    *(_QWORD *)(v29 + 24) = v46;
    v46 = v34;
    v35 = *(_BYTE *)(v29 + 20);
    *(_BYTE *)(v29 + 20) = BYTE4(v45) & 2 | v35 & 0xFD;
    BYTE4(v45) = v35 & 2 | BYTE4(v45) & 0xFD;
    v36 = *(_BYTE *)(v29 + 20) & 1;
    *(_BYTE *)(v29 + 20) = BYTE4(v45) & 1 | *(_BYTE *)(v29 + 20) & 0xFE;
    BYTE4(v45) = v36 | BYTE4(v45) & 0xFE;
    *(_DWORD *)(v29 + 32) = v47;
    sub_25A130((char *)&v43);
  }
  else
  {
    v43 = 0;
    v44 = 0;
    v45 = 1;
    v46 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v43, a2);
    v5 = *a1;
    v47 = a3;
    if ( v5 )
    {
      v6 = (unsigned int)*(v5 - 1);
      if ( (_DWORD)v6 == *(v5 - 2) )
      {
        v11 = (unsigned int)(3 * v6 + 1) >> 1;
        v41 = v11;
        v12 = 40 * v11 + 8;
        if ( 40 * (int)v6 + 8 >= (unsigned int)v12 || (unsigned int)v6 >= v11 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v42, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v13 = sub_186B270(v12);
        v14 = *a1;
        v40 = (_DWORD *)v13;
        v5 = (int *)(v13 + 8);
        if ( *a1 )
        {
          v15 = v13;
          v16 = (unsigned int)*(v14 - 1);
          v17 = v5;
          *(_DWORD *)(v15 + 4) = v16;
          v18 = &v14[10 * v16];
          for ( i = v14; v18 != i; *(v17 - 2) = *(i - 2) )
          {
            v20 = *i;
            v21 = *((_BYTE *)i + 4);
            i += 10;
            v17 += 10;
            *(v17 - 10) = v20;
            *((_BYTE *)v17 - 36) = v21 & 3 | *(_BYTE *)(v17 - 9) & 0xFC;
            v22 = *((_QWORD *)i - 4);
            *((_QWORD *)i - 4) = 0;
            *((_QWORD *)v17 - 4) = v22;
            v23 = *((_BYTE *)i - 20);
            *(v17 - 6) = *(i - 6);
            *((_BYTE *)v17 - 20) = v23 & 3 | *(_BYTE *)(v17 - 5) & 0xFC;
            v24 = *((_QWORD *)i - 2);
            *((_QWORD *)i - 2) = 0;
            *((_QWORD *)v17 - 2) = v24;
          }
          v25 = (unsigned int)*(v14 - 1);
          if ( (_DWORD)v25 )
          {
            v39 = &v14[10 * v25];
            do
            {
              v26 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v14);
              v27 = v14 + 4;
              v14 += 10;
              sub_182CBA0(v26, v27);
            }
            while ( v14 != v39 );
            v14 = *a1;
          }
          sub_186B220(v14 - 2);
          v7 = &v5[10 * v40[1]];
        }
        else
        {
          *(_DWORD *)(v13 + 4) = 0;
          v7 = (int *)(v13 + 8);
        }
        *a1 = v5;
        *v40 = v41;
      }
      else
      {
        v7 = &v5[10 * v6];
      }
    }
    else
    {
      v37 = (_QWORD *)sub_186B270(0x58u);
      v5 = (int *)(v37 + 1);
      *v37 = 2;
      *a1 = (int *)(v37 + 1);
      v7 = (int *)(v37 + 1);
    }
    v8 = qword_1C7F2C0;
    *v7 = v43;
    *((_BYTE *)v7 + 4) = BYTE4(v43) & 3 | v7[1] & 0xFC;
    v9 = v44;
    v44 = 0;
    *((_QWORD *)v7 + 1) = v9;
    v7[4] = v45;
    *((_BYTE *)v7 + 20) = BYTE4(v45) & 3 | v7[5] & 0xFC;
    v10 = v46;
    v46 = 0;
    *((_QWORD *)v7 + 3) = v10;
    v7[8] = v47;
    ++*(v5 - 1);
    sub_182CBA0(v8, &v43);
    sub_182CBA0(v8, &v45);
  }
  ++*((_DWORD *)a1 + 6);
}

