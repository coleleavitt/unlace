__int64 __fastcall sub_1FC2580(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rsi
  unsigned int *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // rsi

  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  v3 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 1) != 0 )
  {
    v4 = (unsigned int *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    result = *v4;
    v5 = (__int64 *)(v4 + 2);
    v6 = (__int64)&v4[2 * result + 2];
    if ( (unsigned int *)v6 != v4 + 2 )
    {
      do
      {
        v7 = *v5++;
        result = sub_1F92A90(*(_QWORD *)(a1 + 16), v7, *(_QWORD *)(a1 + 24));
      }
      while ( v5 != (__int64 *)v6 );
    }
  }
  else if ( v3 )
  {
    result = sub_1F92A90(*(_QWORD *)(a1 + 16), v3, *(_QWORD *)(a1 + 24));
  }
  *(_DWORD *)(a1 + 224) = 166;
  return result;
}
