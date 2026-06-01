__int64 __fastcall sub_361380(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8,
        unsigned __int8 a9,
        int *a10,
        __int64 a11,
        const char *a12,
        const char *a13,
        __int64 a14,
        _BYTE *a15,
        __int64 a16)
{
  _DWORD **v16; // r13
  int *v20; // rax
  int v21; // ecx
  unsigned __int64 v22; // r14
  _DWORD *v23; // rax
  unsigned int v24; // eax
  __int64 result; // rax
  char *v26; // r14
  __int64 (__fastcall *v27)(_QWORD *, char); // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rsi
  char v32; // r13
  char v33; // r8
  __int64 v34; // rax
  int v35; // r13d
  char *v36; // rax
  char *v37; // rax
  char v38; // r8
  char v39; // bl
  unsigned __int64 v40; // r15
  __int64 v41; // r8
  __int64 v42; // rsi
  __int64 v43; // r13
  __int64 (__fastcall *v44)(_QWORD *, char); // rax
  __int64 v45; // rax
  __int64 (__fastcall *v46)(_QWORD *, char); // rax
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 v49; // r11
  unsigned __int64 v50; // rdx
  unsigned int radix; // eax
  __int64 v52; // rax
  unsigned __int64 v53; // rbx
  void (__fastcall *v54)(_QWORD *, __int64, _QWORD); // r13
  __int64 *v55; // rax
  __int64 v56; // r15
  __int64 v57; // rsi
  __int64 (__fastcall *v58)(_QWORD *, char); // rax
  __int64 v59; // r15
  unsigned __int64 v60; // rdx
  __int64 v61; // r9
  __int64 v62; // rsi
  int v63; // r15d
  unsigned __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rsi
  __int64 v67; // r13
  __int64 (__fastcall *v68)(_QWORD *, char); // rax
  __int64 v69; // rax
  _QWORD *v70; // r13
  void (__fastcall *v71)(_QWORD *, __int64, _QWORD); // rbx
  __int64 v72; // rax
  void (__fastcall *v73)(_QWORD *, __int64, _QWORD); // r15
  __int64 v74; // rax
  __int64 v75; // rax
  char *v76; // rax
  __int64 (__fastcall *v77)(_QWORD *, char); // rax
  __int64 v78; // r15
  unsigned __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rsi
  __int64 v82; // rax
  _QWORD *v83; // [rsp+0h] [rbp-128h]
  unsigned __int64 v84; // [rsp+0h] [rbp-128h]
  unsigned __int64 v85; // [rsp+0h] [rbp-128h]
  unsigned __int64 v86; // [rsp+0h] [rbp-128h]
  unsigned __int64 v87; // [rsp+8h] [rbp-120h]
  __int64 v88; // [rsp+8h] [rbp-120h]
  unsigned __int64 v89; // [rsp+8h] [rbp-120h]
  __int64 v90; // [rsp+8h] [rbp-120h]
  __int64 v91; // [rsp+8h] [rbp-120h]
  __int64 v92; // [rsp+8h] [rbp-120h]
  __int64 v94; // [rsp+18h] [rbp-110h]
  _QWORD *v95; // [rsp+18h] [rbp-110h]
  char v96; // [rsp+20h] [rbp-108h]
  __int64 v97; // [rsp+28h] [rbp-100h]
  int v99; // [rsp+30h] [rbp-F8h]
  __int64 v100; // [rsp+58h] [rbp-D0h]
  _BYTE v101[136]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v102; // [rsp+E8h] [rbp-40h]

  v16 = (_DWORD **)a1;
  v102 = __readfsqword(0x28u);
  v20 = (int *)a1[79];
  if ( *((_QWORD *)v20 + 19) )
  {
    v21 = *v20;
    if ( a9 || (v21 & 4) != 0 )
    {
      if ( (v21 & 0x200000) != 0 )
      {
        if ( *a6 != 1 )
        {
          sub_3600E0(a1 + 3, a14);
          sub_35CF70(a1, a13, a12);
          sub_382A40(a1, a2, 0);
          *a6 = 1;
        }
        a1[4] = 0;
      }
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 32);
      v26 = *(char **)(a1[79] + 152LL);
      if ( v26 )
      {
        v94 = a4;
        v83 = a1 + 3;
        while ( 1 )
        {
          v32 = *v26;
          if ( !*v26 )
            break;
          if ( v32 != 35 )
          {
            v27 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
            if ( v27 != sub_35CB90 )
            {
              v27(a1, v32);
              goto LABEL_17;
            }
            v28 = a1[4];
            if ( v28 )
            {
              v29 = v28 + 1;
              v30 = a1[4];
              v31 = a1[3];
              --v28;
              if ( a1[5] >= v29 )
              {
LABEL_16:
                a1[4] = v29;
                *(_BYTE *)(v31 + v28) = v32;
                *(_BYTE *)(a1[3] + v30) = 0;
                goto LABEL_17;
              }
            }
            else
            {
              v31 = a1[3];
              v30 = 1;
              v29 = 2;
              if ( a1[5] >= 2u )
                goto LABEL_16;
            }
            v87 = v29;
            v34 = qvector_reserve(v83, v31, v29, 1);
            v29 = v87;
            a1[3] = v34;
            v31 = v34;
            goto LABEL_16;
          }
          v33 = v26[1];
          if ( v33 != 115 )
          {
            if ( v33 > 115 )
            {
              if ( v33 == 118 )
              {
                result = sub_360180((__int64)a1, a2, v94, a5, a7, a9, a10, a11);
                if ( !(_BYTE)result )
                  return result;
                goto LABEL_25;
              }
            }
            else
            {
              if ( v33 == 100 )
              {
                radix = get_radix(v94, 0);
                btoa64(v101, 136, a8, radix);
                (*(void (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a1 + 56LL))(a1, v101, 31);
                goto LABEL_25;
              }
              if ( v33 == 104 )
              {
                (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 56LL))(a1, a16, 32);
LABEL_25:
                ++v26;
                goto LABEL_17;
              }
            }
            v46 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
            if ( v46 != sub_35CB90 )
            {
              v46(a1, v33);
              goto LABEL_25;
            }
            v47 = a1[4];
            if ( v47 )
            {
              v50 = v47 + 1;
              v49 = a1[4];
              v48 = a1[3];
              --v47;
              if ( a1[5] >= v50 )
                goto LABEL_56;
            }
            else
            {
              v48 = a1[3];
              v49 = 1;
              v50 = 2;
              if ( a1[5] >= 2u )
              {
LABEL_56:
                a1[4] = v50;
                *(_BYTE *)(v48 + v47) = v33;
                *(_BYTE *)(a1[3] + v49) = 0;
                goto LABEL_25;
              }
            }
            v100 = v49;
            v97 = v47;
            v96 = v26[1];
            v89 = v50;
            v52 = qvector_reserve(a1 + 3, v48, v50, 1);
            v49 = v100;
            v47 = v97;
            a1[3] = v52;
            v33 = v96;
            v48 = v52;
            v50 = v89;
            goto LABEL_56;
          }
          v26 += 2;
          switch ( a7 )
          {
            case 1LL:
              v37 = v26;
              goto LABEL_40;
            case 2LL:
              goto LABEL_39;
            case 4LL:
              if ( (v94 & 0x600) == 0x400 && (v94 & 0xE0000000) == 0x80000000LL )
                goto LABEL_106;
              goto LABEL_38;
            case 8LL:
              goto LABEL_36;
            case 16LL:
              v35 = 0;
              v36 = v26;
              break;
            default:
              goto LABEL_17;
          }
          while ( 1 )
          {
            ++v35;
            v36 = strchr(v36 + 1, 44);
            if ( v35 == 3 )
              break;
            if ( !v36 )
              goto LABEL_64;
          }
          v26 = v36;
          if ( !v36 )
            goto LABEL_64;
LABEL_36:
          v26 = strchr(v26 + 1, 44);
          if ( (v94 & 0x600) == 0x400 && (v94 & 0xE0000000) == 0x80000000LL )
          {
            if ( !v26 )
              goto LABEL_64;
LABEL_106:
            v76 = strchr(v26 + 1, 44);
            if ( !v76 )
            {
LABEL_64:
              v16 = (_DWORD **)a1;
              goto LABEL_65;
            }
            v26 = strchr(v76 + 1, 44);
          }
          if ( !v26 )
            goto LABEL_64;
LABEL_38:
          v26 = strchr(v26 + 1, 44);
          if ( !v26 )
            goto LABEL_64;
LABEL_39:
          v37 = strchr(v26 + 1, 44);
          if ( !v37 )
            goto LABEL_64;
LABEL_40:
          v38 = v37[1];
          v26 = v37 + 1;
          if ( v38 != 44 )
          {
            v39 = v37[1];
            if ( v38 == 41 )
              goto LABEL_17;
            while ( 2 )
            {
              v44 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
              if ( v44 == sub_35CB90 )
              {
                v43 = a1[4];
                if ( v43 )
                {
                  v40 = v43 + 1;
                  v41 = a1[4];
                  v42 = a1[3];
                  --v43;
                  if ( a1[5] < v40 )
                    goto LABEL_49;
                }
                else
                {
                  v42 = a1[3];
                  v41 = 1;
                  v40 = 2;
                  if ( a1[5] < 2u )
                  {
LABEL_49:
                    v88 = v41;
                    v45 = qvector_reserve(v83, v42, v40, 1);
                    v41 = v88;
                    a1[3] = v45;
                    v42 = v45;
                  }
                }
                a1[4] = v40;
                ++v26;
                *(_BYTE *)(v42 + v43) = v39;
                *(_BYTE *)(a1[3] + v41) = 0;
                v39 = *v26;
                if ( *v26 == 44 )
                  goto LABEL_51;
              }
              else
              {
                ++v26;
                v44(a1, v39);
                v39 = *v26;
                if ( *v26 == 44 )
                  goto LABEL_51;
              }
              if ( v39 == 41 )
                goto LABEL_17;
              continue;
            }
          }
          do
LABEL_51:
            ++v26;
          while ( *v26 != 41 );
LABEL_17:
          ++v26;
        }
        v16 = (_DWORD **)a1;
      }
      else
      {
LABEL_65:
        (*((void (__fastcall **)(_DWORD **, void *, _QWORD))*v16 + 7))(v16, &unk_22D02A0, 0);
      }
      (*((void (__fastcall **)(_DWORD **, __int64))*v16 + 9))(v16, 32);
      if ( (*v16[79] & 0x200000) != 0 )
        goto LABEL_8;
      return 1;
    }
  }
  v22 = a8 * a7;
  if ( *((_QWORD *)v20 + 20) )
  {
    if ( *a6 != 1 )
    {
      sub_3600E0(a1 + 3, a14);
      sub_35CF70(a1, a13, a12);
      *a6 = 1;
    }
    v23 = (_DWORD *)*a1;
    a1[4] = 0;
    (*((void (__fastcall **)(_QWORD *, __int64))v23 + 8))(a1, 32);
    v24 = get_radix(a4, 0);
    btoa64(v101, 136, v22, v24);
    sub_35CE00((__int64)a1, *(_QWORD *)(a1[79] + 160LL), v101);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 32);
    goto LABEL_8;
  }
  a1[4] = 0;
  v99 = *v20 & 0x100000;
  if ( v99 && (get_flags_ex(a3 - v22, 4) & 0xC000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 168LL), 0);
    v77 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v77 == sub_35CB90 )
    {
      v78 = a1[4];
      if ( v78 )
      {
        v79 = v78 + 1;
        v80 = a1[4];
        --v78;
      }
      else
      {
        v80 = 1;
        v79 = 2;
      }
      v81 = a1[3];
      if ( a1[5] < v79 )
      {
        v92 = v80;
        v86 = v79;
        v82 = qvector_reserve(a1 + 3, v81, v79, 1);
        v80 = v92;
        v79 = v86;
        a1[3] = v82;
        v81 = v82;
      }
      a1[4] = v79;
      *(_BYTE *)(v81 + v78) = 32;
      *(_BYTE *)(a1[3] + v80) = 0;
    }
    else
    {
      v77(a1, 32);
    }
    sub_35D570((__int64)a1, a3 - v22);
    sub_35CF70(a1, a13, a12);
  }
  v53 = 0;
  v95 = a1 + 3;
  do
  {
    if ( v99 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[79] + 48LL), 0);
    v54 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
    v55 = (__int64 *)a1[11];
    v56 = *v55;
    v57 = *(_QWORD *)(*v55 + 1152);
    if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v56 + 948) == 8 )
      v57 = *(_QWORD *)(v56 + 1160);
    v54(a1, v57, 0);
    v58 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v58 != sub_35CB90 )
    {
      v58(a1, 32);
      goto LABEL_85;
    }
    v59 = a1[4];
    if ( v59 )
    {
      v60 = v59 + 1;
      v61 = a1[4];
      v62 = a1[3];
      --v59;
      if ( a1[5] < v60 )
        goto LABEL_102;
    }
    else
    {
      v62 = a1[3];
      v61 = 1;
      v60 = 2;
      if ( a1[5] < 2u )
      {
LABEL_102:
        v91 = v61;
        v85 = v60;
        v75 = qvector_reserve(v95, v62, v60, 1);
        v61 = v91;
        v60 = v85;
        a1[3] = v75;
        v62 = v75;
      }
    }
    a1[4] = v60;
    *(_BYTE *)(v62 + v59) = 32;
    *(_BYTE *)(a1[3] + v61) = 0;
