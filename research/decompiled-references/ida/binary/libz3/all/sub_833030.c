void __fastcall sub_833030(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  _DWORD *v11; // rax
  bool v12; // cl
  _DWORD *v13; // rax
  char v14; // dl
  void *v15; // rbx
  __int64 v16; // rax
  unsigned int *v17; // r13
  unsigned int *v18; // r14
  __int64 v19; // rcx
  unsigned int *v20; // rax
  unsigned int *v21; // rsi
  unsigned int *v22; // rdx
  unsigned int *v23; // rax
  unsigned int *v24; // r13
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r8
  int v32; // r9d
  unsigned int *v33; // rax
  char v34; // [rsp+0h] [rbp-88h]
  __int64 v35; // [rsp+0h] [rbp-88h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  unsigned int *i; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  unsigned int *v40; // [rsp+10h] [rbp-78h] BYREF
  unsigned int *v41; // [rsp+18h] [rbp-70h] BYREF
  unsigned int *v42; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v43; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v44[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v45[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 496);
  v44[0] = 0;
  v44[1] = 0;
  v45[0] = 1;
  v45[1] = 0;
  v40 = nullptr;
  v41 = nullptr;
  v42 = nullptr;
  v43 = nullptr;
  v6 = (unsigned int)sub_FF9E10(v5, a2);
  v7 = sub_FF9E10(*(_QWORD *)(a1 + 496), a3);
  if ( (_DWORD)v6 == v7 )
    goto LABEL_10;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = v7;
  v10 = *(_QWORD **)(v8 + 8 * v6);
  if ( v10[8] == *(_QWORD *)(*(_QWORD *)(v8 + 8LL * v7) + 64LL) )
    goto LABEL_10;
  v11 = *(_DWORD **)(sub_15D1F10(*v10) + 24);
  v12 = 0;
  if ( v11 && *v11 == 5 )
    v12 = v11[1] == 1;
  v34 = v12;
  v13 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v9)) + 24);
  v14 = 0;
  if ( v13 && *v13 == 5 )
    v14 = v13[1] == 1;
  if ( v34 != v14
    || !(unsigned __int8)sub_82A030((_QWORD *)a1, a2, &v40, (__int64)v44, 1)
    || !(unsigned __int8)sub_82A030((_QWORD *)a1, a2, &v41, (__int64)v44, 0)
    || !(unsigned __int8)sub_82A030((_QWORD *)a1, a3, &v42, (__int64)v44, 1)
    || !(unsigned __int8)sub_82A030((_QWORD *)a1, a3, &v43, (__int64)v44, 0) )
  {
LABEL_10:
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v44);
    sub_182CBA0(v15, v45);
    return;
  }
  ++*(_DWORD *)(a1 + 420);
  sub_829BD0((_QWORD *)a1);
  v35 = a1 + 720;
  sub_83B120(a1 + 720);
  v16 = sub_FF9FF0(*(_QWORD *)(a1 + 496));
  v17 = v42;
  v18 = v43;
  v19 = v16;
  if ( !v42 )
  {
    v21 = v41;
    if ( v40 )
    {
      if ( !v41 || v41 == v40 )
      {
        v21 = v40;
      }
      else
      {
        v39 = v16;
        v33 = (unsigned int *)sub_828BD0(*(_QWORD *)(v16 + 56), v40, v41);
        v19 = v39;
        v21 = v33;
      }
    }
    else if ( !v41 )
    {
      goto LABEL_42;
    }
    if ( !v18 )
      goto LABEL_24;
    v17 = v18;
LABEL_22:
    if ( v17 != v21 )
      v21 = (unsigned int *)sub_828BD0(*(_QWORD *)(v19 + 56), v21, v17);
    goto LABEL_24;
  }
  if ( !v43 )
  {
    v21 = v40;
    v22 = v41;
    if ( v40 )
      goto LABEL_19;
    goto LABEL_38;
  }
  if ( v43 != v42 )
  {
    v36 = v16;
    v20 = (unsigned int *)sub_828BD0(*(_QWORD *)(v16 + 56), v42, v43);
    v21 = v40;
    v22 = v41;
    v17 = v20;
    v19 = v36;
    if ( v40 )
    {
LABEL_19:
      if ( v22 && v21 != v22 )
      {
        v37 = v19;
        v23 = (unsigned int *)sub_828BD0(*(_QWORD *)(v19 + 56), v21, v22);
        v19 = v37;
        v21 = v23;
      }
      goto LABEL_22;
    }
LABEL_38:
    if ( !v22 )
    {
      v21 = v17;
      goto LABEL_24;
    }
    goto LABEL_30;
  }
  v21 = v40;
  v22 = v41;
  if ( v40 )
    goto LABEL_19;
  if ( v41 )
  {
LABEL_30:
    v21 = v22;
    goto LABEL_22;
  }
LABEL_42:
  v21 = v43;
LABEL_24:
  v24 = *(unsigned int **)sub_1005490(*(_QWORD *)(a1 + 496), v21);
  if ( v24 )
  {
    for ( i = &v24[*(v24 - 1)]; i != v24; ++v24 )
    {
      v25 = *v24;
      sub_82E330(a1, *v24);
      sub_83D3E0(v35, v25, &qword_1C7F280);
    }
  }
  v26 = *(_QWORD *)(a1 + 88);
  v27 = *(_QWORD *)(v26 + 8 * v6);
  v28 = *(_QWORD *)(v26 + 8 * v9);
  v29 = sub_880D40(a1, v35, v27, v28);
  v30 = sub_7E5C30(a1, (const void **)(a1 + 752), (__int64 *)(a1 + 776), v27, v28, v29);
  sub_7CA650(*(_QWORD *)(a1 + 80), v27, v28, (__int64)(v30 - 1), v31, v32);
  sub_25A130((char *)v44);
}

