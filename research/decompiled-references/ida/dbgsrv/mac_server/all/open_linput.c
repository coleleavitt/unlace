/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: open_linput
// Address: 0x000000010007A170

//----- (000000010007A170) ----------------------------------------------------
_QWORD *__fastcall open_linput(const char *a1, int a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  _QWORD *v4; // r14
  _QWORD *result; // rax
  FILE *v6; // rax
  FILE *v7; // rbx

  if ( a2 )
  {
    v2 = (_DWORD *)sub_100070A80();
    if ( v2 )
    {
      v3 = v2;
      if ( v2[4] != -1 )
      {
        v4 = operator new(0x38u);
        *(_DWORD *)v4 = 2;
        v4[1] = v3;
        sub_100079E20((__int64)v4);
        return v4;
      }
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  else
  {
    v6 = fopenRB(a1);
    if ( v6 )
    {
      v7 = v6;
      result = operator new(0x38u);
      *(_DWORD *)result = 1;
      result[1] = v7;
      return result;
    }
  }
  return nullptr;
}
