__int64 __fastcall sub_7B250(__int64 *a1, _BYTE *a2)
{
  bool v2; // zf
  char *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v7; // rax
  char *v8; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  _BYTE *v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v2 = *a2 == 0;
  v12 = __readfsqword(0x28u);
  if ( v2 )
    return sub_75D00(a1, 0);
  v8 = nullptr;
  v10 = nullptr;
  v9 = 0;
  v11 = 0;
  if ( !(unsigned __int8)serialize_tinfo(&v8, &v10, 0, a2, 272) )
  {
    if ( !under_debugger )
      sub_37CFE0(51102);
    BUG();
  }
  v3 = v8;
  if ( *v8 < 0 || v8[1] )
  {
    v4 = a1[1];
    v5 = *a1;
    if ( a1[2] < (unsigned __int64)(v4 + 1) )
    {
      v7 = qvector_reserve(a1, v5, v4 + 1, 1);
      *a1 = v7;
      v5 = v7;
      v4 = a1[1];
    }
    *(_BYTE *)(v5 + v4) = -1;
    ++a1[1];
    sub_7B140(a1, v3);
    sub_7B140(a1, v10);
  }
  else
  {
    sub_75D00(a1, *v8);
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v12 - __readfsqword(0x28u);
}
