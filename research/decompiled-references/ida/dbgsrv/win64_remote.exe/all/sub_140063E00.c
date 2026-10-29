/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140063E00
// Address: 0x0000000140063E00

//----- (0000000140063E00) ----------------------------------------------------
void *__fastcall sub_140063E00(int ErrorNumber)
{
  int v1; // edi
  __int64 v2; // rbp
  void **v3; // rbx
  size_t v4; // rax
  size_t v5; // rdi
  size_t v6; // rsi
  char Src[1024]; // [rsp+20h] [rbp-418h] BYREF

  v1 = ErrorNumber;
  if ( ErrorNumber == -1 )
    v1 = *errno();
  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 16LL;
  v3 = (void **)(v2 + 176);
  if ( strerror_s(Src, 0x400u, v1) )
  {
    sub_140002FB0(v2 + 176, "unknown error code %d", v1);
  }
  else
  {
    v4 = strlen(Src);
    v5 = v4;
    if ( v4 )
    {
      v6 = v4 + 1;
      if ( v4 + 1 > *(_QWORD *)(v2 + 192) )
        *v3 = sub_14005ABE0(v2 + 176, *v3, v4 + 1, 1u);
      *(_QWORD *)(v2 + 184) = v6;
      memcpy(*v3, Src, v5);
      *((_BYTE *)*v3 + v5) = 0;
    }
    else
    {
      *(_QWORD *)(v2 + 184) = 0;
    }
  }
  return *v3;
}
// 1400CC020: using guessed type int TlsIndex;
