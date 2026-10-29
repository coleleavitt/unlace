/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100016940
// Address: 0x0000000100016940

//----- (0000000100016940) ----------------------------------------------------
__int64 __fastcall sub_100016940(void **a1, __int64 a2, off_t a3, unsigned __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v10; // rbx
  off_t v11; // r15
  int v13; // eax
  unsigned __int64 v14; // rdi
  char *v15; // rax
  char *v16; // r12
  int v17; // esi
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  bool v23; // cc
  unsigned __int64 v24; // rbx
  size_t v25; // rax
  char v27; // [rsp+0h] [rbp-50h]
  __int128 v29; // [rsp+10h] [rbp-40h] BYREF

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
  else
  {
    if ( v10 >> 60 == 0 && v7 >= 16 * v10 )
      goto LABEL_11;
    v7 >>= 4;
  }
  v13 = sub_10001D6D0(
          1,
          (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
          a6,
          v10,
          v7,
          ". Do you want to continue with the new value?");
  v10 = v7;
  if ( v13 != 1 )
    sub_10001D7A0(0);
LABEL_11:
  v14 = (unsigned __int64)a1[1];
  if ( v14 >= v10 )
  {
    if ( v14 != v10 )
    {
      v29 = 0;
      sub_10001EBB0((__int64)a1, v10, &v29);
    }
  }
  else
  {
    v15 = (char *)*a1;
    if ( (unsigned __int64)a1[2] < v10 )
    {
      v15 = (char *)qvector_reserve((__int64)a1, *a1, v10, 0x10u);
      *a1 = v15;
      v14 = (unsigned __int64)a1[1];
    }
    __bzero(&v15[16 * v14], 16 * (v10 - v14));
    a1[1] = (void *)v10;
  }
  if ( a7 )
  {
    v16 = (char *)*a1;
    v17 = a6;
    sub_10001DA30((int)"Loading %s", a6);
    v21 = 0;
    while ( 1 )
    {
      LOBYTE(v7) = 1;
      v22 = v10;
      v23 = v10 <= v21;
      v24 = v10 - v21;
      if ( v23 || (callui(27, v17, v18, (unsigned int)&callui, v19, v20, v27) & 1) != 0 )
        break;
      if ( v24 >= 0x800 )
        v24 = 2048;
      v7 = (unsigned int)(16 * v24);
      v17 = (int)v16;
      v25 = qlread(a2, v16, v7);
      v16 += 16 * v24;
      v21 += v24;
      v10 = v22;
      if ( v25 != v7 )
      {
        LODWORD(v7) = 0;
        break;
      }
    }
    callui(24, 10, 0, (unsigned int)&callui, v19, v20, v27);
  }
  else
  {
    LOBYTE(v7) = qlread(a2, *a1, 16 * v10) == 16 * v10;
  }
  return (unsigned int)v7;
}
// 100016AA9: variable 'v18' is possibly undefined
// 100016AA9: variable 'v19' is possibly undefined
// 100016AA9: variable 'v20' is possibly undefined
// 100016AA9: variable 'v27' is possibly undefined
// 100016B31: variable 'v7' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000ACFA8: using guessed type __int64 (__fastcall *callui)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, char);
