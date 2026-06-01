__int64 __fastcall sub_E4C6F0(__int64 a1, __int64 ***a2, __int64 a3)
{
  __int64 **v5; // r15
  __int64 v6; // r9
  unsigned __int8 v7; // al
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int *v13; // rsi
  size_t v14; // r14
  const void *v15; // rsi
  void *v16; // rdx
  void *v17; // rax
  unsigned __int8 v18; // al
  unsigned __int64 v19; // rsi
  unsigned __int8 v20; // al
  bool v21; // al
  unsigned __int64 v22; // rdx
  const char *v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  char *v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // eax
  const char *v34; // rax
  size_t v35; // rdx
  bool v36; // al
  bool v37; // al
  __int64 v38; // rcx
  __int64 v39; // rax
  bool v40; // al
  __int64 v41; // rcx
  unsigned __int64 *v42; // rax
  __int64 *v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  __int64 *v46; // rcx
  __int64 v47; // rax
  unsigned __int64 *v48; // rax
  __int64 *v49; // rdx
  __int64 *v50; // rcx
  __int64 v51; // rax
  size_t v52; // [rsp+0h] [rbp-190h]
  _QWORD v53[4]; // [rsp+8h] [rbp-188h] BYREF
  __int16 v54; // [rsp+28h] [rbp-168h]
  __int64 (__fastcall **v55)(); // [rsp+38h] [rbp-158h] BYREF
  int v56; // [rsp+40h] [rbp-150h]
  __int128 v57; // [rsp+48h] [rbp-148h]
  __int64 v58; // [rsp+58h] [rbp-138h]
  char v59; // [rsp+60h] [rbp-130h]
  int v60; // [rsp+64h] [rbp-12Ch]
  __int64 v61; // [rsp+68h] [rbp-128h]
  __int64 (__fastcall **v62)(); // [rsp+78h] [rbp-118h] BYREF
  int v63; // [rsp+80h] [rbp-110h]
  __int128 v64; // [rsp+88h] [rbp-108h]
  void *dest; // [rsp+98h] [rbp-F8h]
  char v66; // [rsp+A0h] [rbp-F0h]
  int v67; // [rsp+A4h] [rbp-ECh]
  void **p_ptr; // [rsp+A8h] [rbp-E8h]
  void *ptr; // [rsp+B8h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+C0h] [rbp-D0h]
  _BYTE v71[192]; // [rsp+D0h] [rbp-C0h] BYREF

  v5 = *a2;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v61 = a1;
  v57 = 0;
  v55 = &off_2BC1EC8;
  v56 = 0;
  v59 = 0;
  v60 = 1;
  v58 = 0;
  sub_2257B70(&v55, 0, 0, 0);
  ptr = v71;
  v63 = 2;
  v66 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v62 = &off_2BC1F40;
  v67 = 1;
  dest = nullptr;
  v64 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v62, 0, 0, 0);
  v7 = *(_BYTE *)(a3 + 28) & 0x7F;
  if ( (unsigned int)v7 - 34 <= 5 )
  {
    if ( (unsigned __int8)sub_B6A440(a3 + 72) )
      goto LABEL_3;
    if ( !(unsigned __int8)sub_E4B4A0(*v5, a3) )
      goto LABEL_7;
    v20 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( v20 != 38 )
    {
      if ( v20 != 36 )
      {
        v19 = a3;
        if ( (unsigned int)v20 - 34 <= 5 )
        {
          v21 = sub_B55E40(a3);
          v22 = a3;
          if ( !v21 )
            goto LABEL_22;
          v40 = sub_B55E40(a3);
          v22 = a3;
          if ( !v40 )
            goto LABEL_22;
          if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
            goto LABEL_43;
          v42 = sub_B68690(a3, a3, a3, v41, v9, v10);
          v43 = (__int64 *)*v42;
          v44 = *v42 + 8LL * *((unsigned int *)v42 + 2);
          if ( *v42 >= v44 )
          {
            if ( v43 != (__int64 *)v44 )
            {
              if ( *(_WORD *)(*(_QWORD *)v44 + 36LL) == 64 )
                goto LABEL_54;
              v46 = (__int64 *)(v44 + 8);
              while ( v43 != v46 )
              {
                v47 = *v46++;
                if ( *(_WORD *)(v47 + 36) == 64 )
                {
                  v39 = 0;
                  goto LABEL_44;
                }
              }
            }
LABEL_43:
            v39 = ((*(_BYTE *)(sub_B68890(a3) + 89) >> 2) ^ 1) & 1;
LABEL_44:
            v22 = v39 | a3 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_22:
            v19 = v22;
            goto LABEL_17;
          }
          v45 = *v42;
          while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 64 )
          {
            v45 += 8LL;
            if ( v44 == v45 )
              goto LABEL_43;
          }
LABEL_53:
          if ( v44 != v45 )
          {
LABEL_54:
            v39 = 0;
            goto LABEL_44;
          }
          goto LABEL_43;
        }
LABEL_17:
        sub_E4BC50(*v5, v19, 0, (__int64)&v62, v9, v10);
LABEL_12:
        v16 = p_ptr[1];
        v17 = *p_ptr;
        v54 = 261;
        v53[1] = v16;
        v53[0] = v17;
        sub_207A8A0(&v55, v53, v5 + 1);
        goto LABEL_3;
      }
LABEL_37:
      v19 = a3 & 0xFFFFFFFFFFFFFFF8LL | 1;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( (unsigned int)v7 - 40 > 6 )
  {
    if ( v7 == 18 )
    {
      sub_E4B5F0((__int64)*v5, a3, (__int64)&v55, 0, 1, v6);
    }
    else if ( v7 == 20 )
    {
      v23 = "_OBJC_CLASS_";
      v24 = *(_DWORD *)(*(_QWORD *)(sub_B685F0(a3) + 2320) + 368LL);
      v27 = 13LL - (v24 >= 4);
      if ( v24 < 4 )
        v23 = "OBJC_CLASS_$_";
      v28 = (char *)dest;
      if ( v27 > *((_QWORD *)&v64 + 1) - (_QWORD)dest )
      {
        sub_22581D0(&v62, v23, v27);
      }
      else
      {
        *(_QWORD *)dest = *(_QWORD *)v23;
        v29 = (unsigned int)v27;
        *(_QWORD *)&v28[(unsigned int)v27 - 8] = *(_QWORD *)&v23[(unsigned int)v27 - 8];
        v30 = (unsigned __int64)(v28 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v31 = (__int64)&v28[-v30];
        v23 -= v31;
        v32 = (v27 + v31) & 0xFFFFFFF8;
        if ( v32 >= 8 )
        {
          v33 = v32 & 0xFFFFFFF8;
          LODWORD(v29) = 0;
          do
          {
            v25 = (unsigned int)v29;
            v29 = (unsigned int)(v29 + 8);
            *(_QWORD *)(v30 + v25) = *(_QWORD *)&v23[v25];
          }
          while ( (unsigned int)v29 < v33 );
        }
        dest = (char *)dest + v27;
      }
      v34 = sub_B84BF0(a3, (__int64)v23, v27, v29, v25, v26);
      if ( *((_QWORD *)&v64 + 1) - (_QWORD)dest < v35 )
      {
        sub_22581D0(&v62, v34, v35);
      }
      else if ( v35 )
      {
        v52 = v35;
        memcpy(dest, v34, v35);
        dest = (char *)dest + v52;
      }
      goto LABEL_12;
    }
    goto LABEL_3;
  }
  if ( (unsigned __int8)sub_E4B4A0(*v5, a3) )
  {
    v18 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( v18 != 38 )
    {
      if ( v18 != 36 )
      {
        v19 = a3;
        if ( (unsigned int)v18 - 34 > 5 )
          goto LABEL_17;
        v36 = sub_B55E40(a3);
        v22 = a3;
        if ( !v36 )
          goto LABEL_22;
        v37 = sub_B55E40(a3);
        v22 = a3;
        if ( !v37 )
          goto LABEL_22;
        if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
          goto LABEL_43;
        v48 = sub_B68690(a3, a3, a3, v38, v9, v10);
        v49 = (__int64 *)*v48;
        v44 = *v48 + 8LL * *((unsigned int *)v48 + 2);
        if ( *v48 >= v44 )
        {
          if ( v49 != (__int64 *)v44 )
          {
            if ( *(_WORD *)(*(_QWORD *)v44 + 36LL) == 64 )
              goto LABEL_54;
            v50 = (__int64 *)(v44 + 8);
            while ( v49 != v50 )
            {
              v51 = *v50++;
              if ( *(_WORD *)(v51 + 36) == 64 )
              {
                v39 = 0;
                goto LABEL_44;
              }
            }
          }
          goto LABEL_43;
        }
        v45 = *v48;
        while ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 64 )
        {
          v45 += 8LL;
          if ( v44 == v45 )
            goto LABEL_43;
        }
        goto LABEL_53;
      }
      goto LABEL_37;
    }
LABEL_16:
    v19 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_17;
  }
LABEL_7:
  v11 = *(_QWORD *)(a3 + 40);
  if ( (v11 & 7) == 0 )
  {
    v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12 )
    {
      v13 = *(unsigned int **)(v12 + 16);
      v14 = *v13;
      v15 = v13 + 4;
      if ( v14 > *((_QWORD *)&v64 + 1) - (_QWORD)dest )
      {
        sub_22581D0(&v62, v15, v14);
      }
      else if ( v14 )
      {
        memcpy(dest, v15, v14);
        dest = (char *)dest + v14;
      }
      goto LABEL_12;
    }
  }
LABEL_3:
  v62 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v62);
  if ( ptr != v71 )
    free(ptr);
  v55 = &off_2BC1EC8;
  sub_2257A60(&v55);
  return a1;
}

