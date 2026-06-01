unsigned __int64 __fastcall sub_AB72A0(_QWORD *a1, unsigned int a2, _QWORD *a3, const void *a4, __int64 a5, char a6)
{
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r10d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rsi
  _QWORD *v19; // [rsp+10h] [rbp-2A8h]
  __int64 v20; // [rsp+20h] [rbp-298h]
  __int64 v21; // [rsp+20h] [rbp-298h]
  void *v22; // [rsp+20h] [rbp-298h]
  __int64 v23; // [rsp+20h] [rbp-298h]
  __int64 v24; // [rsp+30h] [rbp-288h]
  unsigned int v25; // [rsp+3Ch] [rbp-27Ch]
  char v26; // [rsp+47h] [rbp-271h] BYREF
  __int64 v27; // [rsp+48h] [rbp-270h] BYREF
  _BYTE v28[16]; // [rsp+50h] [rbp-268h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-258h] BYREF
  _BYTE v30[128]; // [rsp+70h] [rbp-248h] BYREF
  void *v31; // [rsp+F0h] [rbp-1C8h] BYREF
  unsigned int v32; // [rsp+F8h] [rbp-1C0h]
  __int64 v33; // [rsp+100h] [rbp-1B8h] BYREF

  ptr[0] = v30;
  ptr[1] = (void *)0x2000000000LL;
  sub_F58860(ptr, a1, a2, a3, a4, a5);
  v27 = 0;
  v19 = a1 + 81;
  v9 = sub_2223360(a1 + 81, ptr, &v27, &off_2B40FC0);
  if ( v9 )
  {
    v10 = v9 - 24;
    if ( v10 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_4;
    }
  }
  v20 = 0;
  if ( !a6 )
  {
    v13 = *a3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( ((1LL << a2) & 0x57) != 0 )
    {
      v21 = sub_AB7570(a1, *a3 & 0xFFFFFFFFFFFFFFF8LL);
      v26 = 0;
      sub_AB7150(&v31, a1, a4, a5, &v26);
      v14 = v21;
      v15 = a2;
    }
    else
    {
      v23 = sub_AB7570(a1, *a3 & 0xFFFFFFFFFFFFFFF8LL);
      v26 = 0;
      sub_AB7150(&v31, a1, a4, a5, &v26);
      v15 = ((1LL << a2) & 8) == 0 ? 6 : 0;
      v14 = v23;
      if ( a2 != v15 )
        goto LABEL_12;
    }
    if ( !v26 && v13 == v14 )
    {
      v20 = 0;
      if ( (*(_BYTE *)a3 & 4) != 0 )
      {
LABEL_13:
        if ( v31 != &v33 )
          free(v31);
        goto LABEL_15;
      }
    }
LABEL_12:
    v25 = v15;
    v22 = v31;
    v24 = v32;
    sub_F22FF0(v28, v14, a3[1], 1);
    v20 = sub_AB72A0(a1, v25, v28, v22, v24, 1);
    sub_2223360(v19, ptr, &v27, &off_2B40FC0);
    goto LABEL_13;
  }
LABEL_15:
  v16 = sub_A6FFD0(a1 + 294, 24 * a5 + 48, 4u);
  sub_F58730(v16, a2, a3, a4, a5, v20);
  sub_A6A720((__int64)(a1 + 1), v16);
  v17 = v16 + 24;
  v11 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  sub_2223210(v19, v17, v27, &off_2B40FC0);
LABEL_4:
  if ( ptr[0] != v30 )
    free(ptr[0]);
  return v11;
}
