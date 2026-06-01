/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003BC00
// Address: 0x000000010003BC00

//----- (000000010003BC00) ----------------------------------------------------
__int64 __fastcall sub_10003BC00(unsigned __int8 *a1)
{
  int qerrno; // ebx
  __int64 idc_class; // rax
  __int64 v4; // r15
  int v5; // eax
  void *v6; // rdi
  void *v7; // rax
  void *v8; // r12
  int v9; // esi
  const char *v10; // r15
  size_t v11; // rax
  size_t v12; // r13
  void *v13; // rbx
  void *v14; // rdi
  char v16[8]; // [rsp+10h] [rbp-50h] BYREF
  void *__p[3]; // [rsp+18h] [rbp-48h] BYREF

  qerrno = get_qerrno();
  idc_class = find_idc_class("exception");
  if ( a1 )
  {
    v4 = idc_class;
    v5 = *a1;
    if ( v5 == 5 )
    {
      sub_1000380B0(*((unsigned __int8 ***)a1 + 1), a1);
    }
    else if ( v5 == 7 )
    {
      v6 = *((void **)a1 + 1);
      if ( v6 )
      {
        *((_QWORD *)a1 + 2) = 0;
        qfree(v6);
        *((_QWORD *)a1 + 1) = 0;
        *((_QWORD *)a1 + 3) = 0;
      }
    }
    *((_QWORD *)a1 + 1) = 0;
    *a1 = 5;
    v7 = operator new(0x20u);
    v8 = v7;
    if ( v4 )
      v9 = *(_DWORD *)(v4 + 28);
    else
      v9 = 0;
    sub_100032160((__int64)v7, v9);
    *((_QWORD *)a1 + 1) = v8;
  }
  else
  {
    set_qerrno();
  }
  v16[0] = 2;
  *(_OWORD *)&__p[1] = 0;
  __p[0] = (void *)qerrno;
  set_idcv_attr((__int64)a1, "qerrno", (unsigned __int8 *)v16, 0);
  v10 = (const char *)j__qstrerror(0xFFFFFFFFLL);
  if ( v16[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v16);
  }
  else if ( v16[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
    __p[2] = nullptr;
  }
  v16[0] = 2;
  __p[0] = nullptr;
  if ( v10 )
  {
    v11 = strlen(v10);
    v16[0] = 7;
    memset(__p, 0, sizeof(__p));
    if ( v11 )
    {
      v12 = v11;
      v13 = (void *)(v11 + 1);
      if ( v11 == -1 )
      {
        v14 = nullptr;
      }
      else
      {
        v14 = qvector_reserve((__int64)__p, nullptr, v11 + 1, 1u);
        __p[0] = v14;
      }
      __p[1] = v13;
      memmove(v14, v10, v12);
      *((_BYTE *)__p[0] + v12) = 0;
    }
  }
  else
  {
    v16[0] = 7;
    memset(__p, 0, sizeof(__p));
  }
  set_idcv_attr((__int64)a1, "description", (unsigned __int8 *)v16, 0);
  set_qerrno();
  if ( v16[0] == 5 )
  {
    sub_1000380B0((unsigned __int8 **)__p[0], (unsigned __int8 *)v16);
  }
  else if ( v16[0] == 7 && __p[0] )
  {
    __p[1] = nullptr;
    qfree(__p[0]);
  }
  return __stack_chk_guard;
}
// 100082E2E: using guessed type __int64 __fastcall j__qstrerror(_QWORD);
