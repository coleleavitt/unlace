__int64 __fastcall sub_7D4840(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rcx

  result = sub_7E4EB0();
  if ( *(_BYTE *)(result + 699) )
  {
    v7 = *(_QWORD *)(a1 + 80);
    if ( a4 )
    {
      v8 = *(_QWORD *)(a4 + 48);
      v9 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a4 + 40) + 16LL) + 20LL);
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    return sub_7A0DC0(v7, a2, a3, v9, v8);
  }
  return result;
}

