__int64 __fastcall sub_53EA20(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 result; // rax
  __int64 v4; // rsi
  void *v5; // rbx
  __int64 v6; // rbx
  _QWORD *v7; // rax
  unsigned int v8; // esi
  unsigned int i; // eax
  unsigned int v10; // r13d
  size_t v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  char v20; // r9
  __int64 v21; // rcx
  char v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rbp
  _DWORD *v25; // r14
  __int64 v26; // rbp
  void *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rax
  void *v30; // rbp
  __int64 v31; // rax
  int v32; // edx
  char v33; // di
  __int64 v34; // rdx
  char v35; // r8
  __int64 v36; // rsi
  __int64 v37; // rdx
  void *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rsi
  void *v43; // rdi
  __int64 v44; // rsi
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rsi
  int v48; // eax
  _BYTE *v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r13
  __int64 v52; // rbp
  void *v53; // r14
  __int64 v54; // rsi
  unsigned int v55; // r13d
  size_t v56; // rsi
  unsigned int *v57; // rax
  _QWORD *v58; // rax
  char **v59; // r13
  char **exception; // r13
  __int64 v63; // [rsp+20h] [rbp-B8h]
  unsigned int v64; // [rsp+34h] [rbp-A4h]
  __int64 v65; // [rsp+38h] [rbp-A0h]
  unsigned int v66; // [rsp+40h] [rbp-98h]
  __int64 v67; // [rsp+40h] [rbp-98h]
  __int64 v68; // [rsp+48h] [rbp-90h]
  __int64 v69; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v70[2]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v71[2]; // [rsp+70h] [rbp-68h] BYREF
  __int64 v72; // [rsp+80h] [rbp-58h] BYREF
  __int64 v73; // [rsp+88h] [rbp-50h]
  __int64 v74; // [rsp+90h] [rbp-48h] BYREF
  __int64 v75; // [rsp+98h] [rbp-40h]

  v2 = 0;
  result = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(a1 + 80) = 0;
  for ( *(_BYTE *)(a1 + 112) = 1; result; result = *(_QWORD *)(a2 + 8) )
  {
    if ( v2 >= *(_DWORD *)(result - 4) )
      break;
    v70[0] = 0;
    v71[0] = 1;
    v4 = *(_QWORD *)(result + 8LL * v2);
    v63 = v2;
    v70[1] = 0;
    v71[1] = 0;
    if ( (unsigned __int8)sub_1666AE0(a1 + 48, v4, v70, &v72) && (v71[0] & 0x100000000LL) == 0 && LODWORD(v71[0]) == 1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( v6 )
      {
        v64 = *(_DWORD *)(v6 - 4);
        if ( v64 )
        {
          v7 = (_QWORD *)sub_186B270(0x48u);
          *v7 = 2;
          v6 = (__int64)(v7 + 1);
          v8 = v64;
          for ( i = *(_DWORD *)v7; i < v64; i = *(_DWORD *)(v67 - 8) )
          {
            v10 = (3 * i + 1) >> 1;
            v11 = 32 * v10 + 8;
            if ( 32 * i + 8 >= (unsigned int)v11 || i >= v10 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v72, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v72);
              sub_233E40((__int64)&v72);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v12 = sub_186B270(v11);
            v13 = *(unsigned int *)(v6 - 4);
            v14 = v12 + 8;
            v15 = (_DWORD *)v12;
            v16 = v12 + 8;
            *(_DWORD *)(v12 + 4) = v13;
            v17 = v6;
            v18 = v6 + 32 * v13;
            if ( v6 != v18 )
            {
              do
              {
                v19 = *(_DWORD *)v17;
                v20 = *(_BYTE *)(v17 + 4);
                v17 += 32;
                v16 += 32;
                *(_DWORD *)(v16 - 32) = v19;
                *(_BYTE *)(v16 - 28) = v20 & 3 | *(_BYTE *)(v16 - 28) & 0xFC;
                v21 = *(_QWORD *)(v17 - 24);
                *(_QWORD *)(v17 - 24) = 0;
                *(_QWORD *)(v16 - 24) = v21;
                v22 = *(_BYTE *)(v17 - 12);
                *(_DWORD *)(v16 - 16) = *(_DWORD *)(v17 - 16);
                *(_BYTE *)(v16 - 12) = v22 & 3 | *(_BYTE *)(v16 - 12) & 0xFC;
                v23 = *(_QWORD *)(v17 - 8);
                *(_QWORD *)(v17 - 8) = 0;
                *(_QWORD *)(v16 - 8) = v23;
              }
              while ( v17 != v18 );
            }
            v24 = *(unsigned int *)(v6 - 4);
            if ( (_DWORD)v24 )
            {
              v65 = v6;
              v25 = v15;
              v66 = v2;
              v26 = v6 + 32 * v24;
              v68 = v14;
              do
              {
                v27 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v6);
                v28 = v6 + 16;
                v6 += 32;
                sub_182CBA0(v27, v28);
              }
              while ( v26 != v6 );
              v6 = v65;
              v2 = v66;
              v15 = v25;
              v14 = v68;
            }
            v67 = v14;
            sub_186B220((void *)(v6 - 8));
            v6 = v67;
            *v15 = v10;
            v8 = v64;
          }
          v29 = v6;
          *(_DWORD *)(v6 - 4) = v8;
          do
          {
            *(_OWORD *)(v29 + 16) = 0;
            v29 += 32;
            *(_OWORD *)(v29 - 32) = 0;
            *(_DWORD *)(v29 - 16) = 1;
            *(_BYTE *)(v29 - 28) = 0;
            *(_BYTE *)(v29 - 12) = 0;
          }
          while ( v6 + 32LL * v8 != v29 );
        }
        else
        {
          v6 = 0;
        }
      }
      v72 = 1;
      v73 = 0;
      v74 = 1;
      v75 = 0;
      sub_182CBA0(qword_1C7F2C0, &v74);
      v30 = qword_1C7F2C0;
      v31 = v6 + 32 * v63;
      v32 = *(_DWORD *)v31;
      v33 = *(_BYTE *)(v31 + 4);
      *(_DWORD *)v31 = v72;
      LODWORD(v72) = v32;
      v34 = *(_QWORD *)(v31 + 8);
      *(_QWORD *)(v31 + 8) = v73;
      v73 = v34;
      LOBYTE(v34) = v33 & 1 | BYTE4(v72) & 0xFC | v33 & 2;
      *(_BYTE *)(v31 + 4) = BYTE4(v72) & 1 | v33 & 0xFC | BYTE4(v72) & 2;
      v35 = *(_BYTE *)(v31 + 20);
      BYTE4(v72) = v34;
      LODWORD(v34) = *(_DWORD *)(v31 + 16);
      v36 = v75;
      *(_DWORD *)(v31 + 16) = 1;
      LODWORD(v74) = v34;
      v37 = *(_QWORD *)(v31 + 24);
      *(_QWORD *)(v31 + 24) = v36;
      v75 = v37;
      LOBYTE(v37) = v35 & 1 | v35 & 2 | BYTE4(v74) & 0xFC;
      *(_BYTE *)(v31 + 20) = v35 & 0xFC | BYTE4(v74) & 2;
      BYTE4(v74) = v37;
      sub_182CBA0(v30, &v72);
      sub_182CBA0(v30, &v74);
      v69 = v6;
      sub_536E30((unsigned __int64 *)(a1 + 88), &v69);
      BYTE4(v72) &= 0xFCu;
      v38 = qword_1C7F2C0;
      BYTE4(v74) &= 0xFCu;
      LODWORD(v72) = 0;
      v73 = 0;
      LODWORD(v74) = 1;
      v75 = 0;
      if ( (v70[0] & 0x100000000LL) != 0 )
        sub_182C690(qword_1C7F2C0, &v72, v70);
      else
        LODWORD(v72) = v70[0];
      if ( (v71[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v38, &v74, v71);
      }
      else
      {
        BYTE4(v74) &= ~1u;
        LODWORD(v74) = v71[0];
      }
      sub_1831620(qword_1C7F2C0, &v72);
      v39 = *(_QWORD *)(a1 + 96);
      if ( !v39 || (v40 = *(unsigned int *)(v39 - 4), (_DWORD)v40 == *(_DWORD *)(v39 - 8)) )
      {
        sub_53D790((__int64 *)(a1 + 96));
        v39 = *(_QWORD *)(a1 + 96);
        v40 = *(unsigned int *)(v39 - 4);
      }
      v41 = v39 + 32 * v40;
      *(_DWORD *)v41 = v72;
      *(_BYTE *)(v41 + 4) = BYTE4(v72) & 3 | *(_BYTE *)(v41 + 4) & 0xFC;
      v42 = v73;
      v73 = 0;
      *(_QWORD *)(v41 + 8) = v42;
      *(_DWORD *)(v41 + 16) = v74;
      v43 = qword_1C7F2C0;
      *(_BYTE *)(v41 + 20) = BYTE4(v74) & 3 | *(_BYTE *)(v41 + 20) & 0xFC;
      v44 = v75;
      v75 = 0;
      *(_QWORD *)(v41 + 24) = v44;
      ++*(_DWORD *)(v39 - 4);
      sub_182CBA0(v43, &v72);
      sub_182CBA0(v43, &v74);
      v45 = *(_QWORD **)(a1 + 104);
      if ( v45 )
      {
        v46 = *((_DWORD *)v45 - 1);
        if ( v46 == *((_DWORD *)v45 - 2) )
        {
          v55 = (3 * v46 + 1) >> 1;
          v56 = v55 + 8;
          if ( v46 + 8 >= (unsigned int)v56 || v46 >= v55 )
          {
            v59 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v72, "Overflow encountered when expanding vector");
            *v59 = (char *)off_1C63128;
            sub_2333C0(v59 + 1, &v72);
            sub_233E40((__int64)&v72);
            __cxa_throw(v59, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v57 = (unsigned int *)sub_186B300(v45 - 1, v56);
          v45 = v57 + 2;
          *v57 = v55;
          *(_QWORD *)(a1 + 104) = v57 + 2;
          LODWORD(v57) = v57[1];
          v49 = (char *)v45 + (unsigned int)v57;
          v48 = (_DWORD)v57 + 1;
        }
        else
        {
          v47 = v46;
          v48 = v46 + 1;
          v49 = (char *)v45 + v47;
        }
      }
      else
      {
        v58 = (_QWORD *)sub_186B270(0xAu);
        *v58 = 2;
        v45 = v58 + 1;
        *(_QWORD *)(a1 + 104) = v58 + 1;
        v49 = v58 + 1;
        v48 = 1;
      }
      *v49 = 1;
      *((_DWORD *)v45 - 1) = v48;
      if ( v6 )
      {
        v50 = *(unsigned int *)(v6 - 4);
        if ( (_DWORD)v50 )
        {
          v51 = v6;
          v52 = v6 + 32 * v50;
          do
          {
            v53 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v51);
            v54 = v51 + 16;
            v51 += 32;
            sub_182CBA0(v53, v54);
          }
          while ( v51 != v52 );
        }
        sub_186B220((void *)(v6 - 8));
      }
    }
    v5 = qword_1C7F2C0;
    ++v2;
    sub_182CBA0(qword_1C7F2C0, v70);
    sub_182CBA0(v5, v71);
  }
  return result;
}

