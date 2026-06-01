bool __fastcall sub_18C22D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rbx

  v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v8 + 16) - 57 <= 1 )
    goto LABEL_2;
  v10 = a2;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
  {
LABEL_14:
    v9 = 1;
    if ( !sub_F61040(v8, a2, a3, a4, a5, a6) )
      return 0;
    goto LABEL_3;
  }
  v8 = sub_F63050(v8, a2, a3, a4);
  if ( !v8 )
  {
    v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_14;
  }
LABEL_2:
  v9 = *(unsigned int *)(v8 + 20);
  v10 = *(_QWORD *)(v8 + 32);
LABEL_3:
  v11 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *v11;
  v13 = (unsigned int)*(unsigned __int8 *)(*v11 + 16) - 57;
  if ( (unsigned int)v13 <= 1 )
  {
LABEL_4:
    v14 = *(unsigned int *)(v12 + 20);
    v11 = (__int64 *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_5:
    v15 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL));
    return sub_A97D20(*(_QWORD *)(a1 + 248), *v11) * v14 == v15 * v9;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 <= 1 )
  {
    v12 = sub_F63050(v12, a2, v13, a4);
    if ( v12 )
      goto LABEL_4;
    v12 = *v11;
  }
  if ( sub_F61040(v12, a2, v13, a4, a5, a6) )
  {
    v14 = 1;
    goto LABEL_5;
  }
  return 0;
}
