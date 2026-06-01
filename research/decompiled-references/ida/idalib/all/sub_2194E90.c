__int64 __fastcall sub_2194E90(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // [rsp+8h] [rbp-90h] BYREF
  __int64 v17; // [rsp+10h] [rbp-88h] BYREF
  char v18; // [rsp+18h] [rbp-80h]
  _BYTE v19[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v20; // [rsp+40h] [rbp-58h] BYREF
  __int16 v21; // [rsp+60h] [rbp-38h]

  sub_216EEC0((__int64)&v17, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v18 & 1) != 0 )
  {
    v13 = v17;
    v17 = 0;
    v16 = v13;
    v14 = sub_2220DB0(&v16);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v19, v15, v14);
    v21 = 260;
    v20 = v19;
    sub_2221AD0(&v20, 1);
  }
  v6 = v17;
  sub_216EFC0(&v17);
  v11 = *(_DWORD *)(v6 + 4);
  if ( v11 == 1073741844 )
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL * (unsigned int)a2) + 16 * HIDWORD(a2) + 8);
  if ( v11 == 9 )
    return *(unsigned __int8 *)(sub_2194B30(a1, a2, v7, v8, v9, v10) + 4);
  return *(unsigned __int8 *)(sub_2194DC0(a1, a2, v7, v8, v9, v10) + 4);
}
