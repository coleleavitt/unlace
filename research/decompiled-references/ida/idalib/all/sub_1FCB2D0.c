__int64 __fastcall sub_1FCB2D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  __int64 result; // rax

  sub_1FC2690(a1, a2);
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
    v3 = (v3 & 4) != 0 && (v3 & 0xFFFFFFFFFFFFFFF8LL) != 0;
  sub_9B9C90(*(_QWORD *)(a1 + 24), v3);
  v4 = *(_QWORD *)(a2 + 16);
  if ( !v4 )
  {
    v5 = 0;
    goto LABEL_9;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) == 0 )
  {
LABEL_9:
    result = sub_183F100(a1 + 32, v5);
    goto LABEL_10;
  }
  if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v5 = 46966720;
    goto LABEL_9;
  }
  result = sub_1F92A90(*(_QWORD *)(a1 + 16), v5, *(_QWORD *)(a1 + 24));
LABEL_10:
  *(_DWORD *)(a1 + 224) = 289;
  return result;
}
