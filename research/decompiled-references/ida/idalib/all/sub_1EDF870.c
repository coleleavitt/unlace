void __fastcall sub_1EDF870(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r12
  unsigned __int64 v4; // r12
  _DWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r15
  char **v12; // r10
  unsigned __int64 v13; // r11
  __int64 v14; // rcx
  char **v15; // r10
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  char **v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  int v21; // edx
  char **v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  unsigned __int8 v25; // al
  _BYTE *v26; // r15
  unsigned __int64 v27; // rsi
  __int64 v28; // rbx
  size_t v29; // rax
  _DWORD *v30; // [rsp+8h] [rbp-C0h]
  _DWORD *v31; // [rsp+10h] [rbp-B8h]
  _DWORD *v32; // [rsp+10h] [rbp-B8h]
  _DWORD *v33; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v34; // [rsp+18h] [rbp-B0h]
  unsigned int v35; // [rsp+18h] [rbp-B0h]
  unsigned int v36; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v37; // [rsp+20h] [rbp-A8h]
  unsigned int v38; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+28h] [rbp-A0h]
  char **v40; // [rsp+30h] [rbp-98h] BYREF
  char **v41; // [rsp+38h] [rbp-90h] BYREF
  char **v42; // [rsp+40h] [rbp-88h] BYREF
  char **v43; // [rsp+48h] [rbp-80h] BYREF
  void *v44[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v45[16]; // [rsp+60h] [rbp-68h] BYREF
  void *v46[2]; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v47[72]; // [rsp+80h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(a2 + 848);
  v3 = *(_QWORD *)(a2 + 856);
  *(_QWORD *)(a2 + 848) = 0;
  v40 = (char **)(a2 + 2112);
  v41 = (char **)(a2 + 2512);
  v4 = v2 + v3;
  v42 = (char **)(a2 + 2600);
  *(_QWORD *)(a2 + 856) = 0;
  v43 = (char **)(a2 + 2656);
  if ( v4 <= v2 )
    goto LABEL_30;
  while ( 1 )
  {
    v25 = *(_BYTE *)v2;
    v26 = (_BYTE *)(v2 + 3);
    v27 = v2 + 3;
    v28 = v2 + 3 + *(unsigned __int16 *)(v2 + 1);
    if ( v25 != 5 && v25 > 1u )
      break;
    v6 = (_DWORD *)sub_1FDAF70();
    if ( !v6 )
      goto LABEL_26;
LABEL_4:
    v7 = *(unsigned int *)(a2 + 3328);
    if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 3332) )
    {
      v30 = v6;
      sub_2237220(a2 + 3320, a2 + 3336, v7 + 1, 8);
      v7 = *(unsigned int *)(a2 + 3328);
      v6 = v30;
    }
    v2 = v28 + 16;
    *(_QWORD *)(*(_QWORD *)(a2 + 3320) + 8 * v7) = v6;
    ++*(_DWORD *)(a2 + 3328);
    v8 = *(_DWORD *)(v2 - 16);
    v9 = *(unsigned int *)(v2 - 12);
    v10 = *(unsigned int *)(v2 - 8);
    v11 = *(unsigned int *)(v2 - 4);
    if ( v8 != -1 )
    {
      v12 = v40;
      v13 = ((unsigned __int64)(v6[526] - v8) << 32) | v8;
      v14 = *((unsigned int *)v40 + 2);
      if ( v14 + 1 > (unsigned __int64)*((unsigned int *)v40 + 3) )
      {
        v39 = ((unsigned __int64)(v6[526] - v8) << 32) | v8;
        v38 = *(_DWORD *)(v2 - 12);
        v36 = *(_DWORD *)(v2 - 8);
        v33 = v6;
        sub_2237220(v40, v40 + 2, v14 + 1, 8);
        v12 = v40;
        v13 = v39;
        v9 = v38;
        v10 = v36;
        v14 = *((unsigned int *)v40 + 2);
        v6 = v33;
      }
      *(_QWORD *)&(*v12)[8 * v14] = v13;
      ++*((_DWORD *)v12 + 2);
    }
    if ( (_DWORD)v9 != -1 )
    {
      v15 = v41;
      v16 = *((unsigned int *)v41 + 2);
      v17 = ((unsigned __int64)(unsigned int)(v6[626] - v9) << 32) | v9;
      if ( v16 + 1 > (unsigned __int64)*((unsigned int *)v41 + 3) )
      {
        v37 = v17;
        v35 = v10;
        v32 = v6;
        sub_2237220(v41, v41 + 2, v16 + 1, 8);
        v15 = v41;
        v17 = v37;
        v10 = v35;
        v6 = v32;
        v16 = *((unsigned int *)v41 + 2);
      }
      *(_QWORD *)&(*v15)[8 * v16] = v17;
      ++*((_DWORD *)v15 + 2);
    }
    if ( (_DWORD)v10 != -1 )
    {
      v18 = v42;
      v19 = *((unsigned int *)v42 + 2);
      v20 = ((unsigned __int64)(unsigned int)(v6[649] - v10) << 32) | v10;
      if ( v19 + 1 > (unsigned __int64)*((unsigned int *)v42 + 3) )
      {
        v34 = v20;
        v31 = v6;
        sub_2237220(v42, v42 + 2, v19 + 1, 8);
        v18 = v42;
        v20 = v34;
        v6 = v31;
        v19 = *((unsigned int *)v42 + 2);
      }
      *(_QWORD *)&(*v18)[8 * v19] = v20;
      ++*((_DWORD *)v18 + 2);
    }
    if ( (_DWORD)v11 != -1 )
    {
      v21 = v6[662];
      v22 = v43;
      v23 = *((unsigned int *)v43 + 2);
      v24 = ((unsigned __int64)(unsigned int)(v21 - v11) << 32) | v11;
      if ( v23 + 1 > (unsigned __int64)*((unsigned int *)v43 + 3) )
      {
        sub_2237220(v43, v43 + 2, v23 + 1, 8);
        v22 = v43;
        v23 = *((unsigned int *)v43 + 2);
      }
      *(_QWORD *)&(*v22)[8 * v23] = v24;
      ++*((_DWORD *)v22 + 2);
    }
    if ( v4 <= v2 )
      goto LABEL_30;
  }
  v6 = (_DWORD *)sub_1FDE440(a1 + 160, v27);
  if ( v6 )
    goto LABEL_4;
LABEL_26:
  v44[0] = v45;
  v29 = j__strlen("refers to unknown module, cannot find ");
  sub_1EA9D80(v44, "refers to unknown module, cannot find ", (__int64)&aRefersToUnknow[v29]);
  v46[0] = v47;
  sub_1EA9D80(v46, v26, v28);
  sub_9EE560(v44, (_BYTE *)v46[0], (size_t)v46[1]);
  if ( v46[0] != v47 )
    operator delete(v46[0]);
  sub_1EAD680(a1, (_BYTE *)v44[0], (signed __int64)v44[1]);
  if ( v44[0] != v45 )
    operator delete(v44[0]);
LABEL_30:
  sub_1EDF560(&v43);
  sub_1EDF560(&v42);
  sub_1EDF560(&v41);
  sub_1EDF560(&v40);
}
