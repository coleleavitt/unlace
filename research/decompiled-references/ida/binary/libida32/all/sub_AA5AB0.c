__int64 __fastcall sub_AA5AB0(
        int a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        _QWORD *a10,
        void **a11,
        __int64 a12)
{
  unsigned __int64 *v12; // r14
  __int64 v14; // rbp
  __int64 v15; // r9
  bool v16; // zf
  char v17; // al
  unsigned __int64 *v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rdi
  _BYTE *v24; // rax
  _BOOL8 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // r8
  _BYTE *v29; // r12
  _BYTE *v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  _BYTE *v36; // rax
  char v37; // al
  char *v38; // rdi
  unsigned int *v39; // rsi
  unsigned __int64 v40; // rax
  size_t v41; // rbp
  const void *v42; // rsi
  const char *v43; // rsi
  bool v44; // r13
  int v45; // eax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _BYTE *v49; // rax
  const char *v50; // rax
  size_t v51; // r9
  const char *v52; // r12
  _BYTE *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  const char *v60; // rax
  _BYTE *v61; // rbp
  unsigned __int8 v62; // al
  _BYTE *v63; // rax
  _BYTE *v64; // rax
  void **v65; // [rsp-10h] [rbp-D8h]
  __int64 v66; // [rsp-8h] [rbp-D0h]
  unsigned __int64 *v69; // [rsp+28h] [rbp-A0h] BYREF
  __m128i v70; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v71[16]; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall **v72)(); // [rsp+50h] [rbp-78h] BYREF
  int v73; // [rsp+58h] [rbp-70h]
  __int128 v74; // [rsp+60h] [rbp-68h]
  void *dest; // [rsp+70h] [rbp-58h]
  char v76; // [rsp+78h] [rbp-50h]
  int v77; // [rsp+7Ch] [rbp-4Ch]
  _QWORD *v78; // [rsp+80h] [rbp-48h]

  v12 = a2;
  v14 = a9[1];
  v73 = 2;
  v72 = &off_2BC1F40;
  v76 = 0;
  v77 = 1;
  dest = nullptr;
  v74 = 0;
  v78 = a9;
  sub_2257B70(&v72, 0, 0, 0);
  switch ( a1 )
  {
    case 6:
      sub_F4D5C0(&v70, (unsigned int)a2);
      if ( v70.m128i_i64[1] )
      {
        sub_971800((__int64)&v72, "address space");
        v58 = sub_971800((__int64)&v72, " '");
        v59 = sub_22581D0(v58, v70.m128i_i64[0], v70.m128i_i64[1]);
        sub_971800(v59, "'");
      }
      else
      {
        v43 = "default";
        if ( (*(_BYTE *)(a10[290] + 47LL) & 0x20) == 0 )
          v43 = "generic";
        sub_971800((__int64)&v72, v43);
        sub_971800((__int64)&v72, " address space");
      }
      v22 = (void *)v70.m128i_i64[0];
      if ( (_BYTE *)v70.m128i_i64[0] != v71 )
        goto LABEL_9;
      break;
    case 7:
      v69 = a2;
      sub_F4DEF0(&v70, &v69);
      if ( v70.m128i_i64[1] )
      {
        v44 = 1;
        sub_22581D0(&v72, v70.m128i_i64[0], v70.m128i_i64[1]);
      }
      else
      {
        v44 = 0;
        sub_971800((__int64)&v72, "unqualified");
      }
      if ( (_BYTE *)v70.m128i_i64[0] != v71 )
        operator delete((void *)v70.m128i_i64[0]);
      goto LABEL_50;
    case 8:
      goto LABEL_7;
    case 9:
      if ( a4 == 9 )
      {
        if ( *(_QWORD *)a3 == 0x73616C63636A626FLL && *(_BYTE *)(a3 + 8) == 115 && !a6 )
        {
          v24 = dest;
          if ( (unsigned __int64)dest >= *((_QWORD *)&v74 + 1) )
          {
            sub_2257CD0(&v72, 43);
          }
          else
          {
            dest = (char *)dest + 1;
            *v24 = 43;
          }
        }
      }
      else if ( a4 == 12 && *(_QWORD *)a3 == 0x74736E69636A626FLL && *(_DWORD *)(a3 + 8) == 1701015137 && !a6 )
      {
        v64 = dest;
        if ( (unsigned __int64)dest >= *((_QWORD *)&v74 + 1) )
        {
          sub_2257CD0(&v72, 45);
        }
        else
        {
          dest = (char *)dest + 1;
          *v64 = 45;
        }
      }
      sub_B62620(&v72, a2);
      goto LABEL_22;
    case 10:
      v25 = 0;
      if ( a4 == 1 && *(_BYTE *)a3 == 113 )
        v25 = a6 == 0;
      (*(void (__fastcall **)(unsigned __int64 *, __int64 (__fastcall ***)(), _QWORD *, _BOOL8))(*a2 + 96))(
        a2,
        &v72,
        a10 + 2183,
        v25);
      goto LABEL_22;
    case 11:
      sub_E6C510(a2, &v72, a10 + 2183, 0, 0);
      goto LABEL_22;
    case 12:
      LOBYTE(v45) = a2[1] & 0x7F;
      if ( !(_BYTE)v45 )
      {
        if ( (*(_BYTE *)(a10[290] + 1LL) & 8) != 0 )
          sub_971800((__int64)&v72, "the global namespace");
        else
          sub_971800((__int64)&v72, "the global scope");
        break;
      }
      if ( (_BYTE)v45 == 8 )
      {
        sub_971800((__int64)&v72, "block literal");
        break;
      }
      v45 = (unsigned __int8)v45;
      if ( a2 && (unsigned int)(unsigned __int8)v45 - 35 <= 3 )
      {
        v46 = *(_QWORD *)(sub_B68470(a2) + 16);
        if ( (v46 & 4) != 0 )
          v47 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v47 = v46 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v47 )
        {
          if ( v47 != 64 )
          {
            v48 = *(_QWORD *)(v47 + 64);
            if ( v48 )
            {
              if ( (*(_BYTE *)(v48 + 10) & 0x20) != 0 && (unsigned int)sub_B53B50(a2 - 9) == 42 )
              {
                sub_971800((__int64)&v72, "lambda expression");
                break;
              }
            }
          }
        }
        v45 = a2[1] & 0x7F;
      }
      if ( (unsigned int)(v45 - 58) <= 9 )
      {
        v54 = sub_B68470(a2);
        if ( v54 )
        {
          v57 = *(_QWORD *)(v54 + 48);
          if ( v57 )
            v20 = v57 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v20 = sub_A56D30((__int64)a10, v54, 0, v55, v56, v15);
          v19 = a8;
          v66 = a12;
          v65 = a11;
          v21 = a7;
          goto LABEL_8;
        }
      }
      v61 = (_BYTE *)sub_B68470(a2);
      v62 = v61[28] & 0x7F;
      if ( v62 == 24 )
      {
        sub_971800((__int64)&v72, "namespace ");
      }
      else if ( v62 == 18 )
      {
        sub_971800((__int64)&v72, "method ");
      }
      else if ( (unsigned int)v62 - 34 <= 5 )
      {
        sub_971800((__int64)&v72, "function ");
      }
      v63 = dest;
      if ( (unsigned __int64)dest >= *((_QWORD *)&v74 + 1) )
      {
        sub_2257CD0(&v72, 39);
      }
      else
      {
        dest = (char *)dest + 1;
        *v63 = 39;
      }
      (*(void (__fastcall **)(_BYTE *, __int64 (__fastcall ***)(), _QWORD *, __int64))(*(_QWORD *)v61 + 96LL))(
        v61,
        &v72,
        a10 + 2183,
        1);
