unsigned __int64 __fastcall sub_11F270(_QWORD *a1)
{
  int v1; // ebx
  const char *v2; // rsi
  const char *v4; // rdx
  const char *v5; // [rsp+0h] [rbp-98h] BYREF
  __int128 v6; // [rsp+8h] [rbp-90h]
  _QWORD v7[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+38h] [rbp-60h]
  __int64 v9; // [rsp+40h] [rbp-58h]
  __int64 v10; // [rsp+48h] [rbp-50h]
  unsigned __int64 v11; // [rsp+68h] [rbp-30h]

  v1 = 1;
  v11 = __readfsqword(0x28u);
  v5 = nullptr;
  v6 = 0;
  do
  {
    ++v1;
    sub_94360((__int64 *)&v5);
    v2 = s1;
    if ( (_QWORD)v6 )
      v2 = v5;
  }
  while ( (*(__int64 (__fastcall **)(_QWORD, const char *))(*(_QWORD *)*a1 + 16LL))(*a1, v2) );
  if ( (unsigned __int8)sub_11CBE0(a1, (__int64)&v5, 1) )
  {
    sub_11C380(a1, 1);
    v4 = s1;
    if ( (_QWORD)v6 )
      v4 = v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD, const char *))(*(_QWORD *)*a1 + 32LL))(v7, *a1, v4);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 40LL))(*a1, **(_QWORD **)(*a1 + 16LL), v7);
    sub_11C170(a1);
    if ( v9 )
    {
      v10 = 0;
      qfree();
    }
    if ( v8 )
      --*(_DWORD *)(v8 + 12);
    if ( v7[0] )
    {
      v7[1] = 0;
      qfree();
    }
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

