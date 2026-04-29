__int64 __fastcall pin_nodes_ah_t__::vfunc_7(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v10; // dl
  _QWORD v11[3]; // [rsp+0h] [rbp-18h] BYREF

  v6 = *(_QWORD *)(a4 + 16);
  v11[1] = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a4 + 8);
  v8 = v7 + 8 * v6;
  if ( v7 == v8 )
  {
    v10 = 1;
  }
  else
  {
    do
    {
      v10 = *(_BYTE *)(*(_QWORD *)v7 + 133LL);
      if ( !v10 )
        break;
      v7 += 8;
    }
    while ( v8 != v7 );
  }
  HIBYTE(v11[0]) = v10;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    140,
    a2,
    7,
    (char *)v11 + 7,
    &callui,
    a6,
    v11[0]);
  return 3;
}
