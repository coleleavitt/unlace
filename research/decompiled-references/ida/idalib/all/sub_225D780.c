__int64 __fastcall sub_225D780(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rax
  _QWORD *i; // r14
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  char v16; // [rsp+20h] [rbp-38h]

  v3 = *(_QWORD **)(a2 + 16);
  v4 = &v3[*(unsigned int *)(a2 + 24)];
  if ( v3 == v4 )
  {
    v12 = std::_V2::generic_category((std::_V2 *)a1);
LABEL_13:
    *(_BYTE *)(a1 + 16) |= 1u;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v12;
  }
  else
  {
    for ( i = v4 - 1; ; --i )
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(*(_QWORD *)*i + 48LL))(&v14, *i, a3);
      if ( (v16 & 1) == 0 )
        break;
      v7 = std::_V2::generic_category((std::_V2 *)&v14);
      v8 = v14;
      v9 = v15;
      if ( (_DWORD)v14 != 2 || v15 != v7 )
      {
        *(_BYTE *)(a1 + 16) |= 1u;
        *(_DWORD *)a1 = v8;
        *(_QWORD *)(a1 + 8) = v9;
        goto LABEL_7;
      }
      v13 = v7;
      sub_FDCFC0(&v14);
      v12 = v13;
      if ( v3 == i )
        goto LABEL_13;
    }
    v11 = v14;
    *(_BYTE *)(a1 + 16) &= ~1u;
    v14 = 0;
    *(_QWORD *)a1 = v11;
LABEL_7:
    sub_FDCFC0(&v14);
  }
  return a1;
}
