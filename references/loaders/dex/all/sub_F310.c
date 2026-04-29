__int64 __fastcall sub_F310(__int64 a1, __int64 *a2, __int64 a3, char a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  const char *v10; // rsi
  __int64 v11; // rdx
  const char *v12; // rsi
  const char *v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v5 = *(unsigned int *)(a3 + 4);
  if ( (unsigned int)v5 <= 0xB )
  {
    v6 = 2645;
    if ( _bittest64(&v6, v5) )
    {
      sub_F260((__int64)&v13, a1 + 80, v5);
      v10 = s1;
      if ( v14 )
        v10 = v13;
      sub_5860((__int64)"Illegal type %s of the string table section\n", v10);
      if ( v13 )
      {
        v14 = 0;
        qfree(v13);
      }
      return v15 - __readfsqword(0x28u);
    }
  }
  v7 = *(_QWORD *)(a3 + 24);
  if ( !v7 )
    return sub_5860((__int64)"Illegal offset of the string table section\n");
  if ( *a2 <= 0 || !a2[2] )
  {
LABEL_11:
    *a2 = v7;
    a2[1] = *(_QWORD *)(a3 + 16);
    a2[2] = *(_QWORD *)(a3 + 32);
    return v15 - __readfsqword(0x28u);
  }
  if ( *a2 == v7 )
    return v15 - __readfsqword(0x28u);
  v8 = (__int64 *)(a1 + 352);
  if ( a4 )
  {
    if ( a2 == v8 )
      sub_72E0(
        (__int64)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX",
        "dynamic linking ",
        v7);
    else
      sub_72E0(
        (__int64)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX",
        "",
        v7);
    v7 = *(_QWORD *)(a3 + 24);
    goto LABEL_11;
  }
  v11 = *a2;
  if ( a2 == v8 )
    v12 = "dynamic linking ";
  else
    v12 = "";
  return sub_72E0(
           (__int64)"AUTOHIDE SESSION\nMore than one string table for %ssymbols, using one at offset %08llX",
           v12,
           v11);
}
