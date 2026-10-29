__int64 __fastcall sub_A3FB40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 result; // rax

  v5 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *v5;
  if ( *(_BYTE *)(*v5 + 16) != 53 )
    v6 = sub_F3F310(*v5, v5, a3, a4, a5);
  v7 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(a1 + 1616) = v7;
  result = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL), v5, v7, a4, a5);
  *(_QWORD *)(a1 + 1608) = result;
  return result;
}

