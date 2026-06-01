/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063F70
// Address: 0x0000000140063F70

//----- (0000000140063F70) ----------------------------------------------------
void *__fastcall sub_140063F70(signed int a1, _BYTE *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  void **v5; // rbx
  void *v6; // rcx
  __int16 *v7; // rax
  void *result; // rax

  if ( (unsigned int)a1 >= 4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(481);
  }
  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 16LL;
  v3 = a1;
  v4 = v2 + 24LL * a1;
  v5 = (void **)(v4 + 32);
  if ( a2 )
  {
    if ( *a2 )
    {
      sub_140001730(v4 + 32, a2);
    }
    else
    {
      if ( *(_QWORD *)(v4 + 48) < 2u )
        *v5 = sub_14005ABE0(v4 + 32, *v5, 2u, 1u);
      *(_QWORD *)(v4 + 40) = 2;
      *(_BYTE *)*v5 = 32;
      *((_BYTE *)*v5 + 1) = 0;
      v7 = word_1400CAE32;
      if ( *(_QWORD *)(v4 + 40) )
        v7 = (__int16 *)*v5;
      *(_BYTE *)v7 = 0;
    }
  }
  else
  {
    v6 = *v5;
    if ( *v5 )
    {
      *(_QWORD *)(v4 + 40) = 0;
      j_free(v6);
      *v5 = nullptr;
      *(_QWORD *)(v4 + 48) = 0;
    }
  }
  result = *v5;
  *(_QWORD *)(v2 + 8 * v3) = *v5;
  return result;
}
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
// 1400CB61C: using guessed type char byte_1400CB61C;
// 1400CC020: using guessed type int TlsIndex;
