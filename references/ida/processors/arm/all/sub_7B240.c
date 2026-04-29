__int64 __fastcall sub_7B240(__int64 a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 a5, __int64 *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __int128 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+20h] [rbp-18h]

  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v6 = sub_7AC30(a1, a2, a3, a4, a5, (__int64)&v8, a6);
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v6;
}
