__int64 __fastcall sub_127AD20(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  result = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 8) == 10
    && **(_QWORD **)a1 == *(_QWORD *)a3
    && *(_WORD *)(*(_QWORD *)a1 + 8LL) == *(_WORD *)(a3 + 8) )
  {
    v4 = a2[1];
    v5 = *a2;
    *(_BYTE *)(a1 + 32) = 1;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 16) = v5;
    return 1;
  }
  return result;
}
