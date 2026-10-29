char __fastcall sub_1BEF9D0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        unsigned __int64 a10,
        unsigned int *a11,
        unsigned __int8 a12,
        char a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17)
{
  unsigned __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  char result; // al
  char v23; // bp
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // r15
  unsigned int v29; // edx
  char v30; // al
  int v31; // eax
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // r9
  char v35; // al
  __int64 v36; // rax
  unsigned int v37; // ebp
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned int *v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rax
  int v45; // edx
  unsigned int v46; // eax
  __int64 v47; // rbp
  __int64 v48; // rbp
  unsigned int v49; // eax
  __int64 v50; // rbx
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  void *v58; // rdi
  unsigned int v60; // [rsp+Ch] [rbp-14Ch]
  unsigned __int64 v62; // [rsp+30h] [rbp-128h]
  int v63; // [rsp+38h] [rbp-120h]
  unsigned __int8 v66; // [rsp+53h] [rbp-105h]
  _BOOL4 v68; // [rsp+58h] [rbp-100h]
  int v69; // [rsp+5Ch] [rbp-FCh]
  __m128i v70; // [rsp+60h] [rbp-F8h] BYREF
  void **p_ptr; // [rsp+70h] [rbp-E8h]
  __int64 v72; // [rsp+78h] [rbp-E0h]
  void *ptr; // [rsp+80h] [rbp-D8h] BYREF
  _BYTE v74[80]; // [rsp+90h] [rbp-C8h] BYREF
  __int16 v75; // [rsp+E0h] [rbp-78h]
  __int64 *v76; // [rsp+E8h] [rbp-70h]
  __int64 v77; // [rsp+F0h] [rbp-68h]
  __int64 v78; // [rsp+F8h] [rbp-60h] BYREF

  v18 = a10;
  v19 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v20 = *(unsigned __int8 *)(v19 + 16);
  if ( (unsigned int)(v20 - 25) > 1 )
  {
    v21 = sub_1BC7560(v19, a2, v20, a4);
    LOBYTE(v20) = *(_BYTE *)(v21 + 16);
    v19 = v21;
  }
  if ( (_BYTE)v20 != 26 )
    v19 = 0;
  result = sub_1BCD280((__int64)a11, a2, a16);
  if ( result )
  {
    if ( (*(_BYTE *)(a2 + 83) & 2) == 0
      || (*(_BYTE *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) == 0
      || (result = sub_B98360((_QWORD *)a2, a2)) == 0 )
    {
      sub_18C74E0(a1, 0, 0, 4);
      v23 = sub_B981D0((_QWORD *)a2, 0);
      if ( v23 )
      {
        if ( a11[743] == 4 )
        {
          v69 = 0;
          v66 = sub_B98200((_QWORD *)a2, 0);
          v63 = v66;
          goto LABEL_12;
        }
        v24 = 0;
        v66 = 0;
      }
      else if ( a11[743] == 4 )
      {
        v66 = sub_B98200((_QWORD *)a2, 0);
        v24 = v66;
      }
      else
      {
        v66 = 0;
        v24 = 0;
      }
      v23 = 0;
      v69 = (unsigned __int8)sub_B981D0((_QWORD *)a2, 0);
      v63 = v24 - v69;
LABEL_12:
      v60 = v63 + sub_B76070(a2, 0, v25, v26);
      v27 = (a11[743] != 4) + (unsigned int)a10;
      v68 = a11[743] != 4;
      v28 = sub_1BD9C70((__int64)a11, v27, a14, a15);
      *(_QWORD *)v28 = a2;
      *(_QWORD *)(v28 + 8) = a3;
      v29 = a11[744];
      v30 = 0;
      if ( v29 )
      {
        v30 = 1;
        v27 = *(_QWORD *)(a2 + 40) & 7LL;
        if ( (_DWORD)v27 == 6 )
          v30 = *(_DWORD *)(*(_QWORD *)(a2 + 40) & 0xFFFFFFFFFFFFFFF8LL) != v29;
      }
      if ( a16 == 1 )
        v30 |= 2u;
      *(_BYTE *)(v28 + 105) = *(_BYTE *)(v28 + 105) & 0xFC | v30 & 3;
      v31 = (int)a11;
      v32 = a11[743] == 4;
      *(_DWORD *)(v28 + 108) = a10;
      LOBYTE(v31) = v32;
      v33 = (unsigned int)(16 * v31);
      *(_BYTE *)(v28 + 104) = (32 * (a17 & 1)) | (16 * v32) | *(_BYTE *)(v28 + 104) & 0xCF;
      if ( a10 && a13 )
      {
        if ( v60 < a10 + 1 && *(char *)(v19 + 19) >= 0 )
        {
          v27 = a2;
          if ( (unsigned __int8)sub_1BD7850(a13, a2, a10 + 1, v33) )
          {
LABEL_59:
            *(_DWORD *)(v28 + 104) &= 0xFFFC03FE;
            return sub_190D5E0(a1, a7);
          }
        }
        sub_B770E0(a2, v27);
      }
      else
      {
        if ( v60 < a10 && *(char *)(v19 + 19) >= 0 )
        {
          v27 = a2;
          if ( (unsigned __int8)sub_1BD7850(a13, a2, 32 * (a17 & 1u), v33) )
            goto LABEL_59;
        }
        if ( v63 + (unsigned int)sub_B770E0(a2, v27) > a10 && !a13 )
        {
          v46 = *(_DWORD *)(v28 + 104) & 0xFFFC03FE;
          BYTE1(v46) |= 4u;
          *(_DWORD *)(v28 + 104) = v46;
          return sub_190D5E0(a1, a7);
        }
      }
      v35 = *(_BYTE *)(v28 + 104);
      *(_BYTE *)(v28 + 104) = v35 | 1;
      if ( !v23 )
      {
        if ( (a5 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v47 = 152LL * (a16 == 1);
          if ( sub_B979F0((_QWORD *)a2) )
          {
            v48 = *(_QWORD *)(v28 + 48) + v47;
            if ( (*(_DWORD *)v48 & 0x7FFFFFFF) == 3 )
            {
              v58 = *(void **)(v48 + 32);
              if ( v58 != (void *)(v48 + 48) )
                free(v58);
            }
            *(_DWORD *)v48 = *(_DWORD *)v48 & 0x80000000 | 1;
          }
          else
          {
            sub_1BEC760(&v70, a1, a11[742], a5, a6, a2, a7, a8, a4, 0, 0);
            sub_1BD9390((__m128i *)(v47 + *(_QWORD *)(v28 + 48)), &v70);
            if ( (v70.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v74 )
              free(ptr);
            if ( (*(_DWORD *)(*(_QWORD *)(v28 + 48) + 152LL * (a16 == 1)) & 0x7FFFFFFF) == 5 )
            {
LABEL_39:
              v43 = *(_DWORD *)(v28 + 104) & 0xFFFC03FE;
              BYTE1(v43) |= 8u;
              *(_DWORD *)(v28 + 104) = v43;
              return sub_190D5E0(a1, a7);
            }
          }
        }
        else
        {
          *(_BYTE *)(v28 + 104) = v35 | 9;
        }
      }
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0
        || (v50 = *(_QWORD *)(a1 + 664), v51 = sub_15F1640(a1, 1),
                                         (unsigned int)sub_178F000(v50, v51, a2, v52, v53, v54)) )
      {
        v36 = *(_QWORD *)(a2 + 56);
        if ( (v36 & 4) != 0 && *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
        {
          a7 = 0;
          v70 = 0;
          p_ptr = &ptr;
          v75 = 0;
          v76 = &v78;
          v72 = 0x400000000LL;
          v77 = 0x400000000LL;
          if ( (unsigned __int8)sub_17516B0(a1, a2, (__int64)&v70, 0, 1u, 0.0) || !(_BYTE)v75 )
          {
            v56 = *(_DWORD *)(v28 + 104) & 0xFFFC03FE;
            BYTE1(v56) |= 0x3Cu;
            *(_DWORD *)(v28 + 104) = v56;
            sub_1BCD1D0(&v70);
            return sub_190D5E0(a1, a7);
          }
          sub_1BCD1D0(&v70);
        }
        v37 = 1;
        v38 = 0;
        if ( a10 )
        {
          do
          {
            v39 = 0;
            if ( a16 != 1 )
              v39 = 152LL * (v68 - 1 + v37);
            v40 = (unsigned int *)(v39 + *(_QWORD *)(v28 + 48));
            if ( (*v40 & 0x7FFFFFFF) == 6 )
            {
              v41 = v37 - 1;
              if ( v60 <= (unsigned int)v41 )
              {
                *v40 = *v40 & 0x80000000 | 4;
              }
              else
              {
                if ( v66 )
                {
                  if ( v37 == 1 )
                  {
                    v62 = v38;
                    v57 = sub_B987D0((_QWORD *)a2, v41);
                    v38 = v62;
                    v42 = v57;
                  }
                  else
                  {
                    v42 = *(_QWORD *)(v19 + 8LL * (v37 - 2) + 48);
                  }
                }
                else
                {
                  v42 = *(_QWORD *)(v19 + 8LL * (v37 + v69 - 1) + 48);
                }
                sub_1BEC520(
                  &v70,
                  a1,
                  *(_WORD **)(a9 + 8 * v38),
                  v42,
                  a12,
                  1u,
                  a7,
                  a8,
                  (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0,
                  0);
                sub_1BD9390((__m128i *)(v39 + *(_QWORD *)(v28 + 48)), &v70);
                if ( (v70.m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != v74 )
                  free(ptr);
                if ( (*(_DWORD *)(*(_QWORD *)(v28 + 48) + v39) & 0x7FFFFFFF) == 5 )
                  goto LABEL_39;
              }
            }
            v38 = v37++;
          }
          while ( a10 > v38 );
          v18 = a10;
        }
        v44 = sub_1BCB950(a1, a2, a11[742], a9, v18, v34, a7, a8);
        if ( v44 )
        {
          v45 = *(_DWORD *)(v28 + 104);
          *(_QWORD *)(v28 + 120) = v44;
          v45 &= 0xFFFC03FE;
          BYTE1(v45) |= 0x24u;
          *(_DWORD *)(v28 + 104) = v45;
        }
        else if ( sub_1BC6D50((_BYTE *)a2) )
        {
          v49 = *(_DWORD *)(v28 + 104) & 0xFFFC03FE;
          BYTE1(v49) |= 0x34u;
          *(_DWORD *)(v28 + 104) = v49;
        }
        return sub_190D5E0(a1, a7);
      }
      v55 = *(_DWORD *)(v28 + 104) & 0xFFFC03FE;
      BYTE1(v55) |= 0x20u;
      *(_DWORD *)(v28 + 104) = v55;
      return sub_190D5E0(a1, a7);
    }
  }
  return result;
}
