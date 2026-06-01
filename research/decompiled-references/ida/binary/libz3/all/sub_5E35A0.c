__int64 __fastcall sub_5E35A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // r12
  int *v5; // rbx
  unsigned int v6; // ebp
  int v7; // r8d
  unsigned int i; // r15d
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+10h] [rbp-68h]
  __int64 v12; // [rsp+10h] [rbp-68h]
  __int64 v13; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h]
  unsigned int v15; // [rsp+28h] [rbp-50h]
  int *v17; // [rsp+38h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a3);
  v14 = 8LL * a3;
  if ( !v4 )
    BUG();
  v5 = nullptr;
  v13 = v3 + 656;
  v6 = 0;
  sub_62A000(v3 + 656, v4);
  v15 = *(_DWORD *)(v4 + 68);
  if ( !v15 )
    return sub_62A410(v13, v4);
  do
  {
    v17 = v5;
    sub_5DFCB0(a1, (__int64 *)&v17, *(_QWORD *)(v4 + 8LL * v6 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    v5 = v17;
    if ( !v17 || !*(v17 - 1) )
      goto LABEL_8;
    v7 = *v17;
    if ( (*(_QWORD *)(v4 + 8LL * v6 + 80) & 7LL) != 1 )
    {
      sub_5E3020(a1, a2, v4, v6, v7);
      for ( i = 1; i < *(v5 - 1); ++i )
        sub_5E3020(a1, a2, v4, v6, v5[i]);
LABEL_8:
      ++v6;
      goto LABEL_9;
    }
    sub_5E3460(a1, a2, a3, v6, v7);
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + v14);
    if ( v10 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + v14);
      sub_62A000(v13, v11);
      v10 = v11;
    }
    v12 = v10;
    sub_62A410(v13, v4);
    v4 = v12;
LABEL_9:
    result = v15;
  }
  while ( v6 < v15 );
  if ( v4 )
    result = sub_62A410(v13, v4);
  if ( v5 )
    return sub_186B220(v5 - 2);
  return result;
}

