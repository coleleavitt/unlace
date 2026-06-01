unsigned __int64 __fastcall sub_7A5F80(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int16 i; // ax
  __int64 v10; // rax
  __int16 v11; // ax
  _BOOL8 v12; // rax
  __int64 v13; // rdx
  __int64 v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]
  __int64 v19; // [rsp+20h] [rbp-48h] BYREF
  __int64 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  sub_7A5EC0(a1, a2, a3, a4, a5, a6);
  for ( i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL); i == 38; i = *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) )
  {
    v19 = 1;
    v20 = 0;
    sub_7A5EC0(a1, (__int64)&v19, 1u, v6, v7, v8);
    *(_QWORD *)(a2 + 8) &= v20;
  }
  if ( i == 94 )
  {
    while ( 1 )
    {
      v15 = 1;
      v16 = 0;
      sub_7A5EC0(a1, (__int64)&v15, 1u, v6, v7, v8);
      if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) == 38 )
        break;
      v13 = v16;
LABEL_13:
      *(_QWORD *)(a2 + 8) ^= v13;
      if ( *(_WORD *)(*(_QWORD *)(a1 + 560) + 24LL) != 94 )
        return v21 - __readfsqword(0x28u);
    }
LABEL_8:
    v17 = 1;
    v18 = 0;
    sub_7A5C80(a1, (__int64)&v17, 1u, v6, v7, v8);
    while ( 1 )
    {
      v19 = 1;
      v10 = *(_QWORD *)(a1 + 560);
      v20 = 0;
      v11 = *(_WORD *)(v10 + 24);
      if ( v11 == 15677 )
      {
        sub_7A5C80(a1, (__int64)&v19, 1u, v6, v7, v8);
        v12 = v18 == v20;
      }
      else
      {
        if ( v11 != 8509 )
        {
          v13 = v18 & v16;
          v16 &= v18;
          if ( v11 != 38 )
            goto LABEL_13;
          goto LABEL_8;
        }
        sub_7A5C80(a1, (__int64)&v19, 1u, v6, v7, v8);
        v12 = v18 != v20;
      }
      v18 = v12;
      LOBYTE(v17) = 0;
    }
  }
  return v21 - __readfsqword(0x28u);
}
