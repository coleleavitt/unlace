__int64 __fastcall sub_3C57B0(__int64 *a1, unsigned int a2, __int64 a3, _DWORD *a4, int *a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD); // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // [rsp+Ch] [rbp-CCh]
  __int64 v13; // [rsp+18h] [rbp-C0h] BYREF
  _DWORD v14[34]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (a3 & 0x600) != 0x400 )
    return 0;
  v7 = (unsigned int)a3 & 0xF0000000;
  if ( v7 == 1610612736 )
  {
    if ( !a4 )
    {
      a4 = sub_3C4190(a1, v14, a2, 0, a3);
      if ( !a4 )
        return 0;
    }
    v13 = 0;
    if ( !(unsigned __int8)get_type_by_tid(&v13, (unsigned int)*a4) )
      goto LABEL_14;
    if ( !get_tinfo_property(v13, 286) )
    {
      clear_tinfo_t(&v13);
      return 0;
    }
    if ( a5 )
    {
      v11 = sub_3C5400(a1, a2, &v13);
      if ( (unsigned int)(v11 - 1) <= 0xFFFFFFFD )
      {
        *a5 = v11;
LABEL_20:
        v10 = 1;
        goto LABEL_15;
      }
    }
    else if ( (unsigned __int64)(get_tinfo_size(0, v13, 0) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      goto LABEL_20;
    }
LABEL_14:
    v10 = -1;
LABEL_15:
    v12 = v10;
    clear_tinfo_t(&v13);
    return v12;
  }
  if ( v7 != 3489660928LL )
    return 0;
  if ( !a4 )
  {
    a4 = sub_3C4190(a1, v14, a2, 0, a3);
    if ( !a4 )
      return 0;
  }
  v8 = sub_3E2960(a1, (unsigned int)*(__int16 *)a4);
  if ( v8 )
  {
    v9 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v8 + 72);
    if ( v9 )
    {
      if ( a5 )
        *a5 = v9(*(_QWORD *)(v8 + 8), a2, (unsigned int)*a5);
      return 1;
    }
    return 0;
  }
  result = 0;
  if ( a5 )
    return (unsigned int)(unsigned __int8)sub_3BD0D0(a5, (__int64)a1, a2) - 1;
  return result;
}

