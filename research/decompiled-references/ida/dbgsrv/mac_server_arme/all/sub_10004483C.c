/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004483C
// Address: 0x000000010004483C

//----- (000000010004483C) ----------------------------------------------------
__int64 __fastcall sub_10004483C(__int64 a1, __int64 a2)
{
  int v3; // w8
  int16x4_t *v5; // x21
  __int64 result; // x0
  unsigned __int64 v7; // x22
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  unsigned __int64 v10; // x10
  int qerrno; // w0

  v3 = *(_DWORD *)(a1 + 336) + 1;
  *(_DWORD *)(a1 + 336) = v3;
  if ( v3 >= 1024 )
    longjmp((int *)(a1 + 344), 54);
  sub_100044968(a1, a2, 1);
  v5 = *(int16x4_t **)(a1 + 536);
  if ( v5[3].i16[0] != 41 )
    sub_100044824(a1);
  result = sub_100042C40(a1, *(int16x4_t **)(a1 + 536), 0, nullptr);
  if ( *(_QWORD *)(a1 + 64) && !(_DWORD)result )
    result = sub_100043A58(a1, v5);
  if ( (_DWORD)result )
  {
    qerrno = get_qerrno();
    longjmp((int *)(a1 + 344), qerrno);
  }
  if ( *(_BYTE *)(a1 + 544) == 1 )
  {
    *(_BYTE *)(a1 + 544) = 0;
    v7 = *(_QWORD *)(a1 + 548);
    result = sub_100044AD0(a1, a2, 0);
    v8 = 0xFFFFFFFFFFFFFFFFLL >> -((v7 >> 29) & 0xF8);
    v9 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v8 & v9;
    *(_BYTE *)a2 = v7;
    if ( (v7 & 1) == 0 )
    {
      v10 = 0x8000000000000000LL >> -((v7 >> 29) & 0xF8);
      if ( (v8 & v9 & v10) != 0 )
        *(_QWORD *)(a2 + 8) = v9 | ~v8 | v10;
    }
    *(_QWORD *)(a1 + 548) = v7;
  }
  --*(_DWORD *)(a1 + 336);
  return result;
}
