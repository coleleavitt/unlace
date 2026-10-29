__int64 __fastcall sub_5A20F0(__int64 *a1, __int64 a2, int a3, unsigned __int16 a4)
{
  int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rax
  unsigned int v11; // r15d
  unsigned __int64 v13; // [rsp+8h] [rbp-80h] BYREF
  __int64 v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v16[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  sub_5A2050(a1, (__int64)v16, 32, *(_DWORD *)a2);
  if ( (get_merge_state(a1, v16) & 2) != 0 )
  {
    sub_79BBF0(&v15, *a1, v16, 0, 0);
    netnode_kill((int)&v15);
  }
  v7 = *(_DWORD *)a2;
  v13 = 0;
  v8 = sub_3B90A0(a1, v7);
  if ( v8 != -1 && (unsigned __int8)sub_532DA0(a1, &v13, v8) || (v9 = sub_5332F0(a1, &v13, *(_DWORD *)a2), (_BYTE)v9) )
  {
    *(_DWORD *)(a2 + 20) = a3;
    *(_WORD *)(a2 + 24) = a4;
    v10 = sub_375980(0x3Cu, &v15, a2);
    v11 = v15;
    if ( v10 <= 0 )
      v11 = (1 << (get_func_bitness(a2) + 4)) / 8;
    v14 = 0;
    get_frame_part(&v14, a2, 1);
    sub_59D260((__int64)a1, (__int64)&v13, v14, v11, 4096);
    v15 = 0;
    get_frame_part(&v15, a2, 2);
    sub_59D260((__int64)a1, (__int64)&v13, v15, a4, 0x2000);
    v9 = 1;
    *(_DWORD *)(a2 + 16) = *(_DWORD *)a2;
  }
  clear_tinfo_t(&v13);
  return v9;
}

