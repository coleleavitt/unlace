__int64 __fastcall sub_8E8C40(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 )
    sub_AED140(a1 + 7536, a3);
  if ( *(char *)(a3 + 7) >= 0 )
    sub_8E8AA0((_QWORD *)a1, (unsigned int *)a3);
  result = sub_AA3E20(a3, *(_QWORD *)(a1 + 104));
  ++*(_DWORD *)(a1 + 60);
  return result;
}

