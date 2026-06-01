__int64 __fastcall sub_D59A10(__int64 a1, __int64 a2, __int64 a3, __int16 *a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int8 **v13; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int8 **v18; // [rsp+18h] [rbp-50h] BYREF
  void *v19; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-40h]
  char v21; // [rsp+2Ch] [rbp-3Ch]

  if ( *a4 >= 0 )
    goto LABEL_3;
  v17 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v13 = (unsigned __int8 **)sub_E0FFE0(a1, &v17, 2444, 0);
  v14 = (unsigned __int16)*a4;
  v21 = 0;
  v18 = v13;
  v20 = 16;
  v19 = (void *)v14;
  if ( v13 )
  {
    sub_CD4D00(&v18, (__int64)&v19);
    if ( v20 > 0x40 )
    {
      if ( v19 )
        operator delete[](v19);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
LABEL_3:
    if ( a5 > 1 && *a4 >= a5 )
    {
      v10 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v11 = (unsigned __int16)*a4;
      v20 = 16;
      v19 = (void *)v11;
      v21 = 0;
      v12 = *(_QWORD *)(v10 + 8);
      v18 = (unsigned __int8 **)sub_E0FF50(a1, v10, 2422, 0);
      if ( v18 )
      {
        sub_CD4D00(&v18, (__int64)&v19);
        if ( v18 )
        {
          sub_AC60B0(v18, v12, 8u);
          if ( v18 )
            sub_AC60B0(v18, a5, 3u);
        }
      }
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
      if ( !(_BYTE)result )
      {
        if ( v20 > 0x40 && v19 )
        {
          operator delete[](v19);
          return 0;
        }
        return result;
      }
      if ( v20 > 0x40 && v19 )
        operator delete[](v19);
    }
    if ( *(char *)(sub_E0E500(a1) + 1) < 0 )
      return 1;
    if ( (unsigned __int8)sub_D31740((__int64 *)a3) )
    {
      v9 = sub_DFB220(*(_QWORD *)(a1 + 400));
      v18 = (unsigned __int8 **)sub_E0FF50(a1, v9, 2427, 0);
      sub_D27A40((__int64)&v19, a3, 0);
      if ( v18 )
        sub_CD4D00(&v18, (__int64)&v19);
      if ( v20 > 0x40 )
      {
        if ( v19 )
          operator delete[](v19);
      }
    }
    else
    {
      v15 = *(_DWORD *)(a3 + 8);
      v19 = *(void **)a3;
      v20 = v15;
      if ( (unsigned int)sub_D583E0((__int64)&v19) >= *a4 )
        return 1;
      v16 = sub_DFB220(*(_QWORD *)(a1 + 400));
      sub_E0FF50(a1, v16, 2426, 0);
    }
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  }
  return result;
}

