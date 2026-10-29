__int64 __fastcall sub_408EB0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int16 v6; // ax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v14; // eax

  v4 = a1 + a2;
  v6 = rotate_left(*(unsigned __int16 *)a3, 1, 16, 0);
  v7 = pack_dw(a1, a1 + a2, v6);
  v8 = (unsigned int)(2 * a3[1]);
  if ( a3[5] )
    v8 = (unsigned int)v8 | 1;
  v9 = pack_dd(v7, v4, v8);
  if ( (a3[1] & 1) != 0 )
  {
    v14 = ea2node((unsigned int)a3[2]);
    v9 = pack_dd(v9, v4, v14);
  }
  v10 = pack_dd(v9, v4, (unsigned int)(a3[3] + 1));
  v11 = pack_dd(v10, v4, (unsigned int)a3[4]);
  v12 = (unsigned int)a3[5];
  if ( (_DWORD)v12 )
    return pack_dd(v11, v4, v12) - a1;
  else
    return v11 - a1;
}

