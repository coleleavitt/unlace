__int64 __fastcall sub_41C230(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 v4; // rbp
  unsigned __int16 v6; // ax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // rax

  v4 = a1 + a2;
  v6 = rotate_left(*a3, 1, 16, 0);
  v7 = pack_dw(a1, a1 + a2, v6);
  v8 = (unsigned int)(2 * *((_DWORD *)a3 + 1));
  if ( *((_QWORD *)a3 + 4) )
    v8 = (unsigned int)v8 | 1;
  v9 = pack_dd(v7, v4, v8);
  if ( (a3[2] & 1) != 0 )
  {
    v14 = ea2node(*((_QWORD *)a3 + 1));
    v9 = pack_dq(v9, v4, v14);
  }
  v10 = pack_dq(v9, v4, *((_QWORD *)a3 + 2) + 1LL);
  v11 = pack_dq(v10, v4, *((_QWORD *)a3 + 3));
  v12 = *((_QWORD *)a3 + 4);
  if ( v12 )
    return pack_dq(v11, v4, v12) - a1;
  else
    return v11 - a1;
}
