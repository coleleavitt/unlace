__int64 __fastcall sub_D18F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void **a5)
{
  unsigned int v9; // ebp
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  _DWORD *v14; // rbp
  char v15; // bl
  __int64 result; // rax
  unsigned int v17; // eax
  unsigned __int8 **v18; // rax
  unsigned int v19; // r8d
  bool v20; // cc
  __int64 v21; // rsi
  __int64 v22; // r15
  unsigned int v23; // [rsp+Ch] [rbp-6Ch]
  unsigned int v24; // [rsp+Ch] [rbp-6Ch]
  char v25; // [rsp+Ch] [rbp-6Ch]
  unsigned __int8 v26; // [rsp+Ch] [rbp-6Ch]
  unsigned int v27; // [rsp+Ch] [rbp-6Ch]
  unsigned __int8 **v28; // [rsp+18h] [rbp-60h] BYREF
  void *v29; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v30; // [rsp+28h] [rbp-50h]
  char v31; // [rsp+2Ch] [rbp-4Ch]
  void *v32; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-40h]
  char v34; // [rsp+3Ch] [rbp-3Ch]

  v9 = *(_DWORD *)(a3 + 8);
  if ( (*(_BYTE *)(sub_E0E500(a1) + 47) & 0x20) == 0 )
    goto LABEL_11;
  v10 = *(_DWORD *)(a4 + 8);
  v11 = *(_BYTE *)(a4 + 12);
  v12 = v9 - 1;
  v30 = v10;
  if ( v10 <= 0x40 )
  {
    v29 = (void *)(v9 - 1);
    v33 = v10;
    v32 = v29;
    v30 = 0;
    v34 = v11;
LABEL_4:
    *(_QWORD *)a4 &= v12;
    goto LABEL_5;
  }
  v25 = v11;
  sub_21E1730(&v29, v12, 0);
  v10 = v30;
  v12 = (unsigned __int64)v29;
  v30 = 0;
  v20 = *(_DWORD *)(a4 + 8) <= 0x40u;
  v33 = v10;
  v32 = v29;
  v34 = v25;
  if ( v20 )
    goto LABEL_4;
  sub_21E1E20(a4, &v32);
  v10 = v33;
LABEL_5:
  if ( v10 > 0x40 && v32 )
    operator delete[](v32);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
LABEL_11:
  if ( *(_BYTE *)(a4 + 12) )
  {
    v13 = *(_QWORD *)a4;
    if ( *(_DWORD *)(a4 + 8) > 0x40u )
      v13 = *(_QWORD *)v13;
LABEL_14:
    if ( (int)v13 >= 0 )
      goto LABEL_15;
    goto LABEL_29;
  }
  if ( sub_CCCAE0((__int64 *)a4) )
  {
    v29 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v32 = (void *)sub_E0FFE0(a1, &v29, 2444, 0);
    if ( v32 )
      sub_CD4D00((unsigned __int8 ***)&v32, a4);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      sub_BF2C20((__int64)&v32, a4);
      result = sub_D18AF0(a1, a2, a3, (__int64)&v32, a5);
      if ( v33 > 0x40 )
      {
LABEL_43:
        if ( v32 )
        {
          v26 = result;
          operator delete[](v32);
          return v26;
        }
        return result;
      }
    }
    return result;
  }
  v17 = *(_DWORD *)(a4 + 8);
  v13 = *(_QWORD *)a4;
  if ( v17 > 0x40 )
  {
    LODWORD(v13) = *(_DWORD *)v13;
    goto LABEL_14;
  }
  if ( !v17 )
  {
    LODWORD(v13) = 0;
LABEL_15:
    if ( v9 <= 1 || v9 > (unsigned int)v13 )
    {
LABEL_17:
      LODWORD(v14) = v9 - 1;
      if ( !sub_9C8900(a4, (unsigned int)v14) )
      {
        v14 = *(_DWORD **)a4;
        if ( *(_DWORD *)(a4 + 8) > 0x40u )
          LODWORD(v14) = *v14;
      }
      v15 = *(_BYTE *)(a3 + 12);
      sub_CD4410((__int64)&v32, a3, (unsigned int)v14);
      v31 = v15;
      v30 = v33;
      v29 = v32;
      sub_CCCB10(a5, (__int64)&v29);
      if ( v30 > 0x40 )
      {
        if ( v29 )
          operator delete[](v29);
      }
      *(__m128i *)sub_DFD980(*(_QWORD *)(a1 + 176), 16) = _mm_loadu_si128((const __m128i *)a5);
      return 1;
    }
    v27 = v13;
    v21 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v33 = 32;
    v32 = (void *)v27;
    v34 = 0;
    v22 = *(_QWORD *)(v21 + 8);
    v29 = (void *)sub_E0FF50(a1, v21, 2422, 0);
    if ( v29 )
    {
      sub_CD4D00((unsigned __int8 ***)&v29, (__int64)&v32);
      if ( v29 )
      {
        sub_AC60B0((unsigned __int8 **)v29, v22, 8u);
        if ( v29 )
          sub_AC60B0((unsigned __int8 **)v29, v9, 3u);
      }
    }
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
    if ( (_BYTE)result )
    {
      if ( v33 > 0x40 && v32 )
        operator delete[](v32);
      goto LABEL_17;
    }
    if ( v33 <= 0x40 )
      return result;
    goto LABEL_43;
  }
  v13 = v13 << (64 - (unsigned __int8)v17) >> (64 - (unsigned __int8)v17);
  if ( (int)v13 >= 0 )
    goto LABEL_15;
LABEL_29:
  v23 = v13;
  v29 = (void *)sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v18 = (unsigned __int8 **)sub_E0FFE0(a1, &v29, 2444, 0);
  v34 = 0;
  v28 = v18;
  v33 = 32;
  v19 = v23;
  v32 = (void *)v23;
  if ( v18 )
  {
    sub_CD4D00(&v28, (__int64)&v32);
    v19 = v23;
    if ( v33 > 0x40 )
    {
      if ( v32 )
      {
        operator delete[](v32);
        v19 = v23;
      }
    }
  }
  v24 = v19;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v13) = v24;
  if ( (_BYTE)result )
    goto LABEL_15;
  return result;
}

