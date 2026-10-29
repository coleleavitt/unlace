__int64 __fastcall sub_A882A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi

  v5 = (__int64 *)(sub_A51180(a1, a3) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 34 )
    v8 = sub_F3F310(*v5, a3, v6, v7);
  v9 = (__int64 *)(sub_A51180(a1, a2) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *v9;
  if ( *(_BYTE *)(*v9 + 16) != 34 )
    v13 = sub_F3F310(*v9, v13, v10, v11);
  return sub_A87F50(a1, v13, v8, v11, v12);
}

