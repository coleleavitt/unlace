__int64 __fastcall sub_75A3F0(long double *a1, __int64 a2, unsigned __int64 a3, char *a4)
{
  char *v4; // rbx
  __int64 v5; // r12
  char v6; // bp
  int v8; // r9d
  __int64 v9; // r12
  int v10; // r14d
  char v11; // al
  unsigned __int8 v12; // al
  __int64 v13; // r8
  char v14; // bl
  _BOOL8 v15; // rdx
  unsigned int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  char v19; // al
  int v20; // esi
  char v21; // al
  bool v22; // zf
  long double v23; // [rsp+0h] [rbp-A8h]
  unsigned int v24; // [rsp+18h] [rbp-90h] BYREF
  _BYTE v25[4]; // [rsp+1Ch] [rbp-8Ch] BYREF
  long double v26; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v27[72]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v24 = 0;
  v4 = qword_2CD44C0;
  v5 = *qword_2CD44C0;
  if ( (_BYTE)v5 == 73 )
    goto LABEL_9;
  v6 = (char)a1;
  if ( (_BYTE)v5 != 78 )
    goto LABEL_3;
  if ( qword_2CD44C0[1] == 65 && qword_2CD44C0[2] == 78 )
  {
LABEL_10:
    sub_76FCD0(v25, 1818322290, 4);
    sub_770B70(&v24, v25);
    if ( *qword_2CD44C0 == 73 )
      sub_76FA20(v25, ".infinity", 9);
    else
      sub_76FCD0(v25, 1851878958, 4);
    sub_770B70(&v24, v25);
    qword_2CD44C0 += 3;
    return v24;
  }
  a1 = (long double *)&v24;
  a2 = 45;
  ++qword_2CD44C0;
  sub_76FD20(&v24, 45);
  v4 = qword_2CD44C0;
  v5 = *qword_2CD44C0;
  if ( (_BYTE)v5 == 73 )
  {
LABEL_9:
    if ( v4[1] != 78 || v4[2] != 70 )
      goto LABEL_4;
    goto LABEL_10;
  }
LABEL_3:
  if ( (unsigned int)(char)v5 > 0x7F || ((*__ctype_b_loc())[v5] & 0x1000) == 0 )
    goto LABEL_4;
  v9 = 0;
  a1 = &v26;
  v10 = 0;
  v26 = 0.0;
  a3 = 0;
  while ( 1 )
  {
    a4 = v4 + 1;
    qword_2CD44C0 = v4 + 1;
    v11 = *v4;
    if ( (unsigned __int8)*v4 > 0x60u )
    {
      v11 -= 32;
LABEL_17:
      v12 = v11 - 55;
      if ( v12 > 0xFu )
        goto LABEL_4;
      goto LABEL_18;
    }
    if ( (unsigned __int8)v11 > 0x40u )
      goto LABEL_17;
    v12 = v11 - 48;
    if ( v12 > 9u )
      goto LABEL_4;
LABEL_18:
    v13 = v9;
    v9 *= 16;
    v10 -= ((_DWORD)a3 == 0) - 1;
    if ( v4[1] == 80 )
      break;
    a4 = v4 + 2;
    v19 = 16 * v12;
    qword_2CD44C0 = v4 + 2;
    v20 = (unsigned __int8)v4[1];
    if ( (unsigned __int8)v20 > 0x60u )
    {
      v20 -= 32;
LABEL_38:
      a2 = (unsigned int)(v20 - 55);
      if ( (unsigned __int8)a2 > 0xFu )
        goto LABEL_4;
      goto LABEL_39;
    }
    if ( (unsigned __int8)v20 > 0x40u )
      goto LABEL_38;
    a2 = (unsigned int)(v20 - 48);
    if ( (unsigned __int8)a2 > 9u )
      goto LABEL_4;
LABEL_39:
    v13 <<= 8;
    v21 = a2 | v19;
    ++v10;
    a3 = (unsigned int)(a3 + 1);
    v9 = v13;
    v22 = v4[2] == 80;
    *(_BYTE *)a1 = v21;
    LOBYTE(v9) = v21;
    if ( v22 )
      goto LABEL_20;
    a1 = (long double *)((char *)a1 + 1);
    if ( (_DWORD)a3 == 10 )
      goto LABEL_30;
    v4 += 2;
  }
  *(_BYTE *)a1 = v12;
  LOBYTE(v9) = v12;
  a3 = (unsigned int)(a3 + 1);
LABEL_20:
  if ( (unsigned int)a3 > 8
    || (qword_2CD44C0 = a4 + 1,
        v14 = a4[1],
        v15 = v14 == 78,
        qword_2CD44C0 = &a4[v15 + 1],
        v16 = sub_76E990(a1, a2, v15, a4, v13),
        v16 > 0x3FFF)
    || v6 == 99 && (a3 = (unsigned __int64)qword_2CD44C0, a4 = qword_2CD44C0 + 1, ++qword_2CD44C0, *(_BYTE *)a3 != 99) )
  {
LABEL_4:
    sub_76E6C0(a1, a2, a3, a4);
  }
  if ( v10 )
  {
    a3 = -v16;
    if ( v14 == 78 )
      v16 = -v16;
    v17 = v16 - 4 * v10;
    if ( v17 < -16383 )
      goto LABEL_4;
    v23 = (long double)v9;
    if ( v9 < 0 )
      v23 = (long double)(unsigned __int64)v9;
    v26 = v23;
    WORD4(v26) = WORD4(v23) + v17;
  }
  else if ( v16 )
  {
    goto LABEL_4;
  }
LABEL_30:
  v18 = qsnprintf((unsigned int)v27, 64, (unsigned int)"%Lg", (_DWORD)a4, v13, v8);
  if ( v18 )
    sub_76FC00(v25, v27, v18);
  else
    sub_76FA20(v25, "@?.?@", 5);
  sub_770B70(&v24, v25);
  return v24;
}
