_QWORD *__fastcall sub_21A3E60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  char *v7; // rbx
  char *v8; // r11
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  _DWORD *v11; // r8
  __int64 v12; // rdx
  char *v13; // rsi
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  char **v17; // rdi
  unsigned __int64 v18; // r12
  void *v19; // r8
  _BYTE *v20; // rsi
  char *v21; // rdx
  int v22; // r12d
  _QWORD *v23; // rbx
  char v24; // r8
  char *v25; // rax
  unsigned int v26; // ecx
  unsigned __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rsi
  const char *v30; // rdi
  char *v31; // rax
  int v32; // esi
  _BYTE *v33; // rcx
  char v34; // r14
  _BYTE *v35; // rcx
  _BYTE *v36; // r9
  size_t v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rbp
  char *v41; // rax
  char *v42; // r8
  char *v43; // rbp
  char *v44; // rax
  char *v45; // r14
  char *v46; // rax
  __int64 v47; // r12
  __int64 v48; // rdi
  _BYTE *v49; // rdx
  char *v50; // r14
  size_t v51; // rbx
  char *v52; // rax
  void *v53; // rdi
  void *v55; // [rsp+0h] [rbp-98h] BYREF
  void *v56; // [rsp+8h] [rbp-90h]
  void *src; // [rsp+10h] [rbp-88h]
  size_t n; // [rsp+18h] [rbp-80h]
  __int64 v59; // [rsp+20h] [rbp-78h]
  char **v60; // [rsp+28h] [rbp-70h]
  __int64 v61; // [rsp+30h] [rbp-68h]
  __int64 v62; // [rsp+38h] [rbp-60h]
  __int64 v63; // [rsp+40h] [rbp-58h]
  _QWORD *v64; // [rsp+48h] [rbp-50h]
  __int64 v65[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = (__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 4;
  v64 = a1;
  v61 = a2;
  *(_DWORD *)(a2 + 688) = -858993459 * v4;
  v5 = sub_21A2A40(a3);
  v6 = *(_QWORD *)(a2 + 536);
  v55 = *(void **)(a2 + 544);
  if ( v5 == ((__int64)v55 - v6) >> 7 )
  {
    v7 = *(char **)(a3 + 8);
    v8 = *(char **)(a3 + 16);
    if ( v5 )
    {
      v59 = 0;
      v60 = (char **)(a3 + 8);
      v9 = 0;
      v63 = (unsigned int)(v5 - 1);
      while ( 1 )
      {
        v55 = (void *)(v6 + (v9 << 7));
        v10 = sub_21A29A0(v60, v8);
        v11 = v55;
        if ( v10 > 0xFFFFFFFF
          || (v12 = *(_QWORD *)(a3 + 8),
              v13 = *(char **)(a3 + 16),
              v14 = v12 + v10,
              v15 = v59,
              *((_DWORD *)v55 + 14) = v12 - (_DWORD)v7,
              v62 = v14,
              *v11 = *(_DWORD *)(v61 + 680) + v15,
              v11[12] = (_DWORD)v7 - *(_DWORD *)a3,
              v16 = v14,
              v17 = v60,
              v11[13] = v16 - (_DWORD)v7,
              v18 = sub_21A29A0(v17, v13),
              v18 > 0xFFFFFFFF) )
        {
LABEL_57:
          sub_2221C70("LEB is outside Varuint32 range", 1);
        }
        v19 = v55;
        v20 = *((_BYTE **)v55 + 1);
        if ( (__int64)(*((_QWORD *)v55 + 3) - (_QWORD)v20) >> 3 < v18 )
        {
          v49 = *((_BYTE **)v55 + 2);
          v50 = nullptr;
          v51 = v49 - v20;
          if ( v18 )
          {
            src = *((void **)v55 + 2);
            v56 = v20;
            v52 = (char *)operator new(8 * v18);
            v49 = src;
            v20 = v56;
            v19 = v55;
            v50 = v52;
          }
          if ( v20 != v49 )
          {
            v55 = v19;
            memmove(v50, v20, v51);
            v19 = v55;
          }
          v53 = *((void **)v19 + 1);
          if ( v53 )
          {
            v55 = v19;
            operator delete(v53);
            v19 = v55;
          }
          *((_QWORD *)v19 + 1) = v50;
          *((_QWORD *)v19 + 2) = &v50[v51];
          *((_QWORD *)v19 + 3) = &v50[8 * v18];
        }
        v21 = *(char **)(a3 + 8);
        v8 = *(char **)(a3 + 16);
        if ( v18 )
          break;
LABEL_34:
        v47 = (unsigned int)(v62 - (_DWORD)v21);
        v7 = &v21[v47];
        if ( &v21[v47] > v8 )
        {
          sub_21A2C10(v65, "Function extends beyond buffer");
          *v64 = v65[0];
          return v64;
        }
        v48 = v59;
        *((_QWORD *)v19 + 4) = v21;
        *((_QWORD *)v19 + 5) = v47;
        *((_DWORD *)v19 + 30) = -1;
        *(_QWORD *)(a3 + 8) = v7;
        if ( v63 == v48 )
          goto LABEL_53;
        v8 = *(char **)(a3 + 16);
        v59 = v48 + 1;
        v9 = v48 + 1;
        v6 = *(_QWORD *)(v61 + 536);
      }
      if ( v21 == v8 )
      {
LABEL_23:
        v30 = "malformed uleb128, extends past end";
LABEL_17:
        sub_2221C70(v30, 1);
      }
      v22 = v18 - 2;
      v23 = v19;
      while ( 1 )
      {
        v24 = *v21;
        v25 = v21;
        v26 = 0;
        v27 = 0;
        v28 = *v21 & 0x7F;
        while ( 1 )
        {
          v29 = v28 << v26;
          ++v25;
          v26 += 7;
          v27 += v29;
          if ( v24 >= 0 )
            break;
          if ( v25 == v8 )
            goto LABEL_23;
          v24 = *v25;
          v28 = *v25 & 0x7F;
          if ( v26 > 0x3E )
          {
            if ( v26 == 63 )
            {
              if ( v28 != (v24 & 1) )
              {
LABEL_16:
                v30 = "uleb128 too big for uint64";
                goto LABEL_17;
              }
            }
            else if ( (*v25 & 0x7F) != 0 )
            {
              goto LABEL_16;
            }
          }
        }
        v31 = &v21[(_DWORD)v25 - (_DWORD)v21];
        *(_QWORD *)(a3 + 8) = v31;
        if ( v27 > 0xFFFFFFFF )
          goto LABEL_57;
        v32 = v27;
        if ( v31 == v8 )
          sub_2221C70("EOF while reading uint8", 1);
        v21 = v31 + 1;
        v33 = (_BYTE *)v23[2];
        *(_QWORD *)(a3 + 8) = v31 + 1;
        v34 = *v31;
        if ( v33 != (_BYTE *)v23[3] )
        {
          *v33 = v34;
          v35 = v33 + 8;
          *((_DWORD *)v35 - 1) = v27;
          v23[2] = v35;
          if ( v22 == -1 )
            goto LABEL_33;
          goto LABEL_22;
        }
        v36 = (_BYTE *)v23[1];
        v37 = v33 - v36;
        v38 = (v33 - v36) >> 3;
        if ( !v38 )
          break;
        v39 = 2 * v38;
        v40 = -8;
        if ( v38 > 2 * v38 )
          goto LABEL_28;
        if ( v39 > 0x1FFFFFFFFFFFFFFFLL )
        {
          v40 = -8;
          goto LABEL_28;
        }
        if ( v39 )
        {
          v40 = 16 * v38;
          goto LABEL_28;
        }
        v43 = nullptr;
        v42 = nullptr;
LABEL_29:
        v44 = &v42[v37];
        *v44 = v34;
        v45 = &v42[v37 + 8];
        *((_DWORD *)v44 + 1) = v32;
        if ( v33 != v36 )
        {
          v55 = v36;
          v46 = (char *)memmove(v42, v36, v37);
          v36 = v55;
          v42 = v46;
LABEL_31:
          v55 = v42;
          operator delete(v36);
          goto LABEL_32;
        }
        if ( v36 )
          goto LABEL_31;
LABEL_32:
        v21 = *(char **)(a3 + 8);
        v8 = *(char **)(a3 + 16);
        v55 = v45;
        v23[3] = v43;
        *(__m128 *)(v23 + 1) = _mm_loadh_ps((const double *)&v55);
        if ( v22 == -1 )
        {
LABEL_33:
          v19 = v23;
          goto LABEL_34;
        }
LABEL_22:
        --v22;
        if ( v21 == v8 )
          goto LABEL_23;
      }
      v40 = 8;
LABEL_28:
      n = v33 - v36;
      src = v36;
      v56 = v33;
      LODWORD(v55) = v32;
      v41 = (char *)operator new(v40);
      v32 = (int)v55;
      v33 = v56;
      v36 = src;
      v37 = n;
      v42 = v41;
      v43 = &v41[v40];
      goto LABEL_29;
    }
LABEL_53:
    if ( v7 == v8 )
    {
      *v64 = 0;
    }
    else
    {
      sub_21A2C10(v65, "code section ended prematurely");
      *v64 = v65[0];
    }
  }
  else
  {
    sub_21A2C10(v65, "invalid function count");
    *a1 = v65[0];
  }
  return v64;
}
