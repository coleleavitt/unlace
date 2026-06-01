__int64 __fastcall sub_8DB1D0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbp
  _QWORD *v6; // rdi
  void (*v7)(void); // rax
  _QWORD *v8; // rdi
  void (*v9)(void); // rdx
  _QWORD **v10; // rdi
  unsigned int v11; // eax
  void *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  int v23; // r14d
  __int64 v24; // r15
  char v25; // bl
  __int64 v26; // rsi
  __int64 v27; // r13
  void *v29; // [rsp+0h] [rbp-F8h] BYREF
  unsigned int v30; // [rsp+8h] [rbp-F0h]
  char v31; // [rsp+Ch] [rbp-ECh]
  int v32; // [rsp+10h] [rbp-E8h]
  void *v33; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-D0h]
  int v35; // [rsp+30h] [rbp-C8h]
  unsigned int v36; // [rsp+40h] [rbp-B8h] BYREF
  char v37; // [rsp+44h] [rbp-B4h]
  void *v38; // [rsp+48h] [rbp-B0h]
  unsigned int v39; // [rsp+50h] [rbp-A8h]
  char v40; // [rsp+54h] [rbp-A4h]
  int v41; // [rsp+58h] [rbp-A0h]
  _QWORD v42[3]; // [rsp+80h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+98h] [rbp-60h]
  unsigned int v44; // [rsp+A0h] [rbp-58h]
  int v45; // [rsp+B0h] [rbp-48h]

  sub_A1BF70(v42, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 24);
  v30 = *(_DWORD *)(v5 + 8);
  if ( v30 > 0x40 )
    sub_2585B30(&v29);
  else
    v29 = *(void **)v5;
  v6 = *(_QWORD **)(a1 + 24);
  v31 = *(_BYTE *)(v5 + 12);
  v32 = *(_DWORD *)(v5 + 16);
  v7 = *(void (**)(void))(*v6 + 104LL);
  if ( (char *)v7 != (char *)sub_8D7E60 )
  {
LABEL_35:
    v7();
    goto LABEL_7;
  }
  v8 = (_QWORD *)v6[3];
  v9 = *(void (**)(void))(*v8 + 104LL);
  if ( v9 == v7 )
  {
    v10 = (_QWORD **)v8[3];
    v7 = (void (*)(void))(*v10)[13];
    if ( v7 == v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10[3] + 104LL))(v10[3]);
      goto LABEL_7;
    }
    goto LABEL_35;
  }
  v9();
LABEL_7:
  v11 = v30;
  v12 = v29;
  v34 = v30;
  if ( v30 > 0x40 )
  {
    sub_2585B30(&v33);
    v11 = v34;
    v12 = v33;
  }
  v39 = v11;
  v38 = v12;
  v35 = v32;
  v41 = v32;
  v37 &= ~1u;
  v40 = v31;
  v36 = 4;
  v13 = sub_7A7530(a3, 1);
  sub_6A63E0(v13, (__int64)&v36);
  if ( v45 == 1 )
  {
    v14 = v43;
  }
  else
  {
    if ( (unsigned int)(v45 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v43[4];
  }
  v15 = *v14;
  v16 = a3;
  v17 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v15 & 2) == 0 )
    v17 = 0;
  v18 = v17;
  v19 = *(unsigned int *)(a1 + 232);
  if ( *(unsigned int *)(a1 + 236) < (unsigned __int64)(v19 + 1) )
  {
    sub_25D6060(a1 + 224, a1 + 240, v19 + 1, 16);
    v19 = *(unsigned int *)(a1 + 232);
  }
  v20 = (unsigned __int64 *)(*(_QWORD *)(a1 + 224) + 16 * v19);
  *v20 = v18;
  v20[1] = v16;
  v21 = *(_QWORD *)(a1 + 184);
  ++*(_DWORD *)(a1 + 232);
  v22 = sub_A1A5A0(v21, 24);
  v23 = *(_DWORD *)(v22 + 8);
  v24 = *(_QWORD *)v22;
  *(_DWORD *)(v22 + 8) = 0;
  v25 = *(_BYTE *)(v22 + 12);
  v35 = *(_DWORD *)(v22 + 16);
  sub_A1A5E0(v21, 24);
  if ( v45 )
    goto LABEL_21;
  v26 = v43[4];
  if ( *(_DWORD *)(v26 + 16) != v44 && v44 )
    v26 = *(__int64 *)((char *)v43 + v44 + 32);
  if ( !*(_BYTE *)(v26 + 51) || (v27 = (__int64)v43 + v42[0] + 72, v44 != v42[0]) )
LABEL_21:
    v27 = (__int64)v43 + v42[0] + 40;
  if ( *(_DWORD *)(v27 + 8) > 0x40u && *(_QWORD *)v27 )
    operator delete[](*(void **)v27);
  *(_QWORD *)v27 = v24;
  *(_DWORD *)(v27 + 8) = v23;
  *(_BYTE *)(v27 + 12) = v25;
  *(_DWORD *)(v27 + 16) = v35;
  sub_A1DB00(v42);
  if ( v36 > 1 )
    sub_69F740((__int64)&v36);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  return sub_A1C0C0(v42);
}

