/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140044E40
// Address: 0x0000000140044E40

//----- (0000000140044E40) ----------------------------------------------------
__int64 __fastcall sub_140044E40(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  bool i; // cf
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rbp
  _QWORD *v13; // rbx
  _QWORD *v14; // r8
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rdi
  int *v20; // r15
  _BYTE *v21; // rsi
  _QWORD *v22; // rcx
  size_t v23; // r13
  char j; // r14
  _BYTE *v25; // rbx
  unsigned __int64 v26; // r15
  size_t v27; // rbp
  _BYTE *v28; // r12
  __int64 v29; // rbx
  _QWORD *v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r8
  int *v33; // r11
  __int64 *v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r10
  unsigned __int8 *v39; // r12
  _BYTE *v40; // r15
  int v41; // r14d
  _BYTE *v42; // rsi
  unsigned __int64 v43; // r10
  int v44; // ebp
  int v45; // edi
  char v46; // bl
  bool v47; // zf
  bool v48; // zf
  __int64 v49; // rdi
  __int64 v50; // rbx
  _QWORD *v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbx
  __int64 v55; // [rsp+20h] [rbp-98h]
  __int64 v56; // [rsp+30h] [rbp-88h]
  __int64 v57; // [rsp+38h] [rbp-80h]
  unsigned __int64 v58; // [rsp+38h] [rbp-80h]
  _QWORD *v59; // [rsp+40h] [rbp-78h]
  unsigned __int64 v60; // [rsp+40h] [rbp-78h]
  unsigned __int64 v61; // [rsp+48h] [rbp-70h]
  unsigned __int64 v62; // [rsp+50h] [rbp-68h]
  void (__fastcall __noreturn **v63)(); // [rsp+58h] [rbp-60h] BYREF
  __int128 v64; // [rsp+60h] [rbp-58h]
  __int64 v67; // [rsp+D0h] [rbp+18h]
  int *v68; // [rsp+D8h] [rbp+20h]
  int *v69; // [rsp+D8h] [rbp+20h]

  v3 = a2;
  v4 = a1;
  v5 = (a3 - 1) & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(a1 + 4144) = v5;
  v6 = a3 - v5;
  v67 = a3 - v5;
  v56 = 0;
  for ( i = a2 < v5 + 4096; ; i = a2 < *(_QWORD *)(v4 + 4144) + 4096LL )
  {
    if ( !i )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v4 + 32) & 2) == 0 )
    {
      v64 = 0;
      v63 = (void (__fastcall __noreturn **)())&off_140096F50;
      v8 = off_1400C6AE0(86, (struct __crt_locale_pointers *)&v63, 0, (va_list)off_1400C6AE0, v55);
      v63 = &off_140096F28;
      sub_14005D710(*((void **)&v64 + 1));
      if ( v8 )
        return 4294967289LL;
      v3 = a2;
    }
    v55 = *(_QWORD *)(v4 + 40);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)(v4 + 16) + 280LL))(
           *(_QWORD *)(v4 + 16),
           *(_QWORD *)(v4 + 4144),
           v4 + 48,
           4096);
    v10 = *(_QWORD *)(v4 + 4144);
    if ( v9 != 4096 )
    {
      *(_QWORD *)(v4 + 4176) = v10;
      return 4294967289LL;
    }
    v11 = v3 - v10;
    if ( v10 >= v3 )
      v11 = 0;
    *(_QWORD *)(v4 + 4240) = v11;
    v12 = (_QWORD *)(v4 + 4152);
    v57 = v4 + 4152;
    v13 = *(_QWORD **)(v4 + 4152);
    if ( v13 != (_QWORD *)(v4 + 4152) )
    {
      do
      {
        v14 = (_QWORD *)(**(_QWORD **)(v4 + 24) + 80LL * v13[3]);
        v15 = v14[1] - v13[4];
        v16 = v15;
        if ( v15 >= 4096LL - *(_QWORD *)(v4 + 4240) )
          v16 = 4096LL - *(_QWORD *)(v4 + 4240);
        if ( !sub_140045AA0(v4, v4 - v16 + 4144, v14, v15 - v16, v16) )
          goto LABEL_16;
        v17 = *(_QWORD *)(v4 + 4240);
        if ( v15 <= 4096 - v17 )
        {
          **(_QWORD **)(v4 + 8) = v13[2];
          return 1;
        }
        if ( v17 )
        {
LABEL_16:
          v18 = (_QWORD *)*v13;
          *(_QWORD *)v13[1] = *v13;
          *(_QWORD *)(*v13 + 8LL) = v13[1];
          j_free(v13);
          --*(_QWORD *)(v4 + 4168);
          v13 = v18;
        }
        else
        {
          v13[4] += 4096LL;
          v13 = (_QWORD *)*v13;
        }
      }
      while ( v13 != v12 );
      v12 = (_QWORD *)(v4 + 4152);
      v57 = v4 + 4152;
    }
    v19 = v4 + *(_QWORD *)(v4 + 4240) + 48LL;
    v20 = *(int **)(v4 + 4184);
    v68 = v20;
    if ( v20 != &v20[*(_QWORD *)(v4 + 4192)] )
    {
      do
      {
        v21 = (_BYTE *)(v6 - *(_QWORD *)(v4 + 4240));
        v22 = (_QWORD *)(80LL * *v20 + **(_QWORD **)(v4 + 24));
        v59 = v22;
        v23 = v22[1];
        for ( j = *(_BYTE *)(*v22 + v23 - 1); v21; v22 = v59 )
        {
          v25 = &v21[v19 - 1];
          if ( (unsigned __int64)v25 < v19 )
            break;
          while ( *v25 != j )
          {
            if ( (unsigned __int64)--v25 < v19 )
              goto LABEL_32;
          }
          v21 = &v25[-v19];
          v26 = (unsigned __int64)&v25[-v19 + 1];
          v27 = v23;
          if ( v26 < v23 )
            v27 = (size_t)&v25[-v19 + 1];
          if ( !memcmp(&v25[-v27 + 1], (const void *)(v23 + *v22 - v27), v27) )
          {
            v28 = &v25[*(_QWORD *)(a1 + 4144) - v23 - a1 - 47];
            if ( v23 <= v26 )
            {
              **(_QWORD **)(a1 + 8) = v28;
              return 1;
            }
            v20 = v68;
            v29 = *v68;
            v30 = sub_14005AAA0(40);
            v30[2] = v28;
            v30[3] = v29;
            v30[4] = v27;
            *v30 = v57;
            v30[1] = *(_QWORD *)(v57 + 8);
            **(_QWORD **)(v57 + 8) = v30;
            *(_QWORD *)(v57 + 8) = v30;
            ++*(_QWORD *)(v57 + 16);
          }
          else
          {
            v20 = v68;
          }
        }
LABEL_32:
        v68 = ++v20;
        v4 = a1;
        v6 = v67;
      }
      while ( v20 != (int *)(*(_QWORD *)(a1 + 4184) + 4LL * *(_QWORD *)(a1 + 4192)) );
      v12 = (_QWORD *)(a1 + 4152);
    }
    if ( *(_QWORD *)(v4 + 4216) )
    {
      v31 = *(_QWORD *)(v4 + 4240);
      if ( v31 < v6 )
        break;
    }
