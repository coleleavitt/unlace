__int64 __fastcall sub_C57580(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, _QWORD *a7)
{
  __int64 v9; // r14
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  _DWORD *v12; // r14
  unsigned int v13; // ebp
  __int64 v15; // rbp
  __int64 v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 *v17; // [rsp+8h] [rbp-D0h]
  __m128i v18; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+20h] [rbp-B8h]
  char v20; // [rsp+28h] [rbp-B0h]
  __int64 v21; // [rsp+38h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-98h]
  __int64 v23; // [rsp+48h] [rbp-90h]
  _BYTE v24[136]; // [rsp+50h] [rbp-88h] BYREF

  v9 = *(_QWORD *)(a5 + 32);
  v20 |= 1u;
  v18 = 0u;
  ptr = v24;
  v19 = 0;
  v21 = 0;
  v23 = 0x800000000LL;
  v24[65] = 0;
  if ( a1 )
  {
    sub_A4F2A0((__int64)&v16, a1, *(_DWORD *)(v9 + 128), SHIDWORD(a4));
    sub_C24210((__int64)&v18, v16, v17, 0);
    v10 = *(_QWORD *)(a1 + 48);
    v11 = a1;
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 8);
    sub_A4F2D0(
      (__int64)&v16,
      a2,
      *(_DWORD *)(v9 + 128),
      *(_DWORD *)(*(_QWORD *)(v9 + 136) + 4LL * *(unsigned int *)(v9 + 144) - 4));
    sub_C24210((__int64)&v18, v16, v17, 0);
    v10 = v15;
    v11 = a2;
  }
  v12 = (_DWORD *)sub_C2BD20(v9, v16, (__int64)v17, v11, v10, 2);
  v13 = sub_C4F9A0((__int64)v12, a5, &v18, a2);
  if ( (_BYTE)v13 )
  {
    if ( a6 && *v12 == 7 && (unsigned __int8)sub_A510C0((__int64)v12) )
    {
      sub_E33C90(a5, a2, 2526, 0);
      v13 = 0;
    }
    else if ( a7 )
    {
      *a7 = v12;
    }
  }
  if ( ptr != v24 )
    free(ptr);
  return v13;
}
