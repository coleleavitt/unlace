__int64 __fastcall sub_1FCBA10(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  sub_1FCB8E0(a1, a2);
  sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 32), *(_QWORD **)(a1 + 24), v2, v3);
  result = sub_1F85840(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 40), *(_QWORD **)(a1 + 24), v4, v5);
  if ( (*(_QWORD *)a2 & 0x2000000LL) == 0 )
  {
    result = *(unsigned __int8 *)(a2 + 1);
    if ( (result & 6) == 0 && (result & 0x38) == 0 )
    {
      result = *(unsigned int *)(*(_QWORD *)a1 + 3568LL);
      *(_DWORD *)(a1 + 228) = result;
    }
  }
  *(_DWORD *)(a1 + 224) = 189;
  return result;
}
