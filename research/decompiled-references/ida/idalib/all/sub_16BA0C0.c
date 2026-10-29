__int64 __fastcall sub_16BA0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 *v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbp

  v5 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = sub_F68450(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v6 )
  {
    v10 = *(_QWORD *)v6;
    v11 = (__int64 *)v6;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v6 + 16LL) - 25 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
        && sub_F63050(v10, a2, v7, v8) )
      {
        v5 = v11;
      }
    }
    else
    {
      v5 = (__int64 *)v6;
    }
  }
  v12 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = sub_F68450(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, v9) & 0xFFFFFFFFFFFFFFF0LL;
  v16 = (__int64 *)v13;
  if ( !v13 )
  {
LABEL_14:
    v18 = *v5;
    if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 25 <= 1 )
      goto LABEL_15;
    goto LABEL_19;
  }
  v17 = *(_QWORD *)v13;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v13 + 16LL) - 25 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
      && sub_F63050(v17, a2, v14, v15) )
    {
      v12 = v16;
    }
    goto LABEL_14;
  }
  v18 = *v5;
  v12 = (__int64 *)v13;
  if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 25 <= 1 )
    goto LABEL_7;
LABEL_19:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
    return 0;
  v18 = sub_F63050(v18, a2, v14, v15);
  if ( !v18 )
    return 0;
LABEL_15:
  v17 = *v12;
  if ( (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 25 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
      return 0;
    v17 = sub_F63050(*v12, a2, v14, v15);
    if ( !v17 )
      return 0;
  }
LABEL_7:
  if ( sub_F64CD0(v18) && !sub_F64CD0(v17) )
    return 2;
  if ( sub_F64CD0(v18) )
    return 0;
  return sub_F64CD0(v17);
}
