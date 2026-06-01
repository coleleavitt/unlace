/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476300
// Address: 0x0000000000476300

//----- (0000000000476300) ----------------------------------------------------
_DWORD *__fastcall sub_476300(__int64 a1, unsigned __int8 a2)
{
  int v3; // w20
  __int64 v4; // x0
  _DWORD *v5; // x20
  _DWORD *result; // x0

  v3 = a2;
  *(_QWORD *)a1 = qword_51E328;
  v4 = a1 + 8;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = sub_4926B8();
  *(_WORD *)(a1 + 104) = -1;
  *(_BYTE *)(a1 + 106) = 1;
  *(_BYTE *)(a1 + 107) = 0;
  if ( v3 )
  {
    v5 = sub_49E050(0x40u);
    v5[4] = 0;
    *((_QWORD *)v5 + 3) = 0;
    *((_QWORD *)v5 + 4) = v5 + 4;
    *((_QWORD *)v5 + 5) = v5 + 4;
    *((_QWORD *)v5 + 6) = 0;
    *(_QWORD *)v5 = off_51B928;
    result = sub_494418();
    *((_QWORD *)v5 + 7) = result;
    if ( !result )
    {
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(1540);
    }
    *(_QWORD *)(a1 + 88) = v5;
  }
  else
  {
    result = sub_49E050(0x38u);
    *(_QWORD *)(a1 + 88) = result;
    *(_QWORD *)result = off_51B8F0;
    result[4] = 0;
    *((_QWORD *)result + 3) = 0;
    *((_QWORD *)result + 4) = result + 4;
    *((_QWORD *)result + 5) = result + 4;
    *((_QWORD *)result + 6) = 0;
  }
  return result;
}
// 51B8F0: using guessed type __int64 (__fastcall *off_51B8F0[5])();
// 51B928: using guessed type __int64 (__fastcall *off_51B928[5])();
// 51E328: using guessed type __int64 qword_51E328[2];
// 52451C: using guessed type char under_debugger;
