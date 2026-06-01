__int64 __fastcall sub_51880(__int64 *a1, char **a2, __int64 a3)
{
  unsigned int v3; // r13d
  char *v5; // rbx
  char *v6; // r15
  __int64 v7; // rax
  char *v8; // r14
  char *v9; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF

  v10[1] = __readfsqword(0x28u);
  v9 = *a2;
  if ( !__CFADD__(a3, v9)
    && (v5 = &v9[a3], (unsigned __int8)sub_51640(a1, &v9, a3))
    && (unsigned __int8)sub_480B0(a1 + 10, (const void **)&v9, (unsigned __int64)v5)
    && (unsigned __int8)sub_480B0(a1 + 13, (const void **)&v9, (unsigned __int64)v5)
    && (v3 = sub_480B0(a1 + 16, (const void **)&v9, (unsigned __int64)v5), (_BYTE)v3)
    && (v6 = v9, v10[0] = v9, v7 = sub_93CE0(v10, v5), v8 = (char *)v10[0], a1[19] = v7, v9 = v8, v6 < v8)
    && (a1[20] = sub_93CE0(v10, v5), (unsigned __int64)v8 < v10[0]) )
  {
    *a2 = (char *)v10[0];
  }
  else
  {
    return 0;
  }
  return v3;
}

