unsigned __int64 __fastcall sub_6DABD0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  int v13; // ebx
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // bl
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v26; // bl
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned int v30; // r14d
  unsigned int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+8h] [rbp-50h]
  __int64 v35; // [rsp+8h] [rbp-50h]
  void *v36; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+18h] [rbp-40h]

  v2 = a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) != 0 )
  {
    v5 = sub_B107B0(a2);
    v6 = *(unsigned __int8 *)(v5 + 16);
    v7 = v4;
    if ( (unsigned __int8)v6 > 0x28u )
    {
      switch ( (_BYTE)v6 )
      {
        case '*':
          v23 = *(_BYTE *)(v5 + 18);
          v24 = sub_6B2590(v5);
          v25 = sub_6DABD0(a1, v24);
          v12 = sub_6C4DA0((__int64)a1, v25, (v23 & 8) != 0);
          break;
        case '+':
          v20 = sub_6B2590(v5);
          v21 = sub_6DABD0(a1, v20);
          v12 = sub_6C5080((__int64)a1, v21);
          break;
        case ')':
          v17 = sub_6DABD0(a1, *(_QWORD *)(v5 + 32));
          v12 = sub_6C4160((__int64)a1, v17);
          break;
        default:
          goto LABEL_19;
      }
    }
    else if ( (unsigned __int8)v6 > 5u )
    {
      v15 = 0x10106000800LL;
      if ( _bittest64(&v15, v6) )
        return v2;
      if ( (_BYTE)v6 == 6 )
      {
        v26 = *(_BYTE *)(v5 + 18);
        v27 = *(_QWORD *)(v5 + 48);
        v28 = sub_6DABD0(a1, *(_QWORD *)(v5 + 32));
        v12 = sub_6C5920((__int64)a1, v28, 0, 2u, (v26 >> 3) & 7, v27);
      }
      else
      {
        if ( (_BYTE)v6 != 7 )
          goto LABEL_19;
        v22 = sub_6DABD0(a1, *(_QWORD *)(v5 + 32));
        v12 = sub_6CA7E0((__int64)a1, v22);
      }
    }
    else
    {
      switch ( (_BYTE)v6 )
      {
        case 4:
          v29 = *(_QWORD *)(v5 + 40);
          v35 = *(_QWORD *)(v5 + 48);
          v30 = (*(_BYTE *)(v5 + 18) >> 3) & 7;
          v31 = (*(_WORD *)(v5 + 18) >> 6) & 7;
          v32 = sub_6DABD0(a1, *(_QWORD *)(v5 + 32));
          v12 = sub_6D9640((__int64)a1, v32, v29, v31, v30, v35);
          break;
        case 5:
          v18 = *(_BYTE *)(v5 + 18);
          v19 = sub_6DABD0(a1, *(_QWORD *)(v5 + 32));
          v12 = sub_6C5920((__int64)a1, v19, 0, 0, (v18 >> 3) & 7, 0);
          break;
        case 2:
          v8 = 0;
          v9 = (*(_BYTE *)(v5 + 18) >> 3) & 7;
          v10 = (*(_WORD *)(v5 + 18) >> 6) & 7;
          if ( (*(_BYTE *)(v5 + 19) & 2) != 0 )
            v8 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL);
          v33 = v8;
          sub_6B25E0((__int64)&v36, v5);
          v11 = sub_6DABD0(a1, *(_QWORD *)(v5 + 32));
          v12 = sub_6C55D0((__int64)a1, v11, (__int64)&v36, v33, v10, v9);
          if ( v37 > 0x40 && v36 )
          {
            v34 = v12;
            operator delete[](v36);
            v12 = v34;
          }
          break;
        default:
LABEL_19:
          v16 = nullptr;
          if ( v4 <= 7 )
          {
            v14 = 0;
            v13 = 0;
            return v14 | (unsigned int)v7 | v13;
          }
          return sub_6C3980(a1, (unsigned __int64)v16, v4);
      }
    }
    if ( v7 <= 7 )
    {
      v13 = v12 & 7;
      v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      return v14 | (unsigned int)v7 | v13;
    }
    v4 = v7 | v12 & 7;
    v16 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v12 & 8) != 0 )
    {
      v4 |= *(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
      v16 = (_QWORD *)*v16;
    }
    return sub_6C3980(a1, (unsigned __int64)v16, v4);
  }
  return v2;
}

