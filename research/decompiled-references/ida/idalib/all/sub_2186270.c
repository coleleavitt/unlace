unsigned __int64 __fastcall sub_2186270(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int32 v6; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r15
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-B0h]
  __int64 v16; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+20h] [rbp-98h] BYREF
  char v18; // [rsp+28h] [rbp-90h]
  _BYTE v19[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-68h] BYREF
  __int16 v21; // [rsp+70h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 272LL))(a1);
  v6 = _byteswap_ulong(*(_DWORD *)(a2 + 4));
  if ( v6 == 1073741844 )
    return ((unsigned __int64)*(unsigned int *)(a1[18] + 16LL * (unsigned int)v3 + 8) << 32) | (unsigned int)v3;
  if ( v6 == 9 || v6 == 4 )
  {
    sub_216F990((__int64)&v17, a1 + 7, (unsigned int)v3, v2, v4, v5);
    v8 = v17;
    if ( (v18 & 1) == 0 )
    {
      v15 = v17;
      sub_216FA80(&v17);
      sub_216F990((__int64)&v17, a1 + 7, _byteswap_ulong(*(_DWORD *)(v15 + 40)), v9, v10, v11);
      if ( (v18 & 1) == 0 )
      {
        v12 = sub_2162D00(*(_QWORD *)(a2 + 32));
        v3 = ((unsigned __int64)(HIDWORD(v3) + (unsigned int)(v12 / sub_2162D00(*(_QWORD *)(a2 + 56)))) << 32)
           | (unsigned int)v3;
        sub_216FA80(&v17);
        return v3;
      }
      v8 = v17;
    }
    v16 = v8;
    v17 = 0;
    v13 = sub_2220DB0(&v16);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v19, v14, v13);
    v21 = 260;
    v20 = v19;
    sub_2221AD0(&v20, 1);
  }
  return v3;
}
