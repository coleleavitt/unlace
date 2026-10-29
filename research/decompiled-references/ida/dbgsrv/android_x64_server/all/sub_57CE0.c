/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57CE0
// Address: 0x0000000000057CE0

//----- (0000000000057CE0) ----------------------------------------------------
__int64 __fastcall sub_57CE0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  char *v11; // rdi

  v6 = *a3;
  if ( v6 > 0 && (v7 = a3[2]) != 0 )
  {
    if ( v7 - 1 >= (unsigned __int64)a4 )
      return sub_53CA0(a1, a2, a4 + v6);
    sub_3BBA0(a2, "bad offset %08x", a4 + v6);
  }
  else
  {
    v8 = __strlen_chk("{no string table}", 18);
    if ( v8 )
    {
      v9 = v8;
      v10 = v8 + 1;
      if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v8 + 1) )
      {
        v11 = *(char **)a2;
      }
      else
      {
        v11 = (char *)qvector_reserve(a2, *(char **)a2, v8 + 1, 1u);
        *(_QWORD *)a2 = v11;
      }
      *(_QWORD *)(a2 + 8) = v10;
      memmove(v11, "{no string table}", v9);
      *(_BYTE *)(*(_QWORD *)a2 + v9) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return 0;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
