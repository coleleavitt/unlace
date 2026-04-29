__int64 __fastcall sub_39B6E0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 *v4; // [rsp+0h] [rbp-38h] BYREF
  __int128 v5; // [rsp+8h] [rbp-30h]
  __int64 v6; // [rsp+18h] [rbp-20h]
  int v7; // [rsp+20h] [rbp-18h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v1 = *a1;
  v4 = nullptr;
  v6 = 0;
  v7 = -1;
  v5 = 0;
  v2 = -1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 **))(v1 + 72))(a1, &v4) )
    v2 = *v4;
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree(v4);
  }
  return v2;
}
