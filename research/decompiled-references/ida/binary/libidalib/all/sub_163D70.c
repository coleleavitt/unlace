__int64 __fastcall sub_163D70(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rax
  __int64 name; // rbx
  struct _Unwind_Exception *v5; // rbx
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  __int128 v7; // [rsp+8h] [rbp-30h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v1 = *(_BYTE *)(a1 + 992) == 0;
  v8 = __readfsqword(0x28u);
  if ( v1 )
  {
    v2 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 480) )
    {
      v5 = (struct _Unwind_Exception *)sub_158B30(a1);
      if ( v6 )
      {
        *(_QWORD *)&v7 = 0;
        qfree();
      }
      _Unwind_Resume(v5);
    }
    v2 = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      v2 = *(_QWORD *)(a1 + 856);
  }
  if ( !*(_BYTE *)(v2 + 21) )
    return -1;
  v6 = 0;
  v7 = 0;
  if ( sub_15E4F0(a1, (__int64)&v6, 0) <= 0 )
  {
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree();
    }
    return -1;
  }
  if ( !*(_QWORD *)(a1 + 480) )
    sub_158B30(a1);
  name = extract_name();
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  return name;
}

