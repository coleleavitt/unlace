__int64 __fastcall sub_4E220(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // r14
  char *v4; // rbx
  unsigned int v6; // eax
  _BYTE *v7; // rdx
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r13
  _BYTE *v12; // [rsp+8h] [rbp-60h]
  _BYTE *v13; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+20h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v13 = v3;
  v4 = &v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v14[0] = v3;
  v6 = sub_93BC0(v14, &v3[a3]);
  v7 = (_BYTE *)v14[0];
  v8 = v6;
  v13 = (_BYTE *)v14[0];
  if ( (unsigned __int64)v3 >= v14[0] )
    return 0;
  v9 = v6;
  if ( v6 != *(_QWORD *)(a1 + 24) )
  {
    v12 = (_BYTE *)v14[0];
    sub_40550((__int64 *)(a1 + 16), v6);
    v7 = v12;
  }
  if ( v8 )
  {
    v10 = 32 * v9;
    v11 = 0;
    while ( (unsigned __int8)sub_4DA00(v11 + *(_QWORD *)(a1 + 16), (const void **)&v13, v4 - v7) )
    {
      v11 += 32;
      v7 = v13;
      if ( v10 == v11 )
        goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  *a2 = v7;
  return 1;
}

