__int64 __fastcall sub_371D60(char *a1, __int64 a2)
{
  bool v2; // zf
  char v3; // al
  unsigned int v4; // r12d
  const char *v6; // rax
  __int64 v7; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+30h] [rbp-28h]
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 8) == 1;
  v7 = 0;
  if ( !v2 )
  {
    set_error_string(0, "get_tinfo");
    v4 = set_qerrno(56);
    goto LABEL_7;
  }
  *(_QWORD *)(a2 + 8) = 0;
  v3 = *a1;
  if ( *a1 == 7 )
  {
    v6 = haystack;
    if ( *((_QWORD *)a1 + 2) )
      v6 = *((const char **)a1 + 1);
    if ( !v6 )
      goto LABEL_6;
    v8[1] = v6;
    v9 = 256;
    v8[0] = get_idati();
    if ( !(unsigned __int8)create_tinfo(&v7, 61, 61, v8) )
      goto LABEL_6;
LABEL_14:
    sub_36E470(a2, &v7);
    goto LABEL_6;
  }
  if ( v3 == 9 )
  {
    v4 = idcv_long();
    if ( v4 )
      goto LABEL_7;
  }
  else if ( v3 != 2 )
  {
    goto LABEL_6;
  }
  if ( (unsigned __int8)sub_371B60(*((_QWORD *)a1 + 1), (__int64)&v7) )
    goto LABEL_14;
LABEL_6:
  v4 = 0;
LABEL_7:
  clear_tinfo_t(&v7);
  return v4;
}
