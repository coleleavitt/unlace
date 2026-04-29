__int64 __fastcall sub_2148D0(__int64 *a1, int *a2, unsigned int a3)
{
  unsigned __int8 scalar_bt; // al
  __int64 v5; // r8
  unsigned int v6; // ebx
  int v8; // [rsp+4h] [rbp-54h] BYREF
  __int64 v9; // [rsp+8h] [rbp-50h] BYREF
  int v10[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  scalar_bt = get_scalar_bt(a3);
  if ( (scalar_bt & 0xF) == 9 )
  {
    return 0;
  }
  else
  {
    v5 = *a1;
    v9 = scalar_bt;
    (*(void (__fastcall **)(int *, __int64 *, int *, __int64 *))(v5 + 104))(v10, a1, &v8, &v9);
    clear_tinfo_t(&v9);
    v6 = 0;
    if ( !(unsigned int)sub_1BC250(v10, a2) )
      LOBYTE(v6) = v8 == a3;
    cleanup_argloc(v10);
  }
  return v6;
}
