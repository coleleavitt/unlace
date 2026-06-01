__int64 __fastcall sub_227B200(__int64 a1, char *a2, unsigned __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  size_t v10; // rdx
  std::_V2 *v11; // rdi
  __int64 result; // rax
  int v13; // r14d

  v5 = *(__int64 **)(a1 + 64);
  if ( v5 )
  {
    v7 = v5[4];
    v8 = v5[2];
    if ( v7 != v8 )
    {
      v9 = *v5;
      v5[4] = v8;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v9 + 72))(v5, v8, v7 - v8);
    }
  }
  *(_QWORD *)(a1 + 88) += a3;
  while ( 1 )
  {
    v10 = 0x40000000;
    v11 = (std::_V2 *)*(unsigned int *)(a1 + 48);
    if ( a3 <= 0x40000000 )
      v10 = a3;
    result = write((int)v11, a2, v10);
    if ( result < 0 )
      break;
    a2 += result;
    a3 -= result;
LABEL_9:
    if ( !a3 )
      return result;
  }
  result = (__int64)__errno_location();
  v13 = *(_DWORD *)result;
  if ( *(_DWORD *)result == 4 || v13 == 11 )
    goto LABEL_9;
  result = std::_V2::generic_category(v11);
  *(_DWORD *)(a1 + 72) = v13;
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
