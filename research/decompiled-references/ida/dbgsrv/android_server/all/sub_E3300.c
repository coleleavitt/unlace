/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3300
// Address: 0x00000000000E3300

//----- (00000000000E3300) ----------------------------------------------------
char *__fastcall sub_E3300(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // x0
  char *v7; // x21
  _QWORD *v8; // x24
  char *v9; // x22
  _QWORD *v10; // x8
  __int64 v11; // x9
  _QWORD *v12; // x0

  result = sub_DFE94((unsigned __int8 **)a1);
  if ( result )
  {
    v7 = result;
    result = sub_DFE94((unsigned __int8 **)a1);
    if ( result )
    {
      v8 = *(_QWORD **)(a1 + 4832);
      v9 = result;
      v10 = v8 + 1;
      v11 = v8[1];
      if ( (unsigned __int64)(v11 + 48) >= 0xFF0 )
      {
        v12 = (_QWORD *)operator new[](0x1000u);
        v11 = 0;
        *v12 = v8;
        v12[1] = 0;
        v10 = v12 + 1;
        v8 = v12;
        *(_QWORD *)(a1 + 4832) = v12;
      }
      *v10 = v11 + 48;
      *(_QWORD *)((char *)v8 + v11 + 16) = off_161D98;
      result = (char *)v8 + v11 + 16;
      *((_DWORD *)result + 2) = 16843050;
      *((_QWORD *)result + 2) = v7;
      *((_QWORD *)result + 3) = a2;
      *((_QWORD *)result + 4) = a3;
      *((_QWORD *)result + 5) = v9;
    }
  }
  return result;
}
// 161D98: using guessed type __int64 (__fastcall *off_161D98[7])();
