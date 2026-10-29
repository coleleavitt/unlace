__int64 __fastcall sub_20CFA20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  signed __int64 v5; // r12
  __int64 result; // rax
  char *v7; // rcx
  __int64 v8; // rdi
  char v9; // cl
  __int64 v10; // [rsp+8h] [rbp-20h]

  v5 = sub_20CEB80((char **)a1, 1);
  result = 0;
  if ( v5 )
  {
    v7 = *(char **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v7 == 69 )
    {
      v10 = v4;
      v8 = a1 + 816;
      *(_QWORD *)(v8 - 816) = v7 + 1;
      result = sub_20CF970(v8, 48);
      v9 = *(_BYTE *)(result + 10);
      *(_WORD *)(result + 8) = 16461;
      *(_QWORD *)(result + 16) = a2;
      *(_QWORD *)(result + 24) = a3;
      *(_QWORD *)(result + 32) = v5;
      *(_BYTE *)(result + 10) = v9 & 0xF0 | 5;
      *(_QWORD *)(result + 40) = v10;
      *(_QWORD *)result = off_2BE8460;
    }
  }
  return result;
}
