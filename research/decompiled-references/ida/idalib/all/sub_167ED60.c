__int64 __fastcall sub_167ED60(__int64 a1, _WORD *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rax

  v2 = *(_QWORD *)&a2[4 * ((*a2 & 0x200) != 0) + 16];
  result = 1;
  if ( v2 )
  {
    v4 = *(unsigned int *)(a1 + 184);
    if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      sub_2237220(a1 + 176, a1 + 192, v4 + 1, 8);
      v4 = *(unsigned int *)(a1 + 184);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v4) = v2;
    ++*(_DWORD *)(a1 + 184);
    result = sub_BC97E0((__int64 *)a1, v2);
    --*(_DWORD *)(a1 + 184);
  }
  return result;
}
