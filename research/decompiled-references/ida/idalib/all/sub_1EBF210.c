__int64 __fastcall sub_1EBF210(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // r12d
  __int64 v3; // rax
  _QWORD *v4; // rax
  void *v5; // r12
  _QWORD *v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+18h] [rbp-20h]

  v1 = *(unsigned __int8 *)(a1 + 9266);
  if ( (_BYTE)v1 )
    return v1;
  v2 = *(unsigned __int8 *)(a1 + 9265);
  if ( !(_BYTE)v2 )
    return 1;
  v3 = *(_QWORD *)(a1 + 136);
  if ( (*(_BYTE *)(*(_QWORD *)(v3 + 56) + 21LL) & 2) != 0 )
  {
    *(_BYTE *)(a1 + 9266) = 1;
    sub_1FD2F70(&v8, *(_QWORD *)(*(_QWORD *)(v3 + 104) + 304LL), *(_QWORD *)(*(_QWORD *)(v3 + 104) + 312LL));
    v4 = v9;
    v9 = nullptr;
    if ( v4 )
    {
      v7 = v4;
      sub_A0E8E0(&v7);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
      v1 = v2;
    }
    else
    {
      v5 = *(void **)(a1 + 520);
      *(_QWORD *)(a1 + 520) = v8;
      if ( v5 )
      {
        sub_1FD1300(v5);
        operator delete(v5, 0x5D8u);
      }
      sub_1FDD6C0(a1 + 160);
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
    return v1;
  }
  return *(unsigned __int8 *)(a1 + 9265);
}
