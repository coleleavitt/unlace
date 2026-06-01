__int64 __fastcall sub_78EBF0(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  unsigned int v7; // r13d
  __int64 v10; // rax
  char *v12; // rcx
  int v14; // edi
  unsigned int v15; // edx
  char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // rax
  __int64 v20; // rdx
  int *v21; // rax
  int v22; // edx
  int v24; // r13d
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  int *v28; // rax
  int v29; // eax
  _QWORD *v30; // rcx
  unsigned int v31; // eax
  __int64 v32; // rdx
  char v33; // si
  __int64 *v34; // rdi
  __int64 v35; // rax
  char v36; // r15
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // ebp
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // cl
  _QWORD *v49; // rax
  unsigned int v50; // r13d
  unsigned int v51; // ecx
  unsigned int *v52; // rax
  _QWORD *v53; // rax
  unsigned int v54; // r13d
  unsigned int v55; // edx
  unsigned int *v56; // rax
  __int64 v57; // rdx
  _QWORD *v58; // rax
  char **exception; // rbx
  _BYTE *v60[2]; // [rsp+0h] [rbp-1E8h] BYREF
  _BYTE v61[32]; // [rsp+10h] [rbp-1D8h] BYREF
  __int64 v62; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v63[432]; // [rsp+38h] [rbp-1B0h] BYREF

  v6 = a3;
  v7 = a4;
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_13;
  v10 = *(unsigned int *)(a1 + 104);
  v12 = *(char **)(a1 + 96);
  v14 = *(_DWORD *)(a2 + 12);
  v15 = v10 - 1;
  v10 *= 16;
  v16 = &v12[v10];
  v17 = 16LL * (v14 & v15);
  v18 = (__int64)&v12[v17];
  if ( v17 == v10 )
  {
LABEL_18:
    while ( (char *)v18 != v12 )
    {
      v25 = *(_QWORD *)v12;
      if ( *(_QWORD *)v12 > 1u )
      {
        if ( *(_DWORD *)(v25 + 12) == v14 && a2 == v25 )
        {
          v19 = v12;
          goto LABEL_16;
        }
      }
      else if ( !v25 )
      {
        break;
      }
      v12 += 16;
    }
LABEL_9:
    v21 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v21 )
    {
      v22 = *v21;
      if ( *v21 )
      {
        if ( !*(_BYTE *)(a1 + 273) )
          goto LABEL_12;
      }
      else
      {
        v29 = v21[1];
        if ( v29 == 3 )
        {
          if ( !*(_BYTE *)(a1 + 273) )
          {
            std::ostringstream::basic_ostringstream(&v62);
            sub_1606360(v60, a2, *(_QWORD *)(a1 + 8), 0, 0, 0);
            sub_160E8B0(&v62, v60);
            sub_18572D0(v61);
            std::stringbuf::str(v60, v63);
            sub_787480(v60[0], (size_t)v60[1]);
          }
          v34 = (__int64 *)sub_789F10(a1);
          v35 = *v34;
          v36 = *(_BYTE *)(a1 + 274);
          *(_BYTE *)(a1 + 274) = 0;
          v37 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v35 + 472))(v34, a2, v7, v6);
          LODWORD(v60[0]) = v37;
          *(_BYTE *)(a1 + 274) = v36;
          if ( v37 != -2 )
          {
            if ( a3 )
            {
              LODWORD(v62) = v37;
              sub_7872D0(a1, 1u, (__int64)&v62, v38, v39, v40);
            }
            else
            {
              sub_787180((_QWORD *)(a1 + 88), (unsigned int *)v60);
            }
          }
          return 1;
        }
        if ( v29 > 3 )
        {
          if ( (unsigned int)(v29 - 4) > 5 )
            goto LABEL_13;
          v45 = *(_QWORD **)(a1 + 80);
          if ( v45 )
          {
            v46 = *((unsigned int *)v45 - 1);
            if ( (_DWORD)v46 == *((_DWORD *)v45 - 2) )
            {
              v50 = (unsigned int)(3 * v46 + 1) >> 1;
              v51 = 16 * v50 + 8;
              if ( 16 * (int)v46 + 8 >= v51 || (unsigned int)v46 >= v50 )
                goto LABEL_67;
              goto LABEL_54;
            }
LABEL_47:
            v47 = (__int64)&v45[2 * v46];
LABEL_48:
            v48 = *(_BYTE *)(v47 + 8);
            *(_QWORD *)v47 = a2;
            *(_DWORD *)(v47 + 12) = 0;
            *(_BYTE *)(v47 + 8) = (2 * (a4 & 1)) | a3 & 1 | v48 & 0xFC;
            ++*((_DWORD *)v45 - 1);
            return 0;
          }
LABEL_55:
          v53 = (_QWORD *)sub_186B270(0x28u);
          *v53 = 2;
          v45 = v53 + 1;
          *(_QWORD *)(a1 + 80) = v53 + 1;
          v47 = (__int64)(v53 + 1);
          goto LABEL_48;
        }
        if ( v29 == 2 && (unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 40)) )
        {
          v30 = *(_QWORD **)(a1 + 80);
          if ( v30 )
          {
            v31 = *((_DWORD *)v30 - 1);
            v32 = (__int64)&v30[2 * v31];
            if ( v31 == *((_DWORD *)v30 - 2) )
            {
              v54 = (3 * v31 + 1) >> 1;
              v55 = 16 * v54 + 8;
              if ( 16 * v31 + 8 >= v55 || v31 >= v54 )
                goto LABEL_67;
              v56 = (unsigned int *)sub_186B300(v30 - 1, v55);
              v57 = v56[1];
              v30 = v56 + 2;
              *v56 = v54;
              *(_QWORD *)(a1 + 80) = v56 + 2;
              v32 = (__int64)&v56[4 * v57 + 2];
            }
          }
          else
          {
            v58 = (_QWORD *)sub_186B270(0x28u);
            *v58 = 2;
            v30 = v58 + 1;
            *(_QWORD *)(a1 + 80) = v58 + 1;
            v32 = (__int64)(v58 + 1);
          }
          v33 = *(_BYTE *)(v32 + 8);
          *(_QWORD *)v32 = a2;
          *(_DWORD *)(v32 + 12) = 0;
          *(_BYTE *)(v32 + 8) = a3 & 1 | v33 & 0xFC | (2 * (a4 & 1));
          ++*((_DWORD *)v30 - 1);
          return 0;
        }
      }
