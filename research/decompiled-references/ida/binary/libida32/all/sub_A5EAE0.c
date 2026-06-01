__int64 __fastcall sub_A5EAE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // r14
  __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // [rsp+8h] [rbp-60h]
  __int64 v21; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a2 + 112);
  v9 = *(_QWORD *)(v8 + 104);
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v9 & 1) == 0 )
  {
    v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v12 = v9 & 2;
      v13 = v11;
      if ( !(_DWORD)v12 )
        goto LABEL_4;
      v10 = sub_6C1EC0(v11, *(_QWORD *)(a2 + 112), v12, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v9 = v10 | 1;
      *(_QWORD *)(v8 + 104) = v10 | 1;
    }
  }
  v17 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = (_QWORD *)v17;
  if ( v10 )
  {
    if ( (v10 & 4) != 0 )
    {
      v13 = nullptr;
      if ( v17 )
      {
        v18 = *(_QWORD *)v17;
        v19 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
        if ( *(_DWORD *)(v17 + 8) != v19 )
        {
          *(_DWORD *)(v17 + 8) = v19;
          v20 = v17;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v8);
          v17 = v20;
        }
        v13 = *(_QWORD **)(v17 + 16);
      }
    }
  }
LABEL_4:
  while ( 1 )
  {
    v14 = v13[6];
    v21 = a3;
    v22[0] = &v21;
    v22[1] = a1;
    v13[6] = sub_A5E8A0(a1, v14, (__int64)sub_A50470, (__int64)v22);
    result = v13[13];
    if ( (result & 3) != 0 )
      break;
    result &= 0xFFFFFFFFFFFFFFFCLL;
    if ( !result )
      break;
    v13 = (_QWORD *)result;
  }
  v16 = *(_QWORD *)(a1 + 18368);
  if ( v16 )
  {
    result = *(_QWORD *)(*(_QWORD *)v16 + 72LL);
    if ( (void (*)())result != nullsub_435 )
      return ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))result)(v16, v13, a3);
  }
  return result;
}

