__int64 __fastcall sub_77400(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v11; // r12d
  __int64 v13; // r14
  const char *v14; // rax
  const char *v15; // r13
  size_t v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rsi
  const void *v21; // r13
  size_t v22; // rax
  size_t v23; // r8
  __int64 v24; // rax
  void *v25; // rdi
  size_t v26; // r15
  __int64 v27; // rax
  size_t v29; // [rsp+0h] [rbp-58h]
  size_t v30; // [rsp+0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  _QWORD v33[9]; // [rsp+10h] [rbp-48h] BYREF

  v33[1] = __readfsqword(0x28u);
  v11 = sub_77280(a1, a6);
  if ( (_BYTE)v11 )
  {
    v33[0] = 0;
    v13 = sub_77320(a1, a3, a4, a5);
    v14 = (const char *)(*(__int64 (__fastcall **)(char **, __int64, _QWORD, _QWORD *))(a1 + 56))(
                          &off_163860,
                          v13,
                          0,
                          v33);
    v15 = v14;
    LOBYTE(v11) = v14 != nullptr;
    if ( !v14 )
    {
      if ( a6 && v33[0] )
      {
        v21 = *(const void **)(v33[0] + 8LL);
        if ( v21 && (v22 = strlen(*(const char **)(v33[0] + 8LL)), (v23 = v22) != 0) )
        {
          v25 = (void *)*a6;
          v26 = v22 + 1;
          if ( a6[2] < v22 + 1 )
          {
            v30 = v22;
            v27 = sub_96080(a6, *a6, v22 + 1, 1);
            v23 = v30;
            *a6 = v27;
            v25 = (void *)v27;
          }
          a6[1] = v26;
          v29 = v23;
          memmove(v25, v21, v23);
          *(_BYTE *)(*a6 + v29) = 0;
        }
        else
        {
          a6[1] = 0;
        }
      }
      goto LABEL_11;
    }
    v16 = strlen(v14);
    if ( !v16 )
    {
LABEL_10:
      (*(void (__fastcall **)(const char *))(a1 + 64))(v15);
LABEL_11:
      (*(void (__fastcall **)(__int64))(a1 + 152))(v13);
      return v11;
    }
    v17 = a2[1];
    v18 = v17 + v16;
    if ( __CFADD__(v17, v16) )
    {
      if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v17 != 0x7FFFFFFFFFFFFFFFLL )
          a2[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v19 = a2[1];
    v20 = *a2;
    if ( a2[2] < v18 )
    {
      v32 = v18;
      v24 = sub_96080(a2, v20, v18, 1);
      v18 = v32;
      v20 = v24;
      *a2 = v24;
      v19 = a2[1];
    }
    v31 = v18;
    memset((void *)(v20 + v19), 0, v18 - v19);
    a2[1] = v31;
LABEL_9:
    memcpy((void *)(v17 + *a2), v15, v16);
    goto LABEL_10;
  }
  return v11;
}

