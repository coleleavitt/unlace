__int64 __fastcall detach_process(__int64 a1, __int64 a2, double a3)
{
  __int64 bpt_kernel_interface; // rax
  int v4; // eax
  char *v5; // rcx
  __int64 v6; // rbx
  int v7; // ebp
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  void *v11; // rdi
  bool v12; // zf
  void *v13; // rdi

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 200LL))(bpt_kernel_interface);
  v6 = qword_8CC430;
  v7 = v4;
  result = qword_8CC430;
  if ( v7 < 0 )
    return result;
  while ( 1 )
  {
    v9 = (_QWORD)xmmword_8CC438 << 8;
    result += (_QWORD)xmmword_8CC438 << 8;
    if ( v6 == result )
      break;
    sub_235140(v6, 0, v9, a3);
    if ( !*(_BYTE *)(v6 + 32) )
    {
      if ( !*(_BYTE *)(v6 + 33) )
        goto LABEL_4;
      goto LABEL_12;
    }
    v11 = qword_8CC600;
    *(_DWORD *)qword_8CC600 = *(_DWORD *)v6;
    result = sub_23D480((__int64)v11, 14, v10, v5, a3);
    if ( v7 > (int)result )
      v7 = result;
    if ( (int)result > 0 )
    {
      v12 = *(_BYTE *)(v6 + 33) == 0;
      *(_BYTE *)(v6 + 32) = 0;
      if ( v12 )
      {
LABEL_4:
        v6 += 256;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v6 + 33) )
    {
      if ( !*(_BYTE *)(v6 + 32) )
      {
LABEL_12:
        v13 = qword_8CC600;
        *(_DWORD *)qword_8CC600 = *(_DWORD *)v6;
        result = sub_23D480((__int64)v13, 14, v10, v5, a3);
        if ( (int)result <= 0 )
          goto LABEL_14;
      }
      *(_BYTE *)(v6 + 33) = 0;
    }
LABEL_14:
    v6 += 256;
    if ( v7 < 0 )
      return result;
LABEL_5:
    result = qword_8CC430;
  }
  if ( v7 )
    return sub_23D480((__int64)qword_8CC600, 4, v9, v5, a3);
  return result;
}
