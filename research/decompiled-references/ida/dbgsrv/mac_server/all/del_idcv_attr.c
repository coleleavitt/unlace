/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: del_idcv_attr
// Address: 0x000000010003B700

//----- (000000010003B700) ----------------------------------------------------
__int64 __fastcall del_idcv_attr(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  size_t v3; // rax
  size_t v4; // r14
  size_t v5; // r15
  void *v6; // rdi
  unsigned int v8; // r14d
  __int128 v9; // [rsp+0h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-30h]

  if ( !a1 || *(_BYTE *)a1 != 5 )
    return set_qerrno();
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    v2 = a1;
    v3 = strlen(a2);
    v4 = v3;
    v5 = v3 + 1;
    if ( v3 == -1 )
    {
      v6 = nullptr;
    }
    else
    {
      v6 = qvector_reserve((__int64)&v9, nullptr, v3 + 1, 1u);
      *(_QWORD *)&v9 = v6;
    }
    *((_QWORD *)&v9 + 1) = v5;
    memmove(v6, a2, v4);
    *(_BYTE *)(v9 + v4) = 0;
    a1 = v2;
  }
  v8 = 0;
  if ( !sub_100044A00(*(_QWORD **)(a1 + 8), (__int64)&v9) )
  {
    set_error_string(0, a2);
    v8 = set_qerrno();
  }
  if ( (_QWORD)v9 )
  {
    *((_QWORD *)&v9 + 1) = 0;
    qfree((void *)v9);
  }
  return v8;
}
