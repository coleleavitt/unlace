__int64 __fastcall sub_4025E0(__int64 a1, __int64 a2, _BYTE *a3, _QWORD *a4, _DWORD *a5)
{
  char **exception; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v16; // r11
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // edi
  unsigned int v23; // edx
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 *v26; // r8
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rsi
  bool v35; // dl
  __int64 v36; // rdi
  unsigned int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  bool *v41; // rcx
  _QWORD *v42; // rax
  unsigned int v43; // ecx
  size_t v44; // rsi
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v48; // [rsp+10h] [rbp-88h]
  bool v50; // [rsp+23h] [rbp-75h]
  bool v51; // [rsp+23h] [rbp-75h]
  bool v52; // [rsp+23h] [rbp-75h]
  unsigned int v53; // [rsp+24h] [rbp-74h]
  __int64 v55; // [rsp+30h] [rbp-68h] BYREF
  __int64 v56; // [rsp+38h] [rbp-60h]
  __int64 v57; // [rsp+40h] [rbp-58h] BYREF
  __int64 v58; // [rsp+48h] [rbp-50h]

  v7 = *(_QWORD **)(a1 + 64);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = &v7[2 * *(unsigned int *)(a1 + 72)];
  v55 = 0;
  v56 = v8;
  if ( v9 == v7 )
    goto LABEL_55;
  while ( 1 )
  {
    v11 = v7;
    if ( *v7 > 1u )
      break;
    v7 += 2;
    if ( v9 == v7 )
      goto LABEL_55;
  }
  if ( v9 == v7 )
  {
LABEL_55:
    v13 = 0;
    goto LABEL_56;
  }
  v12 = 0;
  do
  {
    if ( !(unsigned __int8)sub_135E850(a2, *(_QWORD *)(*(_QWORD *)(v11[1] + 48LL) + 16LL), &v55) )
      goto LABEL_9;
    v13 = v55;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL) != v55 )
      goto LABEL_9;
    v12 = *(_QWORD *)v11[1];
    *a3 = 1;
    *a5 = 0;
    v16 = (_QWORD *)*a4;
    if ( *a4 )
      *((_DWORD *)v16 - 1) = 0;
    if ( !*(_DWORD *)(v12 + 68) )
    {
      v8 = v56;
      goto LABEL_15;
    }
    v48 = *(unsigned int *)(v12 + 68);
    v17 = 0;
    do
    {
      v18 = *(_QWORD *)((*(_QWORD *)(v12 + 8 * v17 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
      v19 = *(_QWORD *)(a1 + 16);
      v20 = *(__int64 **)(v19 + 264);
      v21 = *(unsigned int *)(v19 + 272);
      v22 = *(_DWORD *)(v18 + 12);
      v23 = v21 - 1;
      v21 *= 16;
      v24 = (__int64 *)((char *)v20 + v21);
      v25 = 16LL * (v22 & v23);
      v26 = &v20[(unsigned __int64)v25 / 8];
      if ( v25 == v21 )
      {
LABEL_28:
        while ( v26 != v20 )
        {
          v29 = *v20;
          if ( (unsigned __int64)*v20 > 1 )
          {
            if ( *(_DWORD *)(v29 + 12) == v22 && v18 == v29 )
            {
              v27 = v20;
              goto LABEL_37;
            }
          }
          else if ( !v29 )
          {
            break;
          }
          v20 += 2;
        }
LABEL_58:
        BUG();
      }
      v27 = &v20[(unsigned __int64)v25 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = *v27;
          if ( (unsigned __int64)*v27 > 1 )
            break;
          if ( !v28 )
            goto LABEL_58;
          v27 += 2;
          if ( v24 == v27 )
            goto LABEL_28;
        }
        if ( *(_DWORD *)(v28 + 12) == v22 && v18 == v28 )
          break;
        v27 += 2;
        if ( v24 == v27 )
          goto LABEL_28;
      }
LABEL_37:
      v30 = *(_QWORD *)(v27[1] + 216);
      if ( v30 && (v31 = *(_DWORD *)(v30 - 4)) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 8);
        v57 = 0;
        v33 = *(_QWORD *)(v30 + 8LL * (unsigned int)(v31 - 1));
        v58 = v32;
        sub_43D1D0(*(_QWORD *)a1 + 8LL, *(_QWORD *)(v33 + 48), 0, (unsigned int)(v17 + 1), &v57, 1);
        sub_135E850(a2, *(_QWORD *)(v57 + 16), &v55);
        v34 = v57;
        v35 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL) == v55;
        *a3 &= v35;
        if ( v34 )
        {
          v36 = v58;
          if ( (*(_DWORD *)(v34 + 8))-- == 1 )
          {
            v52 = v35;
            sub_15D7BC0(v36, v34);
            v35 = v52;
          }
        }
        v16 = (_QWORD *)*a4;
        if ( !*a4 )
        {
LABEL_51:
          v50 = v35;
          v42 = (_QWORD *)sub_186B270(0xAu);
          v16 = v42 + 1;
          *v42 = 2;
          v35 = v50;
          v41 = (bool *)(v42 + 1);
          *a4 = v42 + 1;
          v40 = 1;
          goto LABEL_45;
        }
      }
      else
      {
        *a3 = 0;
        v35 = 0;
        if ( !v16 )
          goto LABEL_51;
      }
      v38 = *((_DWORD *)v16 - 1);
      if ( v38 == *((_DWORD *)v16 - 2) )
      {
        v43 = (3 * v38 + 1) >> 1;
        v44 = v43 + 8;
        if ( v38 + 8 >= (unsigned int)v44 || v38 >= v43 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_3FCFD0(&v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v57);
          sub_233E40((__int64)&v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v53 = (3 * v38 + 1) >> 1;
        v51 = v35;
        v45 = (unsigned int *)sub_186B300(v16 - 1, v44);
        v16 = v45 + 2;
        v35 = v51;
        *v45 = v53;
        v46 = v45[1];
        *a4 = v45 + 2;
        LODWORD(v45) = v46;
        v41 = (bool *)v16 + v46;
        v40 = (_DWORD)v45 + 1;
      }
      else
      {
        v39 = v38;
        v40 = v38 + 1;
        v41 = (bool *)v16 + v39;
      }
LABEL_45:
      *v41 = v35;
      *((_DWORD *)v16 - 1) = v40;
      if ( v35 )
        ++*a5;
      ++v17;
    }
    while ( v48 != v17 );
    if ( *a3 )
      break;
LABEL_9:
    v14 = v11 + 2;
    if ( v9 == v11 + 2 )
      break;
    while ( 1 )
    {
      v11 = v14;
      if ( *v14 > 1u )
        break;
      v14 += 2;
      if ( v9 == v14 )
        goto LABEL_14;
    }
  }
  while ( v9 != v14 );
LABEL_14:
  v13 = v55;
  v8 = v56;
  if ( !v12 )
  {
LABEL_56:
    *a3 = 1;
    v12 = 0;
  }
LABEL_15:
  sub_3FCDF0(v13, v8);
  return v12;
}

