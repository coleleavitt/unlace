unsigned __int64 __fastcall sub_6BF220(__int64 *a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 i; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  char v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v5 = *a1;
  v13 = -1;
  v14 = 0;
  v6 = *(_QWORD *)(v5 + 1864);
  sub_4108F0(a1, (__int64)&v13, a2);
  for ( i = v13; v13 != -1; i = v13 )
  {
    if ( sub_3BD540((__int64)a1, i) )
    {
      if ( *(_BYTE *)(v6 + 8) )
      {
        v8 = *(_QWORD *)(v6 + 184);
        v9 = v13;
        v10 = *(_QWORD *)(v6 + 176);
        if ( *(_QWORD *)(v6 + 192) < (unsigned __int64)(v8 + 1) )
        {
          v12 = qvector_reserve(v6 + 176, v10, v8 + 1, 8);
          *(_QWORD *)(v6 + 176) = v12;
          v10 = v12;
          v8 = *(_QWORD *)(v6 + 184);
        }
        *(_QWORD *)(v10 + 8 * v8) = v9;
        ++*(_QWORD *)(v6 + 184);
      }
      else
      {
        sub_3A61A0(a1, v13, v13 + 1, 0x28u);
      }
    }
    if ( a3 )
      sub_411F00(a1, v13, a2);
    sub_410A70(a1, (__int64)&v13, a2);
  }
  return v15 - __readfsqword(0x28u);
}
