/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75820
// Address: 0x0000000000075820

//----- (0000000000075820) ----------------------------------------------------
__int64 __fastcall sub_75820(_QWORD *a1, _DWORD *a2, const char **a3, char **a4, double a5, __m128 a6)
{
  unsigned __int64 v7; // r12
  char *v9; // r13
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  const char *v13; // rcx
  const char *v14; // rdx
  const char *v15; // rsi
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned __int64 v19; // [rsp+20h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v7 = (int)a2[7];
  if ( a2[7] )
  {
    v9 = *a4;
    v10 = a2[7];
    while ( 1 )
    {
      v11 = sub_6D4B0(a1[1], v10);
      if ( *(_DWORD *)(v11 + 56) != -1 )
        break;
      v10 = *(_DWORD *)(v11 + 24);
      if ( !v10 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    return sub_77750((__int64)a1, a2, *(_DWORD *)(v11 + 56), (__int64)a3, v9, 1, a5, a6);
  }
  else
  {
LABEL_5:
    *(_OWORD *)ptr = 0;
    v18 = 0;
    v12 = sub_6D4B0(a1[1], v7);
    v13 = s1;
    v14 = s1;
    if ( *(_QWORD *)(v12 + 40) )
      v14 = *(const char **)(v12 + 32);
    if ( a3[1] )
      v13 = *a3;
    sub_3BBA0((__int64)ptr, "%s.%s", v14, v13);
    if ( ptr[1] )
      v15 = (const char *)ptr[0];
    else
      v15 = s1;
    set_error_string(0, v15);
    set_qerrno(0x602u);
    sub_75F30(a1, 0.0, a6);
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v18 = 0;
    }
    return 0;
  }
}
