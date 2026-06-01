unsigned __int64 __fastcall sub_C4B00(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r12
  unsigned __int64 result; // rax
  __int64 v6; // r9
  unsigned int *v7; // rbx
  unsigned int *i; // r12
  __int64 v9; // rcx
  unsigned int *v10; // r8
  __int64 v11; // [rsp-28h] [rbp-28h]
  __int64 v12; // [rsp-20h] [rbp-20h]
  __int64 v13; // [rsp-18h] [rbp-18h]
  __int64 v14; // [rsp-10h] [rbp-10h]

  if ( a2 == 2 )
  {
    v14 = v4;
    v13 = v3;
    v12 = v2;
    result = sub_C46F0(a1);
    v7 = *(unsigned int **)(a1 + 480);
    for ( i = &v7[8 * *(_QWORD *)(a1 + 488)]; i != v7; result = callui(203, 18, a1, v9, v10, v6, v11, v12, v13, v14) )
    {
      v9 = *v7;
      v10 = v7 + 2;
      v7 += 8;
    }
  }
  return result;
}

