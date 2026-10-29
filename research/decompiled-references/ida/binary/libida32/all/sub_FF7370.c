__int64 __fastcall sub_FF7370(__int64 a1, unsigned int *a2, __int64 a3)
{
  int v4; // r8d
  int v5; // r9d
  _BYTE *v6; // rax
  unsigned int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  _BYTE *v10; // rax
  __m128i s2; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v13; // [rsp+20h] [rbp-88h] BYREF
  __int64 v14; // [rsp+30h] [rbp-78h]
  int v15[2]; // [rsp+40h] [rbp-68h] BYREF
  int v16; // [rsp+48h] [rbp-60h]
  __int128 v17; // [rsp+50h] [rbp-58h]
  _WORD *v18; // [rsp+60h] [rbp-48h]
  char v19; // [rsp+68h] [rbp-40h]
  int v20; // [rsp+6Ch] [rbp-3Ch]
  __int64 v21; // [rsp+70h] [rbp-38h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v21 = a1;
  *(_QWORD *)v15 = &off_2BC1EC8;
  v16 = 0;
  v19 = 0;
  v20 = 1;
  v18 = nullptr;
  v17 = 0;
  sub_2257B70(v15, 0, 0, 0);
  v6 = v18;
  if ( (unsigned __int64)v18 >= *((_QWORD *)&v17 + 1) )
  {
    sub_2257CD0(v15, 60);
  }
  else
  {
    v18 = (_WORD *)((char *)v18 + 1);
    *v6 = 60;
  }
  v7 = *a2;
  v13.m128i_i64[1] = 0;
  v14 = 0;
  sub_FF6AA0(&s2, (__int64)v15, a3, v7, v4, v5, (const __m128i)0LL, 0);
  if ( *a2 != a2[1] )
  {
    if ( *((_QWORD *)&v17 + 1) - (_QWORD)v18 > 1u )
      *v18++ = 8236;
    else
      sub_22581D0(v15, ", ", 2);
    sub_FF6AA0(&v13, (__int64)v15, a3, a2[1], v8, v9, (const __m128i)0LL, s2.m128i_i64[0]);
    v10 = v18;
    if ( (unsigned __int64)v18 < *((_QWORD *)&v17 + 1) )
      goto LABEL_5;
LABEL_10:
    sub_2257CD0(v15, 62);
    goto LABEL_6;
  }
  v10 = v18;
  if ( (unsigned __int64)v18 >= *((_QWORD *)&v17 + 1) )
    goto LABEL_10;
LABEL_5:
  v18 = v10 + 1;
  *v10 = 62;
LABEL_6:
  *(_QWORD *)v15 = &off_2BC1EC8;
  sub_2257A60(v15);
  return a1;
}

