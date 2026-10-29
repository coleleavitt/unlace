__int64 __fastcall sub_B95BC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int8 v5; // bl
  void *v6; // r13
  __int64 v7; // rsi
  __int64 result; // rax
  void *v9; // rdi
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int8 v13; // [rsp+Fh] [rbp-39h]
  void *v14; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+18h] [rbp-30h]

  v3 = sub_A72040(*(_QWORD **)a1, a2);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 2 > 1 )
    return 0;
  v5 = *(_BYTE *)(v3 + 19);
  v6 = (void *)*(unsigned int *)(a1 + 24);
  v7 = *(_QWORD *)(v3 + 40);
  if ( (v5 & 2) != 0 )
  {
    v15 = *(_DWORD *)(v7 + 8);
    if ( v15 <= 0x40 )
    {
      v14 = *(void **)v7;
      goto LABEL_6;
    }
    sub_2205510(&v14);
    v10 = v15;
  }
  else
  {
    v10 = 8 * ((v5 >> 2) & 0x1F);
    v15 = v10;
    if ( v10 > 64 )
    {
      sub_2205470(&v14, v7, 0);
      v10 = v15;
    }
    else
    {
      v14 = (void *)v7;
    }
  }
  if ( (unsigned int)v10 <= 0x40 )
  {
LABEL_6:
    result = 0;
    if ( v6 != v14 )
      return result;
    goto LABEL_7;
  }
  v11 = sub_2206780(&v14);
  v9 = v14;
  v12 = v10 - v11;
  result = 0;
  if ( v12 > 0x40 )
    goto LABEL_15;
  LOBYTE(result) = 0;
  if ( v6 != *(void **)v14 )
    goto LABEL_20;
LABEL_7:
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 8))(*(_QWORD *)(a1 + 16), *(_QWORD *)(v4 + 32));
  if ( v15 <= 0x40 )
    return result;
  v9 = v14;
LABEL_15:
  if ( v9 )
  {
LABEL_20:
    v13 = result;
    operator delete[](v9);
    return v13;
  }
  return result;
}
