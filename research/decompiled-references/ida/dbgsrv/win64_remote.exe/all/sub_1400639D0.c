/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400639D0
// Address: 0x00000001400639D0

//----- (00000001400639D0) ----------------------------------------------------
_QWORD *__fastcall sub_1400639D0(struct _exception *a1, char a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  _DWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *result; // rax
  _QWORD *v7; // rbx

  if ( a2 )
  {
    v2 = (_DWORD *)UserMathErrorFunction(a1);
    v3 = v2;
    if ( v2 )
    {
      if ( v2[4] != -1 )
      {
        v4 = operator new(0x38u);
        v5 = v4;
        if ( v4 )
          *v4 = 2;
        else
          v5 = nullptr;
        v5[1] = v3;
        sub_1400636D0(v5);
        return v5;
      }
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1);
    }
    return nullptr;
  }
  result = (_QWORD *)sub_1400642B0((const CHAR *)a1);
  v7 = result;
  if ( result )
  {
    result = operator new(0x38u);
    if ( result )
    {
      *(_DWORD *)result = 1;
      result[1] = v7;
    }
    else
    {
      MEMORY[8] = v7;
    }
  }
  return result;
}
