__int64 __fastcall sub_67DB20(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  _BYTE *v11; // rdi
  _BYTE *v12; // rax
  __int64 *v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rax

  v5 = pack_dq(a2, a3, *(_QWORD *)a1);
  v6 = pack_dq(v5, a3, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  v7 = pack_dq(v6, a3, *(_QWORD *)(a1 + 16));
  v8 = pack_dq(v7, a3, *(_QWORD *)(a1 + 24));
  v9 = pack_dq(v8, a3, *(_QWORD *)(a1 + 32));
  v10 = pack_dw(v9, a3, *(unsigned __int16 *)(a1 + 44));
  v11 = (_BYTE *)v10;
  if ( v10 < a3 )
  {
    v12 = (_BYTE *)(v10 + 1);
    *v11 = *(_BYTE *)(a1 + 40);
    if ( (unsigned __int64)v12 >= a3
      || (v12 = v11 + 2, v11[1] = *(_BYTE *)(a1 + 41), (unsigned __int64)(v11 + 2) >= a3)
      || (v12 = v11 + 3, v11[2] = *(_BYTE *)(a1 + 42), (unsigned __int64)(v11 + 3) >= a3)
      || (v12 = v11 + 4, v11[3] = *(_BYTE *)(a1 + 43), (unsigned __int64)(v11 + 4) >= a3) )
    {
      v11 = v12;
    }
    else
    {
      v11[4] = *(_BYTE *)(a1 + 184);
      v11 += 5;
    }
  }
  v13 = (__int64 *)(a1 + 56);
  v14 = pack_dq(v11, a3, *(_QWORD *)(a1 + 48));
  do
  {
    v15 = *v13++;
    v14 = pack_dq(v14, a3, v15 + 1);
  }
  while ( v13 != (__int64 *)(a1 + 184) );
  return pack_dd(v14, a3, (unsigned int)(*(_DWORD *)(a1 + 188) + 1)) - a2;
}
