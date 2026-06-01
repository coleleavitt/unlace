unsigned __int64 __fastcall sub_63AF00(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        char *a5,
        __int64 a6,
        double a7,
        double a8,
        __int64 a9)
{
  __int64 v11; // r12
  char *v14; // rbx
  __int64 v15; // r8
  char v16; // al
  char v17; // dl
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rdi
  const char *v21; // rsi
  __int64 v22; // rsi
  char v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v27; // r14
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdi
  char *v31; // rdi
  __int64 i; // r12
  char *v33; // r15
  void *v34; // rdi
  void *v35; // rdi
  char *v36; // rdi
  int v37; // eax
  __int64 v38; // [rsp+0h] [rbp-98h]
  __int64 v39; // [rsp+0h] [rbp-98h]
  __int64 v40; // [rsp+0h] [rbp-98h]
  unsigned int v42; // [rsp+8h] [rbp-90h]
  int v44[2]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v45; // [rsp+30h] [rbp-68h] BYREF
  __int16 v46; // [rsp+38h] [rbp-60h]
  char v47; // [rsp+3Ah] [rbp-5Eh]
  int v48[2]; // [rsp+40h] [rbp-58h] BYREF
  int v49[4]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+58h] [rbp-40h]

  v11 = a2;
  v50 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 != a1[1] )
      return v50 - __readfsqword(0x28u);
  }
  else
  {
    v11 = a1[1];
  }
  if ( (*(_BYTE *)(v11 + 32) & 0x10) != 0 )
  {
    LOBYTE(v14) = netnode_inited();
    if ( (_BYTE)v14 )
    {
      LOBYTE(v45) = 0;
      v15 = a9;
      *(_QWORD *)v48 = a4 + 1;
      v16 = *a4;
      v17 = *a4 & 0x3F;
      if ( v17 == 61 )
        goto LABEL_12;
      if ( (v16 & 0xF) == 0xD )
      {
        v29 = sub_693160(v48, &v45);
        v15 = a9;
        if ( !v29 && !(_BYTE)v45 )
          goto LABEL_12;
        if ( (*a4 & 0x3F) != 0x2D )
        {
          if ( (*a4 & 0x2F) != 0xD )
            goto LABEL_11;
LABEL_36:
          v47 = 0;
          v30 = *a1;
          v46 = 0;
          v45 = 0;
          v14 = sub_636060(v30, v11, nullptr, a4, a5, nullptr, nullptr, nullptr);
          if ( !v14 )
            goto LABEL_13;
          sub_6A8A30((int)a1);
          sub_6988C0(&v45, v14);
          v31 = *(char **)v14;
          if ( *(_QWORD *)v14 )
          {
            v39 = *((_QWORD *)v14 + 1);
            if ( v39 )
            {
              for ( i = 0; i != v39; ++i )
              {
                v33 = &v31[128 * i];
                clear_tinfo_t(v33 + 64);
                v34 = *((void **)v33 + 5);
                if ( v34 )
                {
                  *((_QWORD *)v33 + 6) = 0;
                  qfree(v34);
                }
                v35 = *((void **)v33 + 2);
                if ( v35 )
                {
                  *((_QWORD *)v33 + 3) = 0;
                  qfree(v35);
                }
                v31 = *(char **)v14;
              }
            }
            *((_QWORD *)v14 + 1) = 0;
            qfree(v31);
          }
          v36 = v14;
          v23 = 0;
          LOBYTE(v14) = 0;
          qfree(v36);
LABEL_18:
          if ( !(unsigned __int8)sub_69A8C0(a1) )
          {
            v24 = *(unsigned int *)(a6 + 24);
            if ( (_DWORD)v24 != -1 )
            {
              sub_6A6DA0(a1, 0, v24, &v45, a6 + 56);
              sub_69E750(a1, *(unsigned int *)(a6 + 24), 0);
              v26 = 0x200020002000LL;
              if ( !_bittest64(&v26, *(unsigned __int8 *)(a6 + 28)) )
                sub_3DD870((__int64)a1, *(unsigned int *)(a6 + 24), 0x200020002000LL, v25);
            }
            if ( !v23 )
            {
              *(_QWORD *)v44 = a4;
              v42 = sub_698F20(a1, a3, 1, 1);
              if ( (*a4 & 0xF) == 0xB )
              {
                while ( 1 )
                {
                  v27 = (char)v14;
                  *(_QWORD *)v48 = 0;
                  *(_QWORD *)v49 = 0;
                  LOBYTE(v14) = sub_54EE20((char **)v44, v49, &v49[1]);
                  if ( !(_BYTE)v14
                    || **(_BYTE **)v44 == 0xFE && (unsigned __int8)sub_51F860((const char **)v44, nullptr, nullptr) )
                  {
                    break;
                  }
                  clear_tinfo_t(v48);
                  if ( (**(_BYTE **)v44 & 0xF) != 0xB )
                    goto LABEL_31;
                }
                clear_tinfo_t(v48);
              }
              else
              {
                v27 = (char)v14;
              }
              if ( v27 )
              {
LABEL_31:
                v28 = sub_63AD10((__int64)a1, (char **)v44, 1, a7, a8);
                sub_69FB20(a1, v42, v28);
              }
            }
          }
          return v50 - __readfsqword(0x28u);
        }
      }
      else if ( v17 != 45 )
      {
        if ( (v16 & 0x2F) != 0xD )
        {
LABEL_11:
          LOBYTE(v14) = 0;
LABEL_12:
          v47 = 0;
          v45 = 0;
          v46 = 0;
LABEL_13:
          v18 = *(_QWORD *)(a6 + 32);
          v19 = v18;
          v38 = v18 + 32LL * *(_QWORD *)(a6 + 40);
          if ( v38 != v18 )
          {
            do
            {
              v20 = v19;
              v19 += 32;
              sub_69E930(v20, *a1, 1);
            }
            while ( v38 != v19 );
          }
          v21 = haystack;
          if ( *(_QWORD *)(a6 + 8) )
            v21 = *(const char **)a6;
          sub_69E970(a1, v21, a3, *(unsigned int *)(a6 + 24));
          v22 = v11;
          v23 = 0;
          sub_6989A0(&v45, v22, a4, a5);
          goto LABEL_18;
        }
        goto LABEL_36;
      }
      v46 = 0;
      v40 = v15;
      v45 = 0;
      v47 = 0;
      sub_6A8A30((int)a1);
      if ( v40 )
      {
        if ( (*(_BYTE *)(v40 + 52) & 7) != 0 )
          v37 = 1 << ((*(_BYTE *)(v40 + 52) & 7) - 1);
        else
          v37 = (unsigned __int8)getinf(61);
        v47 = 0;
        v45 = v37;
        v46 = 0;
      }
      v23 = (char)v14;
      LOBYTE(v14) = 0;
      goto LABEL_18;
    }
  }
  return v50 - __readfsqword(0x28u);
}

