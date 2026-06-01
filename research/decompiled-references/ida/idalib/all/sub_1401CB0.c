void __fastcall sub_1401CB0(__int64 a1, __int64 *a2, unsigned int *a3, _BYTE *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned int v17; // edx
  _QWORD *v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // r8
  unsigned int v22; // edx
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  int v26; // r15d
  _QWORD *v27; // r11
  int v28; // r15d
  _QWORD *v29; // r11
  _QWORD v30[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( (unsigned __int8)sub_14013A0((_QWORD *)a1, (__int64)a2, a3) )
  {
    v12 = *a3;
    *((_BYTE *)a3 + 41) = 1;
    v13 = dword_2614740[v12];
    v8 = (__int64)dword_2614760;
    *a3 = dword_2614760[v13 | 2];
  }
  if ( *((_BYTE *)a3 + 56) )
  {
    if ( *((_BYTE *)a3 + 40) )
    {
LABEL_5:
      sub_1401650(a1, a2, a3, a4);
      return;
    }
  }
  else if ( !*((_BYTE *)a3 + 72) || *((_BYTE *)a3 + 40) )
  {
    goto LABEL_5;
  }
  if ( *a3 == 4 )
    goto LABEL_5;
  if ( !*((_BYTE *)a3 + 72) )
  {
    v20 = *(_DWORD *)(a1 + 408);
    if ( v20 )
    {
      v15 = *((_QWORD *)a3 + 6);
      v11 = v20 - 1;
      v21 = *(_QWORD *)(a1 + 392);
      v22 = v11 & (37 * v15);
      v18 = (_QWORD *)(v21 + 16LL * v22);
      v23 = *v18;
      if ( v15 == *v18 )
        goto LABEL_12;
      if ( v23 != 0x7FFFFFFFFFFFFFFFLL )
      {
        v28 = 1;
        v29 = nullptr;
        while ( 1 )
        {
          if ( v23 == 0x7FFFFFFFFFFFFFFELL && !v29 )
            v29 = v18;
          v22 = v11 & (v28 + v22);
          v18 = (_QWORD *)(v21 + 16LL * v22);
          v23 = *v18;
          if ( v15 == *v18 )
            goto LABEL_12;
          if ( v23 == 0x7FFFFFFFFFFFFFFFLL )
          {
            if ( v29 )
              v18 = v29;
            break;
          }
          ++v28;
        }
      }
      v24 = *(_DWORD *)(a1 + 400);
      v30[0] = v18;
      v8 = (unsigned int)(v24 + 1);
      v9 = 3 * v20;
      v10 = (unsigned int)(4 * v8);
      if ( (unsigned int)v10 < (unsigned int)v9 )
      {
        v9 = v20 - *(_DWORD *)(a1 + 404) - (unsigned int)v8;
        v10 = v20 >> 3;
        if ( (unsigned int)v9 > (unsigned int)v10 )
          goto LABEL_18;
        goto LABEL_23;
      }
    }
    else
    {
      v30[0] = 0;
    }
    v20 *= 2;
LABEL_23:
    sub_13FEC10(a1 + 392, v20, v8, v9, v10, v11);
    sub_13F7AF0((__int64 *)(a1 + 392), (__int64 *)a3 + 6, v30);
    v15 = *((_QWORD *)a3 + 6);
    v18 = (_QWORD *)v30[0];
    LODWORD(v8) = *(_DWORD *)(a1 + 400) + 1;
LABEL_18:
    *(_DWORD *)(a1 + 400) = v8;
    if ( *v18 != 0x7FFFFFFFFFFFFFFFLL )
      --*(_DWORD *)(a1 + 404);
    goto LABEL_20;
  }
  v14 = *(_DWORD *)(a1 + 432);
  if ( !v14 )
  {
    v30[0] = 0;
    goto LABEL_30;
  }
  v15 = *((_QWORD *)a3 + 8);
  v11 = v14 - 1;
  v16 = *(_QWORD *)(a1 + 416);
  v17 = v11 & (37 * v15);
  v18 = (_QWORD *)(v16 + 16LL * v17);
  v19 = *v18;
  if ( v15 != *v18 )
  {
    if ( v19 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v26 = 1;
      v27 = nullptr;
      while ( 1 )
      {
        if ( v19 == 0x7FFFFFFFFFFFFFFELL && !v27 )
          v27 = v18;
        v17 = v11 & (v26 + v17);
        v18 = (_QWORD *)(v16 + 16LL * v17);
        v19 = *v18;
        if ( v15 == *v18 )
          goto LABEL_12;
        if ( v19 == 0x7FFFFFFFFFFFFFFFLL )
        {
          if ( v27 )
            v18 = v27;
          break;
        }
        ++v26;
      }
    }
    v25 = *(_DWORD *)(a1 + 424);
    v30[0] = v18;
    v8 = (unsigned int)(v25 + 1);
    v9 = 3 * v14;
    v10 = (unsigned int)(4 * v8);
    if ( (unsigned int)v10 < (unsigned int)v9 )
    {
      v9 = v14 - *(_DWORD *)(a1 + 428) - (unsigned int)v8;
      v10 = v14 >> 3;
      if ( (unsigned int)v9 > (unsigned int)v10 )
        goto LABEL_27;
      goto LABEL_31;
    }
LABEL_30:
    v14 *= 2;
LABEL_31:
    sub_13FEC10(a1 + 416, v14, v8, v9, v10, v11);
    sub_13F7AF0((__int64 *)(a1 + 416), (__int64 *)a3 + 8, v30);
    v15 = *((_QWORD *)a3 + 8);
    v18 = (_QWORD *)v30[0];
    LODWORD(v8) = *(_DWORD *)(a1 + 424) + 1;
LABEL_27:
    *(_DWORD *)(a1 + 424) = v8;
    if ( *v18 != 0x7FFFFFFFFFFFFFFFLL )
      --*(_DWORD *)(a1 + 428);
LABEL_20:
    *v18 = v15;
    v18[1] = 0;
  }
LABEL_12:
  sub_13F4490(v18 + 1, (__int64)a2);
  sub_13FB960((__int64)(a2 + 76), (unsigned __int64)a3);
}
