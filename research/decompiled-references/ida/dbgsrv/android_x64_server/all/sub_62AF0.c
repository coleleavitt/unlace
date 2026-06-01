/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62AF0
// Address: 0x0000000000062AF0

//----- (0000000000062AF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_62AF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // edx
  char *v4; // rsi
  __int64 v5; // r12
  size_t v6; // r15
  __int64 v7; // rax
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  _BYTE *v10; // rax
  int *v11; // r15
  size_t v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r13
  char *v16; // rax
  size_t n[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+10h] [rbp-48h]
  unsigned __int64 v20; // [rsp+20h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 40) )
  {
    *(_OWORD *)n = 0;
    v19 = 0;
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 )
    {
      v3 = v2 - 1;
      v4 = *(char **)a2;
    }
    else
    {
      v3 = 0;
      v4 = (char *)s1;
    }
    if ( !utf8_utf16((__int64)n, v4, v3) )
    {
      if ( !(_BYTE)under_debugger )
        interr(274);
      BUG();
    }
    v11 = &dword_10221C;
    if ( n[1] )
      v11 = (int *)n[0];
    v12 = 2 * n[1] - 2;
    if ( !n[1] )
      v12 = 0;
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v13 - 1;
    if ( !v13 )
      v14 = 0;
    v15 = v14 + v12 + 1;
    if ( *(_QWORD *)(a1 + 16) >= v15 )
    {
      v16 = *(char **)a1;
    }
    else
    {
      v16 = (char *)qvector_reserve(a1, *(char **)a1, v14 + v12 + 1, 1u);
      *(_QWORD *)a1 = v16;
    }
    *(_QWORD *)(a1 + 8) = v15;
    v16[v14 + v12] = 0;
    memmove((void *)(*(_QWORD *)a1 + v14), v11, v12);
    if ( n[0] )
    {
      n[1] = 0;
      qfree((void *)n[0]);
      n[0] = 0;
      v19 = 0;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 8);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v5 != 1 )
      {
        v7 = *(_QWORD *)(a1 + 8);
        v8 = v7 - 1;
        if ( !v7 )
          v8 = 0;
        v9 = v8 + v5;
        if ( *(_QWORD *)(a1 + 16) >= v9 )
        {
          v10 = *(_BYTE **)a1;
        }
        else
        {
          v10 = qvector_reserve(a1, *(char **)a1, v9, 1u);
          *(_QWORD *)a1 = v10;
        }
        *(_QWORD *)(a1 + 8) = v9;
        v10[v6 + v8] = 0;
        memcpy((void *)(*(_QWORD *)a1 + v8), *(const void **)a2, v6);
      }
    }
  }
  return __readfsqword(0x28u);
}
// 10221C: using guessed type int dword_10221C;
// 158B40: using guessed type __int64 under_debugger;
