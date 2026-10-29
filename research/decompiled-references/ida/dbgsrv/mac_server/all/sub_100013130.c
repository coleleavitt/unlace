/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100013130
// Address: 0x0000000100013130

//----- (0000000100013130) ----------------------------------------------------
__int64 __fastcall sub_100013130(void **a1, __int64 a2, off_t a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v10; // r14
  off_t v11; // r15
  int v12; // eax
  unsigned __int64 v13; // rcx
  char *v14; // rax
  char *v15; // r12
  int v16; // esi
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rbx
  size_t v22; // rax
  __int64 v24; // [rsp+0h] [rbp-40h]
  unsigned __int8 v25; // [rsp+Fh] [rbp-31h] BYREF

  v24 = a2;
  if ( !a4 )
  {
    LOBYTE(v7) = 1;
    return (unsigned int)v7;
  }
  v10 = a4;
  v11 = a3;
  if ( a3 != -1 )
  {
    qlseek(a2, a3, 0);
    if ( a5 != -1 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v11 = qlseek(a2, 0, 1);
  if ( a5 == -1 )
LABEL_4:
    a5 = qlsize(a2);
LABEL_5:
  v7 = a5 - v11;
  if ( ((v7 | v11) & 0x8000000000000000LL) != 0LL )
  {
    v7 = 0;
  }
  else if ( v7 >= v10 )
  {
    goto LABEL_11;
  }
  v12 = sub_10001D6D0(
          1,
          (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
          a6,
          v10,
          v7,
          ". Do you want to continue with the new value?",
          a2);
  v10 = v7;
  if ( v12 != 1 )
    sub_10001D7A0(0);
LABEL_11:
  v13 = (unsigned __int64)a1[1];
  if ( v13 >= v10 )
  {
    if ( v13 != v10 )
    {
      v25 = 0;
      sub_10001CE90((__int64)a1, v10, &v25);
    }
  }
  else
  {
    v14 = (char *)*a1;
    if ( (unsigned __int64)a1[2] < v10 )
    {
      v14 = (char *)qvector_reserve((__int64)a1, *a1, v10, 1u);
      *a1 = v14;
      v13 = (unsigned __int64)a1[1];
    }
    __bzero(&v14[v13], v10 - v13);
    a1[1] = (void *)v10;
  }
  v15 = (char *)*a1;
  if ( a7 )
  {
    v16 = a6;
    sub_10001DA30((int)"Loading %s", a6);
    v20 = 0;
    while ( 1 )
    {
      LOBYTE(v7) = 1;
      v21 = v10 - v20;
      if ( v10 <= v20 || (callui(27, v16, v17, (unsigned int)&callui, v18, v19, v24) & 1) != 0 )
        break;
      if ( v21 >= 0x8000 )
        v21 = 0x8000;
      v16 = (int)v15;
      v22 = qlread(v24, v15, v21);
      v15 += v21;
      v20 += v21;
      if ( v22 != v21 )
      {
        LODWORD(v7) = 0;
        break;
      }
    }
    callui(24, 10, 0, (unsigned int)&callui, v18, v19, v24);
  }
  else
  {
    LOBYTE(v7) = qlread(v24, v15, v10) == v10;
  }
  return (unsigned int)v7;
}
// 100013279: variable 'v17' is possibly undefined
// 100013279: variable 'v18' is possibly undefined
// 100013279: variable 'v19' is possibly undefined
// 100013279: variable 'v24' is possibly undefined
// 1000132EB: variable 'v7' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
