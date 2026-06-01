unsigned __int64 __fastcall sub_F56FF0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  __int64 v4; // rsi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned __int8 v7; // al
  unsigned __int64 result; // rax
  unsigned __int64 v9; // [rsp+0h] [rbp-48h]
  unsigned int v10; // [rsp+0h] [rbp-48h]
  unsigned int v11; // [rsp+0h] [rbp-48h]
  unsigned int v12; // [rsp+Ch] [rbp-3Ch]
  unsigned int v13; // [rsp+Ch] [rbp-3Ch]
  void *v14; // [rsp+10h] [rbp-38h] BYREF
  int v15; // [rsp+18h] [rbp-30h]

  v2 = nullptr;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = (*(_BYTE *)(a1 + 18) >> 3) & 7;
  v6 = (*(_WORD *)(a1 + 18) >> 6) & 7;
  if ( (*(_BYTE *)(a1 + 19) & 2) != 0 )
    v2 = *(_DWORD **)(v4 + 16);
  v7 = *(_BYTE *)(a1 + 19);
  if ( (v7 & 2) != 0 )
  {
    v15 = *(_DWORD *)(v4 + 8);
    if ( (unsigned int)v15 > 0x40 )
    {
      v12 = v6;
      v10 = v5;
      sub_2205510(&v14);
      v5 = v10;
      v6 = v12;
    }
    else
    {
      v14 = *(void **)v4;
    }
  }
  else
  {
    v15 = 8 * ((v7 >> 2) & 0x1F);
    if ( v15 > 64 )
    {
      v13 = v6;
      v11 = v5;
      sub_2205470(&v14, v4, 0);
      v6 = v13;
      v5 = v11;
    }
    else
    {
      v14 = (void *)v4;
    }
  }
  result = sub_A70F70(a2, *(_QWORD *)(a1 + 32), (__int64)&v14, v2, v6, v5);
  if ( (unsigned int)v15 > 0x40 )
  {
    if ( v14 )
    {
      v9 = result;
      operator delete[](v14);
      return v9;
    }
  }
  return result;
}
