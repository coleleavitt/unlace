__int64 __fastcall sub_7809E0(__int64 a1, const char *a2, int *a3, __int64 a4, char a5)
{
  const char *v10; // rbx
  int v11; // edx
  _QWORD *v12; // rdi
  int v13; // r15d
  int v14; // ecx
  const char *v15; // r14
  _BYTE *v16; // rax
  const void *v17; // rsi
  int v19; // [rsp+Ch] [rbp-108Ch]
  _BYTE v20[4104]; // [rsp+50h] [rbp-1048h] BYREF
  unsigned __int64 v21; // [rsp+1058h] [rbp-40h]

  v10 = a2;
  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)qisabspath(a2) )
    return sub_780600((__int64)v10, 1);
  if ( !a5 )
    goto LABEL_14;
  v11 = *a3;
  if ( *a3 <= 1 )
    goto LABEL_14;
  v12 = (_QWORD *)(a4 + 8);
  v13 = 1;
  v14 = 0;
  v15 = nullptr;
  do
  {
    v16 = (_BYTE *)*v12;
    v17 = v12 + 1;
    if ( *(_BYTE *)*v12 == 45 && v16[1] == a5 )
    {
      v19 = v14;
      v15 = v16 + 2;
      memmove(v12, v17, v11 - v13 - 1);
      v11 = *a3;
      v17 = v12 + 1;
      v14 = v19 + 1;
    }
    ++v13;
    v12 = v17;
  }
  while ( v11 > v13 );
  *a3 = v11 - v14;
  if ( !v15 )
  {
LABEL_14:
    v15 = "En_US";
    if ( (unsigned __int8)qgetenv("LANG") )
      v15 = nullptr;
  }
  if ( (unsigned __int8)qgetenv("NLSPATH") && (unsigned __int8)sub_780400(v10, v15, 0, v20)
    || (unsigned __int8)sub_780400(v10, v15, a1, v20) )
  {
    v10 = v20;
    return sub_780600((__int64)v10, 1);
  }
  return 0xFFFFFFFFLL;
}
