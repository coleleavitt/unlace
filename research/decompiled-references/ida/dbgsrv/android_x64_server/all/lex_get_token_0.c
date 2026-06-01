/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: lex_get_token_0
// Address: 0x000000000008B4E0

//----- (000000000008B4E0) ----------------------------------------------------
__int64 __fastcall lex_get_token_0(__int64 a1, __int64 a2, _DWORD *a3, double a4, __m128 a5)
{
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v15; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 320) )
    goto LABEL_7;
  while ( 1 )
  {
    v7 = sub_84110(a1, (int *)&v15, a4, a5);
    v8 = v15;
    if ( v15 )
      break;
    v9 = v7;
    while ( 1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( !v12 )
        break;
      v10 = v12 - 1;
      v11 = *(_QWORD *)(a1 + 56) + 56 * v10;
      *(_QWORD *)a1 = *(_QWORD *)(v11 + 24);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v11 + 32);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(v11 + 48);
      *(_QWORD *)(a1 + 64) = v10;
      sub_38490((char **)v11);
    }
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = v9;
    *(_BYTE *)(a1 + 320) = 1;
LABEL_7:
    v13 = sub_862A0(a1, a2, 0, a3, a4, a5);
    if ( !v13 )
    {
      if ( *(_QWORD *)(a1 + 64) )
        v13 = sub_871E0(a1, a2, a4, a5);
    }
    v15 = v13;
    if ( v13 )
    {
      v8 = v13;
      return set_qerrno(v8);
    }
    if ( *(_WORD *)(a2 + 24) == 1 )
    {
      *(_BYTE *)(a1 + 320) = 0;
    }
    else if ( *(_BYTE *)(a1 + 320) )
    {
      return 0;
    }
  }
  if ( v15 == 34 )
  {
LABEL_18:
    *(_WORD *)(a2 + 24) = 1;
    return 0;
  }
  if ( v15 == -1 )
  {
    v15 = 34;
    goto LABEL_18;
  }
  return set_qerrno(v8);
}
