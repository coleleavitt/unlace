__int64 __fastcall sub_71DD10(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned int *v5; // r12
  unsigned int *v6; // r14
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // [rsp+0h] [rbp-48h]
  __int64 v15; // [rsp+8h] [rbp-40h]

  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  v2 = sub_71AA60(a1, a2, 1u);
  if ( !v2 || (v4 = v2, *(__int16 *)(v2 + 8) < 0) )
    sub_722BF0(a1, a2, v3);
  v5 = *(unsigned int **)v2;
  if ( **(_DWORD **)v2 )
  {
    v6 = (unsigned int *)((char *)v5 + 6);
    v15 = *(_QWORD *)(a1 + 8);
    sub_7180A0(v15, (__int64)v5);
    sub_71DD10(a1, *v5);
    if ( *((__int16 *)v5 + 2) > 0 )
    {
      v7 = 0;
      do
      {
        sub_71D220(a1, v4, v7, 1);
        sub_71DD10(a1, *v6);
        ++v7;
        v6 = (unsigned int *)((char *)v6 + 6);
      }
      while ( *((__int16 *)v5 + 2) > v7 );
    }
    sub_7180B0(v15, (__int64)v5);
  }
  else
  {
    sub_71D340(a1, v2, 1u, 1u);
  }
  *(_DWORD *)(a1 + 28) -= *((__int16 *)v5 + 2);
  if ( !(unsigned __int8)sub_71B320((__m128i **)a1, (unsigned int)a2, v8, v9, v10, v11) )
    sub_722BC0((unsigned int)dword_2CA2738, 0, v12);
  result = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 8) = (unsigned int)v14;
  return result;
}

