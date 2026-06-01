_QWORD *__fastcall sub_189AB30(__int64 *a1, int a2, __int64 a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // r13
  unsigned int v13; // eax
  _QWORD *v14; // rbp
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v35; // edx
  unsigned __int64 v36; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v38[200]; // [rsp+10h] [rbp-C8h] BYREF

  v37 = a3;
  v36 = a5;
  v10 = sub_168B6C0((__int64)a1);
  v11 = *a1;
  v12 = (_QWORD *)v10;
  v13 = sub_1A3A250(*a1);
  v14 = (_QWORD *)sub_1A5B7C0(v11, *(_QWORD *)(*a1 + 192), v37, a4, 0, v13);
  if ( v14 )
  {
    sub_168B9F0((__int64)v38, a1, a4, 0xD85u, 0);
    sub_169D880((__int64)v38, &v37);
    sub_15F7200(v38);
    v35 = *((_DWORD *)v14 + 6);
    v14 = nullptr;
    sub_168B9F0((__int64)v38, a1, v35, 0x70u, 0);
    sub_15F7200(v38);
    return v14;
  }
  v15 = *a1;
  v16 = sub_1A3A250(*a1);
  v17 = *(_QWORD *)(*a1 + 192);
  v18 = sub_1A5B7C0(v15, v17, v36, a6, 0, v16);
  v20 = v18;
  if ( !v18 )
    goto LABEL_21;
  v21 = *(_BYTE *)(v18 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v21 - 64 > 2 )
    goto LABEL_14;
  v22 = (_QWORD *)(*(_QWORD *)(v18 + 80) & 0xFFFFFFFFFFFFFFF8LL);
  v23 = (*(_QWORD *)(v18 + 80) & 4) != 0 ? v22[1] : *v22;
  v24 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL);
  v25 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35;
  if ( (unsigned int)v25 > 1 )
    goto LABEL_14;
  if ( (unsigned int)*(unsigned __int8 *)(v24 + 16) - 35 > 1 )
    v24 = sub_F63050(v24, v17, v21, v25);
  v26 = sub_9C7D40(v24, v17, v21, v25, v19);
  if ( v26 )
  {
    v27 = *(_QWORD *)(v26 + 40);
    v28 = *a1;
    v29 = *a1;
    v30 = v27 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v27 & 7) != 0 )
      v30 = 0;
    v36 = v30;
    v31 = sub_1A3A250(v29);
    v20 = sub_1A5B7C0(v28, *(_QWORD *)(*a1 + 192), v36, a6, 0, v31);
    if ( !v20 )
    {
LABEL_21:
      sub_168B9F0((__int64)v38, a1, a6, 0x1D2Au, 0);
      sub_169D880((__int64)v38, (__int64 *)&v36);
      sub_15F7200(v38);
      return v14;
    }
  }
  LOBYTE(v21) = *(_BYTE *)(v20 + 28) & 0x7F;
LABEL_14:
  if ( (_BYTE)v21 == 20 )
  {
    v14 = sub_BA9460(v12, *(_QWORD *)(*a1 + 544), a2, v37, v20);
    if ( !(unsigned __int8)sub_18954B0(a1, (__int64)v14) )
      sub_17B7670(*a1, (__int64)v14, *(_QWORD *)(*a1 + 192), 1, v32, v33);
  }
  else
  {
    sub_168B9F0((__int64)v38, a1, a6, 0x1D2Au, 0);
    sub_169D880((__int64)v38, (__int64 *)&v36);
    sub_15F7200(v38);
    sub_168B9F0((__int64)v38, a1, *(_DWORD *)(v20 + 24), 0x70u, 0);
    sub_15F7200(v38);
  }
  return v14;
}
