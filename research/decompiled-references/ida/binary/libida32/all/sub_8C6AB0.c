bool __fastcall sub_8C6AB0(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // r13
  unsigned __int64 v4; // rbx
  bool result; // al
  unsigned int v6; // r14d
  char *v7; // rax
  __int64 v8; // r15
  char *v9; // rdx
  char *v10; // [rsp+8h] [rbp-60h]
  char *v11; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v11 = v3;
  v4 = (unsigned __int64)&v3[a3];
  if ( __CFADD__(v3, a3) )
    return 0;
  v12[0] = v3;
  v6 = unpack_dd(v12);
  v7 = (char *)v12[0];
  v11 = (char *)v12[0];
  if ( (unsigned __int64)v3 >= v12[0] )
    return 0;
  if ( v6 != *(_QWORD *)(a1 + 24) )
  {
    v10 = (char *)v12[0];
    sub_8B65B0((__int64 *)(a1 + 16), v6);
    v7 = v10;
  }
  if ( v6 )
  {
    v8 = 0;
    while ( (unsigned __int8)sub_7BE9B0((__int64 *)(v8 + *(_QWORD *)(a1 + 16)), (const void **)&v11, v4) )
    {
      v8 += 24;
      if ( 24LL * v6 == v8 )
      {
        v7 = v11;
        goto LABEL_12;
      }
    }
    return 0;
  }
LABEL_12:
  if ( !sub_8C6950(a1 + 40, (const void **)&v11, v4 - (_QWORD)v7) )
    return 0;
  result = sub_7BFDB0((_DWORD *)(a1 + 120), (unsigned __int64 *)&v11);
  if ( !result )
    return 0;
  if ( (unsigned __int64)v11 >= v4 )
  {
    *(_BYTE *)(a1 + 124) = 0;
    return 0;
  }
  v9 = v11 + 1;
  *(_BYTE *)(a1 + 124) = *v11;
  *a2 = v9;
  return result;
}

