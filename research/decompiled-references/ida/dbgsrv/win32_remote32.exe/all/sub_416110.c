/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416110
// Address: 0x00416110

//----- (00416110) --------------------------------------------------------
_DWORD *__userpurge sub_416110@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, LPVOID lpBaseAddress, char a4)
{
  int ***v5; // ebx
  _DWORD *result; // eax
  int v7; // edi
  void *v8; // ecx
  SIZE_T v10; // esi
  void *v11; // eax
  int v12; // [esp+10h] [ebp-1Ch] BYREF
  int v13; // [esp+18h] [ebp-14h]
  int v14; // [esp+1Ch] [ebp-10h]

  v14 = a1;
  v5 = (int ***)(a1 + 596);
  result = sub_408C10((int *)(a1 + 596), &v12, (unsigned int *)&lpBaseAddress);
  v7 = v13;
  if ( *(_BYTE *)(v13 + 13)
    || (v8 = lpBaseAddress, (unsigned int)lpBaseAddress < *(_DWORD *)(v13 + 16))
    || (int **)v13 == *v5 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1488);
  }
  if ( (*(_DWORD *)(v13 + 20))-- == 1 )
  {
    if ( a4 )
    {
      v10 = *(_DWORD *)(a1 + 208);
      if ( sub_40C190(v14, a2, v8, (void *)(v7 + 24), v10, 1u, 0) != v10 )
      {
        if ( byte_4B70F0 )
          __debugbreak();
        sub_4533F0(1489);
      }
    }
    v11 = (void *)sub_40BA90(v5, v7);
    return (_DWORD *)sub_4627F2(v11);
  }
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
