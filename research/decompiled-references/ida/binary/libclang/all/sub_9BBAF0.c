__int64 __fastcall sub_9BBAF0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // r13
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  void (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rsi
  _QWORD *v24; // rcx
  unsigned int v26; // [rsp+0h] [rbp-A8h] BYREF
  char v27; // [rsp+4h] [rbp-A4h]
  __int64 v28; // [rsp+8h] [rbp-A0h]
  int v29; // [rsp+10h] [rbp-98h]
  char v30; // [rsp+14h] [rbp-94h]
  _QWORD v31[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v32; // [rsp+58h] [rbp-50h]
  unsigned int v33; // [rsp+60h] [rbp-48h]
  int v34; // [rsp+70h] [rbp-38h]

  sub_A1BF70(v31, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 224LL) + 8LL * a2));
  v5 = (__int64 *)sub_A1A5A0(*(_QWORD *)(a1 + 184), 8);
  v6 = *(_QWORD **)(a1 + 24);
  v7 = *v5;
  v8 = *(__int64 (__fastcall **)(__int64))(*v6 + 104LL);
  if ( v8 == sub_8D7E60 )
  {
    v9 = (_QWORD *)v6[3];
    v10 = *(void (**)(void))(*v9 + 104LL);
    if ( (char *)v10 != (char *)v8 )
    {
LABEL_23:
      v10();
      goto LABEL_6;
    }
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 104LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (void (*)(void))(*v12)[13];
      if ( (char *)v10 == (char *)v8 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v12[3] + 104LL))(v12[3]);
        goto LABEL_6;
      }
      goto LABEL_23;
    }
  }
  ((void (*)(void))v8)();
LABEL_6:
  v27 &= ~1u;
  v26 = 2;
  v28 = v7;
  v29 = 64;
  v30 = 0;
  v13 = sub_7A7530(a3, 1);
  sub_6A63E0(v13, (__int64)&v26);
  if ( v34 == 1 )
  {
    v14 = v32;
  }
  else
  {
    if ( (unsigned int)(v34 - 2) <= 1 )
      BUG();
    v14 = (__int64 *)v32[4];
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
  ++*(_DWORD *)(a1 + 232);
  v21 = *(_QWORD *)(a1 + 184);
  v22 = *(_QWORD *)sub_A1A5A0(v21, 8);
  sub_A1A5E0(v21, 8);
  if ( v34 )
    goto LABEL_19;
  v23 = v32[4];
  if ( *(_DWORD *)(v23 + 16) != v33 && v33 )
    v23 = *(__int64 *)((char *)v32 + v33 + 32);
  if ( !*(_BYTE *)(v23 + 51) || (v24 = (__int64 *)((char *)v32 + v31[0] + 72), v33 != v31[0]) )
LABEL_19:
    v24 = (__int64 *)((char *)v32 + v31[0] + 40);
  *v24 = v22;
  sub_A1DB00(v31);
  if ( v26 > 1 )
    sub_69F740((__int64)&v26);
  return sub_A1C0C0(v31);
}

