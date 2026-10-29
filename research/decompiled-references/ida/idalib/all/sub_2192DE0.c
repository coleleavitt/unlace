unsigned __int64 __fastcall sub_2192DE0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-90h] BYREF
  __int64 v20; // [rsp+10h] [rbp-88h] BYREF
  char v21; // [rsp+18h] [rbp-80h]
  _BYTE v22[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v23; // [rsp+40h] [rbp-58h] BYREF
  __int16 v24; // [rsp+60h] [rbp-38h]

  sub_216F820((__int64)&v20, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v21 & 1) != 0 )
  {
    v16 = v20;
    v20 = 0;
    v19 = v16;
    v17 = sub_2220DB0(&v19);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v18 + 32LL))(v22, v18, v17);
    v24 = 260;
    v23 = v22;
    sub_2221AD0(&v23, 1);
  }
  v6 = v20;
  sub_216F910(&v20);
  v11 = *(_DWORD *)(v6 + 4);
  if ( v11 != 1073741844 )
  {
    if ( v11 == 9 )
    {
      v15 = sub_2192A80(a1, a2, v7, v8, v9, v10);
      v13 = *(_QWORD *)(a1 + 56);
      result = *(_QWORD *)(v15 + 8);
      if ( *(_WORD *)(v13 + 18) != 8 )
        return (unsigned int)result;
    }
    else
    {
      v12 = sub_2192D10(a1, a2, v7, v8, v9, v10);
      v13 = *(_QWORD *)(a1 + 56);
      result = *(_QWORD *)(v12 + 8);
      if ( *(_WORD *)(v13 + 18) != 8 )
        return (unsigned int)result;
    }
    if ( *(_BYTE *)(v13 + 4) == 2 && *(_BYTE *)(v13 + 5) == 1 )
      return (unsigned int)((result >> 24) & 0xFF0000
                          | (result >> 8) & 0xFF000000
                          | HIBYTE(result)
                          | (result << 32)
                          | (result >> 40) & 0xFF00);
    return (unsigned int)result;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL * (unsigned int)a2) + 24 * HIDWORD(a2) + 12);
}
