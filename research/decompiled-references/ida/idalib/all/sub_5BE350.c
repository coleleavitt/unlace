__int64 __fastcall sub_5BE350(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 dtype_flag; // rdx
  unsigned __int64 v12; // r15
  unsigned int v13; // r13d
  _QWORD v15[8]; // [rsp+10h] [rbp-40h] BYREF

  v15[1] = __readfsqword(0x28u);
  v8 = sub_5CAA10(a1);
  if ( v8 )
  {
    v9 = v8;
    if ( *(_QWORD *)(v8 + 24) == -1 )
    {
      sub_3792E0(0x3Bu, v8);
      if ( *(_QWORD *)(v9 + 24) == -1 )
        add_frame(v9, 0, 0, 0);
    }
    v10 = sub_5B94E0(a1, v9, a2, a3, a4);
    dtype_flag = 1024;
    v12 = v10;
    if ( (a5 & 1) != 0 )
      dtype_flag = get_dtype_flag(*(_BYTE *)(a3 + 5), (const char *)v9);
    v15[0] = 0;
    v13 = sub_60BC50(a1, v15, dtype_flag, 1, 0, 0);
    if ( (_BYTE)v13 )
      LOBYTE(v13) = sub_5BD990(a1->m128i_i64, (__int64 *)v9, v12, nullptr, v15, nullptr, 0, (a5 & 2) != 0) != -1;
    clear_tinfo_t(v15);
  }
  else
  {
    return 0;
  }
  return v13;
}
