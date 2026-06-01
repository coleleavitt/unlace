__int64 __fastcall sub_491F0(__int64 *a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r14
  const void *v11; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v11 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v12[0] = v3;
  v7 = (unsigned __int64)v5;
  v8 = sub_93BC0(v12, v5);
  v11 = (const void *)v12[0];
  if ( (unsigned __int64)v3 >= v12[0] )
    return 0;
  if ( v8 != a1[3] )
    sub_40760(a1 + 2, v8);
  if ( v8 )
  {
    v9 = 0;
    v10 = 24LL * v8;
    while ( (unsigned __int8)sub_480B0((__int64 *)(v9 + a1[2]), &v11, v7) )
    {
      v9 += 24;
      if ( v10 == v9 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  result = sub_480B0(a1 + 5, &v11, v7);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v11;
  return result;
}

