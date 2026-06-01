__int64 __fastcall sub_6CBC60(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 result; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v2;
  if ( *(_BYTE *)(*(_QWORD *)v2 + 16LL) != 52 )
    v4 = sub_B0D320(v4);
  v5 = *(_QWORD *)(v4 + 32);
  *(_QWORD *)(a1 + 1536) = v5;
  v6 = *(_QWORD *)(v5 + 80);
  v7 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v6 & 4) != 0 )
    v8 = v7[1];
  else
    v8 = *v7;
  result = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  *(_QWORD *)(a1 + 1528) = result;
  return result;
}

