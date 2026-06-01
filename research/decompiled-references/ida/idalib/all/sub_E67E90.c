_QWORD *__fastcall sub_E67E90(__int64 *a1)
{
  __int64 v1; // rdx
  __int16 v2; // cx
  _QWORD *v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // [rsp+0h] [rbp-88h] BYREF
  __int64 v12; // [rsp+8h] [rbp-80h]
  int v13; // [rsp+10h] [rbp-78h]
  __int16 v14; // [rsp+20h] [rbp-68h] BYREF
  __int64 v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+38h] [rbp-50h]

  v1 = a1[1];
  v2 = *(_WORD *)v1;
  v3 = (_QWORD *)(v1 + 64);
  result = (_QWORD *)(v1 + 80);
  v5 = *(unsigned int *)(v1 + 4);
  if ( (v2 & 0x1FF) == 0x18 )
    result = v3;
  v6 = &result[v5];
  if ( result != v6 )
  {
    v7 = result;
    do
    {
      v8 = *a1;
      ++v7;
      sub_E673B0((__int64)&v11, *a1, *result & 0xFFFFFFFFFFFFFFF8LL);
      v14 = 7;
      v9 = v11;
      v11 = 0;
      v15 = v9;
      v10 = v12;
      v12 = 0;
      v16 = v10;
      LODWORD(v10) = v13;
      v13 = 0;
      v17 = v10;
      sub_222CAC0(v8 + 1048, &v14);
      sub_222B2A0(&v14);
      sub_E5D2E0(&v11);
      result = v7;
    }
    while ( v6 != v7 );
  }
  return result;
}
