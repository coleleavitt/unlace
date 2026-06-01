void __fastcall sub_105BFB0(__int64 *a1, _BYTE *a2, signed __int64 a3)
{
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64); // rax
  unsigned int v10; // eax
  int v11; // eax
  __int64 *v12; // rsi
  __int64 *v13; // r15
  char v14; // al
  __int64 *v15; // rbp
  __int64 v16; // r13
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r12
  void *v26; // rdi
  _QWORD v27[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v28[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-98h] BYREF
  __int64 *v30; // [rsp+30h] [rbp-88h] BYREF
  __int64 v31; // [rsp+38h] [rbp-80h]

  v6 = *a1;
  if ( (unsigned int)sub_FEAA90(*a1) <= 0x63 )
    return;
  v7 = sub_FEAA90(v6);
  if ( v7 != 120 )
  {
    if ( v7 > 0x78 )
    {
      if ( v7 != 200 && v7 != 300 )
        goto LABEL_19;
    }
    else
    {
      if ( v7 == 100 )
        return;
      if ( v7 != 110 )
        goto LABEL_19;
    }
  }
  v8 = a1[2];
  v6 = a1[1];
  v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 528LL);
  if ( v9 != sub_FF8820 )
  {
    v14 = v9(v8, a1[1], (__int64)a2, a3);
LABEL_12:
    if ( v14 )
      return;
    goto LABEL_13;
  }
  v10 = sub_2244B30(a2, a3);
  v11 = sub_2244E60(v6, a2, a3, v10);
  if ( v11 != -1 )
  {
    v12 = (__int64 *)(*(_QWORD *)v6 + 8LL * v11);
    goto LABEL_10;
  }
LABEL_19:
  v12 = (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8));
LABEL_10:
  sub_EC0F90(&v30, v12, 1);
  v13 = v30;
  sub_EC0F90(&v30, (__int64 *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8)), 1);
  if ( v30 != v13 )
  {
    v14 = *(_BYTE *)(*v13 + 8);
    goto LABEL_12;
  }
LABEL_13:
  sub_FC70B0((__int64)&v30, a1[3], 0, 148);
  sub_AEC220((unsigned __int8 **)&v30, a2, a3);
  v15 = v30;
  v16 = *(_BYTE *)(*a1 + 52) & 1;
  if ( !v30 )
  {
    v20 = v31;
    v21 = *(_DWORD *)(v31 + 14976);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *(_DWORD *)(v31 + 14976) = v22;
      v15 = *(__int64 **)(v20 + 8 * v22 + 14848);
      v23 = *((unsigned int *)v15 + 134);
      *(_BYTE *)v15 = 0;
      v24 = v15[66];
      *((_DWORD *)v15 + 106) = 0;
      v25 = v24 + (v23 << 6);
      while ( v24 != v25 )
      {
        while ( 1 )
        {
          v25 -= 64;
          v26 = *(void **)(v25 + 24);
          if ( v26 == (void *)(v25 + 40) )
            break;
          operator delete(v26);
          if ( v24 == v25 )
            goto LABEL_28;
        }
      }
LABEL_28:
      *((_DWORD *)v15 + 134) = 0;
    }
    else
    {
      v15 = (__int64 *)operator new(0x3A0u);
      *(_BYTE *)v15 = 0;
      v15[12] = (__int64)(v15 + 14);
      v15[16] = (__int64)(v15 + 18);
      v15[20] = (__int64)(v15 + 22);
      v15[24] = (__int64)(v15 + 26);
      v15[28] = (__int64)(v15 + 30);
      v15[32] = (__int64)(v15 + 34);
      v15[36] = (__int64)(v15 + 38);
      v15[40] = (__int64)(v15 + 42);
      v15[44] = (__int64)(v15 + 46);
      v15[48] = (__int64)(v15 + 50);
      v15[52] = (__int64)(v15 + 54);
      v15[13] = 0;
      *((_BYTE *)v15 + 112) = 0;
      v15[17] = 0;
      *((_BYTE *)v15 + 144) = 0;
      v15[21] = 0;
      *((_BYTE *)v15 + 176) = 0;
      v15[25] = 0;
      *((_BYTE *)v15 + 208) = 0;
      v15[29] = 0;
      *((_BYTE *)v15 + 240) = 0;
      v15[33] = 0;
      *((_BYTE *)v15 + 272) = 0;
      v15[37] = 0;
      *((_BYTE *)v15 + 304) = 0;
      v15[41] = 0;
      *((_BYTE *)v15 + 336) = 0;
      v15[45] = 0;
      *((_BYTE *)v15 + 368) = 0;
      v15[49] = 0;
      *((_BYTE *)v15 + 400) = 0;
      v15[53] = 0x800000000LL;
      v15[66] = (__int64)(v15 + 68);
      v15[67] = 0x600000000LL;
    }
    v30 = v15;
  }
  *((_BYTE *)v15 + *(unsigned __int8 *)v15 + 1) = 3;
  v17 = v30;
  v18 = *(unsigned __int8 *)v30;
  *(_BYTE *)v30 = v18 + 1;
  v17[v18 + 2] = v16;
  v27[0] = sub_FEA9E0(*a1);
  v27[1] = v19;
  sub_2257830(v28, v27);
  sub_AEC220((unsigned __int8 **)&v30, (_BYTE *)v28[0], (signed __int64)v28[1]);
  if ( v28[0] != &v29 )
    operator delete(v28[0]);
  sub_AEA040((__int64)&v30);
}
