__int64 __fastcall sub_18BE970(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a3 + 19072);
  v9 = (__int64 *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( sub_F61920(*v9, a2, a3, a4, a5, a6) )
  {
    v14 = v7 & 0xFFFFFFFFFFFFFFF0LL;
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int8 *)(*(_QWORD *)v14 + 16LL);
    if ( (_BYTE)v16 == 42 )
    {
LABEL_3:
      v8 = *(_QWORD *)(v15 + 32);
      goto LABEL_4;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v18 + 16) == 42 )
    {
      v15 = sub_F63050(v15, a2, v16, v18);
      if ( v15 )
        goto LABEL_3;
      v15 = *(_QWORD *)v14;
      LOBYTE(v16) = *(_BYTE *)(*(_QWORD *)v14 + 16LL);
    }
    if ( (unsigned __int8)(v16 - 2) <= 4u )
      goto LABEL_3;
LABEL_16:
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      goto LABEL_4;
    v15 = sub_F63050(
            v15,
            a2,
            (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2,
            v18);
    if ( !v15 )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( sub_F61920(*(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v11, v12, v13) )
  {
    v15 = *v9;
    if ( *(_BYTE *)(*v9 + 16) == 42 )
      goto LABEL_3;
    v15 = sub_18BBDD0(*v9, a2, v19, v20);
    if ( v15 )
      goto LABEL_3;
    v15 = *v9;
    v18 = *(unsigned __int8 *)(*v9 + 16);
    if ( (unsigned __int8)(v18 - 2) <= 4u )
      goto LABEL_3;
    goto LABEL_16;
  }
LABEL_4:
  if ( (*(_BYTE *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    return v8;
  else
    return *(_QWORD *)(a3 + 19072);
}
