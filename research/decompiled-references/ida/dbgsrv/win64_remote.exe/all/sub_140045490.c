/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140045490
// Address: 0x0000000140045490

//----- (0000000140045490) ----------------------------------------------------
__int64 __fastcall sub_140045490(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  bool i; // cf
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  _QWORD *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  int *v18; // r12
  const void *v19; // r8
  size_t v20; // rdi
  const void **v21; // r14
  unsigned __int8 *v22; // r15
  const void *v23; // rbx
  int v24; // r13d
  _BYTE *v25; // rax
  _BYTE *v26; // rsi
  size_t v27; // rdi
  size_t v28; // rbp
  __int64 v29; // r14
  __int64 v30; // rbx
  _QWORD *v31; // rax
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // r10
  int *v35; // r9
  __int64 v36; // rcx
  unsigned __int64 v37; // r8
  unsigned __int8 *v38; // r13
  _BYTE *v39; // r12
  int v40; // r15d
  _BYTE *v41; // rsi
  unsigned __int64 v42; // rax
  int v43; // ebp
  int v44; // edi
  char v45; // bl
  bool v46; // zf
  __int64 v47; // rdi
  __int64 v48; // rbx
  _QWORD *v49; // rax
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rbx
  __int64 v53; // [rsp+20h] [rbp-A8h]
  __int64 v54; // [rsp+30h] [rbp-98h]
  const void *v55; // [rsp+38h] [rbp-90h]
  unsigned __int64 v56; // [rsp+38h] [rbp-90h]
  unsigned __int64 v57; // [rsp+40h] [rbp-88h]
  const void **v58; // [rsp+48h] [rbp-80h]
  __int64 v59; // [rsp+48h] [rbp-80h]
  unsigned __int64 v60; // [rsp+50h] [rbp-78h]
  unsigned __int64 v61; // [rsp+58h] [rbp-70h]
  void (__fastcall __noreturn **v62)(); // [rsp+60h] [rbp-68h] BYREF
  __int128 v63; // [rsp+68h] [rbp-60h]
  __int64 v65; // [rsp+D8h] [rbp+10h]
  __int64 v67; // [rsp+E8h] [rbp+20h]
  int *v68; // [rsp+E8h] [rbp+20h]

  v3 = a3;
  v4 = a1;
  *(_QWORD *)(a1 + 4144) = a2 & 0xFFFFFFFFFFFFF000uLL;
  v5 = a2 - (a2 & 0xFFFFFFFFFFFFF000uLL);
  v65 = v5;
  v54 = 0;
  for ( i = (a2 & 0xFFFFFFFFFFFFF000uLL) < a3; ; i = *(_QWORD *)(v4 + 4144) < a3 )
  {
    if ( !i )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v4 + 32) & 2) == 0 )
    {
      v63 = 0;
      v62 = (void (__fastcall __noreturn **)())&off_140096F50;
      v7 = off_1400C6AE0(86, (struct __crt_locale_pointers *)&v62, 0, (va_list)off_1400C6AE0, v53);
      v62 = &off_140096F28;
      sub_14005D710(*((void **)&v63 + 1));
      if ( v7 )
        return 4294967289LL;
      v3 = a3;
    }
    v53 = *(_QWORD *)(v4 + 40);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(v4 + 16) + 280LL))(
           *(_QWORD *)(v4 + 16),
           *(_QWORD *)(v4 + 4144),
           v4 + 48,
           4096);
    v9 = *(_QWORD *)(v4 + 4144);
    if ( v8 != 4096 )
    {
      *(_QWORD *)(v4 + 4176) = v9;
      return 4294967289LL;
    }
    *(_QWORD *)(v4 + 4240) = v3 - v9;
    if ( v3 - v9 > 0x1000 )
      *(_QWORD *)(v4 + 4240) = 4096;
    v10 = (_QWORD *)(v4 + 4152);
    v67 = v4 + 4152;
    v11 = *(_QWORD **)(v4 + 4152);
    if ( v11 != (_QWORD *)(v4 + 4152) )
    {
      do
      {
        v12 = (_QWORD *)(**(_QWORD **)(v4 + 24) + 80LL * v11[3]);
        v13 = v11[4];
        v14 = v12[1] - v13;
        v15 = v14;
        if ( v14 >= *(_QWORD *)(v4 + 4240) )
          v15 = *(_QWORD *)(v4 + 4240);
        if ( !sub_140045AA0(v4, v4 + 48, v12, v13, v15) )
          goto LABEL_16;
        v16 = *(_QWORD *)(v4 + 4240);
        if ( v14 <= v16 )
        {
          **(_QWORD **)(v4 + 8) = v11[2];
          return 1;
        }
        if ( v16 == 4096 )
        {
          v11[4] += 4096LL;
          v11 = (_QWORD *)*v11;
        }
        else
        {
LABEL_16:
          v17 = (_QWORD *)*v11;
          *(_QWORD *)v11[1] = *v11;
          *(_QWORD *)(*v11 + 8LL) = v11[1];
          j_free(v11);
          --*(_QWORD *)(v4 + 4168);
          v11 = v17;
        }
      }
      while ( v11 != v10 );
      v10 = (_QWORD *)(v4 + 4152);
      v67 = v4 + 4152;
    }
    v18 = *(int **)(v4 + 4184);
    if ( v18 != &v18[*(_QWORD *)(v4 + 4192)] )
    {
      v19 = (const void *)(v5 + v4 + 48);
      v55 = v19;
      do
      {
        v20 = *(_QWORD *)(v4 + 4240) - v5;
        v21 = (const void **)(80LL * *v18 + **(_QWORD **)(v4 + 24));
        v58 = v21;
        v22 = (unsigned __int8 *)v21[1];
        v23 = v19;
        if ( v20 )
        {
          v24 = *(unsigned __int8 *)*v21;
          do
          {
            v25 = memchr(v23, v24, v20);
            v26 = v25;
            if ( !v25 )
              break;
            v27 = (_BYTE *)v23 - v25 + v20;
            v28 = (size_t)v22;
            if ( v27 < (unsigned __int64)v22 )
              v28 = v27;
            if ( !memcmp(v25, *v21, v28) )
            {
              v29 = (__int64)&v26[*(_QWORD *)(a1 + 4144) - 48 - a1];
              if ( (unsigned __int64)v22 <= v27 )
              {
                **(_QWORD **)(a1 + 8) = v29;
                return 1;
              }
              v30 = *v18;
              v31 = sub_14005AAA0(40);
              v31[2] = v29;
              v31[3] = v30;
              v31[4] = v28;
              *v31 = v67;
              v31[1] = *(_QWORD *)(v67 + 8);
              **(_QWORD **)(v67 + 8) = v31;
              *(_QWORD *)(v67 + 8) = v31;
              ++*(_QWORD *)(v67 + 16);
              v21 = v58;
            }
            v23 = v26 + 1;
            v20 = v27 - 1;
          }
          while ( v20 );
          v19 = v55;
        }
        ++v18;
        v4 = a1;
        v5 = v65;
      }
      while ( v18 != (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) );
      v10 = (_QWORD *)(a1 + 4152);
    }
    if ( *(_QWORD *)(v4 + 4216) )
    {
      v32 = *(_QWORD *)(v4 + 4240);
      if ( v5 < v32 )
        break;
    }
