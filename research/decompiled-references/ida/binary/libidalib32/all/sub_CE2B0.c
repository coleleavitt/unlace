__int64 sub_CE2B0()
{
  __int64 bpt_kernel_interface; // rax
  int v1; // eax
  __int64 v2; // rbx
  int v3; // ebp
  __int64 result; // rax
  void *v5; // rdi
  bool v6; // zf
  void *v7; // rdi

  bpt_kernel_interface = get_bpt_kernel_interface();
  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 200LL))(bpt_kernel_interface);
  v2 = qword_251410;
  v3 = v1;
  result = qword_251410;
  if ( v3 < 0 )
    return result;
  while ( 1 )
  {
    result += 232 * xmmword_251418;
    if ( v2 == result )
      break;
    sub_C5200(v2, 0);
    if ( !*(_BYTE *)(v2 + 32) )
    {
      if ( !*(_BYTE *)(v2 + 33) )
        goto LABEL_4;
      goto LABEL_12;
    }
    v5 = qword_2515B0;
    *(_DWORD *)qword_2515B0 = *(_DWORD *)v2;
    result = sub_CC780((__int64)v5, 14);
    if ( v3 > (int)result )
      v3 = result;
    if ( (int)result > 0 )
    {
      v6 = *(_BYTE *)(v2 + 33) == 0;
      *(_BYTE *)(v2 + 32) = 0;
      if ( v6 )
      {
LABEL_4:
        v2 += 232;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v2 + 33) )
    {
      if ( !*(_BYTE *)(v2 + 32) )
      {
LABEL_12:
        v7 = qword_2515B0;
        *(_DWORD *)qword_2515B0 = *(_DWORD *)v2;
        result = sub_CC780((__int64)v7, 14);
        if ( (int)result <= 0 )
          goto LABEL_14;
      }
      *(_BYTE *)(v2 + 33) = 0;
    }
LABEL_14:
    v2 += 232;
    if ( v3 < 0 )
      return result;
LABEL_5:
    result = qword_251410;
  }
  if ( v3 )
    return sub_CC780((__int64)qword_2515B0, 4);
  return result;
}

