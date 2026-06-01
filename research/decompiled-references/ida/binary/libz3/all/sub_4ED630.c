char __fastcall sub_4ED630(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // rax
  __int16 v5; // dx
  _DWORD *v6; // rcx
  char result; // al
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // [rsp+14h] [rbp-44h] BYREF
  int v15; // [rsp+18h] [rbp-40h] BYREF
  _DWORD v16[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = sub_4D6490(*(_QWORD *)(v3 + 24));
  v5 = *(_WORD *)(a2 + 4);
  if ( v5 || (v6 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr || *v6 )
  {
    if ( a2 != *(_QWORD *)(v4 + 856) && a2 != *(_QWORD *)(v4 + 864) )
      return v5 == 1;
  }
  else
  {
    v8 = v6[1];
    if ( v8 != 5 && v8 != 6 && v8 != 8 && a2 != *(_QWORD *)(v4 + 856) && a2 != *(_QWORD *)(v4 + 864) )
    {
      if ( v8 != 2 || *(_DWORD *)(a2 + 24) != 2 )
        return v5 == 1;
      v11 = *(_QWORD *)(a2 + 32);
      v12 = *(_QWORD *)(a2 + 40);
      v13 = sub_15D1F10(v11);
      if ( !(unsigned __int8)sub_1673B10(v3 + 48, v13)
        || (!(unsigned __int8)sub_4ED250(a1, v11, &v14, &v15, v16)
         || *(_WORD *)(v12 + 4)
         || (*(_BYTE *)(v12 + 30) & 1) == 0)
        && (!(unsigned __int8)sub_4ED250(a1, v12, &v14, &v15, v16)
         || *(_WORD *)(v11 + 4)
         || (*(_BYTE *)(v11 + 30) & 1) == 0) )
      {
        v5 = *(_WORD *)(a2 + 4);
        return v5 == 1;
      }
      return 1;
    }
  }
  v9 = *(unsigned int *)(a2 + 24);
  v10 = a2 + 8 * v9;
  if ( !(_DWORD)v9 )
    return 1;
  while ( 1 )
  {
    result = sub_4ED630(a1, *(_QWORD *)(v2 + 32));
    if ( !result )
      break;
    v2 += 8;
    if ( v10 == v2 )
      return 1;
  }
  return result;
}

