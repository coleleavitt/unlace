/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93344
// Address: 0x0000000000093344

//----- (0000000000093344) ----------------------------------------------------
__int64 __fastcall sub_93344(__int64 a1, const char *a2, char *a3)
{
  _QWORD *v6; // x0
  void *v7; // x23
  unsigned int v8; // w21
  size_t v9; // x0
  pthread_mutex_t *v10; // x0
  _BYTE *v11; // x19
  __int64 v12; // t1
  unsigned int *v13; // x0
  void *v14; // x21
  unsigned int v15; // w23
  unsigned int v16; // w20
  void *align; // x0
  FILE *v18; // x0
  FILE *v19; // x22
  bool v20; // zf
  const char *v21; // x2
  const char *v22; // x0
  pthread_mutex_t ptr; // [xsp+8h] [xbp-68h] BYREF

  ptr.__list.__next = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = open_linput(a2, 0);
  if ( v6 )
  {
    v7 = v6;
    v8 = calc_file_crc32((__int64)v6);
    close_linput(v7);
  }
  else
  {
    v8 = -1;
  }
  sub_A640C(51, &ptr);
  if ( !a3 )
    a3 = "";
  v9 = strlen(a3);
  sub_545E8(&ptr, a3, v9 + 1);
  v10 = pack_dd((pthread_mutex_t *)(&ptr.__align + 3), (unsigned __int64)&ptr.__align + 29, v8);
  sub_545E8(&ptr, &ptr.__align + 3, (char *)v10 - (char *)(&ptr.__align + 3));
  v12 = *(_QWORD *)(a1 + 192);
  v11 = (_BYTE *)(a1 + 192);
  v13 = (unsigned int *)(*(__int64 (__fastcall **)(_BYTE *, __int64, pthread_mutex_t *))(v12 + 16))(v11, 51, &ptr);
  v14 = v13;
  if ( !v13 )
  {
    v16 = 0;
    align = (void *)ptr.__align;
    if ( !ptr.__align )
      return v16;
    goto LABEL_20;
  }
  ptr.__list.__prev = (struct __pthread_internal_list *)((char *)v13 + 5);
  v15 = unpack_dd((unsigned __int64 *)&ptr.__list, (unsigned __int64)v13 + *v13 + 5);
  if ( !v15 )
    goto LABEL_18;
  if ( v15 == 1 )
  {
    v16 = 1;
    goto LABEL_19;
  }
  v18 = fopenWB(a2);
  v19 = v18;
  if ( !v18 )
  {
    v22 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_93558(v11, "Could not update the kernel debugger stub.\n%s", v22);
LABEL_18:
    v16 = 0;
    goto LABEL_19;
  }
  v20 = qfwrite(v18, ptr.__list.__prev, v15) == v15;
  v16 = v20;
  if ( v20 )
    v21 = "success";
  else
    v21 = "failed";
  sub_8CA78(v11, "Updated kernel debugger stub: %s\n", v21);
  qfclose(v19);
LABEL_19:
  qfree(v14);
  align = (void *)ptr.__align;
  if ( ptr.__align )
  {
LABEL_20:
    *(&ptr.__align + 1) = 0;
    qfree(align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v16;
}