LABEL_71:
      v53 = dest;
      if ( (unsigned __int64)dest >= *((_QWORD *)&v74 + 1) )
      {
LABEL_81:
        sub_2257CD0(&v72, 39);
      }
      else
      {
        dest = (char *)dest + 1;
        *v53 = 39;
      }
      break;
    case 13:
      v16 = (unsigned __int8)sub_AA4E10(
                               a10,
                               (void *)*a2,
                               a2[1],
                               a2[2] & 1,
                               (a2[2] & 2) != 0,
                               (a2[2] & 4) != 0,
                               (a2[2] & 8) != 0,
                               (__int64)&v72) == 0;
      v17 = *((_BYTE *)a2 + 16);
      if ( v16 )
      {
        if ( (v17 & 1) == 0 )
        {
          v18 = (unsigned __int64 *)a2[1];
          if ( (v17 & 2) != 0 )
            v18 = (unsigned __int64 *)*a2;
          v12 = v18;
LABEL_7:
          v19 = a8;
          v20 = (unsigned __int64)v12;
          v66 = a12;
          v65 = a11;
          v21 = a7;
LABEL_8:
          sub_AA27D0(&v70, a10, v20, v21, v19, v15, v65, v66);
          sub_22581D0(&v72, v70.m128i_i64[0], v70.m128i_i64[1]);
          v22 = (void *)v70.m128i_i64[0];
          if ( (_BYTE *)v70.m128i_i64[0] != v71 )
LABEL_9:
            operator delete(v22);
        }
      }
      else
      {
        *((_BYTE *)a2 + 16) = v17 | 0x10;
        v44 = (v17 & 1) == 0;
LABEL_50:
        if ( v44 )
        {
LABEL_22:
          v26 = *a9;
          v27 = a9[1];
          v28 = a9[2];
          v29 = (_BYTE *)(*a9 + v14);
          v30 = (_BYTE *)(*a9 + v27);
          v31 = *a9;
          v32 = v27;
          v33 = v27 + 1;
          if ( v29 == v30 )
          {
            if ( v28 < v33 )
            {
              sub_22130D0(a9, a9 + 3, v33, 1);
              v27 = a9[1];
              v26 = *a9;
            }
            *(_BYTE *)(v26 + v27) = 39;
            v35 = a9[1] + 1LL;
            a9[1] = v35;
          }
          else
          {
            if ( v28 < v33 )
            {
              sub_22130D0(a9, a9 + 3, v33, 1);
              v31 = *a9;
              v32 = a9[1];
              v29 = (_BYTE *)(*a9 + v14);
              v30 = (_BYTE *)(*a9 + v32);
            }
            *v30 = *(_BYTE *)(v31 + v32 - 1);
            v34 = a9[1];
            if ( *a9 + v34 - 1 != (_QWORD)v29 )
            {
              memmove(&v29[*a9 + 1 - *a9], v29, *a9 + v34 - 1 - (_QWORD)v29);
              v34 = a9[1];
            }
            a9[1] = v34 + 1;
            *v29 = 39;
            v35 = a9[1];
          }
          if ( (unsigned __int64)(v35 + 1) > a9[2] )
          {
            sub_22130D0(a9, a9 + 3, v35 + 1, 1);
            v35 = a9[1];
          }
          *(_BYTE *)(*a9 + v35) = 39;
          ++a9[1];
        }
      }
      break;
    case 14:
      v49 = dest;
      if ( (unsigned __int64)dest >= *((_QWORD *)&v74 + 1) )
      {
        sub_2257CD0(&v72, 39);
      }
      else
      {
        dest = (char *)dest + 1;
        *v49 = 39;
      }
      if ( a2[1] )
      {
        v50 = (const char *)sub_AF8050(a2);
        v51 = 0;
        v52 = v50;
        if ( v50 )
          v51 = j__strlen(v50);
        sub_F837E0(&v70, a2, *(_QWORD *)(a2[1] + 16) + 16LL, **(unsigned int **)(a2[1] + 16), v52, v51);
        sub_22581D0(&v72, v70.m128i_i64[0], v70.m128i_i64[1]);
        if ( (_BYTE *)v70.m128i_i64[0] != v71 )
          operator delete((void *)v70.m128i_i64[0]);
      }
      else
      {
        v60 = (const char *)sub_AF8050(a2);
        sub_971800((__int64)&v72, v60);
      }
      goto LABEL_71;
    case 15:
      sub_EE3EC0((_DWORD)a2, (unsigned int)&v72, 0, (_DWORD)a10 + 17464, 0, 0, (__int64)"\n", 1);
      goto LABEL_22;
    case 16:
      v36 = dest;
      if ( (unsigned __int64)dest >= *((_QWORD *)&v74 + 1) )
      {
        sub_2257CD0(&v72, 39);
      }
      else
      {
        dest = (char *)dest + 1;
        *v36 = 39;
      }
      v37 = *((_BYTE *)a2 + 34) & 0xF;
      if ( v37 == 2 || v37 == 3 || (*((_BYTE *)a2 + 35) & 1) != 0 )
      {
        sub_F836B0(&v70, a2);
        sub_22581D0(&v72, v70.m128i_i64[0], v70.m128i_i64[1]);
        if ( (_BYTE *)v70.m128i_i64[0] != v71 )
          operator delete((void *)v70.m128i_i64[0]);
        v38 = (char *)dest;
        v40 = *((_QWORD *)&v74 + 1);
      }
      else
      {
        v38 = (char *)dest;
        v39 = *(unsigned int **)(*a2 + 16);
        v40 = *((_QWORD *)&v74 + 1);
        v41 = *v39;
        v42 = v39 + 4;
        if ( v41 > *((_QWORD *)&v74 + 1) - (_QWORD)dest )
        {
          sub_22581D0(&v72, v42, v41);
          v38 = (char *)dest;
          v40 = *((_QWORD *)&v74 + 1);
        }
        else if ( v41 )
        {
          memcpy(dest, v42, v41);
          v40 = *((_QWORD *)&v74 + 1);
          v38 = (char *)dest + v41;
          dest = (char *)dest + v41;
        }
      }
      if ( (unsigned __int64)v38 >= v40 )
        goto LABEL_81;
      dest = v38 + 1;
      *v38 = 39;
      break;
  }
  v72 = (__int64 (__fastcall **)())&unk_2C4C288;
  return sub_2257A60(&v72);
}

