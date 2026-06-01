__int64 __fastcall sub_2200B80(__int64 a1, __int64 *a2, _QWORD *a3, __int64 *a4, __int64 *a5, unsigned int a6)
{
  __int64 *v8; // r12
  void **v10; // rax
  char v11; // al
  int v12; // r14d
  int v13; // eax
  void **v14; // rax
  __int64 *v15; // rdi
  int v17; // r12d
  __int64 v18; // rdx
  int v19; // r12d
  int v20; // r12d
  int v21; // r12d
  _QWORD *v22; // rax
  char v23; // al
  __int64 *v24; // rdi
  int v25; // eax
  __int64 v26; // rdi
  int v27; // r12d
  __int64 v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rax
  int v31; // r15d
  int v32; // r15d
  unsigned int v33; // r12d
  int v34; // r15d
  int v35; // r12d
  int v36; // r12d
  int v37; // r12d
  unsigned int v39; // [rsp+10h] [rbp-B8h]
  unsigned int v42; // [rsp+28h] [rbp-A0h]
  int v43; // [rsp+28h] [rbp-A0h]
  int v44; // [rsp+28h] [rbp-A0h]
  int v45; // [rsp+28h] [rbp-A0h]
  int v46; // [rsp+28h] [rbp-A0h]
  int v47; // [rsp+2Ch] [rbp-9Ch]
  void *v48; // [rsp+30h] [rbp-98h] BYREF
  void **v49; // [rsp+38h] [rbp-90h]
  _QWORD v50[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v51[11]; // [rsp+70h] [rbp-58h] BYREF

  v8 = a2;
  sub_995620((__int64)&v48, a2);
  v42 = sub_C16CE0(&v48, (__int64)a4, a6);
  v10 = v49;
  if ( v48 != &unk_26F7B20 )
    v10 = &v48;
  v11 = *((_BYTE *)v10 + 20) & 7;
  if ( v11 == 1 )
  {
    sub_C177C0(*(__int64 **)(a1 + 8), (__int64 *)&v48);
    sub_C16C60((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0);
    goto LABEL_13;
  }
  if ( v11 )
  {
    sub_995620((__int64)v50, a2);
    v47 = sub_C16D20(v50, (__int64)&v48, a6);
    sub_995620((__int64)v51, v50);
    v44 = v42 | v47 | sub_C16CE0(v51, (__int64)a4, a6);
    v45 = v44 | sub_C16CE0(v50, (__int64)&v48, a6);
    v17 = sub_C16D20(v50, (__int64)a2, a6) | v45;
    sub_2011A60(v50, (__int64)a2, v18);
    v19 = sub_C16CE0(v51, (__int64)v50, a6) | v17;
    v20 = sub_C16CE0(v51, (__int64)a3, a6) | v19;
    v21 = sub_C16CE0(v51, (__int64)a5, a6) | v20;
    v22 = v51;
    if ( (_UNKNOWN *)v51[0] == &unk_26F7B20 )
      v22 = (_QWORD *)v51[1];
    v23 = *((_BYTE *)v22 + 20);
    v24 = *(__int64 **)(a1 + 8);
    if ( (v23 & 7) == 3 && (v23 & 8) == 0 )
    {
      sub_C177C0(v24, (__int64 *)&v48);
      sub_C16C60((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0);
      v42 = 0;
      goto LABEL_21;
    }
    sub_C17220(v24, (__int64 *)&v48);
    v25 = sub_C16CE0(*(_QWORD **)(a1 + 8), (__int64)v51, a6);
    v26 = *(_QWORD *)(a1 + 8);
    v27 = v25 | v21;
    v28 = v26;
    if ( *(_UNKNOWN **)v26 == &unk_26F7B20 )
    {
      v30 = *(_QWORD *)(v26 + 8);
      v29 = (__int64 *)(v26 + 24);
      if ( (*(_BYTE *)(v30 + 20) & 7u) <= 1 )
        goto LABEL_20;
    }
    else
    {
      v29 = (__int64 *)(v26 + 24);
      if ( (*(_BYTE *)(v28 + 20) & 7u) <= 1 )
      {
LABEL_20:
        sub_C16C60(v29, 0);
        v42 = v27;
LABEL_21:
        sub_9955A0(v51);
        sub_9955A0(v50);
        goto LABEL_13;
      }
    }
    sub_C177C0(v29, (__int64 *)&v48);
    v31 = sub_C16D20((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), *(_QWORD *)(a1 + 8), a6);
    v32 = sub_C16CE0((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v51, a6) | v31;
    sub_9955A0(v51);
    v33 = v32 | v27;
    sub_9955A0(v50);
LABEL_25:
    v42 = v33;
    goto LABEL_13;
  }
  if ( (_UNKNOWN *)*a2 == &unk_26F7B20 )
    v43 = sub_21FFF90((__int64)a2, (__int64)a4);
  else
    v43 = sub_21F9DB0((__int64)a2, (__int64)a4);
  sub_C17220((__int64 *)&v48, a5);
  v12 = sub_C16CE0(&v48, (__int64)a3, a6);
  if ( v43 == 2 )
  {
    v13 = sub_C16CE0(&v48, (__int64)a4, a6);
  }
  else
  {
    v13 = sub_C16CE0(&v48, (__int64)a2, a6);
    a2 = a4;
  }
  v39 = v12 | v13 | sub_C16CE0(&v48, (__int64)a2, a6);
  v14 = &v48;
  if ( v48 == &unk_26F7B20 )
    v14 = v49;
  v15 = *(__int64 **)(a1 + 8);
  if ( (*((_BYTE *)v14 + 20) & 7u) > 1 )
  {
    sub_C17220(v15, (__int64 *)&v48);
    sub_995620((__int64)v51, a3);
    v34 = sub_C16CE0(v51, (__int64)a5, a6) | v39;
    if ( v43 == 2 )
    {
      sub_C17220((__int64 *)(*(_QWORD *)(a1 + 8) + 24LL), v8);
      v36 = sub_C16D20((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)&v48, a6);
      v37 = v34 | sub_C16CE0((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)a4, a6) | v36;
      v33 = sub_C16CE0((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v51, a6) | v37;
    }
    else
    {
      sub_C17220((__int64 *)(*(_QWORD *)(a1 + 8) + 24LL), a4);
      v46 = sub_C16D20((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)&v48, a6);
      v35 = sub_C16CE0((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v8, a6) | v46;
      v33 = v35 | v34 | sub_C16CE0((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v51, a6);
    }
    sub_9955A0(v51);
    goto LABEL_25;
  }
  sub_C177C0(v15, (__int64 *)&v48);
  sub_C16C60((_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), 0);
  v42 = v39;
LABEL_13:
  sub_9955A0(&v48);
  return v42;
}
