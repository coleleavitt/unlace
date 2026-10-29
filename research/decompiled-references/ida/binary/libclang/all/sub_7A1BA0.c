__int64 __fastcall sub_7A1BA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int8 v6; // al
  void *v7; // r13
  __int64 v8; // rsi
  void *v9; // rdi
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // r12d
  unsigned __int8 v13; // [rsp+Fh] [rbp-39h]
  void *v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-30h]

  v3 = sub_6D9A50(*(_QWORD **)a1, a2);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( (unsigned __int8)(*(_BYTE *)(v3 + 16) - 2) > 1u )
    return 0;
  v6 = *(_BYTE *)(v3 + 19);
  v7 = (void *)*(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)(v4 + 40);
  if ( (v6 & 2) != 0 )
  {
    v15 = *(_DWORD *)(v8 + 8);
    if ( v15 <= 0x40 )
    {
      v14 = *(void **)v8;
      goto LABEL_10;
    }
    sub_2585B30(&v14);
  }
  else
  {
    v15 = 8 * ((v6 >> 2) & 0x1F);
    if ( (int)v15 <= 64 )
    {
      v14 = (void *)v8;
      goto LABEL_10;
    }
    sub_2585A50(&v14, v8, 0);
  }
  v10 = v15;
  if ( v15 <= 0x40 )
  {
LABEL_10:
    if ( v7 != v14 )
      return 0;
    goto LABEL_11;
  }
  v11 = sub_2587400(&v14);
  v9 = v14;
  v12 = v10 - v11;
  result = 0;
  if ( v12 > 0x40 )
    goto LABEL_16;
  if ( v7 != *(void **)v14 )
  {
    operator delete[](v14);
    return 0;
  }
LABEL_11:
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(*(_QWORD *)(a1 + 16), *(_QWORD *)(v4 + 32));
  if ( v15 <= 0x40 )
    return result;
  v9 = v14;
LABEL_16:
  if ( v9 )
  {
    v13 = result;
    operator delete[](v9);
    return v13;
  }
  return result;
}

