__int64 __fastcall sub_189E1F0(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r12
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 120) )
  {
    sub_FC65C0((unsigned __int8 **)(a1 + 32), *a2, a3, a4);
    return a1;
  }
  else if ( *(_BYTE *)(a1 + 132) )
  {
    v9 = sub_168B9E0((_QWORD *)a1);
    v10 = *(_QWORD *)(a1 + 16);
    if ( v10 )
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 32LL))(*(_QWORD *)(a1 + 16));
    v14[0] = v10;
    v11 = sub_1587BC0(v9, v14, v5, v6, v7, v8);
    sub_FC65C0((unsigned __int8 **)(*v11 + 32LL * *(unsigned int *)(a1 + 128) + 8), *a2, v12, v13);
    return a1;
  }
  else
  {
    return a1;
  }
}
