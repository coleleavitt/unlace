__int64 __fastcall sub_20B30C0(unsigned __int64 a1)
{
  _QWORD **v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD **)a1;
  do
  {
    if ( *v1 )
      result = sub_20B2EE0((__int64)v1, *v1, a1 & 0xFFFFFFFFFFFFFFFCLL | 2);
    ++v1;
  }
  while ( v1 != (_QWORD **)(a1 + 24) );
  return result;
}
