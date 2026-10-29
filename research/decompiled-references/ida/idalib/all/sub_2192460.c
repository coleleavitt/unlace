__int64 __fastcall sub_2192460(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int32 v12; // eax
  __int64 v13; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // [rsp+8h] [rbp-90h] BYREF
  __int64 v24; // [rsp+10h] [rbp-88h] BYREF
  char v25; // [rsp+18h] [rbp-80h]
  _BYTE v26[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE *v27; // [rsp+40h] [rbp-58h] BYREF
  __int16 v28; // [rsp+60h] [rbp-38h]

  sub_216F990((__int64)&v24, a1 + 7, (unsigned int)a2, a4, a5, a6);
  if ( (v25 & 1) != 0 )
  {
    v20 = v24;
    v24 = 0;
    v23 = v20;
    v21 = sub_2220DB0(&v23);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v22 + 32LL))(v26, v22, v21);
    v28 = 260;
    v27 = v26;
    sub_2221AD0(&v27, 1);
  }
  v7 = v24;
  sub_216FA80(&v24);
  v12 = _byteswap_ulong(*(_DWORD *)(v7 + 4));
  if ( v12 != 1073741844 )
  {
    if ( v12 == 9 )
    {
      v19 = sub_2191F40((__int64)a1, a2, v8, v9, v10, v11);
      v14 = a1[7];
      v15 = *(_QWORD *)(v19 + 8);
      if ( *(_WORD *)(v14 + 18) != 2048 )
        goto LABEL_5;
    }
    else
    {
      v13 = sub_21921E0((__int64)a1, a2, v8, v9, v10, v11);
      v14 = a1[7];
      v15 = *(_QWORD *)(v13 + 8);
      if ( *(_WORD *)(v14 + 18) != 2048 )
      {
LABEL_5:
        v16 = sub_2162D00(v15);
LABEL_6:
        v17 = HIDWORD(v16);
        goto LABEL_7;
      }
    }
    v16 = sub_2162D00(v15);
    if ( *(_BYTE *)(v14 + 4) == 2 && *(_BYTE *)(v14 + 5) == 1 )
      v16 = (v16 >> 24) & 0xFF0000 | (v16 >> 8) & 0xFF000000 | HIBYTE(v16) | (v16 << 32) | (v16 >> 40) & 0xFF00;
    goto LABEL_6;
  }
  v17 = *(unsigned int *)(*(_QWORD *)(a1[18] + 16LL * (unsigned int)a2) + 24 * HIDWORD(a2) + 8);
LABEL_7:
  if ( (_DWORD)v17 )
    return _byteswap_ulong(*(_DWORD *)(v7 + 40)) | (v17 << 32);
  else
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1);
}
