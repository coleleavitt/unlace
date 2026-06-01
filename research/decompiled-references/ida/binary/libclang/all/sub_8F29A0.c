__int64 __fastcall sub_8F29A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned __int8 v10; // [rsp+1h] [rbp-59h]
  unsigned __int8 v11; // [rsp+1h] [rbp-59h]
  void *v12; // [rsp+2h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+Ah] [rbp-50h]
  char v14; // [rsp+Eh] [rbp-4Ch]
  int v15; // [rsp+12h] [rbp-48h]
  void *v16; // [rsp+22h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+2Ah] [rbp-30h]
  char v18; // [rsp+2Eh] [rbp-2Ch]
  int v19; // [rsp+32h] [rbp-28h]

  result = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v3 = *(_QWORD *)(a1 + 568);
    v4 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a2;
    v5 = sub_A1A5A0(v3, 24);
    v6 = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(v5 + 8) = 0;
    v17 = v6;
    v16 = *(void **)v5;
    LOBYTE(v6) = *(_BYTE *)(v5 + 12);
    LODWORD(v5) = *(_DWORD *)(v5 + 16);
    v18 = v6;
    v19 = v5;
    sub_A1A5E0(v3, 24);
    v7 = *(_QWORD *)(a1 + 568);
    v8 = sub_A1A5A0(v7, 24);
    v9 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = 0;
    v13 = v9;
    v12 = *(void **)v8;
    LOBYTE(v9) = *(_BYTE *)(v8 + 12);
    LODWORD(v8) = *(_DWORD *)(v8 + 16);
    v14 = v9;
    v15 = v8;
    sub_A1A5E0(v7, 24);
    result = sub_8D7350(a1 + 384, v4, (__int64)&v12, (__int64)&v16);
    if ( v13 > 0x40 && v12 )
    {
      v10 = result;
      operator delete[](v12);
      result = v10;
    }
    if ( v17 > 0x40 )
    {
      if ( v16 )
      {
        v11 = result;
        operator delete[](v16);
        return v11;
      }
    }
  }
  return result;
}

