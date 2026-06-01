/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BBE0
// Address: 0x000000000006BBE0

//----- (000000000006BBE0) ----------------------------------------------------
__int64 __fastcall sub_6BBE0(__int64 a1, __int64 a2, char *a3, double a4, __m128 a5)
{
  char v7; // al
  char *v8; // rdi
  char *idc_gvar; // rax
  size_t v11; // r15
  void *v12; // rax
  _QWORD *v13; // r14
  size_t n[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( !a2 )
  {
    a2 = 0;
LABEL_12:
    LOBYTE(a3) = (unsigned int)get_idcv_attr((char *)a1, a2, a3, 0, a4, a5) == 0;
    return (unsigned int)a3;
  }
  v7 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 7 )
  {
    if ( *(_QWORD *)(a2 + 16) )
      v8 = *(char **)(a2 + 8);
    else
      v8 = (char *)s1;
    idc_gvar = (char *)find_idc_gvar(v8);
    if ( !idc_gvar )
    {
      set_qerrno(0x5FCu);
      LODWORD(a3) = 0;
      return (unsigned int)a3;
    }
    a2 = (__int64)idc_gvar;
    v7 = *idc_gvar;
  }
  if ( v7 != 5 || a3 && *a3 )
    goto LABEL_12;
  *(_OWORD *)n = 0;
  v15 = 0;
  if ( (unsigned int)get_idcv_class_name((__int64)n, a2) )
  {
    LODWORD(a3) = 0;
  }
  else
  {
    free_idcv((char *)a1, 0.0, a5);
    *(_BYTE *)a1 = 7;
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 24) = 0;
    v11 = n[1];
    LOBYTE(a3) = 1;
    if ( n[1] )
    {
      v12 = qalloc_or_throw(n[1]);
      v13 = (_QWORD *)(a1 + 8);
      *v13 = v12;
      v13[2] = v11;
      memcpy(v12, (const void *)n[0], v11);
      v13[1] = v11;
    }
  }
  if ( n[0] )
  {
    n[1] = 0;
    qfree((void *)n[0]);
    n[0] = 0;
    v15 = 0;
  }
  return (unsigned int)a3;
}
