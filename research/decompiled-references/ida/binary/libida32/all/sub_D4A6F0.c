__int64 __fastcall sub_D4A6F0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned __int8 **v8; // rax
  void *v9; // rdx
  __int64 v10; // rax
  void *v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // [rsp+Fh] [rbp-49h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v15; // [rsp+18h] [rbp-40h] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+28h] [rbp-30h]
  char v18; // [rsp+2Ch] [rbp-2Ch]

  if ( *a4 >= 0 )
    goto LABEL_2;
  v14 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v8 = (unsigned __int8 **)sub_E0FFE0(a1, &v14, 2444, 0);
  v9 = (void *)*a4;
  v18 = 0;
  v15 = v8;
  v17 = 64;
  v16 = v9;
  if ( v8 )
  {
    sub_CD4D00(&v15, (__int64)&v16);
    if ( v17 > 0x40 )
    {
      if ( v16 )
        operator delete[](v16);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_2:
    result = 1;
    if ( a5 > 1 && a5 <= *(_DWORD *)a4 )
    {
      v10 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v11 = (void *)*a4;
      v17 = 64;
      v16 = v11;
      v18 = 0;
      v12 = *(_QWORD *)(v10 + 8);
      v15 = (unsigned __int8 **)sub_E0FF50(a1, v10, 2422, 0);
      if ( v15 )
      {
        sub_CD4D00(&v15, (__int64)&v16);
        if ( v15 )
        {
          sub_AC60B0(v15, v12, 8u);
          if ( v15 )
            sub_AC60B0(v15, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( v17 > 0x40 )
      {
        if ( v16 )
        {
          v13 = result;
          operator delete[](v16);
          return v13;
        }
      }
    }
  }
  return result;
}