LABEL_62:
    *(_QWORD *)(v4 + 4144) -= 4096LL;
    v6 = 4096;
    v67 = 4096;
    if ( (unsigned __int64)++v56 >= 0x3E8 )
    {
      v56 = 0;
      v52 = sub_14005A7C0();
      v53 = HIDWORD(v52);
      if ( (unsigned int)(HIDWORD(v52) - *(_DWORD *)(v4 + 4232)) >= 5 )
      {
        sub_140012410(*(_QWORD *)(v4 + 16), (struct __crt_locale_pointers *)pNodeName);
        *(_DWORD *)(v4 + 4232) = v53;
      }
    }
    v3 = a2;
  }
LABEL_36:
  v32 = v6 - v31;
  v60 = v6 - v31;
  v33 = *(int **)(v4 + 4208);
  v69 = v33;
  if ( v33 == &v33[*(_QWORD *)(v4 + 4216)] )
    goto LABEL_61;
LABEL_37:
  v34 = *(__int64 **)(v4 + 24);
  v35 = *v34;
  v36 = *(_QWORD *)(*v34 + 80LL * *v33 + 8);
  v62 = v36;
  v37 = v36;
  if ( v32 < v36 )
    v37 = v32;
  v58 = v37;
  v38 = v4 + v6 - v37 + 48;
  v39 = (unsigned __int8 *)(v36 - v37 + *(_QWORD *)(v35 + 80LL * *v33));
  if ( *(_QWORD *)(v35 + 80LL * *v33 + 32) )
    v40 = (_BYTE *)(v36 - v37 + *(_QWORD *)(v35 + 80LL * *v33 + 24));
  else
    v40 = nullptr;
  v41 = 0;
  if ( v37 )
  {
    v42 = v40;
    v43 = v38 - (_QWORD)v40;
    v61 = v43;
    while ( 1 )
    {
      v44 = *(_DWORD *)(v4 + 32);
      v45 = *v39;
      v46 = v42[v43];
      if ( (v44 & 1) == 0 )
      {
        v46 = toupper((unsigned __int8)v42[v43]);
        LOBYTE(v45) = toupper(v45);
        v37 = v58;
        v43 = v61;
      }
      if ( v40 )
      {
        if ( (v44 & 0x20) != 0 )
        {
          v47 = ((unsigned __int8)(v45 ^ v46) & *v42) == 0;
          goto LABEL_54;
        }
        if ( v40 == (_BYTE *)255 )
          v48 = (_BYTE)v45 == 0xFF;
        else
          v48 = *v42 == 0;
        if ( v48 )
          goto LABEL_55;
      }
      v47 = v46 == (char)v45;
LABEL_54:
      if ( !v47 )
      {
        v12 = (_QWORD *)(v4 + 4152);
        v6 = v67;
LABEL_60:
        v33 = v69 + 1;
        v69 = v33;
        v32 = v60;
        if ( v33 == (int *)(*(_QWORD *)(v4 + 4208) + 4LL * *(_QWORD *)(v4 + 4216)) )
        {
LABEL_61:
          v67 = --v6;
          v31 = *(_QWORD *)(v4 + 4240);
          if ( v31 >= v6 )
            goto LABEL_62;
          goto LABEL_36;
        }
        goto LABEL_37;
      }
LABEL_55:
      ++v41;
      ++v42;
      ++v39;
      if ( v41 >= v37 )
      {
        v33 = v69;
        v12 = (_QWORD *)(v4 + 4152);
        v36 = v62;
        break;
      }
    }
  }
  v49 = *(_QWORD *)(v4 + 4144);
  if ( v36 > v60 )
  {
    v50 = *v33;
    v51 = sub_14005AAA0(40);
    v6 = v67;
    v51[2] = v67 + v49 - v36;
    v51[3] = v50;
    v51[4] = v58;
    *v51 = v12;
    v51[1] = v12[1];
    *(_QWORD *)v12[1] = v51;
    v12[1] = v51;
    ++v12[2];
    goto LABEL_60;
  }
  **(_QWORD **)(v4 + 8) = v67 + v49 - v37;
  return 1;
}
// 140044ECF: variable 'v55' is possibly undefined
// 140096F28: using guessed type void (__fastcall __noreturn *off_140096F28)();
// 140096F50: using guessed type __int64 (__fastcall *off_140096F50)();
// 1400C6AE0: using guessed type __int64 (__fastcall *off_1400C6AE0)(int a1, struct __crt_locale_pointers *a2, signed __int64 a3, va_list a4, int a5);
