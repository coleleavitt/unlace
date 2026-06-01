unsigned __int64 __fastcall sub_6D9640(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r11
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r11
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rbp
  __int64 v31; // rsi
  unsigned __int64 v33; // [rsp+0h] [rbp-108h]
  unsigned __int64 v35; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v36; // [rsp+10h] [rbp-F8h]
  __int64 v37; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v38; // [rsp+18h] [rbp-F0h]
  unsigned __int64 v39; // [rsp+28h] [rbp-E0h]
  __int64 v40; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v42[184]; // [rsp+50h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL;
  v10 = byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 7 | a2 & 7;
  if ( (byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v10 |= *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL));
    v9 = *(_QWORD *)v9;
  }
  v40 = 0;
  ptr[0] = v42;
  ptr[1] = (void *)0x2000000000LL;
  if ( a3 )
  {
    v35 = v9 & 0xFFFFFFFFFFFFFFF0LL;
    sub_B06960(ptr, a1, v9 & 0xFFFFFFFFFFFFFFF0LL, a4, a5, a3);
    v11 = sub_25AC3A0(a1 + 216, ptr, &v40, &off_47D0B20);
    if ( v11 )
    {
      v12 = v11 - 24;
      v13 = (v11 - 24) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v10 > 7 )
      {
LABEL_6:
        v37 = v12;
        v14 = sub_6C3980((_QWORD *)a1, v13, v10);
        v12 = v37;
        v15 = v14;
LABEL_7:
        if ( v35 != a2 || a3 != *(_QWORD *)(v12 + 40) )
        {
          v16 = *(_QWORD *)(a1 + 2192);
          *(_QWORD *)(a1 + 2272) += 64LL;
          v17 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_QWORD *)(a1 + 2200) >= v17 + 64 && v16 )
          {
            *(_QWORD *)(a1 + 2192) = v17 + 64;
            v18 = (v16 + 15) & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v17 = sub_6A76A0(a1 + 2192, 64, 4);
            v18 = v17;
          }
          v36 = v17;
          v19 = a4;
          v33 = v18;
          sub_B06840(v18, a2, v15, a3, v19, a5, a6);
          v20 = *(unsigned int *)(a1 + 16);
          v21 = v33;
          v22 = v36;
          if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v20 + 1) )
          {
            sub_25D6060(a1 + 8, a1 + 24, v20 + 1, 8);
            v20 = *(unsigned int *)(a1 + 16);
            v21 = v33;
            v22 = v36;
          }
          v15 = v21 & 0xFFFFFFFFFFFFFFF0LL;
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v20) = v22;
          ++*(_DWORD *)(a1 + 16);
        }
        goto LABEL_15;
      }
    }
    else
    {
      v24 = *(_QWORD *)(a1 + 2192);
      *(_QWORD *)(a1 + 2272) += 64LL;
      v25 = (v24 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 2200) >= v25 + 64 && v24 )
      {
        *(_QWORD *)(a1 + 2192) = v25 + 64;
        v26 = (v24 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v25 = sub_6A76A0(a1 + 2192, 64, 4);
        v26 = v25;
      }
      v39 = v25;
      v38 = v26;
      sub_B06840(v26, v35, 0, a3, a4, a5, a6);
      sub_25AC200(a1 + 216, v38 + 24, v40, &off_47D0B20);
      v27 = *(unsigned int *)(a1 + 16);
      v12 = v38;
      v28 = v39;
      if ( *(unsigned int *)(a1 + 20) < (unsigned __int64)(v27 + 1) )
      {
        sub_25D6060(a1 + 8, a1 + 24, v27 + 1, 8);
        v27 = *(unsigned int *)(a1 + 16);
        v28 = v39;
        v12 = v38;
      }
      v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v27) = v28;
      ++*(_DWORD *)(a1 + 16);
      if ( v10 > 7 )
        goto LABEL_6;
    }
    v15 = v13 | v10;
    goto LABEL_7;
  }
  sub_B06960(ptr, a1, a2, a4, a5, 0);
  v29 = sub_25AC3A0(a1 + 216, ptr, &v40, &off_47D0B20);
  v15 = (v29 - 24) & 0xFFFFFFFFFFFFFFF0LL;
  if ( !v29 )
  {
    v30 = sub_6A77E0(a1 + 2192, 64, 4);
    sub_B06840(v30, a2, 0, 0, a4, a5, a6);
    sub_25AC200(a1 + 216, v30 + 24, v40, &off_47D0B20);
    v31 = v30;
    v15 = v30 & 0xFFFFFFFFFFFFFFF0LL;
    sub_6D95F0(a1 + 8, v31);
  }
LABEL_15:
  if ( ptr[0] != v42 )
    free(ptr[0]);
  return v15;
}

