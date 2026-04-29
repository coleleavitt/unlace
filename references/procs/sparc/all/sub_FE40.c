__int64 __fastcall sub_FE40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 module_data; // r14
  __int64 v10; // rax
  char *v12; // rax
  _QWORD v13[3]; // [rsp+0h] [rbp-1C8h] BYREF
  int v14; // [rsp+18h] [rbp-1B0h]
  __int128 v15; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-198h]
  __int64 v17; // [rsp+38h] [rbp-190h]
  __int64 v18; // [rsp+40h] [rbp-188h]
  char v19; // [rsp+48h] [rbp-180h] BYREF
  _QWORD v20[8]; // [rsp+188h] [rbp-40h] BYREF

  v20[0] = __readfsqword(0x28u);
  module_data = get_module_data((unsigned int)dword_194F0);
  if ( (get_flags_ex(a2, 4) & 0x600) == 0 )
  {
    v16 = -1;
    v12 = &v19;
    v17 = 0;
    v18 = 0;
    v15 = -1;
    do
    {
      *(_WORD *)v12 = 0;
      v12 += 40;
      *((_WORD *)v12 - 19) = 0;
      *((_WORD *)v12 - 18) = 0;
      *((_DWORD *)v12 - 2) = 0;
      *((_WORD *)v12 - 17) = 0;
      *((_OWORD *)v12 - 2) = 0;
      *((_QWORD *)v12 - 2) = 0;
    }
    while ( v20 != (_QWORD *)v12 );
    create_insn(a2, &v15, v20, 0.0);
  }
  v14 = *(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a6 + 4) & 1) != 0 )
  {
    v10 = *(_QWORD *)(a6 + 8);
  }
  else
  {
    v10 = 0;
    if ( *(_QWORD *)(a6 + 16) != -1 )
      v10 = 16 * sel2para();
  }
  v13[1] = v10;
  v13[0] = *(_QWORD *)(a6 + 24) + v10;
  v13[2] = *(_QWORD *)(a6 + 32);
  if ( a5 )
    ((void (__fastcall *)(_QWORD *, __int64, _QWORD, __int64))handle_fixups_in_macro)(
      v13,
      a2,
      *(unsigned __int16 *)(module_data + 290),
      2);
  ((void (__fastcall *)(__int64, _QWORD, _QWORD *))op_offset_ex)(a2, a4, v13);
  return 1;
}
