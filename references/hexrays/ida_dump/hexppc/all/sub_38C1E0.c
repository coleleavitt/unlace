unsigned __int64 __fastcall sub_38C1E0(__int64 a1, __int64 *a2, unsigned __int8 a3)
{
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r15
  __int64 i; // r13
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 j; // r13
  __int64 *v24; // rax
  __int64 v25; // rdi
  _BYTE v26[40]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)a1 &= ~2u;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 104))-- == 1 )
    {
      v14 = *(_QWORD **)(a1 + 32);
      if ( v14 )
      {
        sub_254CF0(*(__int64 **)(a1 + 32));
        v15 = v14[23];
        if ( v15 )
        {
          v16 = v14[24];
          if ( v16 )
          {
            for ( i = 0; i != v16; ++i )
            {
              v18 = (__int64 *)(v15 + 24 * i);
              v19 = *v18;
              if ( *v18 )
              {
                v18[1] = 0;
                qfree(v19);
                v15 = v14[23];
              }
            }
          }
          v14[24] = 0;
          qfree(v15);
        }
        v20 = v14[20];
        if ( v20 )
        {
          v14[21] = 0;
          qfree(v20);
        }
        v21 = v14[16];
        if ( v21 )
        {
          v22 = v14[17];
          if ( v22 )
          {
            for ( j = 0; j != v22; ++j )
            {
              v24 = (__int64 *)(v21 + 32 * j);
              v25 = *v24;
              if ( *v24 )
              {
                v24[1] = 0;
                qfree(v25);
                v21 = v14[16];
              }
            }
          }
          v14[17] = 0;
          qfree(v21);
        }
        sub_2513D0((__int64)(v14 + 2));
        j__qfree(v14);
      }
    }
  }
  v7 = *a2;
  *(_QWORD *)(a1 + 32) = *a2;
  if ( v7 )
    ++*(_DWORD *)(v7 + 104);
  v8 = *(_QWORD *)(a1 + 128);
  v9 = *(_QWORD *)(*a2 + 8);
  *(_QWORD *)(a1 + 24) = v9;
  *(_QWORD *)(v8 + 1344) = v9;
  v10 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)(v8 + 1352) = v10;
  sub_3A2080(v26, 32, *v10);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
    114,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 32) + 128LL,
    v26,
    &callui,
    v11);
  sub_339EC0(*(_QWORD *)(a1 + 128), 0x65u, a1);
  sub_38B4A0(a1, a3, v12);
  return v27 - __readfsqword(0x28u);
}
