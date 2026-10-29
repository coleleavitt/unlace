__int64 __fastcall sub_C5C6C0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r13d
  _WORD *v13; // rax
  __int64 v14; // rdi
  __int64 *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int64 v20; // [rsp+4h] [rbp-34h] BYREF
  char v21; // [rsp+Ch] [rbp-2Ch]

  v6 = a3;
  v7 = *(_QWORD **)(*a1 + 16);
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    v6 = *(_QWORD *)(a2 + 8);
  v8 = sub_A72040(v7, v6);
  if ( v8 && (unsigned int)*(unsigned __int8 *)(v8 + 16) - 2 <= 1 )
  {
    v12 = sub_BFD4B0((_QWORD *)a2, v6, v9, v10, v11);
    if ( (_BYTE)v12 )
    {
      v13 = (_WORD *)sub_BFBAE0(**(_QWORD **)(a2 + 16));
      v14 = *a1;
      if ( (*v13 & 0x1FF) == 9 )
      {
        sub_C152A0((__int64 *)(v14 + 16), (__int64)v13, a1[2], a3);
        return v12;
      }
      else
      {
        return (unsigned int)sub_C14310(v14, a2);
      }
    }
    else
    {
      v18 = *(_QWORD *)(a2 + 56);
      v19 = 0;
      if ( v18 && (v18 & 2) == 0 )
        v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
      return (unsigned int)sub_C5B7B0(
                             a1,
                             a2,
                             *(unsigned __int64 **)(a2 + 16),
                             (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - *(_QWORD *)(a2 + 16)) >> 3),
                             v19,
                             a3);
    }
  }
  else
  {
    v16 = (__int64 *)sub_E33C10(*a1, a2, 108, 0);
    v17 = sub_EEC8C0(a2);
    if ( v16 )
    {
      v20 = v17;
      v21 = 1;
      sub_AEC610(v16, &v20);
    }
    return 0;
  }
}
