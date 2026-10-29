__int64 __fastcall sub_145C860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int v8; // ebp
  int v10; // eax
  __int64 result; // rax
  _QWORD v12[6]; // [rsp+8h] [rbp-30h] BYREF

  v8 = a3;
  *(_DWORD *)(a4 + 4) = a3;
  v10 = sub_1466280(*(_QWORD *)(a1 + 96), a2, a3, v12);
  if ( a5 )
    v10 = sub_10209A0(*(_QWORD *)(a1 + 88), v10, a5, a6, v8, 1, 0, 0);
  *(_DWORD *)a4 = v10;
  result = (unsigned int)*(unsigned __int16 *)(a4 + 16) - 6;
  if ( (unsigned __int16)(*(_WORD *)(a4 + 16) - 6) <= 0xDu )
  {
    result = v12[0];
    *(_QWORD *)(a4 + 8) = v12[0];
  }
  return result;
}
