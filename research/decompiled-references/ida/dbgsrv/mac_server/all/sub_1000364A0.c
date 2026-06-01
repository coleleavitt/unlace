/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000364A0
// Address: 0x00000001000364A0

//----- (00000001000364A0) ----------------------------------------------------
char *__fastcall sub_1000364A0(__int64 a1, __int64 a2, char *a3, int a4)
{
  char *v5; // rbx
  int utf8_char; // eax
  int v8; // eax
  char *v9; // rsi
  unsigned int v10; // r12d
  unsigned int v11; // r13d
  unsigned int v12; // eax
  char *v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  unsigned int v17; // eax
  char *v18; // [rsp+8h] [rbp-38h] BYREF

  v5 = a3;
  v18 = a3;
  do
  {
    while ( 1 )
    {
      utf8_char = get_utf8_char(&v18);
      if ( utf8_char == -1 )
        utf8_char = *v18++;
      if ( !utf8_char )
      {
LABEL_11:
        v9 = *(char **)(a1 + 168);
        if ( v9 < v5 )
        {
          v10 = *(_DWORD *)(a1 + 176);
          v11 = sub_100036380(*(_BYTE **)(a1 + 160), v9);
          v12 = sub_100036380(*(_BYTE **)(a1 + 168), v5);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v11, v12, v10);
          *(_QWORD *)(a1 + 168) = v5;
        }
        return nullptr;
      }
      if ( utf8_char != *(char *)(a1 + 184) )
        break;
      v5 = v18;
      v8 = get_utf8_char(&v18);
      if ( v8 == -1 )
        v8 = *v18++;
      if ( !v8 )
        goto LABEL_11;
      v5 = v18;
    }
    v5 = v18;
  }
  while ( utf8_char != a4 );
  v14 = *(char **)(a1 + 168);
  if ( v14 < v18 )
  {
    v15 = *(_DWORD *)(a1 + 124);
    v16 = sub_100036380(*(_BYTE **)(a1 + 160), v14);
    v17 = sub_100036380(*(_BYTE **)(a1 + 168), v5);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v16, v17, v15);
    *(_QWORD *)(a1 + 168) = v5;
    return v18;
  }
  return v5;
}
