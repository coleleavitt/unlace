/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B990
// Address: 0x000000000004B990

//----- (000000000004B990) ----------------------------------------------------
__int64 __fastcall sub_4B990(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rax
  _DWORD *v4; // r14

  v2 = *(_DWORD *)(a2 + 1140);
  if ( v2 != -1 )
  {
    v3 = (_DWORD *)__errno(a1);
    *v3 = 0;
    if ( byte_155770 )
    {
LABEL_7:
      kill(v2, 9);
      return 0;
    }
    v4 = v3;
    if ( (unsigned int)syscall(200, v2, 9) && *v4 == 38 )
    {
      *v4 = 0;
      byte_155770 = 1;
      goto LABEL_7;
    }
    if ( byte_155770 == 1 )
      goto LABEL_7;
  }
  return 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 155770: using guessed type char byte_155770;
