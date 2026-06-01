/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14003A6F0
// Address: 0x000000014003A6F0

//----- (000000014003A6F0) ----------------------------------------------------
__int8 *__fastcall sub_14003A6F0(__int64 *a1, __int8 *a2, __int64 a3, __int64 a4, char *String2, char a6)
{
  __int8 *v8; // rsi
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r15
  const char *i; // rcx
  int v15; // eax
  char *v16; // rcx
  char *v17; // r8
  __int8 *v18; // rsi
  char v19; // al
  __int64 v20; // rdi
  __int64 v21; // rbp
  char *v22; // r8

  v8 = a2;
  v10 = (struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8;
  sub_14005D6B0((struct _RTL_CRITICAL_SECTION *)qword_1400CAFD8);
  v11 = a1[3];
  v12 = v11 + 24 * a1[4];
  for ( i = Str1; v11 != v12; i = Str1 )
  {
    if ( String2 )
    {
      if ( *(_QWORD *)(v11 + 8) )
        i = *(const char **)v11;
      v15 = stricmp(i, String2);
      v16 = nullptr;
      if ( v15 )
        v16 = String2;
      String2 = v16;
    }
    else
    {
      v17 = (char *)Str1;
      if ( *(_QWORD *)(v11 + 8) )
        v17 = *(char **)v11;
      v18 = sub_14005DE20(v8, a3, v17, a4, 0);
      if ( a6 )
        v19 = sub_14003D660(v18, a3);
      else
        v19 = sub_14005EF30(v18);
      if ( v19 )
        goto LABEL_27;
      v8 = a2;
    }
    v11 += 24;
  }
  if ( !a1[1] )
    sub_14005E600((__int64)a1, "idc", 0);
  v20 = *a1;
  v21 = *a1 + 24 * a1[1];
  if ( *a1 == v21 )
  {
LABEL_26:
    v18 = sub_14005E930(a2, a3, a4, nullptr);
  }
  else
  {
    while ( 1 )
    {
      v22 = (char *)Str1;
      if ( *(_QWORD *)(v20 + 8) )
        v22 = *(char **)v20;
      v18 = sub_14005DE20(v8, a3, v22, a4, 0);
      if ( a6 ? sub_14003D660(v18, a3) : sub_14005EF30(v18) )
        break;
      v20 += 24;
      v8 = a2;
      if ( v20 == v21 )
        goto LABEL_26;
    }
  }
LABEL_27:
  sub_14005D6D0(v10);
  return v18;
}
