void __fastcall sub_12F1580(__int64 a1, _BYTE *a2, size_t a3, __int64 *a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // r14
  _DWORD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // esi
  int v14; // eax
  __int64 v15; // rax
  int *v16; // rbp
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r15
  unsigned __int64 *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // r15
  int *v31; // r15
  unsigned int v32; // edi
  unsigned __int8 *v33; // rdx
  int v34; // eax
  int v35; // esi
  bool v36; // zf
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  __int64 v42; // [rsp+10h] [rbp-C8h]
  unsigned __int64 *v43; // [rsp+18h] [rbp-C0h]
  __int64 v44; // [rsp+28h] [rbp-B0h] BYREF
  void *v45; // [rsp+30h] [rbp-A8h] BYREF
  signed __int64 v46; // [rsp+38h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int8 *v48[17]; // [rsp+50h] [rbp-88h] BYREF

  v8 = sub_6F3470(a1 + 552, a2, a3);
  if ( (*(_BYTE *)(v8 + 3) & 4) == 0 )
    return;
  v9 = v8;
  v10 = *(_DWORD **)(a1 + 88);
  v11 = sub_1445160(a1, v8);
  v42 = v11;
  if ( !v11 )
  {
LABEL_20:
    v16 = nullptr;
    if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
      return;
LABEL_12:
    v17 = *(_QWORD *)(a1 + 1704);
    v44 = v9;
    if ( (unsigned __int8)sub_12EC520((__int64 *)v17, &v44, &v45) )
    {
      v21 = (unsigned __int64 *)((char *)v45 + 8);
      goto LABEL_14;
    }
    v32 = *(_DWORD *)(v17 + 16);
    v33 = (unsigned __int8 *)v45;
    v34 = *(_DWORD *)(v17 + 8) + 1;
    v35 = 2 * v32;
    v20 = (unsigned int)(4 * v34);
    v19 = 3 * v32;
    v48[0] = (unsigned __int8 *)v45;
    if ( (unsigned int)v20 < (unsigned int)v19 )
    {
      v19 = v32 >> 3;
      if ( v32 - *(_DWORD *)(v17 + 12) - v34 > (unsigned int)v19 )
      {
LABEL_42:
        v36 = *(_QWORD *)v33 == -4096;
        *(_DWORD *)(v17 + 8) = v34;
        if ( !v36 )
          --*(_DWORD *)(v17 + 12);
        v37 = v44;
        *((_QWORD *)v33 + 1) = 0;
        v21 = (unsigned __int64 *)(v33 + 8);
        *(_QWORD *)v33 = v37;
LABEL_14:
        v22 = *v21;
        v23 = 0;
        if ( !*v21 )
          goto LABEL_25;
        v24 = (unsigned __int64 *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
        v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v22 & 4) != 0 )
        {
          v23 = 0;
          if ( !v24 )
            goto LABEL_25;
          v23 = *v24;
        }
        while ( v23 && (*(_BYTE *)(v23 + 12) & 3) == 2 )
          v23 = *(_QWORD *)v23;
LABEL_25:
        v43 = v21;
        sub_12EEA40(v21, (_QWORD *)a1, v44, (__int64)v21, v19, v20);
        v27 = sub_12EEA40(v43, (_QWORD *)a1, v44, (__int64)v43, v25, v26);
        v28 = 0;
        if ( v27 )
        {
          v29 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v27 + 8) & 4) != 0 )
          {
            v27 = *(_QWORD *)v29;
            v28 = *(unsigned int *)(v29 + 8);
          }
          else
          {
            v27 += 8LL;
            v28 = v29 != 0;
          }
        }
        if ( v23 && (*(_BYTE *)(v23 + 12) & 3) == 0 && (v30 = v23 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( v28 )
          {
LABEL_32:
            v31 = *(int **)(*(_QWORD *)(v27 + 8 * v28 - 8) + 16LL);
            goto LABEL_33;
          }
          v39 = sub_13F1C60(v30);
          if ( v39 )
          {
            v31 = *(int **)(v39 + 16);
LABEL_33:
            if ( v31 != v16 )
            {
              if ( !v31 )
                goto LABEL_46;
              if ( !v16 || !(unsigned __int8)sub_13F10C0(v31, v16, a1, 1) )
              {
                sub_FC70B0((__int64)v48, *(_QWORD *)(a1 + 48), a5, 843);
                sub_AE9DF0(v48, 0, 2u);
                sub_AEC220(v48, a2, a3);
                sub_FEEE60((__int64)&v45, a4, 0);
                sub_AEC220(v48, v45, v46);
                if ( v45 != v47 )
                  operator delete(v45);
                sub_AEA040((__int64)v48);
                sub_FC70B0((__int64)v48, *(_QWORD *)(a1 + 48), *v31, 796);
                sub_AE9DF0(v48, 0, 2u);
                sub_AEA040((__int64)v48);
              }
            }
            return;
          }
        }
        else if ( v28 )
        {
          goto LABEL_32;
        }
        if ( v16 )
          goto LABEL_46;
        return;
      }
      v35 = v32;
    }
    sub_12F12D0(v17, v35, (__int64)v45, v18, v19, v20);
    sub_12EC520((__int64 *)v17, &v44, v48);
    v33 = v48[0];
    v34 = *(_DWORD *)(v17 + 8) + 1;
    goto LABEL_42;
  }
  v12 = v11;
  while ( 1 )
  {
    v13 = *(_DWORD *)(v12 + 8) & 0x7FFFFFFF;
    if ( v13 < v10[119] || v13 >= v10[120] )
      break;
    v14 = v10[118];
    if ( v14 )
      goto LABEL_8;
LABEL_19:
    v12 = *(_QWORD *)v12;
    if ( !v12 )
      goto LABEL_20;
  }
  v14 = sub_101D590((__int64)v10, v13);
  if ( !v14 )
    goto LABEL_19;
LABEL_8:
  if ( *(_DWORD *)(a1 + 2392) != v14 )
    goto LABEL_19;
  if ( (*(_BYTE *)(v12 + 12) & 3) != 0 )
    goto LABEL_20;
  v15 = sub_13F1C60(v12);
  if ( !v15 )
    goto LABEL_20;
  v16 = *(int **)(v15 + 16);
  if ( (*(_BYTE *)(v9 + 3) & 2) != 0 )
    goto LABEL_12;
  if ( v16 )
  {
LABEL_46:
    sub_FC70B0((__int64)v48, *(_QWORD *)(a1 + 48), a5, 843);
    sub_AE9DF0(v48, 1, 2u);
    sub_AEC220(v48, a2, a3);
    sub_FEEE60((__int64)&v45, a4, 0);
    sub_AEC220(v48, v45, v46);
    if ( v45 != v47 )
      operator delete(v45);
    sub_AEA040((__int64)v48);
    sub_13F1C60(v42);
    sub_FC70B0((__int64)v48, *(_QWORD *)(a1 + 48), v38, 796);
    sub_AE9DF0(v48, 1, 2u);
    sub_AEA040((__int64)v48);
  }
}
