__int64 __fastcall sub_22199D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+8h] [rbp-30h]
  __int64 v15; // [rsp+10h] [rbp-28h]
  __int64 v16; // [rsp+18h] [rbp-20h]

  v14 = a3;
  v15 = a1;
  v13 = a2;
  v16 = 0;
  v4 = ((unsigned __int64)(a4 != 0) << 32) | a4;
  v5 = (_QWORD *)operator new(0x10u);
  *v5 = &v13;
  v6 = (__int64)v5;
  v5[1] = sub_22199B0;
  v9 = sub_2297DF0((void *(*)(void *))sub_2219740, v5, v4);
  if ( !v9 )
  {
    v6 = 16;
    operator delete(v5, 0x10u);
  }
  sub_2297EA0(v9, v6, v7, v8, v10, v11, v13, v14, v15, v16);
  if ( *(_QWORD *)a1 )
    *(_BYTE *)(*(_QWORD *)a1 + 216LL) |= 2u;
  return BYTE1(v16);
}
