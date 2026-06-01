__int64 __fastcall sub_D9E210(__int64 a1)
{
  char v2; // dl
  __int64 result; // rax
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]

  v2 = sub_D9DF20(a1);
  result = 0;
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 200) )
    {
      result = sub_D9DAE0(a1);
      if ( (_DWORD)result != 1 )
        return result;
    }
    else
    {
      result = sub_D9DBF0((_QWORD *)a1);
      if ( (_DWORD)result != 1 )
        return result;
    }
    v4 = *(_QWORD **)(a1 + 112);
    v6 = result;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, a1 + 192);
    result = v6;
    if ( *(_QWORD *)(a1 + 192) )
    {
      v5 = v4[7];
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a1 + 192);
        return v6;
      }
    }
  }
  return result;
}

