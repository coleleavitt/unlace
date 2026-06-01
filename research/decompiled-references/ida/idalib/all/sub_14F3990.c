__int64 *__fastcall sub_14F3990(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r13
  int v4; // r8d
  int v5; // r12d
  __int64 v6; // rax
  char v7; // dl
  __int64 *v8; // rbp
  __int64 v9; // rcx
  __int64 *result; // rax
  __int64 v11; // [rsp+8h] [rbp-30h]

  v1 = *a1;
  v2 = **a1;
  v3 = v2 + 16LL * *((unsigned int *)*a1 + 2);
  if ( v3 != v2 )
  {
    v4 = 0;
    do
    {
      v5 = v4 + 1;
      v6 = sub_189C680(
             *(_QWORD *)(a1[1][12] + 736),
             *(_QWORD *)(a1[1][12] + 608),
             0,
             0,
             v4,
             *(_QWORD *)(v2 + 8),
             *(_DWORD *)v2,
             0,
             0);
      if ( !v7 && v6 )
      {
        v8 = a1[2];
        v9 = *((unsigned int *)v8 + 2);
        if ( v9 + 1 > (unsigned __int64)*((unsigned int *)v8 + 3) )
        {
          v11 = v6;
          sub_2237220(a1[2], v8 + 2, v9 + 1, 8);
          v9 = *((unsigned int *)v8 + 2);
          v6 = v11;
        }
        *(_QWORD *)(*v8 + 8 * v9) = v6;
        ++*((_DWORD *)v8 + 2);
      }
      v2 += 16;
      v4 = v5;
    }
    while ( v3 != v2 );
    v1 = *a1;
  }
  *((_DWORD *)v1 + 2) = 0;
  result = a1[3];
  *(_BYTE *)result = 0;
  return result;
}
