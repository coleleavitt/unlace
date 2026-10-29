/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F560
// Address: 0x000000000047F560

//----- (000000000047F560) ----------------------------------------------------
__int64 __fastcall sub_47F560(const char *a1, char a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbp
  __int64 v4; // rax
  __int64 result; // rax
  FILE *v6; // rbp
  __int64 v7; // [rsp+8h] [rbp-10h]

  if ( a2 )
  {
    v2 = (_DWORD *)sub_475E20();
    v3 = v2;
    if ( v2 )
    {
      if ( v2[4] != -1 )
      {
        v4 = operator new(0x38u);
        *(_QWORD *)(v4 + 8) = v3;
        *(_DWORD *)v4 = 2;
        v7 = v4;
        sub_47F270(v4);
        return v7;
      }
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 16LL))(v2);
    }
  }
  else
  {
    v6 = sub_47F9F0(a1);
    if ( v6 )
    {
      result = operator new(0x38u);
      *(_DWORD *)result = 1;
      *(_QWORD *)(result + 8) = v6;
      return result;
    }
  }
  return 0;
}
