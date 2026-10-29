__int64 __fastcall sub_C9C020(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 *v5; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 result; // rax
  char v12; // bl

  v5 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = sub_A97D20(a1, *(_QWORD *)(*(_QWORD *)(a1 + 18720) & 0xFFFFFFFFFFFFFFF0LL));
  v7 = sub_A97D20(a1, *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  v8 = sub_A97D20(a1, *v5);
  v9 = v6;
  v10 = v8;
  if ( v8 >= v6 )
    v9 = v8;
  if ( v7 >= v6 )
    v6 = v7;
  result = 0;
  if ( v9 == v6 )
  {
    if ( !a4 )
      return (unsigned int)(v10 != v7) + 1;
    v12 = sub_F65140(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v12 == (unsigned __int8)sub_F65140(*v5) )
      return (unsigned int)(v10 != v7) + 1;
    else
      return 5;
  }
  return result;
}
