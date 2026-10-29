__int64 __fastcall sub_7B0E10(__int64 a1, __int64 a2, __int64 (***a3)())
{
  __int64 v3; // rbx
  unsigned __int16 *v4; // rax
  unsigned __int16 *v5; // r15
  __int64 v6; // r13
  unsigned __int16 v7; // r14
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  unsigned __int8 v10; // r9
  __int64 v11; // r13
  __int64 (*v12)(); // rax
  unsigned int v13; // r12d
  int v15; // r12d
  void *v16; // rax
  __int64 (*v17)(); // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r12
  unsigned int v20; // r15d
  __int64 (*v21)(); // rax
  const char *v22; // rdx
  __int64 (*v23)(); // rax
  __int64 v24; // rax
  unsigned __int8 v25; // [rsp+18h] [rbp-298h]
  const void *v26; // [rsp+20h] [rbp-290h]
  size_t v28; // [rsp+30h] [rbp-280h]
  void *ptr; // [rsp+50h] [rbp-260h] BYREF
  __int128 v30; // [rsp+58h] [rbp-258h]
  char v31; // [rsp+70h] [rbp-240h] BYREF
  unsigned __int16 v32[259]; // [rsp+71h] [rbp-23Fh] BYREF
  unsigned __int64 v33; // [rsp+278h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 8);
  v33 = __readfsqword(0x28u);
  if ( !v3 )
    v3 = *(_QWORD *)a1;
  *(_WORD *)(a1 + 53) = 9;
  *(_QWORD *)(a1 + 56) = swap64(a2);
  __memcpy_chk(&v31, a1 + 52, *(unsigned __int16 *)(a1 + 53) + 3LL, 519);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          do
          {
            sub_7443D0(v3, v32);
            sub_741460(v3);
            v5 = v4;
            if ( !v4
              || (v6 = (__int64)v4 - 1, v4 == (unsigned __int16 *)((char *)&dword_0 + 1))
              || (v7 = *v4, *((_BYTE *)v4 + 2) != 46) )
            {
              v13 = 0;
LABEL_20:
              sub_7B0910(v3);
              return v13;
            }
            __memcpy_chk(&v31, (char *)v4 - 1, (unsigned int)v7 + 3, 519);
          }
          while ( v7 <= 9u );
          v8 = swap64(*(_QWORD *)((char *)v5 + 3));
          v9 = (unsigned __int16 *)(v6 + v7 + 3);
          v10 = *((_BYTE *)v5 + 11);
          v11 = v8;
          v28 = *v9;
          v26 = v9 + 1;
          if ( v10 == 72 )
            break;
          switch ( v7 )
          {
            case 0xBu:
              goto LABEL_35;
            case 0x12u:
              v25 = *((_BYTE *)v5 + 11);
              v18 = swap64(*(_QWORD *)(v5 + 6));
              v10 = v25;
              v19 = v18;
              if ( v25 != 83 || v11 != *(_QWORD *)(v3 + 5896) || (*(_BYTE *)(v3 + 6016) & 1) != 0 )
                goto LABEL_29;
              sub_7AE780((_QWORD *)v3, v18 >> 8, v26, v28);
              break;
            case 0xAu:
              if ( v10 == 78 )
              {
                if ( !*(_QWORD *)(a1 + 8) )
                {
                  v20 = 78;
                  v19 = -1;
LABEL_32:
                  v21 = (*a3)[1];
                  if ( v21 != sub_7AE0C0 )
                  {
                    v13 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, _QWORD, __int64, const void *, size_t))v21)(
                            a3,
                            v11,
                            v20,
                            v19,
                            v26,
                            v28);
                    if ( v13 )
                      goto LABEL_20;
                  }
                }
              }
              else
              {
                if ( v10 != 86 )
                  goto LABEL_25;
                if ( !*(_QWORD *)(a1 + 8) || sub_7B3DF0(a1, v8, 0, 0, 0) <= 0 )
                {
                  v12 = **a3;
                  if ( v12 != sub_7AE0B0 )
                  {
                    v13 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, const void *, size_t))v12)(
                            a3,
                            v11,
                            v26,
                            v28);
                    if ( v13 )
                      return v13;
                  }
                }
              }
              break;
            default:
              goto LABEL_25;
          }
        }
        v15 = v7 - 10;
        v16 = memchr(v5 + 6, 0, v15);
        v10 = 72;
        if ( !v16 )
          break;
        if ( v7 == 11 )
        {
LABEL_35:
          v19 = *((unsigned __int8 *)v5 + 12);
          goto LABEL_29;
        }
        if ( v7 == 18 )
        {
          v24 = swap64(*(_QWORD *)(v5 + 6));
          v10 = 72;
          v19 = v24;
LABEL_29:
          v20 = v10;
          if ( !*(_QWORD *)(a1 + 8)
            || sub_7B4810(a1, v11, v19, 0, 0, v10, 0) <= 0
            && (v19 == (int)v19 || sub_7B4810(a1, v11, v19, 0, 0, v20, 0) <= 0) )
          {
            goto LABEL_32;
          }
        }
        else
        {
LABEL_25:
          v17 = (*a3)[3];
          if ( v17 != sub_3ED950 )
          {
            v13 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, unsigned __int16 *, _QWORD, const void *, size_t))v17)(
                    a3,
                    v11,
                    v5 + 1,
                    v7,
                    v26,
                    v28);
            if ( v13 )
              return v13;
          }
        }
      }
      ptr = nullptr;
      v30 = 0;
      if ( v7 == 10 )
        break;
      ptr = (void *)qvector_reserve(&ptr, 0, v15 + 1LL, 1);
      *(_QWORD *)&v30 = v15 + 1LL;
      memmove(ptr, v5 + 6, v15);
      *((_BYTE *)ptr + v15) = 0;
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (_QWORD)v30 )
          v22 = (const char *)ptr;
        else
LABEL_45:
          v22 = haystack;
        if ( sub_7AD500(a1, v11, v22, 0, 0, 72, 0) > 0 )
          goto LABEL_48;
      }
      v23 = (*a3)[2];
      if ( v23 != sub_7AE0D0 )
        goto LABEL_52;
LABEL_48:
      if ( ptr )
      {
        *(_QWORD *)&v30 = 0;
        qfree(ptr);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_45;
    v23 = (*a3)[2];
  }
  while ( v23 == sub_7AE0D0 );
LABEL_52:
  v13 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64, void **, const void *, size_t))v23)(
          a3,
          v11,
          72,
          &ptr,
          v26,
          v28);
  if ( !v13 )
    goto LABEL_48;
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  return v13;
}
