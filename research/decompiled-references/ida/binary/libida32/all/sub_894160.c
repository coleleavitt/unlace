__int64 __fastcall sub_894160(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int8 (*v3)(void); // rdx
  __int64 (__fastcall *v4)(__int64, char *); // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  char v9; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  v10 = __readfsqword(0x28u);
  v3 = *(unsigned __int8 (**)(void))(v2 + 16);
  if ( (char *)v3 == (char *)sub_4B0830 )
  {
    if ( a1[4] >= (unsigned __int64)a1[3] )
      return 0;
  }
  else
  {
    if ( v3() )
      return 0;
    v2 = *a1;
  }
  v4 = *(__int64 (__fastcall **)(__int64, char *))(v2 + 32);
  if ( v4 != sub_894030 )
  {
    if ( (unsigned __int8)v4((__int64)a1, &v9) )
      goto LABEL_5;
    return 0;
  }
  v5 = a1[4];
  v6 = a1[2];
  a1[4] = v5 + 1;
  v9 = *(_BYTE *)(v6 + v5);
LABEL_5:
  if ( a2 )
  {
    v7 = *a2 + 1;
    *(_BYTE *)(v7 - 1) = v9;
    *a2 = v7;
  }
  ++a1[1];
  return 1;
}

