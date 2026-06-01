/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71ED8
// Address: 0x0000000000071ED8

//----- (0000000000071ED8) ----------------------------------------------------
void __fastcall sub_71ED8(
        __int64 *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        char a18,
        void *a19,
        __int64 a20,
        __int64 a21,
        __int64 a22,
        __int64 a23,
        int a24,
        __int64 a25,
        int a26,
        __int64 a27,
        int a28,
        __int64 a29,
        int a30,
        __int64 a31,
        int a32,
        __int64 a33)
{
  signed int qerrno; // w19
  __int64 idc_class; // x0
  __int64 v36; // x22
  void *v37; // x0
  __int64 v38; // x21
  int v39; // w1
  const char *v40; // x21
  size_t v41; // x2
  unsigned __int8 v42[8]; // [xsp+128h] [xbp-58h] BYREF
  pthread_mutex_t ptr; // [xsp+130h] [xbp-50h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  qerrno = get_qerrno();
  idc_class = find_idc_class("exception");
  if ( a1 )
  {
    v36 = idc_class;
    free_idcv(a1);
    *(_BYTE *)a1 = 5;
    v37 = operator new(0x20u);
    v38 = (__int64)v37;
    if ( v36 )
      v39 = *(_DWORD *)(v36 + 28);
    else
      v39 = 0;
    sub_680D4((__int64)v37, v39);
    a1[1] = v38;
  }
  else
  {
    set_qerrno(0x5FCu);
  }
  v42[0] = 2;
  *(&ptr.__align + 2) = 0;
  *(_OWORD *)&ptr.__lock = (unsigned __int64)qerrno;
  set_idcv_attr((__int64)a1, "qerrno", v42, 0);
  v40 = qstrerror(0xFFFFFFFF);
  if ( v42[0] == 5 )
  {
    sub_6F17C(ptr.__align, v42);
  }
  else if ( v42[0] == 7 && ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  v42[0] = 2;
  ptr.__align = 0;
  if ( v40 )
    v41 = strlen(v40);
  else
    v41 = 0;
  v42[0] = 7;
  sub_4968C(&ptr, v40, v41);
  set_idcv_attr((__int64)a1, "description", v42, 0);
  set_qerrno(qerrno);
  if ( v42[0] == 5 )
  {
    sub_6F17C(ptr.__align, v42);
  }
  else if ( v42[0] == 7 )
  {
    if ( ptr.__align )
    {
      *(&ptr.__align + 1) = 0;
      qfree((void *)ptr.__align);
      ptr.__align = 0;
      *(&ptr.__align + 2) = 0;
    }
  }
}
