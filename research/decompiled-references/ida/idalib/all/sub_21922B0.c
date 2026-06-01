unsigned __int64 __fastcall sub_21922B0(
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
  unsigned __int32 v11; // eax
  unsigned __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // [rsp+8h] [rbp-90h] BYREF
  __int64 v21; // [rsp+10h] [rbp-88h] BYREF
  char v22; // [rsp+18h] [rbp-80h]
  _BYTE v23[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v24; // [rsp+40h] [rbp-58h] BYREF
  __int16 v25; // [rsp+60h] [rbp-38h]

  sub_216F990((__int64)&v21, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v22 & 1) != 0 )
  {
    v17 = v21;
    v21 = 0;
    v20 = v17;
    v18 = sub_2220DB0(&v20);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v19 + 32LL))(v23, v19, v18);
    v25 = 260;
    v24 = v23;
    sub_2221AD0(&v24, 1);
  }
  v6 = v21;
  sub_216FA80(&v21);
  v11 = _byteswap_ulong(*(_DWORD *)(v6 + 4));
  if ( v11 != 1073741844 )
  {
    if ( v11 == 9 )
    {
      v14 = sub_2191F40(a1, a2, v7, v8, v9, v10);
      v15 = *(_QWORD *)(a1 + 56);
      v16 = *(_QWORD *)(v14 + 8);
      if ( *(_WORD *)(v15 + 18) != 2048 )
      {
        LODWORD(result) = sub_2162D00(v16);
        return (unsigned int)result;
      }
      result = sub_2162D00(v16);
      if ( *(_BYTE *)(v15 + 4) != 2 || *(_BYTE *)(v15 + 5) != 1 )
        return (unsigned int)result;
    }
    else
    {
      result = sub_21921E0(a1, a2, v7, v8, v9, v10);
      v13 = *(_QWORD *)(a1 + 56);
      if ( *(_WORD *)(v13 + 18) != 2048 )
      {
        LODWORD(result) = _byteswap_uint64(*(_QWORD *)(result + 8));
        return (unsigned int)result;
      }
      result = _byteswap_uint64(*(_QWORD *)(result + 8));
      if ( *(_BYTE *)(v13 + 4) != 2 || *(_BYTE *)(v13 + 5) != 1 )
        return (unsigned int)result;
    }
    return (unsigned int)((result >> 24) & 0xFF0000
                        | (result >> 8) & 0xFF000000
                        | HIBYTE(result)
                        | (result << 32)
                        | (result >> 40) & 0xFF00);
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 16LL * (unsigned int)a2) + 24 * HIDWORD(a2) + 12);
}
