/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400730B0
// Address: 0x00000001400730B0

//----- (00000001400730B0) ----------------------------------------------------
char __fastcall sub_1400730B0(__int64 a1, unsigned int a2, char a3)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v10; // rdi
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rdx

  v6 = __crt_stdio_output::to_integer_size(*(unsigned int *)(a1 + 60));
  v8 = v6;
  switch ( v6 )
  {
    case 1LL:
      v16 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v12 = (v16 & 0x10) == 0;
      v17 = *(_QWORD *)(a1 + 32);
      if ( v12 )
        v10 = *(unsigned __int8 *)(v17 - 8);
      else
        v10 = *(char *)(v17 - 8);
      break;
    case 2LL:
      v14 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v12 = (v14 & 0x10) == 0;
      v15 = *(_QWORD *)(a1 + 32);
      if ( v12 )
        v10 = *(unsigned __int16 *)(v15 - 8);
      else
        v10 = *(__int16 *)(v15 - 8);
      break;
    case 4LL:
      v11 = *(_DWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 32) += 8LL;
      v12 = (v11 & 0x10) == 0;
      v13 = *(_QWORD *)(a1 + 32);
      if ( v12 )
        v10 = *(unsigned int *)(v13 - 8);
      else
        v10 = *(int *)(v13 - 8);
      break;
    case 8LL:
      *(_QWORD *)(a1 + 32) += 8LL;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 32) - 8LL);
      break;
    default:
      *errno() = 22;
      invalid_parameter_noinfo();
      return 0;
  }
  v18 = *(_DWORD *)(a1 + 48);
  if ( (v18 & 0x10) != 0 && v10 < 0 )
  {
    v10 = -v10;
    v18 |= 0x40u;
    *(_DWORD *)(a1 + 48) = v18;
  }
  if ( *(int *)(a1 + 56) >= 0 )
  {
    v19 = *(int *)(a1 + 56);
    *(_DWORD *)(a1 + 48) = v18 & 0xFFFFFFF7;
    __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(a1 + 88, v19);
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 1;
  }
  if ( !v10 )
    *(_DWORD *)(a1 + 48) &= ~0x20u;
  *(_BYTE *)(a1 + 84) = 0;
  LOBYTE(v7) = a3;
  if ( v8 == 8 )
    unknown_libname_46(a1, v10, a2, v7);
  else
    unknown_libname_45(a1, (unsigned int)v10, a2, v7);
  if ( (*(_DWORD *)(a1 + 48) & 0x80) != 0 && (!*(_DWORD *)(a1 + 80) || **(_BYTE **)(a1 + 72) != 48) )
  {
    *(_BYTE *)--*(_QWORD *)(a1 + 72) = 48;
    ++*(_DWORD *)(a1 + 80);
  }
  return 1;
}
// 1400731DD: variable 'v7' is possibly undefined
// 14007176C: using guessed type __int64 __fastcall __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(_QWORD, _QWORD);
// 140071814: using guessed type __int64 __fastcall unknown_libname_45(_QWORD, _QWORD, _QWORD, _QWORD);
// 14007189C: using guessed type __int64 __fastcall unknown_libname_46(_QWORD, _QWORD, _QWORD, _QWORD);
// 140072D50: using guessed type __int64 __fastcall __crt_stdio_output::to_integer_size(_QWORD);
