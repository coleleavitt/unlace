__int64 __fastcall sub_5BC6E0(__int64 *a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // r15
  unsigned __int64 v14; // [rsp+8h] [rbp-90h] BYREF
  __int128 v15; // [rsp+10h] [rbp-88h] BYREF
  __int128 v16; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  sub_5BC640(a1, (__int64)v17, 32, *(_QWORD *)a2);
  if ( (get_merge_state(a1, v17) & 2) != 0 )
  {
    sub_7BEFF0(&v16, *a1, v17, 0, 0);
    netnode_kill((int)&v16);
  }
  v7 = *(_QWORD *)a2;
  v14 = 0;
  v8 = sub_3BDD60(a1, v7);
  if ( v8 != -1 && (unsigned __int8)sub_54BE00(a1, &v14, v8) || (v9 = sub_54C380(a1, &v14, *(_QWORD *)a2), (_BYTE)v9) )
  {
    *(_QWORD *)(a2 + 32) = a3;
    *(_WORD *)(a2 + 40) = a4;
    v10 = sub_3792E0(0x3Cu, &v16, a2);
    v11 = v16;
    if ( v10 <= 0 )
      v11 = (1 << (get_func_bitness(a2) + 4)) / 8;
    v12 = v11;
    v15 = 0;
    get_frame_part(&v15, a2, 1);
    sub_5B7410((__int64)a1, (__int64)&v14, v15, v12, 4096);
    v16 = 0;
    get_frame_part(&v16, a2, 2);
    sub_5B7410((__int64)a1, (__int64)&v14, v16, a4, 0x2000);
    v9 = 1;
    *(_QWORD *)(a2 + 24) = *(_QWORD *)a2;
  }
  clear_tinfo_t(&v14);
  return v9;
}
