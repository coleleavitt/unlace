void __fastcall sub_9D9340(__int64 a1, unsigned __int64 a2)
{
  __int16 v3; // ax
  _QWORD *v4; // r12
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 *v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 **v13; // r12
  __int64 v14; // rdi
  unsigned __int8 v15; // cl
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx

  v3 = *(_WORD *)a2 & 0x1FF;
  if ( v3 == 92 )
  {
    v4 = *(_QWORD **)(a2 + 32);
    if ( (*(_WORD *)v4 & 0x1FF) == 0x2E )
    {
      if ( sub_C946E0(a2) )
      {
        if ( (*v4 & 0x80000) != 0 )
        {
          v5 = sub_C94680(a2);
          sub_9CDDD0(*(_QWORD *)a1, a1 + 8, v5, 0, 1u);
        }
        else
        {
          v20 = sub_C94680(a2);
          sub_9CD930(*(_QWORD *)a1, (unsigned __int16 **)(a1 + 8), v20, 0, 1u);
        }
      }
    }
    else
    {
      sub_C946E0(a2);
    }
    v6 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
    v7 = v6 + 8LL * *(unsigned int *)(a2 + 16);
    v8 = (__int64 *)(a2 + v6);
    v9 = (__int64 *)(a2 + v7);
    v10 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 >= 6 )
      v10 = 0;
LABEL_10:
    sub_9CE190(a1, v10, v8, v9, 0);
    goto LABEL_11;
  }
  v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  if ( v3 != 91 )
  {
    v21 = v12 + 32;
    v8 = (__int64 *)(a2 + v21);
    v9 = (__int64 *)(a2 + v21 + 8LL * *(unsigned int *)(a2 + 16));
    v10 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 34 >= 6 )
      v10 = 0;
    goto LABEL_10;
  }
  v13 = (unsigned __int16 **)(a1 + 8);
  v14 = *(_QWORD *)a1;
  v15 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  if ( v15 <= 0x2Bu )
  {
    v16 = 1LL << v15;
    if ( ((1LL << v15) & 0xB0000000080LL) == 0 )
    {
      if ( (v16 & 0x33FC8000) != 0 )
      {
        sub_9CD930(v14, v13, *(_QWORD *)(a2 + v12 + 40), 0, 1u);
        v14 = *(_QWORD *)a1;
        v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
      }
      else if ( (v16 & 0x6000000000LL) == 0 )
      {
        goto LABEL_19;
      }
      sub_9CD930(v14, v13, *(_QWORD *)(a2 + v12 + 32), 1u, 1u);
LABEL_11:
      v11 = sub_BFBC70(*(_QWORD *)(a2 + 32));
      if ( !v11 )
        return;
      goto LABEL_12;
    }
    if ( v15 != 7 || *(_DWORD *)(a2 + 16) <= 1u )
    {
      sub_9CDDD0(v14, (__int64)v13, *(_QWORD *)(a2 + v12 + 32), 0, 1u);
      v14 = *(_QWORD *)a1;
      v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    }
  }
LABEL_19:
  sub_9CD930(v14, v13, *(_QWORD *)(a2 + v12 + 32), 0, 1u);
  v17 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( !v17 || (v18 = *(_BYTE *)(v17 + 28) & 0x7F, (unsigned int)(v18 - 34) > 5) )
    BUG();
  v19 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  sub_9CE190(
    a1,
    v17,
    (__int64 *)(a2 + v19 + 40),
    (__int64 *)(a2 + v19 + 8LL * *(unsigned int *)(a2 + 16) + 32),
    (unsigned int)(v18 - 35) > 3);
  v11 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  if ( v11 )
  {
LABEL_12:
    if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 18 <= 0x3F )
      sub_9D6E40((__int64 *)a1, a2, v11, nullptr, 0);
  }
}
