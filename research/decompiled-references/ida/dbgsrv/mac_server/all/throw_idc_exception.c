/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: throw_idc_exception
// Address: 0x0000000100024030

//----- (0000000100024030) ----------------------------------------------------
__int64 __fastcall throw_idc_exception(unsigned __int8 *a1, const char *a2)
{
  __int64 idc_class; // rax
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r13
  void *v7; // rdi
  unsigned int v8; // ebx
  unsigned __int8 v10[8]; // [rsp+0h] [rbp-50h] BYREF
  __int128 v11; // [rsp+8h] [rbp-48h] BYREF
  __int64 v12; // [rsp+18h] [rbp-38h]

  idc_class = find_idc_class("exception");
  idcv_object(a1, idc_class);
  v10[0] = 2;
  v11 = 0;
  v12 = 0;
  free_idcv(v10);
  if ( a2 )
  {
    v4 = strlen(a2);
    v10[0] = 7;
    v11 = 0;
    v12 = 0;
    if ( v4 )
    {
      v5 = v4;
      v6 = v4 + 1;
      if ( v4 == -1 )
      {
        v7 = nullptr;
      }
      else
      {
        v7 = qvector_reserve((__int64)&v11, nullptr, v4 + 1, 1u);
        *(_QWORD *)&v11 = v7;
      }
      *((_QWORD *)&v11 + 1) = v6;
      memmove(v7, a2, v5);
      *(_BYTE *)(v11 + v5) = 0;
    }
  }
  else
  {
    v10[0] = 7;
    v11 = 0;
    v12 = 0;
  }
  set_idcv_attr((__int64)a1, "description", v10, 0);
  v8 = set_qerrno();
  free_idcv(v10);
  return v8;
}
