bool __fastcall sub_1BCC530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  _QWORD *v9; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // r14
  unsigned __int64 v14; // r13
  _QWORD ***v15; // r15
  char v17; // dl
  char v18; // al
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+0h] [rbp-58h]
  _QWORD **v32; // [rsp+8h] [rbp-50h]
  _QWORD **v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  __int64 v35[8]; // [rsp+18h] [rbp-40h] BYREF

  v34 = a3;
  v35[0] = a2;
  v4 = sub_C1BEF0((__int64)v35, a2, a3, a4);
  v6 = *(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL];
  LOBYTE(v4) = v6 | v4;
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v8 = v7 | v4 & 7;
  v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = v8 & 7;
  if ( (v8 & 8) != 0 )
  {
    v10 |= *(__int64 *)((char *)&qword_18 + (v8 & 0xFFFFFFFFFFFFFFF0LL));
    v9 = (_QWORD *)*v9;
  }
  v11 = sub_C1BEF0((__int64)&v34, a2, v7, v5);
  v12 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v11) & 7;
  v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = v12 & 7;
  if ( (v12 & 8) != 0 )
  {
    v14 |= *(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
    v13 = (_QWORD *)*v13;
  }
  v15 = *(_QWORD ****)a1;
  v32 = **(_QWORD ****)a1;
  v30 = **(_QWORD **)(*(_QWORD *)a1 + 8LL);
  if ( (unsigned __int8)sub_B981D0((_QWORD *)v30, a2) )
  {
    v19 = sub_B987D0((_QWORD *)v30, a2);
    if ( (v19 & 1) != 0 || (byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      v10 &= ~1uLL;
  }
  else
  {
    v10 &= ~2uLL;
    if ( (*(_BYTE *)((*v32)[29] + 1LL) & 0x20) == 0
      && (*(_BYTE *)(v30 + 84) & 3) != 0
      && (*(_BYTE *)(*v32[1] + 28LL) & 0x7F) != 0x26 )
    {
      v10 |= 1u;
    }
  }
  v33 = *v15;
  v31 = (__int64)*v15[2];
  if ( (unsigned __int8)sub_B981D0((_QWORD *)v31, a2) )
  {
    v20 = sub_B987D0((_QWORD *)v31, a2);
    if ( (v20 & 1) != 0 || (byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
      v14 &= ~1uLL;
  }
  else
  {
    v14 &= ~2uLL;
    if ( (*(_BYTE *)((*v33)[29] + 1LL) & 0x20) == 0
      && (*(_BYTE *)(v31 + 84) & 3) != 0
      && (*(_BYTE *)(*v33[1] + 28LL) & 0x7F) != 0x26 )
    {
      v14 |= 1u;
    }
  }
  if ( (unsigned __int8)sub_B981D0(*v15[1], a2) )
  {
    v10 &= ~4uLL;
    v14 &= ~4uLL;
  }
  if ( v10 != v14 )
    return 0;
  if ( !(unsigned __int8)sub_B98200(**(_QWORD ***)(a1 + 8), a2) )
    goto LABEL_14;
  v21 = sub_B72690(**(_QWORD **)(a1 + 8) + 72LL);
  if ( v21 )
  {
    v21 -= 64LL;
    v22 = sub_B72690(**(_QWORD **)(a1 + 16) + 72LL);
    if ( !v22 )
      goto LABEL_37;
  }
  else
  {
    v22 = sub_B72690(**(_QWORD **)(a1 + 16) + 72LL);
    if ( !v22 )
      goto LABEL_14;
  }
  v22 -= 64LL;
LABEL_37:
  if ( v22 != v21 )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL);
    v24 = sub_B72690(**(_QWORD **)(a1 + 8) + 72LL);
    if ( !v24 )
      BUG();
    v28 = *(_QWORD *)(v24 - 16);
    if ( v28 )
      v29 = v28 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v29 = sub_A7AA70(v23, v24 - 64, 0, v25, v26, v27) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v9 == *(_QWORD **)(*(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFF0LL) )
      goto LABEL_15;
    return 0;
  }
LABEL_14:
  if ( v9 != v13 )
    return 0;
LABEL_15:
  v17 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL);
  v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v17 == 43 )
    return v18 == 43;
  else
    return (v18 == 44) == (v17 == 44);
}
