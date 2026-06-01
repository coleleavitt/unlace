__int64 __fastcall sub_D63830(__int64 a1, __int64 a2, unsigned int *a3, char *a4, __int64 a5)
{
  __int64 v8; // rax
  char v9; // cl
  unsigned __int8 **v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  int v13; // ebp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v18; // [rsp+18h] [rbp-40h] BYREF
  void *v19; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+28h] [rbp-30h]
  char v21; // [rsp+2Ch] [rbp-2Ch]

  v8 = sub_E32240(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 &= 0x1Fu;
    *a4 = v9;
    goto LABEL_11;
  }
  if ( v9 < 0 )
  {
    v17 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E33D20(a1, &v17, 2444, 0);
    v11 = (unsigned __int8)*a4;
    v21 = 0;
    v18 = v10;
    v20 = 8;
    v19 = (void *)v11;
    if ( v10 )
    {
      sub_CF8A40(&v18, (__int64)&v19);
      if ( v20 > 0x40 )
      {
        if ( v19 )
          operator delete[](v19);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_D636B0(a1, a2, a3, a4, a5);
    }
    return result;
  }
  if ( v9 <= 31 )
    goto LABEL_11;
  v14 = sub_E1EF60(*(_QWORD *)(a1 + 400));
  v15 = (unsigned __int8)*a4;
  v20 = 8;
  v19 = (void *)v15;
  v21 = 0;
  v16 = *(_QWORD *)(v14 + 8);
  v18 = (unsigned __int8 **)sub_E33C90(a1, v14, 2422, 0);
  if ( v18 )
  {
    sub_CF8A40(&v18, (__int64)&v19);
    if ( v18 )
    {
      sub_AE9DF0(v18, v16, 8u);
      if ( v18 )
        sub_AE9DF0(v18, 32, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v20 > 0x40 && v19 )
      operator delete[](v19);
    v9 = *a4;
    if ( *a4 > 31 )
    {
      v13 = -1;
      goto LABEL_12;
    }
LABEL_11:
    v13 = (int)*a3 >> v9;
LABEL_12:
    *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v13;
    return 1;
  }
  if ( v20 > 0x40 && v19 )
  {
    operator delete[](v19);
    return 0;
  }
  return result;
}
