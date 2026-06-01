void __fastcall sub_110FB30(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v9; // rax
  unsigned __int8 v10; // r12
  __int64 v11; // r12
  size_t v12; // rax
  unsigned __int64 v13; // r15
  size_t v14; // r13
  void *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v18; // al
  __int64 v19; // r12
  void **v20; // r13
  void **v21; // r12
  int v22; // r12d
  unsigned __int64 v23; // r13
  void **v24; // rsi
  unsigned __int64 v25; // r12
  char v26; // al
  int v27; // r8d
  unsigned __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rsi
  char v33; // al
  __int64 v34; // rbx
  void **v35; // r12
  void **v36; // rbx
  void **v37; // r14
  void **v38; // r15
  void *v39; // rdi
  __int64 v40; // [rsp+8h] [rbp-70h]
  int v41; // [rsp+1Ch] [rbp-5Ch]
  char v42; // [rsp+27h] [rbp-51h] BYREF
  __int64 v43; // [rsp+28h] [rbp-50h] BYREF
  void *s1; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-40h]

  v9 = *a1;
  v42 = 1;
  v10 = (*(__int64 (__fastcall **)(__int64 *))(v9 + 16))(a1);
  if ( v10 )
    v10 = *(_BYTE *)(a3 + 48) ^ 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
  {
    if ( !*(_BYTE *)(a3 + 48) )
      goto LABEL_24;
  }
  else if ( !*(_BYTE *)(a3 + 48) )
  {
    *(_BYTE *)(a3 + 48) = 1;
    *(_QWORD *)a3 = a3 + 16;
    *(_QWORD *)(a3 + 8) = 0x100000000LL;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
         a1,
         a2,
         a5,
         v10,
         &v42,
         &v43) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    {
      v11 = sub_2278BC0(a1);
      if ( *(_DWORD *)(v11 + 32) == 1 )
      {
        v12 = j__strlen("<none>");
        v13 = *(_QWORD *)(v11 + 80);
        v14 = v12;
        v15 = *(void **)(v11 + 72);
        v45 = v13;
        s1 = v15;
        v16 = sub_22470F0(&s1, 32, -1) + 1;
        if ( v16 > v45 )
          v16 = v45;
        v17 = v45 - v13 + v16;
        if ( v17 > v45 )
          v17 = v45;
        if ( v14 == v17 && (!v14 || !memcmp(s1, "<none>", v14)) )
        {
          v18 = *(_BYTE *)(a4 + 48);
          if ( *(_BYTE *)(a3 + 48) )
          {
            if ( v18 )
            {
              sub_CEFB80(a3, a4);
            }
            else
            {
              v19 = *(unsigned int *)(a3 + 8);
              v20 = *(void ***)a3;
              *(_BYTE *)(a3 + 48) = 0;
              v21 = &v20[4 * v19];
              while ( v20 != v21 )
              {
                while ( 1 )
                {
                  v21 -= 4;
                  if ( *v21 == v21 + 2 )
                    break;
                  operator delete(*v21);
                  if ( v20 == v21 )
                    goto LABEL_21;
                }
              }
LABEL_21:
              if ( *(_QWORD *)a3 != a3 + 16 )
                free(*(void **)a3);
            }
          }
          else if ( v18 )
          {
            *(_QWORD *)a3 = a3 + 16;
            *(_QWORD *)(a3 + 8) = 0x100000000LL;
            if ( *(_DWORD *)(a4 + 8) )
              sub_CEFB80(a3, a4);
            *(_BYTE *)(a3 + 48) = 1;
          }
          goto LABEL_53;
        }
      }
    }
    v22 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
      v22 = *(_DWORD *)(a3 + 8);
    if ( !v22 )
    {
LABEL_52:
      (*(void (__fastcall **)(__int64 *))(*a1 + 48))(a1);
LABEL_53:
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v43);
      return;
    }
    v23 = 0;
    v40 = (unsigned int)(v22 - 1);
    while ( 1 )
    {
      v25 = v23 + 1;
      v26 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, void **))(*a1 + 32))(a1, (unsigned int)v23, &s1);
      v27 = v23 + 1;
      if ( v26 )
        break;
LABEL_32:
      if ( v40 == v23 )
        goto LABEL_52;
      ++v23;
    }
    v28 = *(unsigned int *)(a3 + 8);
    if ( v28 > v23 || v28 == v25 )
    {
      v24 = *(void ***)a3;
LABEL_31:
      sub_110A970(a1, (__int64)&v24[4 * v23]);
      (*(void (__fastcall **)(__int64 *, void *))(*a1 + 40))(a1, s1);
      goto LABEL_32;
    }
    v29 = 32 * v25;
    if ( v28 > v25 )
    {
      v24 = *(void ***)a3;
      v37 = (void **)(*(_QWORD *)a3 + 32 * v28);
      v38 = (void **)(*(_QWORD *)a3 + v29);
      if ( v37 == v38 )
        goto LABEL_43;
      while ( 1 )
      {
        v37 -= 4;
        v39 = *v37;
        if ( *v37 != v37 + 2 )
          break;
LABEL_64:
        if ( v38 == v37 )
          goto LABEL_42;
      }
      while ( 1 )
      {
        v41 = v27;
        operator delete(v39);
        v27 = v41;
        if ( v38 == v37 )
          break;
        v37 -= 4;
        v39 = *v37;
        if ( *v37 == v37 + 2 )
          goto LABEL_64;
      }
    }
    else
    {
      if ( *(unsigned int *)(a3 + 12) < v25 )
      {
        sub_A8C1F0(a3, v23 + 1);
        v28 = *(unsigned int *)(a3 + 8);
        v27 = v23 + 1;
      }
      v24 = *(void ***)a3;
      v30 = *(_QWORD *)a3 + 32 * v28;
      v31 = *(_QWORD *)a3 + v29;
      if ( v30 == v31 )
        goto LABEL_43;
      do
      {
        v32 = v30 + 16;
        *(_QWORD *)(v30 + 8) = 0;
        v30 += 32;
        *(_QWORD *)(v30 - 32) = v32;
        *(_BYTE *)(v30 - 16) = 0;
      }
      while ( v31 != v30 );
    }
LABEL_42:
    v24 = *(void ***)a3;
LABEL_43:
    *(_DWORD *)(a3 + 8) = v27;
    goto LABEL_31;
  }
LABEL_24:
  if ( v42 )
  {
    v33 = *(_BYTE *)(a4 + 48);
    if ( *(_BYTE *)(a3 + 48) )
    {
      if ( v33 )
      {
        sub_CEFB80(a3, a4);
      }
      else
      {
        v34 = *(unsigned int *)(a3 + 8);
        v35 = *(void ***)a3;
        *(_BYTE *)(a3 + 48) = 0;
        v36 = &v35[4 * v34];
        if ( v35 != v36 )
        {
          do
          {
            while ( 1 )
            {
              v36 -= 4;
              if ( *v36 == v36 + 2 )
                break;
              operator delete(*v36);
              if ( v35 == v36 )
                goto LABEL_49;
            }
          }
          while ( v35 != v36 );
LABEL_49:
          v36 = *(void ***)a3;
        }
        if ( v36 != (void **)(a3 + 16) )
          free(v36);
      }
    }
    else if ( v33 )
    {
      *(_QWORD *)a3 = a3 + 16;
      *(_QWORD *)(a3 + 8) = 0x100000000LL;
      if ( *(_DWORD *)(a4 + 8) )
        sub_CEFB80(a3, a4);
      *(_BYTE *)(a3 + 48) = 1;
    }
  }
}
