unsigned __int64 __fastcall sub_47B70(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  const char *v7; // rsi
  const char *v8; // rsi
  struct _Unwind_Exception *v9; // rbx
  const char *v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  if ( !*(_BYTE *)(a1 + 248) )
  {
    v9 = (struct _Unwind_Exception *)sub_30AC0();
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
    _Unwind_Resume(v9);
  }
  v4 = a2;
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 120) )
    v5 = 0;
  else
    v5 = *(_QWORD *)(a1 + 112) + ((unsigned __int64)a2 << 6);
  if ( *a3 <= 0 || !a3[2] )
  {
    sub_46890((__int64)&v10, a1 + 80, *(_DWORD *)(v5 + 4));
    v7 = &s1;
    if ( v11 )
      v7 = v10;
    sub_15250((__int64)"Symbol table %s refers to missing names", v7);
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1328) + v4) )
  {
    sub_46890((__int64)&v10, a1 + 80, *(_DWORD *)(v5 + 4));
    v8 = &s1;
    if ( v11 )
      v8 = v10;
    sub_EAA0((__int64)"Section %s overlaps and might be corrupt. Symbols will not be loaded.\n", v8);
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
    return 0;
  }
  v6 = *(_QWORD *)(v5 + 56);
  if ( !v6 )
    return 0;
  return *(_QWORD *)(v5 + 32) / v6;
}
