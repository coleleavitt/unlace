__int64 __fastcall ida_action_t__::vfunc_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  const char *v23; // rsi
  __int64 v24; // rdx
  char v25; // [rsp+0h] [rbp-28h]
  unsigned int v26; // [rsp+Ch] [rbp-1Ch]

  if ( (*(_BYTE *)(a1 + 114) & 8) == 0 )
  {
    result = ((__int64 (*)(void))ui_action_t__::vfunc_4)();
LABEL_6:
    if ( (_DWORD)result )
      return result;
    goto LABEL_15;
  }
  v13 = *(_QWORD *)(a3 + 16);
  if ( !v13 || *(_BYTE *)(v13 + 24) || (v15 = *(_QWORD *)(v13 + 16)) == 0 )
  {
    result = ui_action_t__::vfunc_4(a1, a2, a3);
LABEL_5:
    byte_8CD8C0 = 1;
    goto LABEL_6;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 744LL))(v15, a1, a2, a3) )
  {
    result = ui_action_t__::vfunc_4(a1, a2, a3);
    v24 = *(_QWORD *)(a3 + 16);
    if ( !v24 )
      goto LABEL_5;
    if ( *(_BYTE *)(v24 + 24) )
      goto LABEL_5;
    v16 = *(_QWORD *)(v24 + 16);
    if ( !v16 )
      goto LABEL_5;
    goto LABEL_13;
  }
  result = *(_QWORD *)(a3 + 16);
  if ( result )
  {
    if ( !*(_BYTE *)(result + 24) )
    {
      v16 = *(_QWORD *)(result + 16);
      LODWORD(result) = 0;
      if ( v16 )
      {
LABEL_13:
        v26 = result;
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)v16 + 752LL))(
          v16,
          a1,
          a2,
          a3,
          (unsigned int)result);
        result = v26;
        goto LABEL_5;
      }
    }
  }
  byte_8CD8C0 = 1;
LABEL_15:
  if ( (*(_BYTE *)(a1 + 114) & 8) == 0 )
    return 0;
  sub_1C7D20(0);
  v23 = &s1;
  if ( *(_QWORD *)(a1 + 40) )
    v23 = *(const char **)(a1 + 32);
  sub_169700((int)"Command \"%s\" failed\n", (__int64)v23, v17, v18, v19, v20, a4, a5, a6, a7, v21, v22, a10, a11, v25);
  return 0;
}