LABEL_13:
      sub_78E1B0(a1, a2, v6, v7);
      return 1;
    }
    if ( *(_BYTE *)(a1 + 273) )
      goto LABEL_13;
    v22 = -1;
LABEL_12:
    if ( *(_DWORD *)(a1 + 24) != v22 )
      goto LABEL_13;
    v45 = *(_QWORD **)(a1 + 80);
    if ( v45 )
    {
      v46 = *((unsigned int *)v45 - 1);
      if ( (_DWORD)v46 == *((_DWORD *)v45 - 2) )
      {
        v50 = (unsigned int)(3 * v46 + 1) >> 1;
        v51 = 16 * v50 + 8;
        if ( 16 * (int)v46 + 8 >= v51 || (unsigned int)v46 >= v50 )
          goto LABEL_67;
LABEL_54:
        v52 = (unsigned int *)sub_186B300(v45 - 1, v51);
        v45 = v52 + 2;
        *(_QWORD *)(a1 + 80) = v52 + 2;
        *v52 = v50;
        v47 = (__int64)&v52[4 * v52[1] + 2];
        goto LABEL_48;
      }
      goto LABEL_47;
    }
    goto LABEL_55;
  }
  v19 = &v12[v17];
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)v19 > 1u )
      break;
    if ( !v20 )
      goto LABEL_9;
LABEL_6:
    v19 += 16;
    if ( v16 == v19 )
      goto LABEL_18;
  }
  if ( *(_DWORD *)(v20 + 12) != v14 || a2 != v20 )
    goto LABEL_6;
LABEL_16:
  v24 = *((_DWORD *)v19 + 2) ^ v7;
  if ( a3 )
  {
    LODWORD(v62) = v24;
    sub_7872D0(a1, 1u, (__int64)&v62, (__int64)v12, v18, a6);
    return 1;
  }
  v26 = *(_QWORD **)(a1 + 88);
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 != *((_DWORD *)v26 - 2) )
    {
      v28 = (int *)v26 + v27;
      goto LABEL_29;
    }
    v41 = (unsigned int)(3 * v27 + 1) >> 1;
    v42 = 4 * v41 + 8;
    if ( 4 * (int)v27 + 8 < v42 && (unsigned int)v27 < v41 )
    {
      v43 = (unsigned int *)sub_186B300(v26 - 1, v42);
      v26 = v43 + 2;
      *v43 = v41;
      v44 = v43[1];
      *(_QWORD *)(a1 + 88) = v26;
      v28 = (int *)v26 + v44;
      goto LABEL_29;
    }
LABEL_67:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v62, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v62);
    sub_233E40((__int64)&v62);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v49 = (_QWORD *)sub_186B270(0x10u);
  *v49 = 2;
  v26 = v49 + 1;
  *(_QWORD *)(a1 + 88) = v49 + 1;
  v28 = (int *)(v49 + 1);
LABEL_29:
  *v28 = v24;
  ++*((_DWORD *)v26 - 1);
  return 1;
}

