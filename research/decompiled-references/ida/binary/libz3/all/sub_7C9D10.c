__int64 __fastcall sub_7C9D10(__int64 a1, _DWORD **a2, _QWORD *a3)
{
  _DWORD *v3; // rdx
  _DWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 result; // rax
  _DWORD *v7; // r12
  _DWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int i; // eax
  _DWORD *v12; // rax

  v3 = (_DWORD *)*a3;
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 2248LL);
  result = *(_QWORD *)v5;
  if ( !*(_BYTE *)(*(_QWORD *)v5 + 8LL) )
  {
    v7 = v3;
    v8 = v4;
    result = sub_7F4540();
    if ( (_BYTE)result )
    {
      if ( *v7 >= *v4 )
      {
        v12 = v7;
        v7 = v4;
        v8 = v12;
      }
      v9 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v9 + 16) = v7;
      *(_QWORD *)(v9 + 24) = v8;
      *(_QWORD *)(v9 + 32) = 0;
      *(_BYTE *)(v9 + 44) = 1;
      *(_DWORD *)(v9 + 40) = 0;
      sub_7F3C60(v5);
      v10 = *(_QWORD *)v5;
      result = (unsigned int)(*(_DWORD *)(v5 + 64) + 1);
      *(_DWORD *)(v5 + 64) = result;
      if ( *(_DWORD *)(v10 + 924) < (unsigned int)result )
      {
        *(_DWORD *)(v5 + 64) = 0;
        for ( i = *(_DWORD *)(v5 + 56); i < *(_DWORD *)(v5 + 28); i = *(_DWORD *)(v5 + 56) )
          sub_7F4130(v5, *(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL));
        result = 110 * i / 0x64 + 1;
        *(_DWORD *)(v5 + 56) = result;
      }
    }
  }
  return result;
}

