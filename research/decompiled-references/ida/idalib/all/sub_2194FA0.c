__int64 __fastcall sub_2194FA0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp+8h] [rbp-90h] BYREF
  __int64 v18; // [rsp+10h] [rbp-88h] BYREF
  char v19; // [rsp+18h] [rbp-80h]
  _BYTE v20[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v21; // [rsp+40h] [rbp-58h] BYREF
  __int16 v22; // [rsp+60h] [rbp-38h]

  sub_216EEC0((__int64)&v18, a1 + 7, (unsigned int)a2, a4, a5, a6);
  if ( (v19 & 1) != 0 )
  {
    v14 = v18;
    v18 = 0;
    v17 = v14;
    v15 = sub_2220DB0(&v17);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v20, v16, v15);
    v22 = 260;
    v21 = v20;
    sub_2221AD0(&v21, 1);
  }
  v6 = v18;
  sub_216EFC0(&v18);
  v11 = *(_DWORD *)(v6 + 4);
  if ( v11 == 1073741844 )
  {
    v12 = *(unsigned int *)(*(_QWORD *)(a1[18] + 16LL * (unsigned int)a2) + 16 * HIDWORD(a2) + 4);
  }
  else
  {
    if ( v11 == 9 )
    {
      v12 = *(_DWORD *)(sub_2194B30((__int64)a1, a2, v7, v8, v9, v10) + 4) >> 8;
      if ( !(_DWORD)v12 )
        return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
      return *(unsigned int *)(v6 + 24) | (unsigned __int64)(v12 << 32);
    }
    v12 = *(_DWORD *)(sub_2194DC0((__int64)a1, a2, v7, v8, v9, v10) + 4) >> 8;
  }
  if ( !(_DWORD)v12 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
  return *(unsigned int *)(v6 + 24) | (unsigned __int64)(v12 << 32);
}
