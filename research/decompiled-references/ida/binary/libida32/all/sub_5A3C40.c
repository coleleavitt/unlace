__int64 __fastcall sub_5A3C40(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 v8; // rax
  int *v9; // rbx
  int v10; // eax
  __int64 dtype_flag; // rdx
  int v12; // r15d
  unsigned int v13; // r13d
  _QWORD v15[8]; // [rsp+10h] [rbp-40h] BYREF

  v15[1] = __readfsqword(0x28u);
  v8 = sub_5AFCE0(a1);
  if ( v8 )
  {
    v9 = (int *)v8;
    if ( *(_DWORD *)(v8 + 16) == -1 )
    {
      sub_375980(0x3Bu, v8);
      if ( v9[4] == -1 )
        add_frame(v9, 0, 0, 0);
    }
    v10 = sub_59F150(a1, (__int64)v9, a2, a3, a4);
    dtype_flag = 1024;
    v12 = v10;
    if ( (a5 & 1) != 0 )
      dtype_flag = get_dtype_flag(*(unsigned __int8 *)(a3 + 5));
    v15[0] = 0;
    v13 = sub_5EFCC0(a1, v15, dtype_flag, 1, 0, 0);
    if ( (_BYTE)v13 )
      LOBYTE(v13) = sub_5A32A0(a1, v9, v12, nullptr, v15, nullptr, 0, (a5 & 2) != 0) != -1;
    clear_tinfo_t(v15);
  }
  else
  {
    return 0;
  }
  return v13;
}

