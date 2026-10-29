unsigned __int64 __fastcall sub_592090(__int64 a1)
{
  bool v1; // cc
  char *v3; // rdi
  const char *v5; // rdi
  unsigned int encoding_bpu_by_name; // ebp
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned int v11; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 8) <= 1u;
  v12 = __readfsqword(0x28u);
  if ( !v1 && !(unsigned __int8)del_encoding(*(unsigned int *)(a1 + 24)) )
  {
    v5 = haystack;
    if ( *(_QWORD *)(a1 + 8) )
      v5 = *(const char **)a1;
    encoding_bpu_by_name = get_encoding_bpu_by_name(v5);
    if ( *(_DWORD *)(a1 + 24) == (unsigned int)get_default_encoding_idx(encoding_bpu_by_name) )
    {
      v7 = encoding_bpu_by_name - 1;
      v8 = *(_QWORD *)(qword_2CA1698 + 1400);
      if ( (unsigned int)v7 > 3 )
      {
        v10 = -4;
        v9 = -1;
      }
      else
      {
        v9 = (int)dword_238B820[v7];
        v10 = 4 * v9;
      }
      v11 = 0;
      sub_58EAF0(v9, (unsigned int *)(v8 + v10 + 32), &v11, 0xB3u);
      *(_DWORD *)(v8 + 4 * v9 + 32) = 0;
      if ( (unsigned __int8)del_encoding(*(unsigned int *)(a1 + 24)) )
        goto LABEL_3;
      if ( !under_debugger )
        interr(2357);
    }
    else if ( !under_debugger )
    {
      interr(2356);
    }
    BUG();
  }
LABEL_3:
  v3 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v3);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_DWORD *)(a1 + 24) = 0;
  return v12 - __readfsqword(0x28u);
}

