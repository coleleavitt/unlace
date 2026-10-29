unsigned __int64 __fastcall sub_2185C40(_QWORD *a1, _DWORD *a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-B0h]
  __int64 v15; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+20h] [rbp-98h] BYREF
  char v17; // [rsp+28h] [rbp-90h]
  _BYTE v18[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v19; // [rsp+50h] [rbp-68h] BYREF
  __int16 v20; // [rsp+70h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1);
  v6 = a2[1];
  if ( v6 == 1073741844 )
    return ((unsigned __int64)*(unsigned int *)(a1[18] + 16LL * (unsigned int)v3 + 8) << 32) | (unsigned int)v3;
  if ( v6 == 9 || v6 == 4 )
  {
    sub_216EEC0((__int64)&v16, a1 + 7, (unsigned int)v3, v2, v4, v5);
    v8 = v16;
    if ( (v17 & 1) == 0 )
    {
      v14 = v16;
      sub_216EFC0(&v16);
      sub_216EEC0((__int64)&v16, a1 + 7, *(unsigned int *)(v14 + 24), v9, v10, v11);
      if ( (v17 & 1) == 0 )
      {
        v3 = ((unsigned __int64)(unsigned int)(HIDWORD(v3) + a2[5] / a2[9]) << 32) | (unsigned int)v3;
        sub_216EFC0(&v16);
        return v3;
      }
      v8 = v16;
    }
    v15 = v8;
    v16 = 0;
    v12 = sub_2220DB0(&v15);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v18, v13, v12);
    v20 = 260;
    v19 = v18;
    sub_2221AD0(&v19, 1);
  }
  return v3;
}
