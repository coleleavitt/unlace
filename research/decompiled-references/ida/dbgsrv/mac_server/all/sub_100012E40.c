/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100012E40
// Address: 0x0000000100012E40

//----- (0000000100012E40) ----------------------------------------------------
__int64 __fastcall sub_100012E40(__int64 a1, __int64 *a2, char a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  char *v8; // rax
  __int64 v9; // r14
  _BYTE *v10; // rax
  unsigned int *v11; // r12
  __int64 i; // rcx
  unsigned __int32 v13; // edx
  unsigned int v14; // edx
  __int128 v16; // [rsp+0h] [rbp-40h] BYREF

  v5 = *a2;
  v6 = a2[1];
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 >= v6 )
  {
    if ( v7 != v6 )
    {
      v16 = 0;
      sub_10001C310(a1, v6, &v16);
      v6 = *(_QWORD *)(a1 + 8);
    }
  }
  else
  {
    v8 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v6 )
    {
      v8 = (char *)qvector_reserve(a1, *(void **)a1, v6, 0x10u);
      *(_QWORD *)a1 = v8;
      v7 = *(_QWORD *)(a1 + 8);
    }
    __bzero(&v8[16 * v7], 16 * (v6 - v7));
    *(_QWORD *)(a1 + 8) = v6;
  }
  v9 = 16 * v6;
  if ( v9 )
  {
    v10 = *(_BYTE **)a1;
    v11 = (unsigned int *)(v5 + 8);
    for ( i = 0; i != v9; i += 16 )
    {
      v10[i + 4] = *((_BYTE *)v11 - 4);
      v10[i + 5] = *((_BYTE *)v11 - 3);
      v14 = *(v11 - 2);
      if ( a3 )
      {
        *(_DWORD *)&v10[i] = _byteswap_ulong(v14);
        *(_WORD *)&v10[i + 6] = __ROL2__(*((_WORD *)v11 - 1), 8);
        v13 = _byteswap_ulong(*v11);
      }
      else
      {
        *(_DWORD *)&v10[i] = v14;
        *(_WORD *)&v10[i + 6] = *((_WORD *)v11 - 1);
        v13 = *v11;
      }
      *(_QWORD *)&v10[i + 8] = v13;
      v11 += 3;
    }
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
