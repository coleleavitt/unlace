__int64 __fastcall sub_C3FE50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // bl
  __int64 v10; // rsi
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  int *v13; // rcx
  unsigned int *v14; // rdi
  unsigned __int64 v15; // rdx
  int *v16; // rsi
  int *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  int *v22; // rax
  int *v23; // rbx
  int *v24; // rbp
  unsigned int v26; // r15d
  char v27; // al
  __int64 v28; // rax
  unsigned __int64 *v29; // rdx
  void *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // r13
  int *v33; // rbx
  int v34; // ebp
  unsigned __int64 v35; // r14
  _QWORD *v36; // rax
  _QWORD *v37; // r12
  char *v38; // rdx
  char *v39; // rax
  __int64 v40; // rbp
  int *v41; // rsi
  __int64 v42; // rdi
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  unsigned __int8 v51; // [rsp+17h] [rbp-281h]
  __int64 v52; // [rsp+20h] [rbp-278h]
  _QWORD *v53; // [rsp+30h] [rbp-268h]
  unsigned int *v54; // [rsp+40h] [rbp-258h]
  char v55; // [rsp+40h] [rbp-258h]
  _QWORD *v56; // [rsp+48h] [rbp-250h]
  void *s; // [rsp+50h] [rbp-248h] BYREF
  unsigned int v58; // [rsp+58h] [rbp-240h]
  char v59; // [rsp+5Ch] [rbp-23Ch]
  void *v60; // [rsp+60h] [rbp-238h] BYREF
  unsigned int v61; // [rsp+68h] [rbp-230h]
  char v62; // [rsp+6Ch] [rbp-22Ch]
  unsigned int v63; // [rsp+70h] [rbp-228h] BYREF
  char v64; // [rsp+74h] [rbp-224h]
  __int64 v65; // [rsp+78h] [rbp-220h]
  unsigned int v66; // [rsp+B0h] [rbp-1E8h] BYREF
  unsigned __int64 v67; // [rsp+B8h] [rbp-1E0h] BYREF
  unsigned __int64 *v68; // [rsp+C0h] [rbp-1D8h]
  unsigned int v69; // [rsp+F0h] [rbp-1A8h] BYREF
  char v70; // [rsp+F4h] [rbp-1A4h]
  void *v71; // [rsp+F8h] [rbp-1A0h]
  unsigned int v72; // [rsp+100h] [rbp-198h]
  char v73; // [rsp+104h] [rbp-194h]
  unsigned int v74; // [rsp+130h] [rbp-168h] BYREF
  char v75; // [rsp+134h] [rbp-164h]
  _QWORD *v76; // [rsp+138h] [rbp-160h]
  int v77; // [rsp+140h] [rbp-158h]
  char v78; // [rsp+168h] [rbp-130h]
  unsigned int *v79; // [rsp+170h] [rbp-128h] BYREF
  __int64 v80; // [rsp+178h] [rbp-120h]
  _BYTE v81[280]; // [rsp+180h] [rbp-118h] BYREF

  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57 > 1 )
    v6 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_BYTE *)(a2 + 2);
  v63 = 0;
  v52 = v7;
  v9 = v8 >> 3;
  v10 = *a1;
  v64 &= ~1u;
  v51 = sub_C39A10((__int64)&v63, v10, v5, a4, a5);
  if ( v51 )
  {
    if ( v63 == 7 )
    {
      v51 = 0;
      goto LABEL_66;
    }
    v79 = (unsigned int *)v81;
    v80 = 0x400000000LL;
    if ( *(_DWORD *)(v6 + 20) )
    {
      v11 = 0;
      v53 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL);
      while ( 1 )
      {
        v17 = (int *)(v65 + 56LL * v11);
        sub_A53C40((__int64)&v66, v17);
        if ( v9 == 7 )
        {
          if ( v66 != 2 )
          {
            if ( v67 == sub_21F90D0() )
              sub_21FFF70(&v67);
            else
              sub_21FA410(&v67);
            goto LABEL_13;
          }
          if ( (unsigned int)v68 > 0x40 )
          {
            sub_2205FC0(&v67, v17);
          }
          else
          {
            v31 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v68) & ~v67;
            if ( !(_DWORD)v68 )
              v31 = 0;
            v67 = v31;
          }
          goto LABEL_12;
        }
        if ( v9 > 7u )
          break;
        if ( v9 != 6 )
        {
LABEL_40:
          v78 = 0;
          goto LABEL_14;
        }
LABEL_13:
        sub_A4F8A0((__int64)&v74, (__int64)&v66);
        v78 = 1;
LABEL_14:
        if ( v66 > 1 )
          sub_A4F8E0((int *)&v66);
        v13 = (int *)v79;
        v14 = &v79[14 * (unsigned int)v80];
        if ( !v78 )
        {
          v51 = 0;
          v22 = (int *)&v79[14 * (unsigned int)v80];
          goto LABEL_30;
        }
        v15 = (unsigned int)v80 + 1LL;
        v16 = (int *)&v74;
        if ( v15 > HIDWORD(v80) )
        {
          if ( v79 > &v74 || v14 <= &v74 )
          {
            sub_C25F00((__int64)&v79, v15);
            v16 = (int *)&v74;
            v14 = &v79[14 * (unsigned int)v80];
          }
          else
          {
            v54 = v79;
            sub_C25F00((__int64)&v79, v15);
            v16 = (int *)((char *)v79 + (char *)&v74 - (char *)v54);
            v14 = &v79[14 * (unsigned int)v80];
          }
        }
        sub_A53C40((__int64)v14, v16);
        LODWORD(v80) = v80 + 1;
        if ( v78 && v74 > 1 )
          sub_A4F8E0((int *)&v74);
        if ( ++v11 >= *(_DWORD *)(v6 + 20) )
        {
          v32 = (unsigned int)v80;
          v33 = (int *)v79;
          v76 = nullptr;
          v75 &= ~1u;
          v34 = v80;
          v77 = 0;
          v74 = 8;
          v35 = 56LL * (unsigned int)v80 + 8;
          v36 = (_QWORD *)operator new[](v35);
          *v36 = v32;
          v37 = v36 + 1;
          if ( v32 )
          {
            v38 = (char *)(v36 + 1);
            v39 = (char *)v36 + v35;
            do
            {
              *(_DWORD *)v38 = 0;
              v38[4] &= ~1u;
              v38 += 56;
            }
            while ( v39 != v38 );
          }
          v76 = v37;
          v77 = v34;
          if ( v34 )
          {
            v40 = (__int64)&v37[7 * (unsigned int)(v34 - 1) + 7];
            do
            {
              v41 = v33;
              v42 = (__int64)v37;
              v37 += 7;
              v33 += 14;
              sub_A54D20(v42, v41);
            }
            while ( v37 != (_QWORD *)v40 );
          }
          goto LABEL_79;
        }
      }
      if ( v9 == 8 )
      {
        if ( (unsigned int)v68 > 0x40 )
        {
          sub_2205FC0(&v67, v17);
        }
        else
        {
          v21 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v68) & ~v67;
          if ( !(_DWORD)v68 )
            v21 = 0;
          v67 = v21;
        }
        goto LABEL_13;
      }
      if ( v9 != 9 )
        goto LABEL_40;
      if ( v66 != 2 )
      {
        v26 = sub_AAC1F0(*(_QWORD *)(*a1 + 16), v52, v18, v19, v20);
        v27 = sub_F65360(*v53);
        v58 = v26;
        if ( v26 > 0x40 )
        {
          v55 = v27;
          sub_2205470(&s, 0, 0);
          v26 = v58;
          v27 = v55;
        }
        else
        {
          s = nullptr;
        }
        v59 = v27;
        v28 = sub_21F90D0();
        v29 = &v67;
        if ( v67 == v28 )
          v29 = v68;
        if ( (*((_BYTE *)v29 + 20) & 7) != 3 )
        {
          if ( v26 <= 0x40 )
          {
            s = nullptr;
            goto LABEL_52;
          }
          memset(s, 0, 8 * (((unsigned __int64)v26 + 63) >> 6));
          v26 = v58;
LABEL_89:
          v61 = v26;
          if ( v26 <= 0x40 )
          {
LABEL_52:
            v30 = s;
            v60 = s;
          }
          else
          {
LABEL_90:
            sub_2205510(&v60);
            v26 = v61;
            v30 = v60;
          }
          v72 = v26;
          v70 &= ~1u;
          v61 = 0;
          v62 = v59;
          v69 = 2;
          v71 = v30;
          v73 = v59;
          sub_A4F8A0((__int64)&v74, (__int64)&v69);
          v78 = 1;
          if ( v69 > 1 )
            sub_A4F8E0((int *)&v69);
          if ( v61 > 0x40 && v60 )
            operator delete[](v60);
          if ( v58 > 0x40 && s )
            operator delete[](s);
          goto LABEL_14;
        }
        if ( v26 > 0x40 )
        {
          memset(s, -1, 8 * (((unsigned __int64)v26 + 63) >> 6));
          v26 = v58;
          v47 = (__int64)s;
          v46 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v58;
          if ( v58 )
          {
            if ( v58 > 0x40 )
            {
              v48 = (unsigned int)(((unsigned __int64)v58 + 63) >> 6) - 1;
              *((_QWORD *)s + v48) &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v58;
              v61 = v26;
              goto LABEL_90;
            }
LABEL_94:
            s = (void *)(v46 & v47);
            goto LABEL_89;
          }
        }
        else
        {
          v46 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v26;
          v47 = -1;
          if ( v26 )
            goto LABEL_94;
        }
        v46 = 0;
        goto LABEL_94;
      }
      v12 = (unsigned int)v68;
      if ( (unsigned int)v68 <= 0x40 )
      {
        v43 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v68;
        if ( !(_DWORD)v68 )
          goto LABEL_100;
        v44 = ~(unsigned __int64)((unsigned __int8)v43 & (v67 == 0));
      }
      else
      {
        v56 = (_QWORD *)v67;
        *v56 = v12 == (unsigned int)sub_2206780(&v67);
        memset((void *)(v67 + 8), 0, 8 * ((unsigned int)(((unsigned __int64)v12 + 63) >> 6) + 0x1FFFFFFF));
        v12 = (unsigned int)v68;
        if ( (unsigned int)v68 > 0x40 )
        {
          sub_2205FC0(&v67, 0);
LABEL_12:
          sub_2205900(&v67);
          goto LABEL_13;
        }
        v43 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v68;
        v44 = ~v67;
      }
      if ( v12 )
      {
        v45 = v43 & v44;
LABEL_86:
        v67 = v45;
        goto LABEL_12;
      }
LABEL_100:
      v45 = 0;
      goto LABEL_86;
    }
    v75 &= ~1u;
    v76 = nullptr;
    v77 = 0;
    v74 = 8;
    v49 = (_QWORD *)operator new[](8u);
    v77 = 0;
    *v49 = 0;
    v76 = v49 + 1;
LABEL_79:
    sub_A54D20(a1[1], (int *)&v74);
    if ( v74 > 1 )
      sub_A4F8E0((int *)&v74);
    v13 = (int *)v79;
    v22 = (int *)&v79[14 * (unsigned int)v80];
LABEL_30:
    if ( v13 != v22 )
    {
      v23 = v22;
      v24 = v13;
      do
      {
        while ( 1 )
        {
          v23 -= 14;
          if ( (unsigned int)*v23 > 1 )
            break;
          if ( v23 == v24 )
            goto LABEL_34;
        }
        sub_A4F8E0(v23);
      }
      while ( v23 != v24 );
LABEL_34:
      v22 = (int *)v79;
    }
    if ( v22 != (int *)v81 )
      free(v22);
  }
  if ( v63 > 1 )
LABEL_66:
    sub_A4F8E0((int *)&v63);
  return v51;
}
