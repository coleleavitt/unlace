__int64 __fastcall sub_1F3900(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  bool v5; // zf
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // rsi
  __int64 name; // rbx
  struct _Unwind_Exception *v14; // rbx
  const char *v15; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v5 = *(_BYTE *)(a1 + 968) == 0;
  v17 = __readfsqword(0x28u);
  if ( v5 )
  {
    v8 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      v14 = (struct _Unwind_Exception *)sub_1E69C0(a5, a1, (__int64)a2, a3, a4);
      if ( v15 )
      {
        *(_QWORD *)&v16 = 0;
        qfree(v15, a2);
      }
      _Unwind_Resume(v14);
    }
    v7 = *(_DWORD *)(a1 + 416);
    if ( v7 == 2 )
    {
      v8 = *(_QWORD *)(a1 + 896);
    }
    else if ( v7 == 3 )
    {
      v8 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v8 = 0;
      if ( v7 == 1 )
        v8 = *(_QWORD *)(a1 + 888);
    }
  }
  if ( !*(_BYTE *)(v8 + 29) )
    return -1;
  v15 = nullptr;
  v16 = 0;
  if ( sub_1EB270(a1, (__int64)&v15, 0, a4, 0.0) <= 0 )
  {
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree(v15, (const char *)&v15);
    }
    return -1;
  }
  if ( !*(_QWORD *)(a1 + 424) )
    sub_1E69C0(0.0, a1, (__int64)&v15, v9, v10);
  v11 = &s1;
  if ( (_QWORD)v16 )
    v11 = v15;
  name = extract_name(a2, v11, (unsigned int)*(__int16 *)(a1 + 412));
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v11);
  }
  return name;
}