LABEL_85:
    v63 = 0;
    while ( 1 )
    {
      v68 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v68 == sub_35CB90 )
      {
        v67 = a1[4];
        if ( v67 )
        {
          v64 = v67 + 1;
          v65 = a1[4];
          v66 = a1[3];
          --v67;
          if ( a1[5] >= v64 )
            goto LABEL_87;
        }
        else
        {
          v66 = a1[3];
          v65 = 1;
          v64 = 2;
          if ( a1[5] >= 2u )
            goto LABEL_87;
        }
        v90 = v65;
        v84 = v64;
        v69 = qvector_reserve(v95, v66, v64, 1);
        v65 = v90;
        v64 = v84;
        a1[3] = v69;
        v66 = v69;
LABEL_87:
        a1[4] = v64;
        ++v53;
        *(_BYTE *)(v66 + v67) = 48;
        *(_BYTE *)(a1[3] + v65) = 0;
        if ( v53 >= v22 )
          goto LABEL_95;
        goto LABEL_88;
      }
      ++v53;
      v68(a1, 48);
      if ( v53 >= v22 )
      {
LABEL_95:
        v70 = a1;
        sub_35CD40((__int64)v70, (__int64)&unk_22D028D, *(_QWORD *)(v70[79] + 48LL));
        v71 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
        v72 = closing_comment();
        v71(a1, v72, 0);
        goto LABEL_98;
      }
LABEL_88:
      if ( ++v63 == 16 )
        break;
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 44);
    }
    sub_35CD40((__int64)a1, (__int64)&unk_22D028D, *(_QWORD *)(a1[79] + 48LL));
    v73 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
    v74 = closing_comment();
    v73(a1, v74, 0);
  }
  while ( !sub_35CF70(a1, a13, a12) );
  v70 = a1;
LABEL_98:
  if ( v99 && (unsigned __int8)is_loaded(a3) )
  {
    sub_35CF70(v70, a13, a12);
    sub_35D9C0(v70, a3);
  }
LABEL_8:
  *a15 = 1;
  return 1;
}
