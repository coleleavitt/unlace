__int64 __fastcall sub_7153F0(unsigned int *a1, unsigned int *a2, int a3)
{
  int v5; // edx
  unsigned __int64 v6; // rax
  unsigned int v7; // esi
  unsigned __int16 v8; // dx
  int v9; // eax
  unsigned __int16 v10; // r14
  unsigned int v11; // ebx
  _QWORD *v13; // r12
  unsigned int v14; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  void *v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // [rsp+8h] [rbp-40h]

  v5 = (unsigned __int16)xmmword_2CA25E0;
  *((_WORD *)a1 + 12) = WORD5(xmmword_2CA25E0);
  a1[7] = *(_DWORD *)((char *)&xmmword_2CA25E0 + 6);
  *a1 = SWORD1(xmmword_2CA25E0);
  a1[8] = v5 | (WORD2(xmmword_2CA25E0) << 16);
  v6 = sub_7145E0(a2);
  v7 = *a1;
  if ( *a1 - 39 > 0x7FD9 )
    goto LABEL_11;
  v8 = *((_WORD *)a1 + 17);
  if ( v8 < *((_WORD *)a1 + 12) )
    v8 = *((_WORD *)a1 + 12);
  if ( v6 / v7 < v8 )
  {
LABEL_11:
    dword_2CA2610 = 12;
    qword_2CA2608(12, 0);
    return 0;
  }
  v9 = v7 >> 2;
  if ( v7 >= 0x1838 )
    v9 = 1549;
  a1[407] = v9;
  if ( (a1[405] & 7) != 0 )
  {
    if ( a3 )
    {
      if ( a3 > 31 )
      {
        v21 = 32;
        v10 = 32;
        goto LABEL_17;
      }
      if ( (a1[405] & 7) != 7 )
      {
        v20 = 32;
LABEL_40:
        dword_2CA2610 = 4;
        qword_2CA2608(4, v20);
        return 0;
      }
      LOWORD(a3) = 32;
    }
    v21 = 32;
    v10 = 32;
  }
  else
  {
    if ( a3 )
    {
      if ( a3 > 63 )
      {
        v21 = 64;
        v10 = 64;
        goto LABEL_17;
      }
      v20 = 64;
      goto LABEL_40;
    }
    v21 = 64;
    v10 = 64;
  }
LABEL_17:
  v13 = (_QWORD *)operator new(0x250u);
  sub_713080(v13, (__int64)a2, *a1, a3, (__int64)qword_2CA2608);
  *((_QWORD *)a1 + 1) = v13;
  LOBYTE(v14) = sub_712E30(v13);
  v11 = v14;
  if ( !(_BYTE)v14 )
  {
    qword_2CA2608(37, 0);
    v19 = *((void **)a1 + 1);
    if ( v19 )
    {
      sub_713500(*((_QWORD *)a1 + 1));
      operator delete(v19, 0x250u);
    }
    *((_QWORD *)a1 + 1) = 0;
    return 0;
  }
  if ( *((_WORD *)a1 + 816) == 1 )
    sub_713BF0(a1);
  else
    sub_715120(a1, 0, nullptr);
  sub_7138E0(*((_QWORD **)a1 + 1), (__int64)qword_2CA2608);
  v15 = *((_QWORD *)a1 + 1);
  if ( *(_WORD *)(v15 + 8) < v10 )
  {
    if ( v15 )
    {
      sub_713500(*((_QWORD *)a1 + 1));
      operator delete((void *)v15, 0x250u);
    }
    *((_QWORD *)a1 + 1) = 0;
    dword_2CA2610 = 4;
    qword_2CA2608(4, v21);
    return 0;
  }
  v16 = a1[405];
  v17 = 0;
  if ( (~(_BYTE)v16 & 7) != 0 && (v16 & 0x4000) == 0 )
    v17 = 4 * *a1;
  *(_DWORD *)(v15 + 584) = v17;
  v18 = a1[405];
  if ( (~(_BYTE)v18 & 7) != 0 && (v18 & 0x4000) == 0 && (unsigned int)sub_714E80((__int64)a1, 1) == 2 )
    sub_714A60((__int64)a1, 0);
  return v11;
}

