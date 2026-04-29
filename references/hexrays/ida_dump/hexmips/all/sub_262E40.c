__int64 __fastcall sub_262E40(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // rax
  __int64 module_data; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+10h] [rbp-78h]
  __int128 v15; // [rsp+18h] [rbp-70h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+38h] [rbp-50h]
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v4 = a3[5];
  v19 = __readfsqword(0x28u);
  if ( v4 )
    module_data = *(_QWORD *)(v4 + 216);
  else
    module_data = get_module_data((unsigned int)dword_4CF8F8);
  v7 = *a1;
  v13 = 0xFFFFFFFF00000002LL;
  v14 = 0xFFFFFFFFLL;
  v8 = a1[1];
  v12 = -1;
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( 72 * v8 )
  {
    while ( 1 )
    {
      a2 = sub_261A30(v7, module_data, a2, (_QWORD **)a3, (__int64)&v12);
      v7 += 72;
      if ( v7 == *a1 + 72 * a1[1] )
        break;
      if ( v7 != *a1 )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD, void *, _QWORD, __int64, __int64, __int64, unsigned __int64, __int64, _QWORD, _QWORD, __int64, __int64, int))*a3)(
          a3,
          0,
          &unk_3FD1D8,
          *a3,
          v9,
          v10,
          v12,
          v13,
          v14,
          v15,
          *((_QWORD *)&v15 + 1),
          v16,
          v17,
          v18);
        a2 += 2;
      }
    }
  }
  LODWORD(v13) = 0;
  sub_250DB0((__int64)&v12);
  clear_tinfo_t(&v17);
  return a2;
}
