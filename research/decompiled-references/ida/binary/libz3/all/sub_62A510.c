__int64 __fastcall sub_62A510(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rsi

  v3 = a1;
  sub_1662C60(a2, *(_QWORD *)(a1 + 40), 0);
  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result )
  {
    v5 = a1 + 8 * result;
    do
    {
      v6 = *(_QWORD *)(v3 + 80);
      v3 += 8;
      result = sub_1662C60(a2, v6 & 0xFFFFFFFFFFFFFFF8LL, 0);
    }
    while ( v3 != v5 );
  }
  return result;
}

