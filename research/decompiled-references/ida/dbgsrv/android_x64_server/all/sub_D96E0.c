/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D96E0
// Address: 0x00000000000D96E0

//----- (00000000000D96E0) ----------------------------------------------------
__int64 __fastcall sub_D96E0(__int64 a1, char **a2)
{
  _BYTE *v3; // rbx
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  _BYTE *v8; // rbx
  __int64 result; // rax

  v3 = *(_BYTE **)(a1 + 16);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v3 + 24LL))(v3);
  if ( v3[9] != 1 )
    (*(void (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v3 + 32LL))(v3, a2);
  v4 = a2[1];
  v5 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v4 + 2) >= v5 )
  {
    v7 = 2 * v5;
    if ( v7 < (unsigned __int64)(v4 + 2) )
      v7 = (size_t)(v4 + 2);
    a2[2] = (char *)v7;
    v6 = (char *)realloc(*a2, v7);
    *a2 = v6;
    v4 = a2[1];
  }
  else
  {
    v6 = *a2;
  }
  *(_WORD *)&v4[(_QWORD)v6] = 14906;
  a2[1] += 2;
  v8 = *(_BYTE **)(a1 + 24);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 24LL))(v8, a2);
  if ( v8[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v8 + 32LL))(v8, a2);
  return result;
}
