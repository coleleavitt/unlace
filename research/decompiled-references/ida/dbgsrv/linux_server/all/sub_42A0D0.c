/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A0D0
// Address: 0x000000000042A0D0

//----- (000000000042A0D0) ----------------------------------------------------
__int64 __fastcall sub_42A0D0(__int64 *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // r14d
  unsigned int *v6; // rax
  void *v7; // rdi
  unsigned __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r12
  char v12; // r15
  __int64 v13; // rbp
  unsigned __int64 v14; // r13
  void *v15; // rsi
  void *v16; // rax
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  int v20[4]; // [rsp+18h] [rbp-50h]
  void *v21; // [rsp+28h] [rbp-40h]

  v21 = (void *)__readfsqword(0x28u);
  v6 = sub_428F60((__int64)a1, 1, ".gnu_debuglink");
  if ( v6 )
  {
    ptr = nullptr;
    *(_OWORD *)v20 = 0;
    sub_429EA0(a1, (__int64)&ptr, (__int64)v6);
    LOBYTE(v3) = *(_QWORD *)v20 > 4u;
    if ( *(_QWORD *)v20 <= 4u )
      goto LABEL_3;
    v9 = *(_QWORD *)v20 - 4LL;
    if ( a3 )
    {
      v10 = *(_DWORD *)((char *)ptr + *(_QWORD *)v20 - 4);
      if ( *(_BYTE *)(a1[20] + 509) == 2 )
        v10 = _byteswap_ulong(v10);
      *a3 = v10;
    }
    if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 16) < v9 )
      {
        v18 = v9;
        *(_QWORD *)a2 = sub_481540(a2, *(void **)a2, v9, 1u);
        v9 = v18;
      }
      v11 = 0;
      while ( 1 )
      {
        v7 = ptr;
        v12 = *((_BYTE *)ptr + v11);
        if ( !v12 )
          break;
        v13 = *(_QWORD *)(a2 + 8);
        v14 = 2;
        if ( v13 )
          v14 = v13-- + 1;
        v15 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v14 )
        {
          v17 = v9;
          v16 = sub_481540(a2, v15, v14, 1u);
          *(_QWORD *)a2 = v16;
          v9 = v17;
          v15 = v16;
        }
        *(_QWORD *)(a2 + 8) = v14;
        ++v11;
        *((_BYTE *)v15 + v13) = v12;
        *(_BYTE *)(*(_QWORD *)a2 + v13 + 1) = 0;
        if ( v11 == v9 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      v7 = ptr;
    }
    if ( v7 )
    {
      *(_QWORD *)v20 = 0;
      j__free(v7);
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
// 42A170: variable 'v3' is possibly undefined
