__int64 __fastcall sub_D3D970(__int64 a1, __int64 a2, _WORD *a3, __int16 *a4, __int64 a5)
{
  __int64 v8; // rax
  __int16 v9; // cx
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

  v8 = sub_E0E500(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 = *a4 & 0xF;
    *a4 = v9;
    goto LABEL_11;
  }
  if ( v9 < 0 )
  {
    v17 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E0FFE0(a1, &v17, 2444, 0);
    v11 = (unsigned __int16)*a4;
    v21 = 0;
    v18 = v10;
    v20 = 16;
    v19 = (void *)v11;
    if ( v10 )
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
      *a4 = -*a4;
      return sub_D3D7B0(a1, a2, a3, a4, a5);
    }
    return result;
  }
  if ( v9 <= 15 )
    goto LABEL_11;
  v14 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v15 = (unsigned __int16)*a4;
  v20 = 16;
  v19 = (void *)v15;
  v21 = 0;
  v16 = *(_QWORD *)(v14 + 8);
  v18 = (unsigned __int8 **)sub_E0FF50(a1, v14, 2422, 0);
  if ( v18 )
  {
    sub_CD4D00(&v18, (__int64)&v19);
    if ( v18 )
    {
      sub_AC60B0(v18, v16, 8u);
      if ( v18 )
        sub_AC60B0(v18, 16, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v20 > 0x40 && v19 )
      operator delete[](v19);
    v9 = *a4;
    if ( *a4 > 15 )
    {
      LOWORD(v13) = -1;
      goto LABEL_12;
    }
LABEL_11:
    v13 = (__int16)*a3 >> v9;
LABEL_12:
    *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v13;
    return 1;
  }
  if ( v20 > 0x40 && v19 )
  {
    operator delete[](v19);
    return 0;
  }
  return result;
}

