unsigned __int64 __fastcall sub_785E60(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 i; // ax
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h] BYREF
  __int64 v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_785C80(a1, a2, a3, a4, a5, a6);
  for ( i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL); i == 124; i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) )
  {
    v14 = 1;
    v15 = 0;
    sub_785C80(a1, (__int64)&v14, 1u, v6, v7, v8);
    *(_QWORD *)(a2 + 8) |= v15;
  }
  if ( i == 9766 )
  {
    do
    {
      v12 = 1;
      v13 = 0;
      sub_785C80(a1, (__int64)&v12, 1u, v6, v7, v8);
      for ( ; *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 124; v13 |= v15 )
      {
        v14 = 1;
        v15 = 0;
        sub_785C80(a1, (__int64)&v14, 1u, v6, v7, v8);
      }
      v10 = *(_QWORD *)(a2 + 8);
      if ( v10 )
        v10 = v13 != 0;
      *(_QWORD *)(a2 + 8) = v10;
      *(_BYTE *)a2 = 0;
    }
    while ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 9766 );
  }
  return v16 - __readfsqword(0x28u);
}

