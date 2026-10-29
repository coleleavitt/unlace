__int64 __fastcall sub_E5DD00(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int16 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]

  sub_E5D730(*(_QWORD *)(a1 + 8), *(_DWORD *)a1, 0);
  result = sub_1020490(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1224LL), *(unsigned int *)(a1 + 4), 0);
  if ( (_BYTE)result )
  {
    v2 = *(_QWORD *)(a1 + 8);
    v3 = 1;
    v2 += 1048;
    v4 = 1;
    sub_222AB70(v2, "isMacroArgExpansion", 19);
    sub_222CAC0(v2, &v3);
    sub_2229BF0(v2);
    return sub_222B2A0(&v3);
  }
  return result;
}
