__int64 __fastcall sub_146C890(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rdi
  _BYTE v7[32]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h]
  unsigned int v10; // [rsp+30h] [rbp-48h]
  _DWORD *v11; // [rsp+38h] [rbp-40h]
  int v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+48h] [rbp-30h]

  sub_146B650((__int64)&v8, a1, (unsigned __int8 *)a2);
  if ( *(_DWORD *)(a2 + 24) )
  {
    sub_19A2CD0(v7, *(_QWORD *)(a1 + 96), *(_QWORD *)(a2 + 8), 0, 1);
    v4 = *(__int64 **)(a2 + 16);
    v5 = &v4[*(unsigned int *)(a2 + 24)];
    while ( v5 != v4 )
    {
      v6 = *v4++;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
    }
    sub_19A2DA0(v7);
  }
  sub_183DE60(*(_QWORD *)(a1 + 96), *(_QWORD *)(a2 + 8));
  if ( (*(_BYTE *)v13 & 1) != 0 )
  {
    result = (__int64)v11;
    for ( *v11 -= v12; v10; --v10 )
      result = sub_1564F70(v9);
  }
  else
  {
    sub_183CE10(*(_QWORD *)(v8 + 96), *(_QWORD *)(*(_QWORD *)(v8 + 96) + 608LL), *(_QWORD *)(v13 + 8));
    *v11 -= v12;
    for ( result = v10; v10; --v10 )
      result = sub_1564F70(v9);
  }
  return result;
}
