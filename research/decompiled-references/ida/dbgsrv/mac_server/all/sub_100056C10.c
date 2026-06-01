/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056C10
// Address: 0x0000000100056C10

//----- (0000000100056C10) ----------------------------------------------------
__int64 __fastcall sub_100056C10(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  unsigned int v6; // r13d
  char v7; // cl
  __int64 result; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebx

  v4 = unpack_dd(a3, a3[1]);
  v5 = unpack_dd(a3, a3[1]);
  v6 = unpack_dd(a3, a3[1]);
  v7 = sub_100055EC0(a1, v4);
  result = 1;
  if ( !v7 )
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 440) + 144LL))(
               *(_QWORD *)(a1 + 440),
               v4,
               v5,
               v6,
               a2);
  if ( *(_BYTE *)(a1 + 184) == 1 )
  {
    v9 = v4;
    v10 = result;
    sub_100000AE0((int)"attach_process(pid=%d, evid=%d) => %d\n", v9, v5, (unsigned int)result);
    return v10;
  }
  return result;
}
