__int64 __fastcall sub_1F62740(__int64 a1, _QWORD *a2)
{
  int v2; // ecx
  __int64 result; // rax

  sub_1F62320(a1, (__int64)a2);
  a2[3] = sub_1F19370(*(_QWORD *)a1);
  a2[4] = sub_1EEDED0(
            *(_QWORD *)(*(_QWORD *)a1 + 8LL),
            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
            (_QWORD *)(*(_QWORD *)a1 + 32LL),
            (_DWORD *)(*(_QWORD *)a1 + 24LL));
  v2 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 20) = v2 + 1;
  result = (unsigned int)(1 << v2);
  if ( ((unsigned int)result & *(_DWORD *)(a1 + 16)) != 0 )
  {
    result = sub_1EEDED0(
               *(_QWORD *)(*(_QWORD *)a1 + 8LL),
               *(_QWORD *)(*(_QWORD *)a1 + 16LL),
               (_QWORD *)(*(_QWORD *)a1 + 32LL),
               (_DWORD *)(*(_QWORD *)a1 + 24LL));
    a2[5] = result;
  }
  return result;
}
