__int64 __fastcall dump_func_type_data(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rax
  int v6; // r12d
  int v7; // esi
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int128 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v5 = 0;
  if ( a2[1] )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      sub_66C6F0(
        a1,
        v7,
        (_QWORD *)(*a2 + 80 * v5 + 64),
        *a2 + 80 * v5 + 16,
        *a2 + 80 * v5,
        *(_DWORD *)(*a2 + 80 * v5 + 72),
        a3);
      v5 = v6;
    }
    while ( (unsigned __int64)v6 < a2[1] );
  }
  v10 = 0;
  v9 = 0;
  sub_66C6F0(a1, -1, a2 + 4, (__int64)&v9, (__int64)(a2 + 5), 0, a3);
  if ( a3 )
    sub_35A910(a1);
  return 1;
}
