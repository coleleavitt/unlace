/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89F8C
// Address: 0x0000000000089F8C

//----- (0000000000089F8C) ----------------------------------------------------
__int64 __fastcall sub_89F8C(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  size_t v8; // x20
  int v9; // w2
  __int64 v10; // x26
  int v11; // w1
  __int64 v12; // x23
  const char *v13; // x25
  unsigned __int64 v14; // x24
  __int64 v15; // x0
  int v17; // w0
  int v18; // w2
  struct __pthread_internal_list *bytearray_linput; // x0
  _QWORD *zip_linput; // x22
  int v21; // w21
  int v22; // w1
  int v23; // w21
  void *align; // x0
  pthread_mutex_t ptr; // [xsp+10h] [xbp-70h] BYREF
  int8x16x2_t v26; // 0:q0.32

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (*(_BYTE *)(a2 + 73) & 8) == 0 )
  {
    v8 = *(unsigned int *)(a2 + 8);
    v9 = qlread(a1, a3, v8);
    if ( (_DWORD)v8 == v9 )
    {
      if ( qword_166CB0 )
      {
        if ( *(_BYTE *)(qword_166CB0 + 184) )
          sub_39FA0((__int64)"Section loaded (%d bytes).\n", v8);
      }
      return 0;
    }
    if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
      sub_39FA0((__int64)"Couldn't read %d bytes of data (read %d).\n", v8, v9);
LABEL_19:
    *a4 = 10;
    return 1;
  }
  if ( *(_BYTE *)(a2 + 112) )
    goto LABEL_19;
  v10 = *(_QWORD *)(a2 + 104);
  if ( qlseek(a1, v10, 0) != v10 )
  {
    if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
      sub_39FA0((__int64)"File truncated.\n");
    goto LABEL_36;
  }
  v12 = *(_QWORD *)(a2 + 88);
  if ( *(_QWORD *)(a2 + 24) )
    v13 = *(const char **)(a2 + 16);
  else
    v13 = &byte_F154B;
  v14 = (unsigned int)*(_QWORD *)(a2 + 88);
  if ( v10 == -1 )
    v10 = qlseek(a1, 0, 1);
  v15 = qlsize(a1, v11, v26);
  if ( ((v15 - v10) | v10) < 0 )
  {
    LODWORD(v12) = 0;
  }
  else
  {
    if ( v15 - v10 >= v14 )
      goto LABEL_25;
    LODWORD(v12) = v15 - v10;
  }
  v17 = sub_5C340(
          1,
          (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
          v13,
          v14,
          (unsigned int)v12,
          ". Do you want to continue with the new value?");
  v14 = (unsigned int)v12;
  if ( v17 != 1 )
    sub_5BDE0(0);
LABEL_25:
  memset(&ptr, 0, 24);
  if ( v14 )
  {
    ptr.__align = (__int64)qvector_reserve(&ptr, nullptr, v14, 1u);
    memset((void *)(ptr.__align + *(&ptr.__align + 1)), 0, v14 - *(&ptr.__align + 1));
    *(&ptr.__align + 1) = v14;
  }
  v18 = qlread(a1, (void *)ptr.__align, v14);
  if ( (_DWORD)v12 != v18 )
  {
    sub_39FA0((__int64)"Couldn't read %d bytes of compressed data (read %d).\n", v12, v18);
    goto LABEL_33;
  }
  bytearray_linput = (struct __pthread_internal_list *)create_bytearray_linput(ptr.__align, *(&ptr.__align + 1));
  zip_linput = create_zip_linput(bytearray_linput, *(&ptr.__align + 1), 0);
  v21 = qlread((__int64)zip_linput, a3, *(unsigned int *)(a2 + 8));
  close_linput(zip_linput);
  v22 = *(_DWORD *)(a2 + 8);
  if ( v22 != v21 )
  {
    sub_39FA0((__int64)"Couldn't read %d bytes of uncompressed data (read %d).\n", v22, v21);
LABEL_33:
    v23 = 4;
    align = (void *)ptr.__align;
    if ( !ptr.__align )
      goto LABEL_35;
    goto LABEL_34;
  }
  v23 = 1;
  align = (void *)ptr.__align;
  if ( ptr.__align )
  {
LABEL_34:
    *(&ptr.__align + 1) = 0;
    qfree(align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
LABEL_35:
  if ( v23 == 4 )
  {
LABEL_36:
    *(_BYTE *)(a2 + 112) = 1;
    *a4 = 10;
    return 1;
  }
  return 0;
}
// 8A074: variable 'v11' is possibly undefined
// 8A074: variable 'v26' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 166CB0: using guessed type __int64 qword_166CB0;
