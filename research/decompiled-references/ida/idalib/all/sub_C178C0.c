__int64 __fastcall sub_C178C0(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  __int64 (*v10)(); // r15
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  void *v17; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-60h]
  __int64 v19[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = 0;
  v8 = sub_BFD550(a3);
  if ( (*(_WORD *)v8 & 0x1FF) != 9 )
    return v5;
  v18 = 1;
  v17 = nullptr;
  v9 = sub_A62D20((_QWORD *)a1, a2);
  if ( *(_DWORD *)(v8 + 16) * ((*(_WORD *)(v8 + 2) >> 6) & 7) )
  {
    v15 = *(unsigned int *)(v8 + 4);
    v19[1] = *(_DWORD *)(v8 + 16) * ((*(_WORD *)(v8 + 2) >> 6) & 7u);
    v19[0] = v8 + 4 * v15 + 20;
    if ( (unsigned __int8)sub_2248060(v19, 0) )
      goto LABEL_13;
  }
  else
  {
    v18 = 32;
  }
  v10 = *(__int64 (**)())(**(_QWORD **)(a1 + 17448) + 392LL);
  v11 = *(_QWORD *)(a1 + 17448);
  v12 = sub_21F90D0();
  if ( v10 == sub_C0F610 || ((unsigned __int8 (__fastcall *)(__int64))v10)(v11) )
  {
    if ( (_BYTE)a4 )
    {
      if ( v9 == v12 )
        sub_21FFC40(v19, v12, 0);
      else
        sub_21FD1F0(v19, v9, 0);
      v13 = 1;
      if ( v19[0] == v12 )
        goto LABEL_26;
      goto LABEL_9;
    }
    if ( v9 == v12 )
      sub_21FFC40(v19, v12, 0);
    else
      sub_21FD1F0(v19, v9, 0);
    v16 = 0;
    if ( v19[0] == v12 )
      goto LABEL_30;
  }
  else
  {
    if ( (_BYTE)a4 )
    {
      if ( v9 == v12 )
        sub_21FFC40(v19, v12, 0);
      else
        sub_21FD1F0(v19, v9, 0);
      v13 = 0;
      if ( v19[0] == v12 )
      {
LABEL_26:
        sub_2200650(v19, v13, 0, &v17);
LABEL_10:
        v5 = a4;
        sub_C177C0(a5, v19);
        sub_9955A0(v19);
        if ( v18 <= 0x40 )
          return v5;
        goto LABEL_14;
      }
LABEL_9:
      sub_21F9270(v19, v13, 0, &v17);
      goto LABEL_10;
    }
    if ( v9 == v12 )
      sub_21FFC40(v19, v12, 0);
    else
      sub_21FD1F0(v19, v9, 0);
    v16 = 1;
    if ( v19[0] == v12 )
    {
LABEL_30:
      sub_2200650(v19, v16, 0, &v17);
      goto LABEL_20;
    }
  }
  sub_21F9270(v19, v16, 0, &v17);
LABEL_20:
  v5 = 1;
  sub_C177C0(a5, v19);
  sub_9955A0(v19);
LABEL_13:
  if ( v18 <= 0x40 )
    return v5;
LABEL_14:
  if ( v17 )
    operator delete[](v17);
  return v5;
}
