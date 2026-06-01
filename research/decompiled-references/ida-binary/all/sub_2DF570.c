unsigned __int64 __fastcall sub_2DF570(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdi
  __int64 v5; // rax
  _BYTE *v6; // rdi
  _BYTE *v7; // rdi
  __int64 *v9; // [rsp+0h] [rbp-48h] BYREF
  int v10; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+10h] [rbp-38h]
  __int64 *v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  unsigned __int64 v15; // [rsp+38h] [rbp-10h]

  v2 = *a2;
  v15 = __readfsqword(0x28u);
  v4 = (_BYTE *)a1[111];
  v9 = &idaplace_t___vtable;
  v11 = v2;
  v5 = a2[1];
  v10 = 0;
  v13 = 0x7FFFFFFF;
  v12 = &idaplace_t___vtable;
  v14 = v5 - 1;
  if ( v4 )
    sub_174F50(v4, (__int64)&v9, (__int64)&v12);
  v6 = (_BYTE *)a1[112];
  if ( v6 )
    sub_174F50(v6, (__int64)&v9, (__int64)&v12);
  v7 = (_BYTE *)a1[113];
  if ( v7 )
    sub_174F50(v7, (__int64)&v9, (__int64)&v12);
  return v15 - __readfsqword(0x28u);
}
