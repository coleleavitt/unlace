void __fastcall sub_152DCF0(__int64 a1, __int64 *a2, __int64 a3, int *a4)
{
  int v6; // r12d
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  int v14; // eax
  int v15; // [rsp+0h] [rbp-98h] BYREF
  __int64 v16; // [rsp+8h] [rbp-90h]
  __int16 v17; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v18[15]; // [rsp+20h] [rbp-78h] BYREF

  sub_14634E0(a2, &v15);
  if ( v17 != 5 )
    goto LABEL_6;
  v6 = v15;
  v7 = *(__int64 **)(v16 + 16);
  v8 = *v7;
  if ( (unsigned int)*v7 == 2 )
  {
    if ( *((_WORD *)v7 + 8) == 28271 )
    {
      v9 = 1;
      sub_14634E0(a2, &v15);
      goto LABEL_9;
    }
    goto LABEL_6;
  }
  if ( (_DWORD)v8 == 3 )
  {
    if ( *((_WORD *)v7 + 8) == 26223 && *((_BYTE *)v7 + 18) == 102 )
      goto LABEL_18;
LABEL_6:
    sub_FC70B0((__int64)v18, a2[6], v15, 2212);
    sub_AEA040((__int64)v18);
    return;
  }
  if ( (_DWORD)v8 != 5 || *((_DWORD *)v7 + 4) != 1702061426 || *((_BYTE *)v7 + 20) != 116 )
    goto LABEL_6;
LABEL_18:
  v9 = 0;
  sub_14634E0(a2, &v15);
LABEL_9:
  if ( v17 == 2 )
  {
    v12 = a2[16];
    a2[26] += 24;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[17] >= v13 + 24 && v12 )
      a2[16] = v13 + 24;
    else
      v13 = sub_986170((__int64)(a2 + 16), 24, 24, 3, v10, v11);
    *(_QWORD *)v13 = 0;
    *(_DWORD *)(v13 + 16) = 432;
    v14 = *a4;
    *(_DWORD *)(v13 + 4) = v6;
    *(_QWORD *)(v13 + 8) = v9;
    *(_DWORD *)v13 = v14;
    sub_14368B0((__int64)a2, (char *)v13, 1, 1u, 0, 0);
  }
  else
  {
    sub_FC70B0((__int64)v18, a2[6], v15, 2202);
    sub_1520A40(v18, (__int64)"ms_struct");
    sub_AEA040((__int64)v18);
  }
}
