__int64 __fastcall sub_70B0A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  __int64 v4; // rbp
  __int64 *v5; // rax
  __int64 v6; // rsi

  v3 = (__int64 *)(sub_6C94F0((__int64)a1, a3) & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *v3;
  if ( *(_BYTE *)(*v3 + 16) != 33 )
    v4 = sub_B0D320(*v3);
  v5 = (__int64 *)(sub_6C94F0((__int64)a1, a2) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 33 )
    v6 = sub_B0D320(*v5);
  return sub_70ABF0(a1, v6, v4);
}

