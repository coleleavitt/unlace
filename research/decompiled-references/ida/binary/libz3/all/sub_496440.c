void __fastcall sub_496440(char *a1, char *a2, char *a3, __int64 a4, __int64 a5, char *a6, __int64 a7, __int64 a8)
{
  __int64 v8; // rax
  char *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r12
  char *v13; // r15
  __int64 v14; // r10
  char *v15; // rbp
  __int64 v16; // rax
  _DWORD *v17; // rcx
  char *v18; // rbx
  char *v19; // r9
  __int64 v20; // rdx
  __int16 v21; // r11
  _DWORD *v22; // r14
  _DWORD *v23; // r11
  _DWORD *v24; // r11
  bool v25; // dl
  __int64 v26; // r14
  char *v27; // rax
  int v28; // ecx
  __int64 v29; // rdx
  char *v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // r8
  char *v34; // r9
  __int64 v35; // rsi
  __int16 v36; // r10
  _DWORD *v37; // r11
  _DWORD *v38; // r10
  _DWORD *v39; // r11
  bool v40; // si
  _DWORD *v41; // r14
  _DWORD *v42; // r11
  _DWORD *v43; // rsi
  _DWORD *v44; // r10
  _DWORD *v45; // rdx
  char *v46; // [rsp+10h] [rbp-58h]
  int destb; // [rsp+18h] [rbp-50h]
  char *dest; // [rsp+18h] [rbp-50h]
  _DWORD *desta; // [rsp+18h] [rbp-50h]

  v8 = a4;
  v10 = a2;
  v11 = a5;
  v12 = a4;
  if ( a5 <= a4 )
    v8 = a5;
  if ( a7 >= v8 )
  {
    v18 = a2;
    v30 = a1;
  }
  else
  {
    v13 = a1;
    v46 = a6;
    if ( a4 <= a5 )
      goto LABEL_26;
LABEL_5:
    v14 = v12 / 2;
    v15 = &v13[8 * (v12 / 2)];
    v16 = (a3 - v10) >> 3;
    if ( a3 - v10 > 0 )
    {
      v17 = *(_DWORD **)v15;
      v18 = v10;
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = &v18[8 * (v16 >> 1)];
          v20 = *(_QWORD *)v19;
          if ( v17 != *(_DWORD **)v19 )
            break;
LABEL_18:
          v16 >>= 1;
LABEL_19:
          if ( v16 <= 0 )
          {
LABEL_20:
            v26 = (v18 - v10) >> 3;
            v11 -= v26;
            goto LABEL_21;
          }
        }
        v21 = *((_WORD *)v17 + 2);
        if ( *(_WORD *)(v20 + 4) )
          break;
        v22 = *(_DWORD **)(*(_QWORD *)(v20 + 16) + 24LL);
        if ( !v22 || *v22 != 5 || v22[1] != 9 || *(_DWORD *)(v20 + 24) != 2 )
          break;
        v41 = *(_DWORD **)(v20 + 32);
        v20 = *(_QWORD *)(v20 + 40);
        if ( v21 )
          goto LABEL_69;
        v42 = *(_DWORD **)(*((_QWORD *)v17 + 2) + 24LL);
        if ( !v42 )
          goto LABEL_47;
        if ( *v42 != 5 )
          goto LABEL_69;
        if ( v42[1] != 9 )
        {
LABEL_47:
          if ( v17 == (_DWORD *)v20 )
            goto LABEL_70;
LABEL_15:
          v24 = *(_DWORD **)v15;
          goto LABEL_16;
        }
        if ( v17[6] != 2 )
        {
LABEL_69:
          v24 = *(_DWORD **)v15;
          if ( v17 == (_DWORD *)v20 )
          {
LABEL_70:
            if ( v41 )
            {
              v16 >>= 1;
              goto LABEL_19;
            }
            goto LABEL_7;
          }
          goto LABEL_16;
        }
        v24 = *((_DWORD **)v17 + 5);
        if ( (_DWORD *)v20 == v24 )
        {
          if ( !v41 )
            goto LABEL_7;
          v45 = *((_DWORD **)v17 + 4);
          if ( !v45 )
            goto LABEL_18;
          v25 = *v41 < *v45;
          goto LABEL_17;
        }
LABEL_16:
        v25 = *(_DWORD *)v20 < *v24;
LABEL_17:
        if ( !v25 )
          goto LABEL_18;
LABEL_7:
        v18 = v19 + 8;
        v16 = v16 - (v16 >> 1) - 1;
        if ( v16 <= 0 )
          goto LABEL_20;
      }
      if ( !v21 )
      {
        v23 = *(_DWORD **)(*((_QWORD *)v17 + 2) + 24LL);
        if ( v23 )
        {
          if ( *v23 == 5 && v23[1] == 9 && v17[6] == 2 )
          {
            v24 = *((_DWORD **)v17 + 5);
            if ( (_DWORD *)v20 == v24 )
              goto LABEL_7;
            goto LABEL_16;
          }
        }
      }
      goto LABEL_15;
    }
    v18 = v10;
    v26 = 0;
