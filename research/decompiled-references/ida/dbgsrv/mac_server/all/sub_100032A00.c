/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032A00
// Address: 0x0000000100032A00

//----- (0000000100032A00) ----------------------------------------------------
__int64 __fastcall sub_100032A00(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // r14
  char v5; // al
  char *v6; // rdi
  char *idc_gvar; // rax
  int idcv_class_name; // eax
  size_t v10; // r15
  void *v11; // rax
  size_t __n[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v13; // [rsp+10h] [rbp-30h]

  if ( !a2 )
  {
    a2 = 0;
LABEL_12:
    LOBYTE(v3) = (unsigned int)get_idcv_attr((unsigned __int8 *)a1, a2, a3, 0) == 0;
    return (unsigned int)v3;
  }
  v5 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 7 )
  {
    v3 = a3;
    if ( *(_QWORD *)(a2 + 16) )
      v6 = *(char **)(a2 + 8);
    else
      v6 = (char *)_s1;
    idc_gvar = (char *)find_idc_gvar(v6);
    if ( !idc_gvar )
    {
      set_qerrno();
      LODWORD(v3) = 0;
      return (unsigned int)v3;
    }
    a2 = (__int64)idc_gvar;
    v5 = *idc_gvar;
    a3 = v3;
  }
  if ( v5 != 5 || a3 && *a3 )
    goto LABEL_12;
  *(_OWORD *)__n = 0;
  v13 = 0;
  idcv_class_name = get_idcv_class_name((void **)__n, a2);
  LOBYTE(v3) = idcv_class_name == 0;
  if ( !idcv_class_name )
  {
    free_idcv((unsigned __int8 *)a1);
    *(_BYTE *)a1 = 7;
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    v10 = __n[1];
    if ( __n[1] )
    {
      v11 = qalloc_or_throw(__n[1]);
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 24) = v10;
      memcpy(v11, (const void *)__n[0], v10);
      *(_QWORD *)(a1 + 16) = v10;
    }
  }
  if ( __n[0] )
  {
    __n[1] = 0;
    qfree((void *)__n[0]);
  }
  return (unsigned int)v3;
}
// 100032A91: variable 'v3' is possibly undefined
