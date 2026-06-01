__int64 __fastcall sub_1CB0C90(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 result; // rax
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  while ( 1 )
  {
    v3 = sub_BFBAE0(a1);
    if ( ((*(_WORD *)v3 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v3 + 2) >> 3) & 0x3F) != 0x13 )
      break;
    v5 = v3;
    sub_1CB0C90(*(_QWORD *)(v3 + 16), a2);
    a1 = *(_QWORD *)(v5 + 24);
  }
  result = *(unsigned int *)(a2 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, result + 1, 8);
    result = *(unsigned int *)(a2 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = a1;
  ++*(_DWORD *)(a2 + 8);
  return result;
}
