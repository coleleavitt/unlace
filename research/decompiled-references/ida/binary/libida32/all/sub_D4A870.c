__int64 __fastcall sub_D4A870(__int64 a1, __int64 a2, __int64 a3, void **a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v8; // rax
  void *v9; // rdx
  __int64 v10; // rbp
  unsigned __int8 v11; // [rsp+1h] [rbp-39h]
  unsigned __int8 **v12; // [rsp+Ah] [rbp-30h] BYREF
  void *v13; // [rsp+12h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+1Ah] [rbp-20h]
  char v15; // [rsp+1Eh] [rbp-1Ch]

  result = 1;
  if ( a5 > 1 && a5 <= *(_DWORD *)a4 )
  {
    v8 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v9 = *a4;
    v14 = 64;
    v13 = v9;
    v15 = 1;
    v10 = *(_QWORD *)(v8 + 8);
    v12 = (unsigned __int8 **)sub_E0FF50(a1, v8, 2422, 0);
    if ( v12 )
    {
      sub_CD4D00(&v12, (__int64)&v13);
      if ( v12 )
      {
        sub_AC60B0(v12, v10, 8u);
        if ( v12 )
          sub_AC60B0(v12, a5, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( v14 > 0x40 )
    {
      if ( v13 )
      {
        v11 = result;
        operator delete[](v13);
        return v11;
      }
    }
  }
  return result;
}

