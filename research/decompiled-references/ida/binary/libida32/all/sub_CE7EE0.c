__int64 __fastcall sub_CE7EE0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rsi
  unsigned __int8 v7; // [rsp+1h] [rbp-89h]
  unsigned __int8 v8; // [rsp+1h] [rbp-89h]
  char v9; // [rsp+Dh] [rbp-7Dh] BYREF
  int v10; // [rsp+Eh] [rbp-7Ch] BYREF
  void *v11; // [rsp+12h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+1Ah] [rbp-70h]
  char v13; // [rsp+1Eh] [rbp-6Ch]
  int v14; // [rsp+22h] [rbp-68h]
  void *v15; // [rsp+32h] [rbp-58h] BYREF
  unsigned int v16; // [rsp+3Ah] [rbp-50h]
  char v17; // [rsp+3Eh] [rbp-4Ch]
  int v18; // [rsp+42h] [rbp-48h]
  void *v19; // [rsp+52h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+5Ah] [rbp-30h]

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v4 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = *a3;
    v5 = sub_21CA140(a2);
    v6 = *(_QWORD *)(a1 + 560);
    v10 = v5;
    sub_CE7240((__int64)&v19, v6);
    sub_21CA150(&v15, &v19, &v10, &v9);
    v12 = v16;
    v11 = v15;
    v13 = v17;
    v14 = v18;
    if ( !v9 || (result = sub_DD4460(a1 + 384, v4, &v11), (_BYTE)result) )
    {
      sub_CE7D50(*(_QWORD *)(a1 + 560), (__int64)&v11);
      result = 1;
    }
    if ( v12 > 0x40 && v11 )
    {
      v7 = result;
      operator delete[](v11);
      result = v7;
    }
    if ( v20 > 0x40 )
    {
      if ( v19 )
      {
        v8 = result;
        operator delete[](v19);
        return v8;
      }
    }
  }
  return result;
}

