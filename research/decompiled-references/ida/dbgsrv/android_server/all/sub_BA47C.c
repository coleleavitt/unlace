/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BA47C
// Address: 0x00000000000BA47C

//----- (00000000000BA47C) ----------------------------------------------------
_QWORD *__fastcall sub_BA47C(__int64 a1, __int64 a2)
{
  _DWORD *v4; // x19
  FILE *v5; // x0
  __int64 v6; // x8
  _QWORD *v7; // x20

  v4 = operator new(0x48u);
  v4[4] = 0;
  *((_QWORD *)v4 + 7) = 0;
  *((_QWORD *)v4 + 8) = 0;
  *((_QWORD *)v4 + 5) = 0;
  *((_QWORD *)v4 + 6) = 0;
  *((_QWORD *)v4 + 3) = a1;
  *((_QWORD *)v4 + 4) = 0;
  *(_QWORD *)v4 = &off_1603B8;
  *((_QWORD *)v4 + 1) = a2;
  v5 = qtmpfile();
  v6 = *((_QWORD *)v4 + 1);
  *((_QWORD *)v4 + 4) = v5;
  if ( v6 < 0 || (v4[4] & 0x80000000) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
    return nullptr;
  }
  else
  {
    v7 = operator new(0x38u);
    *(_DWORD *)v7 = 4;
    v7[1] = v4;
    sub_B9778(v7);
  }
  return v7;
}
// 1603B8: using guessed type __int64 (__fastcall *off_1603B8)(int, int, void *dest);
