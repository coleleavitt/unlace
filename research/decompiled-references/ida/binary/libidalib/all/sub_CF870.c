__int64 sub_CF870()
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
  v2 = qword_252590;
  v3 = v1;
  result = qword_252590;
  if ( v3 < 0 )
    return result;
  while ( 1 )
  {
    result += (_QWORD)xmmword_252598 << 8;
    if ( v2 == result )
      break;
    sub_C6660(v2, 0);
    if ( !*(_BYTE *)(v2 + 32) )
    {
      if ( !*(_BYTE *)(v2 + 33) )
        goto LABEL_4;
      goto LABEL_12;
    }
    v5 = qword_252758;
    *(_DWORD *)qword_252758 = *(_DWORD *)v2;
    result = sub_CDCF0((__int64)v5, 14);
    if ( v3 > (int)result )
      v3 = result;
    if ( (int)result > 0 )
    {
      v6 = *(_BYTE *)(v2 + 33) == 0;
      *(_BYTE *)(v2 + 32) = 0;
      if ( v6 )
      {
LABEL_4:
        v2 += 256;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
    if ( *(_BYTE *)(v2 + 33) )
    {
      if ( !*(_BYTE *)(v2 + 32) )
      {
LABEL_12:
        v7 = qword_252758;
        *(_DWORD *)qword_252758 = *(_DWORD *)v2;
        result = sub_CDCF0((__int64)v7, 14);
        if ( (int)result <= 0 )
          goto LABEL_14;
      }
      *(_BYTE *)(v2 + 33) = 0;
    }
LABEL_14:
    v2 += 256;
    if ( v3 < 0 )
      return result;
LABEL_5:
    result = qword_252590;
  }
  if ( v3 )
    return sub_CDCF0((__int64)qword_252758, 4);
  return result;
}

