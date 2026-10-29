__int64 __fastcall sub_6CBB20(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // r12
  __int64 *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  void *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // r12d
  _QWORD *v12; // rax
  void *v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // r14d
  size_t v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r15
  _DWORD *v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdi
  int v27; // ecx
  char v28; // r8
  __int64 v29; // rcx
  char v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r12
  _QWORD *v35; // r15
  void *v36; // r13
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rbp
  int v40; // eax
  unsigned int v41; // r12d
  _QWORD *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r12
  bool v46; // zf
  unsigned int v47; // edx
  _DWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  int v51; // ecx
  __int64 v52; // rax
  __int64 *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // rdi
  __int64 v57; // r12
  char **exception; // rbp
  __int64 v59; // [rsp+8h] [rbp-D0h]
  unsigned int v61; // [rsp+20h] [rbp-B8h]
  __int64 v62; // [rsp+20h] [rbp-B8h]
  _DWORD *v63; // [rsp+28h] [rbp-B0h]
  _DWORD *v64; // [rsp+28h] [rbp-B0h]
  __int64 v65; // [rsp+28h] [rbp-B0h]
  __int64 v66; // [rsp+28h] [rbp-B0h]
  __int64 *v67; // [rsp+30h] [rbp-A8h]
  __int64 v70; // [rsp+48h] [rbp-90h] BYREF
  char v71; // [rsp+56h] [rbp-82h] BYREF
  char v72; // [rsp+57h] [rbp-81h] BYREF
  __int64 v73; // [rsp+58h] [rbp-80h] BYREF
  __int64 v74; // [rsp+60h] [rbp-78h] BYREF
  __int64 v75; // [rsp+68h] [rbp-70h]
  __int64 v76; // [rsp+70h] [rbp-68h] BYREF
  __int64 v77; // [rsp+78h] [rbp-60h]
  __int64 v78[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v79; // [rsp+90h] [rbp-48h]
  __int64 v80; // [rsp+98h] [rbp-40h]

  v70 = a2;
  if ( !a3 )
    return 0;
  v5 = *a5;
  v6 = a5;
  if ( *a5 )
  {
    v7 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = v5 + 32 * v7;
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v5);
        v10 = v5 + 16;
        v5 += 32;
        sub_182CBA0(v9, v10);
      }
      while ( v5 != v8 );
      v5 = *v6;
    }
    *(_DWORD *)(v5 - 4) = 0;
  }
  v11 = 0;
  do
  {
    v74 = 0;
    v75 = 0;
    v76 = 1;
    v77 = 0;
    sub_182CBA0(qword_1C7F2C0, &v76);
    v16 = (_QWORD *)*v6;
    BYTE4(v76) &= ~1u;
    LODWORD(v76) = 1;
    if ( v16 )
    {
      v17 = *((unsigned int *)v16 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
      {
        v18 = (unsigned int)(3 * v17 + 1) >> 1;
        v19 = 32 * v18 + 8;
        if ( 32 * (int)v17 + 8 >= (unsigned int)v19 || (unsigned int)v17 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v78, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v78);
          sub_233E40((__int64)v78);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v20 = sub_186B270(v19);
        v21 = *v6;
        v22 = (_DWORD *)v20;
        v16 = (_QWORD *)(v20 + 8);
        if ( *v6 )
        {
          v23 = *(unsigned int *)(v21 - 4);
          v24 = v20 + 8;
          *(_DWORD *)(v20 + 4) = v23;
          v25 = v21;
          v26 = v21 + 32 * v23;
          if ( v26 != v21 )
          {
            do
            {
              v27 = *(_DWORD *)v25;
              v28 = *(_BYTE *)(v25 + 4);
              v25 += 32;
              v24 += 32;
              *(_DWORD *)(v24 - 32) = v27;
              *(_BYTE *)(v24 - 28) = v28 & 3 | *(_BYTE *)(v24 - 28) & 0xFC;
              v29 = *(_QWORD *)(v25 - 24);
              *(_QWORD *)(v25 - 24) = 0;
              *(_QWORD *)(v24 - 24) = v29;
              v30 = *(_BYTE *)(v25 - 12);
              *(_DWORD *)(v24 - 16) = *(_DWORD *)(v25 - 16);
              *(_BYTE *)(v24 - 12) = v30 & 3 | *(_BYTE *)(v24 - 12) & 0xFC;
              v31 = *(_QWORD *)(v25 - 8);
              *(_QWORD *)(v25 - 8) = 0;
              *(_QWORD *)(v24 - 8) = v31;
            }
            while ( v25 != v26 );
          }
          v32 = *(unsigned int *)(v21 - 4);
          v33 = v21 + 32 * v32;
          if ( (_DWORD)v32 )
          {
            v63 = v22;
            v67 = v6;
            v61 = v11;
            v34 = v21;
            v35 = v16;
            do
            {
              v36 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v34);
              v37 = v34 + 16;
              v34 += 32;
              sub_182CBA0(v36, v37);
            }
            while ( v33 != v34 );
            v6 = v67;
            v16 = v35;
            v11 = v61;
            v22 = v63;
            v21 = *v67;
          }
          v64 = v22;
          sub_186B220((void *)(v21 - 8));
          v22 = v64;
          v12 = &v16[4 * (unsigned int)v64[1]];
        }
        else
        {
          *(_DWORD *)(v20 + 4) = 0;
          v12 = (_QWORD *)(v20 + 8);
        }
        *v6 = (__int64)v16;
        *v22 = v18;
      }
      else
      {
        v12 = &v16[4 * v17];
      }
    }
    else
    {
      v43 = (_QWORD *)sub_186B270(0x48u);
      v16 = v43 + 1;
      *v43 = 2;
      *v6 = (__int64)(v43 + 1);
      v12 = v43 + 1;
    }
    v13 = qword_1C7F2C0;
    ++v11;
    *(_DWORD *)v12 = v74;
    *((_BYTE *)v12 + 4) = BYTE4(v74) & 3 | *((_BYTE *)v12 + 4) & 0xFC;
    v14 = v75;
    v75 = 0;
    v12[1] = v14;
    *((_DWORD *)v12 + 4) = v76;
    *((_BYTE *)v12 + 20) = BYTE4(v76) & 3 | *((_BYTE *)v12 + 20) & 0xFC;
    v15 = v77;
    v77 = 0;
    v12[3] = v15;
    ++*((_DWORD *)v16 - 1);
    sub_182CBA0(v13, &v74);
    sub_182CBA0(v13, &v76);
  }
  while ( a3 >= v11 );
  v38 = *v6;
  v78[0] = 0;
  v78[1] = 0;
  v79 = 1;
  v80 = 0;
  v73 = 0;
  sub_6C01B0(&v73, &v70);
  v39 = v73;
  if ( !v73 )
  {
LABEL_64:
    v41 = 1;
    sub_25A130((char *)v78);
    return v41;
  }
  v59 = v38 + 32;
  while ( 1 )
  {
    v40 = *(_DWORD *)(v39 - 4);
    if ( !v40 )
      break;
    v44 = (unsigned int)(v40 - 1);
    v45 = *(_QWORD *)(v39 + 8 * v44);
    *(_DWORD *)(v39 - 4) = v44;
    v46 = *(_WORD *)(v45 + 4) == 0;
    v70 = v45;
    if ( !v46 )
      goto LABEL_41;
    v47 = *(_DWORD *)(v45 + 24);
    v48 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
    if ( !v48 )
      goto LABEL_37;
    if ( *v48 == 5 )
    {
      v51 = v48[1];
      if ( v51 == 6 )
      {
        v62 = v45 + 32 + 8LL * v47;
        if ( 8LL * v47 )
        {
          v53 = (__int64 *)(v45 + 32);
          do
          {
            v54 = *v53;
            v73 = v39;
            v74 = v54;
            sub_6C01B0(&v73, &v74);
            v39 = v73;
            ++v53;
          }
          while ( (__int64 *)v62 != v53 );
          if ( !v73 )
            goto LABEL_64;
        }
      }
      else
      {
        if ( v51 != 9 )
          goto LABEL_49;
        if ( v47 != 2 )
          goto LABEL_37;
        v66 = *(_QWORD *)(v45 + 40);
        v50 = a1 + 16;
        if ( !(unsigned __int8)sub_1666AE0(a1 + 16, *(_QWORD *)(v45 + 32), v78, &v71)
          || *(_WORD *)(v66 + 4)
          || *(_DWORD *)(v66 + 24) )
        {
LABEL_67:
          if ( *(_WORD *)(v45 + 4) )
            goto LABEL_42;
          v47 = *(_DWORD *)(v45 + 24);
          v48 = *(_DWORD **)(*(_QWORD *)(v45 + 16) + 24LL);
          if ( v48 )
            goto LABEL_36;
LABEL_37:
          if ( v47 )
          {
LABEL_41:
            v50 = a1 + 16;
            goto LABEL_42;
          }
          v49 = 0;
          while ( v45 != *(_QWORD *)(a4 + 8 * v49) )
          {
            if ( ++v49 == a3 )
              goto LABEL_41;
          }
          sub_2FC4A0((__int64)qword_1C7F2C0, 32 * v49 + v59, (__int64)v78, 32 * v49 + v59);
        }
        else
        {
          v52 = 0;
          while ( v66 != *(_QWORD *)(a4 + 8 * v52) )
          {
            if ( (unsigned int)++v52 >= a3 )
              goto LABEL_67;
          }
LABEL_75:
          v55 = 32 * v52;
          v56 = qword_1C7F2C0;
          v57 = v59 + v55;
          if ( LODWORD(v78[0]) )
          {
            if ( *(_DWORD *)v57 )
            {
              if ( (*(_BYTE *)(v57 + 20) & 1) != 0
                || *(_DWORD *)(v57 + 16) != 1
                || (v79 & 0x100000000LL) != 0
                || (_DWORD)v79 != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v57, v78, v57);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v57, v78, v57);
                sub_182CBA0(v56, v57 + 16);
                *(_BYTE *)(v57 + 20) &= ~1u;
                *(_DWORD *)(v57 + 16) = 1;
              }
            }
            else
            {
              sub_27B950((__int64)qword_1C7F2C0, v57, (int *)v78);
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, v59 + v55, (int *)(v59 + v55));
          }
        }
      }
    }
    else
    {
LABEL_36:
      if ( *v48 != 5 )
        goto LABEL_37;
LABEL_49:
      if ( v48[1] != 9 || v47 != 2 )
        goto LABEL_37;
      v65 = *(_QWORD *)(v45 + 32);
      v50 = a1 + 16;
      if ( (unsigned __int8)sub_1666AE0(a1 + 16, *(_QWORD *)(v45 + 40), v78, &v72)
        && !*(_WORD *)(v65 + 4)
        && !*(_DWORD *)(v65 + 24) )
      {
        v52 = 0;
        while ( v65 != *(_QWORD *)(a4 + 8 * v52) )
        {
          if ( (unsigned int)++v52 >= a3 )
            goto LABEL_57;
        }
        goto LABEL_75;
      }
LABEL_57:
      if ( !*(_WORD *)(v45 + 4) )
      {
        v47 = *(_DWORD *)(v45 + 24);
        goto LABEL_37;
      }
LABEL_42:
      v41 = sub_1666AE0(v50, v45, v78, &v74);
      if ( !(_BYTE)v41 )
        goto LABEL_29;
      sub_2FC4A0((__int64)qword_1C7F2C0, *v6, (__int64)v78, *v6);
    }
  }
  v41 = 1;
LABEL_29:
  sub_25A130((char *)v78);
  sub_186B220((void *)(v39 - 8));
  return v41;
}

