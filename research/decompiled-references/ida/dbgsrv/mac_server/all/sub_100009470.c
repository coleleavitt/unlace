/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009470
// Address: 0x0000000100009470

//----- (0000000100009470) ----------------------------------------------------
__int64 __fastcall sub_100009470(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  size_t v5; // r15
  void *v6; // r12
  void *v7; // rdi
  _QWORD v9[2]; // [rsp+8h] [rbp-68h] BYREF
  __int128 v10; // [rsp+18h] [rbp-58h]
  void *__src[2]; // [rsp+28h] [rbp-48h]
  size_t __n[2]; // [rsp+38h] [rbp-38h]

  *(_OWORD *)__n = 0;
  *(_OWORD *)__src = 0;
  v10 = 0;
  v9[0] = -1;
  v9[1] = 0;
  LOBYTE(v3) = sub_100009250(a1, (__int64)v9, a3);
  v4 = v3;
  if ( (_BYTE)v3 )
  {
    v5 = __n[0];
    if ( __n[0] )
    {
      v6 = qalloc_or_throw(__n[0]);
      memcpy(v6, __src[1], v5);
    }
    else
    {
      v6 = nullptr;
    }
    v7 = *(void **)a2;
    if ( *(_QWORD *)a2 )
    {
      *(_QWORD *)(a2 + 8) = 0;
      qfree(v7);
    }
    *(_QWORD *)a2 = v6;
    *(_QWORD *)(a2 + 8) = v5;
    *(_QWORD *)(a2 + 16) = v5;
  }
  if ( __src[1] )
  {
    __n[0] = 0;
    qfree(__src[1]);
    __src[1] = nullptr;
    __n[1] = 0;
  }
  if ( (_QWORD)v10 )
  {
    *((_QWORD *)&v10 + 1) = 0;
    qfree((void *)v10);
  }
  return v4;
}
// 1000094B8: variable 'v3' is possibly undefined