LABEL_21:
    v12 -= v12 / 2;
    while ( 1 )
    {
      destb = v14;
      v27 = sub_495E80(v15, v10, v18, v12, v26, v46, a7);
      v28 = destb;
      dest = v27;
      sub_496440((_DWORD)v13, (_DWORD)v15, (_DWORD)v27, v28, v26, (_DWORD)v46, a7, a8);
      v29 = v12;
      if ( v11 <= v12 )
        v29 = v11;
      v30 = dest;
      if ( a7 >= v29 )
        break;
      v10 = v18;
      v13 = dest;
      if ( v12 > v11 )
        goto LABEL_5;
LABEL_26:
      v31 = (v10 - v13) >> 3;
      v26 = v11 / 2;
      v18 = &v10[8 * (v11 / 2)];
      if ( v10 - v13 > 0 )
      {
        v32 = *(_DWORD **)v18;
        v15 = v13;
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = v31 >> 1;
            v34 = &v15[8 * (v31 >> 1)];
            v35 = *(_QWORD *)v34;
            if ( *(_DWORD **)v34 != v32 )
              break;
LABEL_39:
            v15 = v34 + 8;
            v31 = v31 - v33 - 1;
            if ( v31 <= 0 )
            {
LABEL_40:
              v14 = (v15 - v13) >> 3;
              v12 -= v14;
              goto LABEL_41;
            }
          }
          v36 = *(_WORD *)(v35 + 4);
          if ( !*((_WORD *)v32 + 2)
            && (v37 = *(_DWORD **)(*((_QWORD *)v32 + 2) + 24LL)) != nullptr
            && *v37 == 5
            && v37[1] == 9
            && v32[6] == 2 )
          {
            desta = *((_DWORD **)v32 + 4);
            v39 = *((_DWORD **)v32 + 5);
            if ( v36 )
              goto LABEL_52;
            v44 = *(_DWORD **)(*(_QWORD *)(v35 + 16) + 24LL);
            if ( !v44 )
            {
LABEL_63:
              if ( (_DWORD *)v35 != v39 )
                goto LABEL_37;
              goto LABEL_53;
            }
            if ( *v44 != 5 || v44[1] != 9 )
            {
LABEL_52:
              if ( (_DWORD *)v35 != v39 )
                goto LABEL_37;
LABEL_53:
              v40 = desta == nullptr;
              goto LABEL_38;
            }
          }
          else
          {
            if ( v36 || (v38 = *(_DWORD **)(*(_QWORD *)(v35 + 16) + 24LL)) == nullptr || *v38 != 5 )
            {
              v39 = *(_DWORD **)v18;
LABEL_37:
              v40 = *v39 < *(_DWORD *)v35;
              goto LABEL_38;
            }
            v39 = *(_DWORD **)v18;
            if ( v38[1] != 9 )
              goto LABEL_37;
            desta = nullptr;
          }
          if ( *(_DWORD *)(v35 + 24) != 2 )
            goto LABEL_63;
          if ( *(_DWORD **)(v35 + 40) != v39 )
          {
            v35 = *(_QWORD *)(v35 + 40);
            goto LABEL_37;
          }
          if ( !desta )
            goto LABEL_28;
          v43 = *(_DWORD **)(v35 + 32);
          if ( !v43 )
            goto LABEL_39;
          v40 = *desta < *v43;
LABEL_38:
          if ( !v40 )
            goto LABEL_39;
LABEL_28:
          v31 >>= 1;
          if ( v33 <= 0 )
            goto LABEL_40;
        }
      }
      v15 = v13;
      LODWORD(v14) = 0;
LABEL_41:
      v11 -= v11 / 2;
    }
    a6 = v46;
  }
  sub_493A80(v30, v18, a3, v12, v11, a6);
}

