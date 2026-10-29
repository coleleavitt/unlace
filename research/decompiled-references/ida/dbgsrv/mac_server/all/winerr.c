/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: winerr
// Address: 0x000000010007D370

//----- (000000010007D370) ----------------------------------------------------
__int64 __fastcall winerr(int __errnum)
{
  __int64 v1; // rbx
  char *v2; // rax
  char *v3; // r14
  size_t v4; // rax
  size_t v5; // r15
  unsigned __int64 v6; // r12
  void *v7; // rax

  v1 = sub_100074560();
  v2 = strerror(__errnum);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    if ( v4 )
    {
      v5 = v4;
      v6 = v4 + 1;
      v7 = *(void **)v1;
      if ( *(_QWORD *)(v1 + 16) < v6 )
      {
        v7 = qvector_reserve(v1, *(void **)v1, v6, 1u);
        *(_QWORD *)v1 = v7;
      }
      *(_QWORD *)(v1 + 8) = v6;
      memmove(v7, v3, v5);
      *(_BYTE *)(*(_QWORD *)v1 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(v1 + 8) = 0;
    }
  }
  else
  {
    sub_100002D00(v1, "Unknown error, code: 0x%08X", __errnum);
  }
  return *(_QWORD *)v1;
}
