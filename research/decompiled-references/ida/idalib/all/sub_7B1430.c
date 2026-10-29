__int64 __fastcall sub_7B1430(__int64 a1, unsigned int a2, __int64 (***a3)())
{
  unsigned __int16 *v3; // rax
  unsigned __int16 *v4; // rbx
  __int64 v5; // r13
  unsigned __int16 v6; // r15
  __int64 v7; // rcx
  unsigned __int8 v8; // r9
  unsigned __int16 *v9; // rdx
  __int64 v10; // r13
  __int64 (*v11)(); // rax
  unsigned int v12; // ebx
  int v13; // r14d
  void *v14; // rax
  unsigned __int32 v15; // r10d
  __int64 (*v17)(); // rax
  unsigned int v18; // ebx
  __int64 v19; // r15
  __int64 (*v20)(); // rax
  const char *v21; // rdx
  __int64 (*v22)(); // rax
  unsigned __int32 v23; // [rsp+18h] [rbp-298h]
  const void *v24; // [rsp+20h] [rbp-290h]
  size_t v25; // [rsp+28h] [rbp-288h]
  __int64 v27; // [rsp+48h] [rbp-268h]
  void *ptr; // [rsp+50h] [rbp-260h] BYREF
  __int128 v29; // [rsp+58h] [rbp-258h]
  _QWORD v30[72]; // [rsp+70h] [rbp-240h] BYREF

  v30[65] = __readfsqword(0x28u);
  v27 = *(_QWORD *)(a1 + 8);
  if ( !v27 )
    v27 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 56) = _byteswap_ulong(a2);
  *(_WORD *)(a1 + 53) = 5;
  v30[0] = *(_QWORD *)(a1 + 52);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          sub_7443D0(v27, (unsigned __int16 *)((char *)v30 + 1));
          sub_741460(v27);
          v4 = v3;
          if ( !v3
            || (v5 = (__int64)v3 - 1, v3 == (unsigned __int16 *)((char *)&dword_0 + 1))
            || (v6 = *v3, *((_BYTE *)v3 + 2) != 46) )
          {
            v12 = 0;
LABEL_20:
            sub_7B0910(v27);
            return v12;
          }
          __memcpy_chk(v30, (char *)v3 - 1, (unsigned int)v6 + 3, 519);
        }
        while ( v6 <= 5u );
        v7 = v6;
        v8 = *((_BYTE *)v4 + 7);
        v9 = (unsigned __int16 *)(v5 + v6 + 3);
        v10 = _byteswap_ulong(*(_DWORD *)((char *)v4 + 3));
        v25 = *v9;
        v24 = v9 + 1;
        if ( v8 == 72 )
          break;
        switch ( v6 )
        {
          case 7u:
LABEL_29:
            v15 = *((unsigned __int8 *)v4 + 8);
LABEL_30:
            v23 = v15;
            v18 = v8;
            v19 = v15;
            if ( !*(_QWORD *)(a1 + 8)
              || sub_7B4810(a1, v10, v15, 0, 0, v8, 0) <= 0
              && (v23 == v19 || sub_7B4810(a1, v10, v23, 0, 0, v18, 0) <= 0) )
            {
              goto LABEL_33;
            }
            break;
          case 0xAu:
            v15 = _byteswap_ulong(*((_DWORD *)v4 + 2));
            if ( v8 != 83 || v10 != *(_QWORD *)(v27 + 5896) || (*(_BYTE *)(v27 + 6016) & 1) != 0 )
              goto LABEL_30;
            sub_7AE780((_QWORD *)v27, v15 >> 8, v24, v25);
            break;
          case 6u:
            if ( v8 == 78 )
            {
              v19 = 0xFFFFFFFFLL;
              v18 = 78;
              if ( !*(_QWORD *)(a1 + 8) )
              {
LABEL_33:
                v20 = (*a3)[1];
                if ( v20 != sub_7AE0C0 )
                {
                  v12 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, _QWORD, __int64, const void *, size_t))v20)(
                          a3,
                          v10,
                          v18,
                          v19,
                          v24,
                          v25);
                  if ( v12 )
                    goto LABEL_20;
                }
              }
            }
            else if ( v8 == 86 )
            {
              if ( !*(_QWORD *)(a1 + 8) || sub_7B3DF0(a1, v10, 0, 0, 0) <= 0 )
              {
                v17 = **a3;
                if ( v17 != sub_7AE0B0 )
                {
                  v12 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, const void *, size_t))v17)(a3, v10, v24, v25);
                  if ( v12 )
                    return v12;
                }
              }
            }
            else
            {
LABEL_12:
              v11 = (*a3)[3];
              if ( v11 != sub_3ED950 )
              {
                v12 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, unsigned __int16 *, __int64, const void *, size_t))v11)(
                        a3,
                        v10,
                        v4 + 1,
                        v7,
                        v24,
                        v25);
                if ( v12 )
                  return v12;
              }
            }
            break;
          default:
            goto LABEL_12;
        }
      }
      v13 = v6 - 6;
      v14 = memchr(v4 + 4, 0, v13);
      v7 = v6;
      v8 = 72;
      if ( v14 )
      {
        if ( v6 != 7 )
        {
          if ( v6 != 10 )
            goto LABEL_12;
          v15 = _byteswap_ulong(*((_DWORD *)v4 + 2));
          goto LABEL_30;
        }
        goto LABEL_29;
      }
      ptr = nullptr;
      v29 = 0;
      if ( v6 == 6 )
        break;
      ptr = (void *)qvector_reserve(&ptr, 0, v13 + 1LL, 1);
      *(_QWORD *)&v29 = v13 + 1LL;
      memmove(ptr, v4 + 4, v13);
      *((_BYTE *)ptr + v13) = 0;
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (_QWORD)v29 )
          v21 = (const char *)ptr;
        else
LABEL_46:
          v21 = haystack;
        if ( sub_7AD500(a1, v10, v21, 0, 0, 72, 0) > 0 )
          goto LABEL_49;
      }
      v22 = (*a3)[2];
      if ( v22 != sub_7AE0D0 )
        goto LABEL_52;
LABEL_49:
      if ( ptr )
      {
        *(_QWORD *)&v29 = 0;
        qfree(ptr);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_46;
    v22 = (*a3)[2];
  }
  while ( v22 == sub_7AE0D0 );
LABEL_52:
  v12 = ((__int64 (__fastcall *)(__int64 (***)(), __int64, __int64, void **, const void *, size_t))v22)(
          a3,
          v10,
          72,
          &ptr,
          v24,
          v25);
  if ( !v12 )
    goto LABEL_49;
  if ( ptr )
  {
    *(_QWORD *)&v29 = 0;
    qfree(ptr);
  }
  return v12;
}
