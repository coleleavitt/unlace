unsigned __int64 __fastcall sub_1D3F170(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx

  v4 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 25;
    if ( (unsigned int)v8 > 1 )
      v7 = sub_F63050(v7, a2, v8, a4);
    v9 = sub_F57E80(*(_QWORD *)(*(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v9 )
    {
      if ( (*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL) == 0 && (*(_BYTE *)(v9 + 17) & 4) == 0 )
      {
        v13 = sub_C00A40(*a2, (__int64)a2, v10, v11, v12);
        a2 = (unsigned __int64 *)a3;
        if ( (unsigned __int8)sub_1D3EC30(a1, a3, v13, 0) )
          return 0;
      }
    }
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B98200((_QWORD *)a3, (__int64)a2) )
  {
    if ( *((_BYTE *)v4 + 10) )
    {
      v14 = *(_QWORD **)(a1 + 248);
      v15 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
      if ( (v15 & 4) != 0 )
        v18 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
        v18 -= 64LL;
      return sub_ABBA20(v14, *(_QWORD *)(a3 + 48), 0, v18, v16, v17);
    }
    else
    {
      return 0;
    }
  }
  else if ( *((_BYTE *)v4 + 8) )
  {
    return sub_A70010(*(_QWORD *)(a1 + 248), *(_QWORD *)(a3 + 48));
  }
  else
  {
    return *(_QWORD *)(a3 + 48);
  }
}
