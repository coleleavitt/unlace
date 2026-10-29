__int64 __fastcall sub_D25040(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  void *v12; // r12
  _QWORD *v13; // rax
  void *src; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+8h] [rbp-30h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v8 = (_QWORD *)(a1 + 384);
  v8[107] = *a3;
  v9 = sub_D21CE0(v8, *(_DWORD *)(a2 + 8), (__int64)a3, a4, a5, a6);
  v11 = v10;
  v12 = (void *)v9;
  sub_D23FD0((__int64)&src, a2, 0);
  if ( v15 > 0x40 )
  {
    memcpy(v12, src, 8 * (((unsigned __int64)v15 + 63) >> 6));
    if ( v15 > 0x40 )
    {
      if ( src )
        operator delete[](src);
    }
  }
  else
  {
    v12 = src;
  }
  v13 = (_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 16);
  *v13 = v12;
  v13[1] = v11;
  return 1;
}

