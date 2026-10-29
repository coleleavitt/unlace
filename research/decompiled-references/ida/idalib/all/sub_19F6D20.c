__int64 __fastcall sub_19F6D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // eax

  v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( !sub_F61140(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6) )
    return 0;
  LOBYTE(v13) = sub_F61140(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v7, v8, v9, v10);
  v11 = v13;
  if ( !(_BYTE)v13 )
    return 0;
  if ( sub_19F5350(a1, a2) )
    return v11;
  v14 = *v6;
  v15 = sub_F58130(*v6);
  if ( v15 < 4 || v15 > 6 )
    return sub_19F6DA0(v14, a2);
  sub_F58130(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
  return v11;
}
