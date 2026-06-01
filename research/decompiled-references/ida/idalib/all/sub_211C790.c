__int64 __fastcall sub_211C790(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  void (*v3)(void); // rdx
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  const char *v6; // [rsp+0h] [rbp-38h] BYREF
  __int16 v7; // [rsp+20h] [rbp-18h]

  result = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)result )
  {
    v2 = *(_QWORD *)(a1 + 24) + 96LL * *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL * (unsigned int)result - 16);
    if ( v2 )
    {
      v3 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
      if ( (char *)v3 == (char *)sub_2119C90 )
      {
        *(_QWORD *)(v2 + 8) = 1;
      }
      else
      {
        v3();
        LODWORD(result) = *(_DWORD *)(a1 + 56);
      }
      result = (unsigned int)(result - 1);
      *(_DWORD *)(a1 + 56) = result;
    }
  }
  else
  {
    v4 = *(_QWORD **)(a1 + 264);
    v5 = *(_QWORD *)(a1 + 8);
    v6 = "this directive must appear between .cfi_startproc and .cfi_endproc directives";
    v7 = 259;
    if ( v4 )
      v4 = (_QWORD *)*v4;
    return sub_2100A30(v5, (__int64)v4, (__int64)&v6);
  }
  return result;
}
