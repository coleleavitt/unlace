__int64 __fastcall sub_631310(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbp
  int v9; // edx
  const char *v11; // rsi
  void *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  _QWORD v15[5]; // [rsp+0h] [rbp-28h] BYREF

  v6 = a1;
  v15[1] = __readfsqword(0x28u);
  v9 = *(_DWORD *)(a2 + 56);
  if ( (v9 & 0x10) == 0 )
  {
    if ( (v9 & 0xF) != 0 || (v9 & 0x20) == 0 )
      return 0;
    return sub_630580((__int64)a1, a3, a2);
  }
  if ( (v9 & 0xF) == 0 )
    return sub_630580((__int64)a1, a3, a2);
  v11 = *(const char **)(a2 + 48);
  if ( v11 )
  {
    a1 = (_QWORD *)*a1;
    v12 = sub_62A340((__int64)a1, v11, 0);
    v9 = *(_DWORD *)(a2 + 56);
    v15[0] = v12;
    if ( (v9 & 4) == 0 )
      goto LABEL_7;
    return sub_7BF210(v15, *v6, a3);
  }
  v15[0] = a1[1];
  if ( (v9 & 4) != 0 )
    return sub_7BF210(v15, *v6, a3);
LABEL_7:
  v13 = *(unsigned __int8 *)(a2 + 32);
  if ( (v9 & 0x800) != 0 )
    return sub_7BF410(v15, *v6, a3, *(_QWORD *)(a2 + 8), v13);
  if ( (v9 & 2) != 0 )
    return sub_7BEA80(v15, *v6, a3, *(_QWORD *)(a2 + 8), v13);
  v14 = v9 & 0xF;
  if ( !(_DWORD)v14 )
    sub_629950(a1, v11, v14, a4, v13, a6);
  return sub_7BEED0(v15, *v6, a3, 1, *(_QWORD *)(a2 + 8), (unsigned __int8)v13 | 0x400u);
}
