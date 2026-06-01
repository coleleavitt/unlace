__int64 __fastcall sub_16F9D50(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbp
  __int64 result; // rax
  char v6; // dl
  __int64 v7; // rax
  __int64 v8; // rdx

  v4 = sub_16F9B70(a1, a2, 0, a3);
  result = 1;
  if ( v6 )
  {
    v7 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57 <= 1
      || (v8 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57,
          (unsigned int)v8 <= 1)
      && (v7 = sub_F63050(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v3)) != 0 )
    {
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v7 + 32);
      return 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = v4;
      return 0;
    }
  }
  return result;
}
