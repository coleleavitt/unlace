__int64 __fastcall sub_8F65E0(char *a1, char a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rax
  const char *v6; // rdi
  unsigned int v7; // ebp
  const char *v8; // rsi
  void (__fastcall *v9)(char *); // rax
  bool v10; // zf
  void *v11; // rdi
  void *v12; // rdi
  const char *v14; // rsi
  char *v15; // rsi
  unsigned int v16; // eax
  int v17; // edx
  int v18; // edx
  __m128i v19; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v3 = *((_QWORD *)a1 + 23);
  v20 = __readfsqword(0x28u);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)a1 + 23) = 0;
  qfclose(*((_QWORD *)a1 + 18));
  v4 = *((_QWORD *)a1 + 19);
  *((_QWORD *)a1 + 18) = 0;
  if ( v4 )
  {
    qfclose(v4);
    v5 = *((_QWORD *)a1 + 21);
    *((_QWORD *)a1 + 19) = 0;
    if ( !a2 )
    {
      v6 = haystack;
      if ( v5 )
        v6 = *((const char **)a1 + 20);
LABEL_7:
      qunlink(v6);
      v7 = 0;
      if ( (*((_DWORD *)a1 + 34) & 0x100) != 0 )
      {
LABEL_8:
        v8 = haystack;
        if ( *((_QWORD *)a1 + 4) )
          v8 = *((const char **)a1 + 3);
        (*(void (__fastcall **)(_QWORD, const char *))(**((_QWORD **)a1 + 1) + 40LL))(*((_QWORD *)a1 + 1), v8);
LABEL_11:
        if ( v7 )
          goto LABEL_12;
        goto LABEL_34;
      }
      goto LABEL_34;
    }
    v14 = haystack;
    if ( *((_QWORD *)a1 + 4) )
    {
      v14 = *((const char **)a1 + 3);
      if ( !v5 )
      {
LABEL_25:
        if ( (unsigned int)qrename(haystack, v14) )
        {
LABEL_26:
          v15 = (char *)haystack;
          if ( *((_QWORD *)a1 + 4) )
            v15 = *((char **)a1 + 3);
          v16 = sub_8FD540(-1, v15);
          v17 = *((_DWORD *)a1 + 34);
          v7 = v16;
          if ( (v17 & 0x100) != 0 )
            goto LABEL_8;
          if ( (v17 & 4) == 0 )
            goto LABEL_11;
LABEL_30:
          v19 = 0;
          MD5Final(&v19, a1 + 48);
          sub_8F6560(*((__int64 **)a1 + 1), (const char **)a1 + 3, &v19);
          goto LABEL_11;
        }
        goto LABEL_31;
      }
    }
    else if ( !v5 )
    {
      goto LABEL_25;
    }
    if ( (unsigned int)qrename(*((_QWORD *)a1 + 20), v14) )
      goto LABEL_26;
LABEL_31:
    v18 = *((_DWORD *)a1 + 34);
    goto LABEL_32;
  }
  v18 = *((_DWORD *)a1 + 34);
  if ( !a2 )
  {
    if ( (v18 & 2) == 0 )
    {
      if ( (v18 & 0x100) != 0 )
      {
        v7 = 0;
        goto LABEL_8;
      }
      goto LABEL_34;
    }
    v6 = haystack;
    if ( *((_QWORD *)a1 + 4) )
      v6 = *((const char **)a1 + 3);
    goto LABEL_7;
  }
LABEL_32:
  v7 = 0;
  if ( (v18 & 0x100) != 0 )
    goto LABEL_8;
  if ( (v18 & 4) != 0 )
  {
    v7 = 0;
    goto LABEL_30;
  }
LABEL_34:
  v7 = (unsigned __int8)a1[140];
LABEL_12:
  if ( a1 )
  {
    v9 = *(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL);
    if ( (char *)v9 == (char *)sub_8F01C0 )
    {
      v10 = *((_QWORD *)a1 + 18) == 0;
      *(_QWORD *)a1 = &off_2B3FE00;
      if ( !v10 || *((_QWORD *)a1 + 19) || *((_QWORD *)a1 + 23) )
      {
        if ( !under_debugger )
          interr(2606);
        BUG();
      }
      v11 = *((void **)a1 + 20);
      if ( v11 )
      {
        *((_QWORD *)a1 + 21) = 0;
        qfree(v11);
      }
      v12 = *((void **)a1 + 3);
      *((_QWORD *)a1 + 1) = 0;
      *(_QWORD *)a1 = &unk_2BFC820;
      *((_QWORD *)a1 + 2) = 0;
      if ( v12 )
      {
        *((_QWORD *)a1 + 4) = 0;
        qfree(v12);
      }
      operator delete(a1, 0xC0u);
    }
    else
    {
      v9(a1);
    }
  }
  return v7;
}
