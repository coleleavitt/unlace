__int64 __fastcall sub_162AC50(__int64 **a1, _QWORD *a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 *v5; // r10
  __int64 v6; // r9
  _DWORD *v7; // r14
  __int64 result; // rax
  __int64 *v9; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned int v15; // edi
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rsi
  __int64 v19; // r13
  unsigned int v20; // eax
  unsigned __int8 v21; // [rsp+Fh] [rbp-D9h]
  unsigned __int8 v22; // [rsp+Fh] [rbp-D9h]
  __int64 v23; // [rsp+18h] [rbp-D0h] BYREF
  void *v24; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-C0h]
  char v26; // [rsp+2Ch] [rbp-BCh]
  _BYTE v27[184]; // [rsp+30h] [rbp-B8h] BYREF

  v5 = a1[1];
  v6 = **a1;
  v7 = *(_DWORD **)(v6 + 8 * (*(unsigned int *)v5 + (unsigned __int64)((*(_BYTE *)(v6 + 2) & 8) != 0)) + 40);
  result = 0;
  if ( ((*v7 >> 14) & 0xC) != 0 )
    return result;
  v9 = a1[2];
  v25 = 1;
  v13 = *(unsigned int *)v5;
  v14 = *v9;
  v26 = 0;
  v24 = nullptr;
  result = sub_16D4840(v14, v6, v13, &v24);
  v15 = v25;
  if ( !(_BYTE)result )
  {
    if ( v25 <= 0x40 )
    {
      v16 = 0;
      if ( v25 )
        v16 = (__int64)((_QWORD)v24 << (64 - (unsigned __int8)v25)) >> (64 - (unsigned __int8)v25);
    }
    else
    {
      v16 = *(_QWORD *)v24;
    }
    v17 = &a2[a3];
    if ( a2 != v17 )
    {
      if ( *a2 == v16 )
        goto LABEL_12;
      v18 = a2 + 1;
      while ( v17 != v18 )
      {
        if ( *v18++ == v16 )
          goto LABEL_12;
      }
    }
    v19 = (__int64)a1[2];
    v20 = sub_BF6D70(**a1);
    sub_168B9F0(v27, v19, v20, a4, 0);
    v23 = sub_EEC8C0((unsigned __int64)v7, v19, a5);
    v21 = *(_BYTE *)(sub_1587DB0((__int64)v27, &v23) + 120);
    sub_15F7200(v27);
    v15 = v25;
    result = v21;
  }
LABEL_12:
  if ( v15 > 0x40 )
  {
    if ( v24 )
    {
      v22 = result;
      operator delete[](v24);
      return v22;
    }
  }
  return result;
}
