/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AA20
// Address: 0x000000000005AA20

//----- (000000000005AA20) ----------------------------------------------------
char *__fastcall sub_5AA20(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  char *v3; // rax
  char *v4; // r14
  void *v6[2]; // [rsp+0h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-68h]
  __int128 v8; // [rsp+20h] [rbp-58h]
  __int128 v9; // [rsp+30h] [rbp-48h]
  _BYTE v10[31]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+60h] [rbp-18h]

  v11 = __readfsqword(0x28u);
  if ( (unsigned int)(a2 - 1) >= 3 )
  {
    if ( !(_BYTE)under_debugger )
      interr(20098);
LABEL_19:
    BUG();
  }
  v2 = *(_QWORD *)(a1 + 16LL * (a2 == 1) + 8);
  if ( a2 == 1 )
    ++*(_QWORD *)(a1 + 24);
  if ( v2 == *(_QWORD *)(a1 + 8) )
  {
    if ( *(_QWORD *)(a1 + 16) >= v2 + 1 )
    {
      v3 = *(char **)a1;
    }
    else
    {
      v3 = (char *)qvector_reserve(a1, *(char **)a1, v2 + 1, 0x60u);
      *(_QWORD *)a1 = v3;
      v2 = *(_QWORD *)(a1 + 8);
    }
    v4 = &v3[96 * v2];
    *(_OWORD *)(v4 + 79) = 0;
    *((_OWORD *)v4 + 4) = 0;
    *((_OWORD *)v4 + 3) = 0;
    *((_OWORD *)v4 + 2) = 0;
    *((_OWORD *)v4 + 1) = 0;
    *(_OWORD *)v4 = 0;
    ++*(_QWORD *)(a1 + 8);
    return v4;
  }
  if ( v2 > *(_QWORD *)(a1 + 8) )
  {
    if ( !(_BYTE)under_debugger )
      interr(20133);
    goto LABEL_19;
  }
  v4 = (char *)(*(_QWORD *)a1 + 96 * v2);
  memset(v10, 0, sizeof(v10));
  v9 = 0;
  v8 = 0;
  *(_OWORD *)ptr = 0;
  *(_OWORD *)v6 = 0;
  sub_5AC30(a1, (__int64)v4, (__int64)v6);
  if ( ptr[1] )
  {
    *(_QWORD *)&v8 = 0;
    qfree(ptr[1]);
    ptr[1] = nullptr;
    *((_QWORD *)&v8 + 1) = 0;
  }
  if ( v6[0] )
  {
    v6[1] = nullptr;
    qfree(v6[0]);
    v6[0] = nullptr;
    ptr[0] = nullptr;
  }
  return v4;
}
// 158B40: using guessed type __int64 under_debugger;
