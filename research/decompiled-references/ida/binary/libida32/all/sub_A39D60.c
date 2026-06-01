__int64 __fastcall sub_A39D60(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
  result = 0;
  if ( (v1 & 8) != 0 )
  {
    v3 = *(unsigned int *)((char *)&qword_18 + (v1 & 0xFFFFFFFFFFFFFFF0LL) + 4);
    if ( v3 )
      return ((unsigned int)v3 >> 1) & 1;
  }
  return result;
}

