__int64 __fastcall sub_1390BD0(__int64 a1, const void *a2, size_t a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // r14
  __int64 v10; // rax
  unsigned int v11; // ecx
  _QWORD *v12; // r13
  unsigned int v13; // eax
  unsigned int v14; // [rsp+Ch] [rbp-4Ch]
  __int64 *v15[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = sub_2244B30(a2, a3);
  v5 = (unsigned int)sub_2244CB0(a1 + 96, a2, a3, v4);
  v8 = (__int64 *)(*(_QWORD *)(a1 + 96) + 8 * v5);
  if ( *v8 )
  {
    if ( *v8 != -8 )
    {
      sub_A45C10(v15, v8, 0);
      return 0;
    }
    --*(_DWORD *)(a1 + 112);
  }
  v14 = v5;
  v10 = sub_22300B0(a3 + 9, 8, v5, v5, v6, v7);
  v11 = v14;
  v12 = (_QWORD *)v10;
  if ( a3 )
  {
    memcpy((void *)(v10 + 8), a2, a3);
    v11 = v14;
  }
  *((_BYTE *)v12 + a3 + 8) = 0;
  *v12 = a3;
  *v8 = (__int64)v12;
  ++*(_DWORD *)(a1 + 108);
  v13 = sub_22450D0(a1 + 96, v11);
  sub_A45C10(v15, (__int64 *)(*(_QWORD *)(a1 + 96) + 8LL * v13), 0);
  return 1;
}
