/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400568A0
// Address: 0x00000001400568A0

//----- (00000001400568A0) ----------------------------------------------------
bool __fastcall sub_1400568A0(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rax
  unsigned __int64 v8; // rbp
  char *v9; // rax
  int v10; // ebx
  size_t v11; // rax
  char *v12; // rax
  int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  size_t v16; // rax
  size_t v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  char Str[1024]; // [rsp+40h] [rbp-438h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v8 = v4 - 1;
  if ( !v4 )
    v8 = 0;
  if ( a4 )
  {
    v9 = (char *)qword_1400CB5E0;
    if ( !qword_1400CB5E0 )
    {
      v9 = sub_1400571D0(1u);
      qword_1400CB5E0 = (__int64)v9;
    }
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD, char *, __int64, _QWORD, _QWORD, int))v9)(
            a2,
            a3,
            Str,
            1024,
            0,
            0,
            4);
    WSASetLastError(v10);
    if ( !v10 )
    {
      v11 = strlen(Str);
      sub_1400048F0(a1, Str, v11);
    }
  }
  v12 = (char *)qword_1400CB5E0;
  if ( !qword_1400CB5E0 )
  {
    v12 = sub_1400571D0(1u);
    qword_1400CB5E0 = (__int64)v12;
  }
  v13 = ((__int64 (__fastcall *)(__int64, _QWORD, char *, __int64, _QWORD, _QWORD, int))v12)(a2, a3, Str, 1024, 0, 0, 2);
  WSASetLastError(v13);
  if ( !v13 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = v14 - 1;
    if ( !v14 )
      v15 = 0;
    if ( v15 <= v8 )
    {
      v17 = strlen(Str);
      sub_1400048F0(a1, Str, v17);
    }
    else
    {
      if ( v15 + 2 > *(_QWORD *)(a1 + 16) )
        *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v15 + 2, 1u);
      *(_QWORD *)(a1 + 8) = v15 + 2;
      *(_BYTE *)(v15 + *(_QWORD *)a1) = 40;
      *(_BYTE *)(*(_QWORD *)a1 + v15 + 1) = 0;
      v16 = strlen(Str);
      sub_1400048F0(a1, Str, v16);
      sub_140004830(a1, 41);
    }
  }
  v18 = *(_QWORD *)(a1 + 8);
  v19 = v18 - 1;
  if ( !v18 )
    v19 = 0;
  return v19 > v8;
}
// 1400CB5E0: using guessed type __int64 qword_1400CB5E0;
