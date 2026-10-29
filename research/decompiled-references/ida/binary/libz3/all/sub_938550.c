void __fastcall sub_938550(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v10; // rax
  _DWORD *v11; // rsi
  bool v12; // zf
  _DWORD *v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 **v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 v23; // rdx
  int v24; // ebx
  unsigned int v25; // r12d
  size_t v26; // rdi
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rdx
  __int64 v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rdi
  __int64 v35; // rcx
  char v36; // r8
  __int64 v37; // rcx
  char v38; // r8
  __int64 v39; // rcx
  char v40; // r8
  __int64 v41; // rcx
  char v42; // r8
  __int64 v43; // rax
  __int64 v44; // r15
  char *v45; // rdi
  _QWORD *v46; // rax
  char **exception; // r12
  _DWORD *v49; // [rsp+0h] [rbp-C8h]
  char v51; // [rsp+1Bh] [rbp-ADh]
  unsigned int v52; // [rsp+1Ch] [rbp-ACh] BYREF
  __int64 v53[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 *v54; // [rsp+40h] [rbp-88h] BYREF
  int v55; // [rsp+48h] [rbp-80h] BYREF
  char v56; // [rsp+4Ch] [rbp-7Ch]
  __int64 *v57; // [rsp+50h] [rbp-78h]
  int v58; // [rsp+58h] [rbp-70h]
  char v59; // [rsp+5Ch] [rbp-6Ch]
  __int64 v60; // [rsp+60h] [rbp-68h] BYREF
  int v61; // [rsp+68h] [rbp-60h] BYREF
  char v62; // [rsp+6Ch] [rbp-5Ch]
  __int64 *v63; // [rsp+70h] [rbp-58h]
  int v64; // [rsp+78h] [rbp-50h]
  char v65; // [rsp+7Ch] [rbp-4Ch]
  __int64 *v66; // [rsp+80h] [rbp-48h]
  unsigned int v67; // [rsp+88h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v10 = *(_QWORD *)(a1 + 312);
  v11 = (_DWORD *)(*(_QWORD *)(v10 + 8LL * a3) + 80LL * a2);
  v12 = *v11 == -1;
  v52 = a5;
  if ( v12 )
  {
LABEL_2:
    v13 = (_DWORD *)(*(_QWORD *)(v10 + 8 * v6) + 80 * v5);
    if ( *v13 == -1 || sub_927C80(a4, (__int64)(v13 + 2)) )
    {
      v54 = (__int64 *)__PAIR64__(a3, a2);
      sub_91F480((__int64)&v55, a4);
      v14 = *(_QWORD **)(a1 + 304);
      v67 = a5;
      if ( v14 )
      {
        v15 = *((unsigned int *)v14 - 1);
        if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
        {
          v25 = (unsigned int)(3 * v15 + 1) >> 1;
          v26 = 80 * v25 + 8;
          if ( 80 * (int)v15 + 8 >= (unsigned int)v26 || (unsigned int)v15 >= v25 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_91CD50(v53, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v53);
            sub_233E40((__int64)v53);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v27 = sub_186B270(v26);
          v28 = *(_QWORD *)(a1 + 304);
          v49 = (_DWORD *)v27;
          v14 = (_QWORD *)(v27 + 8);
          if ( v28 )
          {
            v29 = v27;
            v30 = *(unsigned int *)(v28 - 4);
            v31 = v14;
            *(_DWORD *)(v29 + 4) = v30;
            v32 = 5 * v30;
            v33 = (_QWORD *)v28;
            v34 = (_QWORD *)(v28 + 16 * v32);
            if ( (_QWORD *)v28 != v34 )
            {
              do
              {
                v35 = *v33;
                v36 = *((_BYTE *)v31 + 12);
                v33 += 10;
                v31 += 10;
                *(v31 - 10) = v35;
                *((_DWORD *)v31 - 18) = *((_DWORD *)v33 - 18);
                *((_BYTE *)v31 - 68) = v36 & 0xFC | *((_BYTE *)v33 - 68) & 3;
                v37 = *(v33 - 8);
                *(v33 - 8) = 0;
                v38 = *((_BYTE *)v31 - 52);
                *(v31 - 8) = v37;
                *((_DWORD *)v31 - 14) = *((_DWORD *)v33 - 14);
                *((_BYTE *)v31 - 52) = v38 & 0xFC | *((_BYTE *)v33 - 52) & 3;
                v39 = *(v33 - 6);
                *(v33 - 6) = 0;
                v40 = *((_BYTE *)v31 - 36);
                *(v31 - 6) = v39;
                *((_DWORD *)v31 - 10) = *((_DWORD *)v33 - 10);
                *((_BYTE *)v31 - 36) = v40 & 0xFC | *((_BYTE *)v33 - 36) & 3;
                v41 = *(v33 - 4);
                *(v33 - 4) = 0;
                v42 = *((_BYTE *)v31 - 20);
                *(v31 - 4) = v41;
                *((_DWORD *)v31 - 6) = *((_DWORD *)v33 - 6);
                *((_BYTE *)v31 - 20) = v42 & 0xFC | *((_BYTE *)v33 - 20) & 3;
                *(v31 - 2) = *(v33 - 2);
                LODWORD(v41) = *((_DWORD *)v33 - 2);
                *(v33 - 2) = 0;
                *((_DWORD *)v31 - 2) = v41;
              }
              while ( v34 != v33 );
            }
            v43 = *(unsigned int *)(v28 - 4);
            if ( (_DWORD)v43 )
            {
              v44 = v28 + 80 * v43;
              do
              {
                sub_25A130((char *)(v28 + 40));
                v45 = (char *)(v28 + 8);
                v28 += 80;
                sub_25A130(v45);
              }
              while ( v28 != v44 );
              v28 = *(_QWORD *)(a1 + 304);
            }
            sub_186B220((void *)(v28 - 8));
            v16 = (__int64 **)&v14[10 * (unsigned int)v49[1]];
          }
          else
          {
            *(_DWORD *)(v27 + 4) = 0;
            v16 = (__int64 **)(v27 + 8);
          }
          *(_QWORD *)(a1 + 304) = v14;
          *v49 = v25;
        }
        else
        {
          v16 = (__int64 **)&v14[10 * v15];
        }
      }
      else
      {
        v46 = (_QWORD *)sub_186B270(0xA8u);
        v14 = v46 + 1;
        *v46 = 2;
        *(_QWORD *)(a1 + 304) = v46 + 1;
        v16 = (__int64 **)(v46 + 1);
      }
      *v16 = v54;
      *((_DWORD *)v16 + 2) = v55;
      *((_BYTE *)v16 + 12) = v56 & 3 | *((_BYTE *)v16 + 12) & 0xFC;
      v17 = v57;
      v57 = nullptr;
      v16[2] = v17;
      *((_DWORD *)v16 + 6) = v58;
      *((_BYTE *)v16 + 28) = v59 & 3 | *((_BYTE *)v16 + 28) & 0xFC;
      v18 = v60;
      v60 = 0;
      v16[4] = (__int64 *)v18;
      *((_DWORD *)v16 + 10) = v61;
      *((_BYTE *)v16 + 44) = v62 & 3 | *((_BYTE *)v16 + 44) & 0xFC;
      v19 = v63;
      v63 = nullptr;
      v16[6] = v19;
      *((_DWORD *)v16 + 14) = v64;
      *((_BYTE *)v16 + 60) = v65 & 3 | *((_BYTE *)v16 + 60) & 0xFC;
      v16[8] = v66;
      v66 = nullptr;
      *((_DWORD *)v16 + 18) = v67;
      ++*((_DWORD *)v14 - 1);
      sub_25A130((char *)&v61);
      sub_25A130((char *)&v55);
      sub_935940((_QWORD *)a1);
    }
    return;
  }
  sub_91F480((__int64)&v54, (__int64)(v11 + 2));
  sub_1831620(qword_1C7F2C0, &v54);
  sub_1831620(qword_1C7F2C0, &v60);
  v51 = sub_927C80(a4, (__int64)&v54);
  sub_25A130((char *)&v60);
  sub_25A130((char *)&v54);
  if ( !v51 )
  {
    v10 = *(_QWORD *)(a1 + 312);
    goto LABEL_2;
  }
  v20 = *(_QWORD *)(a1 + 376);
  if ( v20 )
    *(_DWORD *)(v20 - 4) = 0;
  sub_928E60((_QWORD *)a1, a3, a2, (_QWORD *)(a1 + 376));
  if ( a5 != -2 )
    sub_91D6F0((_QWORD *)(a1 + 376), &v52);
  v21 = *(_QWORD *)(a1 + 376);
  v22 = *(_QWORD *)(a1 + 16);
  if ( v21 )
    v23 = *(unsigned int *)(v21 - 4);
  else
    v23 = 0;
  v24 = *(_DWORD *)(a1 + 8);
  sub_B727F0(&v54, *(_QWORD *)(a1 + 16), v23);
  v58 = v24;
  v60 = 0;
  v54 = (__int64 *)&off_1C578E0;
  sub_B72D20(&v54, v22);
  v53[0] = sub_9382C0(v22, (__int64)&v54) | 3;
  sub_8E8670(v22, v53, -2);
  v54 = qword_1C6F870;
  sub_4EB210(&v60);
}

