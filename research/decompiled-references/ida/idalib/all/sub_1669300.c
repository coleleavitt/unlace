void __fastcall sub_1669300(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rbx
  _QWORD *v9; // r13
  __int64 v10; // rcx
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
    v7 = v6[1];
  else
    v7 = *v6;
  v8 = (__int64 *)(*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v9 = sub_F63270(*v8, a2, (__int64)v6, a4, a5, a6);
  if ( !v9 && *(_BYTE *)(*v8 + 16) == 49 )
  {
    v11[0] = *(_QWORD *)(*v8 + 32);
    v10 = *(_QWORD *)(sub_F22BD0(v11, 0) + 48);
    if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 59 <= 2 )
        v9 = (_QWORD *)v10;
    }
  }
  sub_1669100(a1, a2, (__int64)v9);
}
