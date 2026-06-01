__int64 __fastcall sub_5A97C0(unsigned int *a1, __int64 a2, __int64 a3)
{
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax

  v4 = sub_6180E0(qword_2CA1698);
  v5 = pack_dd(a2, a3, *a1);
  v6 = pack_dd(v5, a3, a1[1] - *a1);
  v7 = *((_QWORD *)a1 + 1) & 0x7FFFFFFFFFFFFFFFLL;
  v8 = pack_dw(v6, a3, *((unsigned __int16 *)a1 + 4));
  v9 = a1[4];
  if ( a1 && *((char *)a1 + 9) < 0 )
  {
    v24 = pack_dd(v8, a3, *a1 - v9);
    v25 = pack_dw(v24, a3, 0);
    v21 = pack_dd(v25, a3, a1[5]);
  }
  else
  {
    v10 = pack_dd(v8, a3, v9 - v4);
    v11 = pack_dd(v10, a3, a1[5]);
    v12 = pack_dw(v11, a3, *((unsigned __int16 *)a1 + 12));
    v13 = pack_dd(v12, a3, a1[7]);
    v14 = pack_dd(v13, a3, a1[10]);
    v15 = pack_dw(v14, a3, *((unsigned __int16 *)a1 + 28));
    v16 = pack_dw(v15, a3, *((unsigned __int16 *)a1 + 36));
    v17 = pack_dw(v16, a3, *((unsigned __int16 *)a1 + 44));
    v18 = pack_dd(v17, a3, a1[9] + 1);
    v19 = pack_dw(v18, a3, *((unsigned __int16 *)a1 + 52));
    v21 = pack_dd(v19, a3, a1[8]);
  }
  return pack_dq(v21, a3, v7, v20, v22) - a2;
}

