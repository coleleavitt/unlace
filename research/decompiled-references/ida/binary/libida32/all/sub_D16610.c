__int64 __fastcall sub_D16610(__int64 a1, __int64 a2, unsigned __int8 *a3, __int16 *a4, __int64 a5)
{
  __int64 v8; // rax
  __int16 v9; // cx
  unsigned __int8 **v10; // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // r12
  int v16; // edx
  int v17; // eax
  __int16 v18; // si
  int v19; // ecx
  __int16 v20; // cx
  __int16 v21; // dx
  __int64 v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 **v23; // [rsp+18h] [rbp-40h] BYREF
  void *v24; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-30h]
  char v26; // [rsp+2Ch] [rbp-2Ch]

  v8 = sub_E0E500(a1);
  v9 = *a4;
  if ( (*(_BYTE *)(v8 + 47) & 0x20) != 0 )
  {
    v9 = *a4 & 7;
    *a4 = v9;
    goto LABEL_11;
  }
  if ( v9 < 0 )
  {
    v22 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v10 = (unsigned __int8 **)sub_E0FFE0(a1, &v22, 2444, 0);
    v11 = (unsigned __int16)*a4;
    v26 = 0;
    v23 = v10;
    v25 = 16;
    v24 = (void *)v11;
    if ( v10 )
    {
      sub_CD4D00(&v23, (__int64)&v24);
      if ( v25 > 0x40 )
      {
        if ( v24 )
          operator delete[](v24);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      *a4 = -*a4;
      return sub_D16400(a1, a2, a3, a4, a5);
    }
    return result;
  }
  if ( v9 <= 7 )
    goto LABEL_11;
  v13 = sub_DFB220(*(_QWORD *)(a1 + 400));
  v14 = (unsigned __int16)*a4;
  v25 = 16;
  v24 = (void *)v14;
  v26 = 0;
  v15 = *(_QWORD *)(v13 + 8);
  v23 = (unsigned __int8 **)sub_E0FF50(a1, v13, 2422, 0);
  if ( v23 )
  {
    sub_CD4D00(&v23, (__int64)&v24);
    if ( v23 )
    {
      sub_AC60B0(v23, v15, 8u);
      if ( v23 )
        sub_AC60B0(v23, 8, 3u);
    }
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
    v9 = *a4;
    if ( *a4 > 7 )
    {
      v16 = *a3;
      if ( (_BYTE)v16 )
      {
        v17 = (unsigned __int8)v16;
        v18 = 4;
        v19 = (int)(unsigned __int8)v16 >> 4;
        if ( v19 )
        {
          v16 = (unsigned __int8)v19;
          v18 = 0;
        }
        if ( v16 >> 2 )
          v16 >>= 2;
        else
          v18 |= 2u;
        v20 = v18 | 1;
        if ( (unsigned int)v16 >> 1 )
          v20 = v18;
        v21 = v20;
      }
      else
      {
        v21 = 8;
        LOBYTE(v20) = 8;
        v17 = 0;
      }
      *a4 = v21;
      LOBYTE(a4) = v17 << v20;
      goto LABEL_12;
    }
LABEL_11:
    LODWORD(a4) = *a3 << v9;
LABEL_12:
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = (_BYTE)a4;
    return 1;
  }
  if ( v25 > 0x40 && v24 )
  {
    operator delete[](v24);
    return 0;
  }
  return result;
}