LABEL_62:
    *(_QWORD *)(v4 + 4144) += 4096LL;
    v5 = 0;
    v65 = 0;
    if ( (unsigned __int64)++v54 >= 0x3E8 )
    {
      v54 = 0;
      v50 = sub_14005A7C0();
      v51 = HIDWORD(v50);
      if ( (unsigned int)(HIDWORD(v50) - *(_DWORD *)(v4 + 4232)) >= 5 )
      {
        sub_140012410(*(_QWORD *)(v4 + 16), (struct __crt_locale_pointers *)pNodeName);
        *(_DWORD *)(v4 + 4232) = v51;
      }
    }
    v3 = a3;
  }
  v33 = v5 + v4 + 48;
  v59 = v33;
LABEL_36:
  v34 = v32 - v5;
  v57 = v34;
  v35 = *(int **)(v4 + 4208);
  v68 = v35;
  if ( v35 == &v35[*(_QWORD *)(v4 + 4216)] )
    goto LABEL_61;
LABEL_37:
  v36 = **(_QWORD **)(v4 + 24);
  v61 = *(_QWORD *)(v36 + 80LL * *v35 + 8);
  v37 = v61;
  if ( v34 < v61 )
    v37 = v34;
  v56 = v37;
  v38 = *(unsigned __int8 **)(v36 + 80LL * *v35);
  if ( *(_QWORD *)(v36 + 80LL * *v35 + 32) )
    v39 = *(_BYTE **)(v36 + 80LL * *v35 + 24);
  else
    v39 = nullptr;
  v40 = 0;
  if ( v37 )
  {
    v41 = v39;
    v42 = v33 - (_QWORD)v39;
    v60 = v33 - (_QWORD)v39;
    while ( 1 )
    {
      v43 = *(_DWORD *)(v4 + 32);
      v44 = *v38;
      v45 = v41[v42];
      if ( (v43 & 1) == 0 )
      {
        v45 = toupper((unsigned __int8)v41[v42]);
        LOBYTE(v44) = toupper(v44);
        v37 = v56;
      }
      if ( v39 )
      {
        if ( (v43 & 0x20) != 0 )
        {
          v46 = ((unsigned __int8)(v44 ^ v45) & *v41) == 0;
          goto LABEL_54;
        }
        if ( v39 == (_BYTE *)255 )
        {
          if ( (_BYTE)v44 == 0xFF )
            goto LABEL_55;
        }
        else if ( !*v41 )
        {
          goto LABEL_55;
        }
      }
      v46 = v45 == (char)v44;
LABEL_54:
      if ( !v46 )
      {
        v10 = (_QWORD *)(v4 + 4152);
        v5 = v65;
LABEL_60:
        v35 = v68 + 1;
        v68 = v35;
        v34 = v57;
        v33 = v59;
        if ( v35 == (int *)(*(_QWORD *)(v4 + 4208) + 4LL * *(_QWORD *)(v4 + 4216)) )
        {
LABEL_61:
          v65 = ++v5;
          v59 = ++v33;
          v32 = *(_QWORD *)(v4 + 4240);
          if ( v5 >= v32 )
            goto LABEL_62;
          goto LABEL_36;
        }
        goto LABEL_37;
      }
LABEL_55:
      ++v40;
      ++v41;
      ++v38;
      v42 = v60;
      if ( v40 >= v37 )
      {
        v10 = (_QWORD *)(v4 + 4152);
        v35 = v68;
        v34 = v57;
        break;
      }
    }
  }
  v5 = v65;
  v47 = v65 + *(_QWORD *)(v4 + 4144);
  if ( v61 > v34 )
  {
    v48 = *v35;
    v49 = sub_14005AAA0(40);
    v49[2] = v47;
    v49[3] = v48;
    v49[4] = v56;
    *v49 = v10;
    v49[1] = v10[1];
    *(_QWORD *)v10[1] = v49;
    v10[1] = v49;
    ++v10[2];
    goto LABEL_60;
  }
  **(_QWORD **)(v4 + 8) = v47;
  return 1;
}
// 14004551B: variable 'v53' is possibly undefined
// 140096F28: using guessed type void (__fastcall __noreturn *off_140096F28)();
// 140096F50: using guessed type __int64 (__fastcall *off_140096F50)();
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
