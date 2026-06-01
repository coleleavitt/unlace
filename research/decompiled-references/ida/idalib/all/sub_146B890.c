__int64 __fastcall sub_146B890(__int64 a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+8h] [rbp-40h]
  unsigned int v8; // [rsp+10h] [rbp-38h]
  _DWORD *v9; // [rsp+18h] [rbp-30h]
  int v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 16);
  sub_146B650((__int64)&v6, *(_QWORD *)(a1 + 8), (unsigned __int8 *)v1);
  v2 = *(__int64 **)(v1 + 16);
  v3 = &v2[*(unsigned int *)(v1 + 24)];
  while ( v3 != v2 )
  {
    v4 = *v2++;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
  }
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    result = (__int64)v9;
    for ( *v9 -= v10; v8; --v8 )
      result = sub_1564F70(v7);
  }
  else
  {
    sub_183CE10(*(_QWORD *)(v6 + 96), *(_QWORD *)(*(_QWORD *)(v6 + 96) + 608LL), *(_QWORD *)(v11 + 8));
    *v9 -= v10;
    for ( result = v8; v8; --v8 )
      result = sub_1564F70(v7);
  }
  return result;
}
