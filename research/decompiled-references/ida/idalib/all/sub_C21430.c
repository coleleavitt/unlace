void __fastcall sub_C21430(__int64 *a1, _QWORD *a2, __int64 a3, __int64 *a4, __int64 *a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rax
  char v14; // cl
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rsi
  _QWORD *v21; // rax
  __int64 *v22; // rax
  __int64 *v23; // rdi
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  _QWORD v36[4]; // [rsp+50h] [rbp-158h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-138h] BYREF
  _QWORD v38[4]; // [rsp+90h] [rbp-118h] BYREF
  _QWORD v39[4]; // [rsp+B0h] [rbp-F8h] BYREF
  _QWORD v40[4]; // [rsp+D0h] [rbp-D8h] BYREF
  _QWORD v41[4]; // [rsp+F0h] [rbp-B8h] BYREF
  _QWORD v42[4]; // [rsp+110h] [rbp-98h] BYREF
  _QWORD v43[4]; // [rsp+130h] [rbp-78h] BYREF
  __int64 v44[11]; // [rsp+150h] [rbp-58h] BYREF

  v8 = sub_21F90D0();
  if ( *a1 == v8 )
    sub_21FFE60(v36, a1);
  else
    sub_21F97A0(v36, a1);
  if ( v36[0] == v8 )
    sub_22018C0(v36, a3, 1);
  else
    sub_21FEB40(v36, a3, 1);
  if ( *a2 == v8 )
    sub_21FFE60(v37, a2);
  else
    sub_21F97A0(v37, a2);
  if ( v37[0] == v8 )
    sub_22018C0(v37, a4, 1);
  else
    sub_21FEB40(v37, a4, 1);
  if ( *a1 == v8 )
    sub_21FFE60(v38, a1);
  else
    sub_21F97A0(v38, a1);
  if ( v38[0] == v8 )
    sub_22018C0(v38, a4, 1);
  else
    sub_21FEB40(v38, a4, 1);
  if ( *a2 == v8 )
    sub_21FFE60(v39, a2);
  else
    sub_21F97A0(v39, a2);
  if ( v39[0] == v8 )
    sub_22018C0(v39, a3, 1);
  else
    sub_21FEB40(v39, a3, 1);
  if ( v36[0] == v8 )
    sub_21FFE60(v44, v36);
  else
    sub_21F97A0(v44, v36);
  if ( v44[0] == v8 )
    sub_2200970(v44, v37, 1);
  else
    sub_21FD850(v44, v37, 1);
  sub_C177C0(a5, v44);
  sub_9955A0(v44);
  if ( v38[0] == v8 )
    sub_21FFE60(v44, v38);
  else
    sub_21F97A0(v44, v38);
  if ( v44[0] == v8 )
    sub_2200B70(v44, v39, 1);
  else
    sub_21FD860(v44, v39, 1);
  sub_C177C0((__int64 *)a6, v44);
  sub_9955A0(v44);
  v9 = a5;
  if ( *a5 == v8 )
    v9 = (__int64 *)a5[1];
  if ( (*((_BYTE *)v9 + 20) & 7) == 1 )
  {
    if ( *(_QWORD *)a6 == v8 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a6 + 8) + 20LL) & 7) != 1 )
        goto LABEL_28;
    }
    else if ( (*(_BYTE *)(a6 + 20) & 7) != 1 )
    {
      goto LABEL_28;
    }
    v10 = *a1;
    if ( *a1 == v8 )
    {
      if ( (*(_BYTE *)(a1[1] + 20) & 7) == 0 )
      {
        v11 = 1;
        goto LABEL_84;
      }
    }
    else
    {
      v11 = 1;
      if ( (*((_BYTE *)a1 + 20) & 7) == 0 )
      {
LABEL_33:
        sub_21FAF40(v43, v10, v11);
LABEL_34:
        sub_C16D60(v43, a1);
        sub_C16C20((__int64)v44, v43);
        sub_C177C0(a1, v44);
        sub_9955A0(v44);
        sub_9955A0(v43);
        if ( *a2 == v8 )
          sub_21FFCB0(v43, v8, (*(_BYTE *)(a2[1] + 20LL) & 7) == 0);
        else
          sub_21FAF40(v43, *a2, (*((_BYTE *)a2 + 20) & 7) == 0);
        sub_C16D60(v43, a2);
        sub_C16C20((__int64)v44, v43);
        sub_C177C0(a2, v44);
        sub_9955A0(v44);
        sub_9955A0(v43);
        v12 = a3;
        if ( *(_QWORD *)a3 == v8 )
          v12 = *(_QWORD *)(a3 + 8);
        if ( (*(_BYTE *)(v12 + 20) & 7) == 1 )
        {
          sub_C213B0((__int64)v43, *(_QWORD *)a3);
          sub_C16D60(v43, (_QWORD *)a3);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0((__int64 *)a3, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
        }
        v13 = a4;
        if ( *a4 == v8 )
          v13 = (__int64 *)a4[1];
        v14 = 1;
        if ( (*((_BYTE *)v13 + 20) & 7) == 1 )
        {
          sub_C213B0((__int64)v43, *a4);
          sub_C16D60(v43, a4);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0(a4, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
          v14 = 1;
        }
        goto LABEL_44;
      }
    }
    v21 = a2;
    if ( *a2 == v8 )
      v21 = (_QWORD *)a2[1];
    v14 = 0;
    if ( (*((_BYTE *)v21 + 20) & 7) != 0 )
    {
LABEL_44:
      v15 = *(_QWORD *)a3;
      if ( *(_QWORD *)a3 == v8 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a3 + 8) + 20LL) & 7) == 0 )
        {
          v16 = 1;
          goto LABEL_90;
        }
      }
      else
      {
        v16 = 1;
        if ( (*(_BYTE *)(a3 + 20) & 7) == 0 )
        {
LABEL_46:
          sub_21FAF40(v43, v15, v16);
LABEL_47:
          sub_C16D60(v43, (_QWORD *)a3);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0((__int64 *)a3, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
          if ( *a4 == v8 )
            sub_21FFCB0(v43, v8, (*(_BYTE *)(a4[1] + 20) & 7) == 0);
          else
            sub_21FAF40(v43, *a4, (*((_BYTE *)a4 + 20) & 7) == 0);
          sub_C16D60(v43, a4);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0(a4, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
          v17 = a1;
          if ( *a1 == v8 )
            v17 = (__int64 *)a1[1];
          if ( (*((_BYTE *)v17 + 20) & 7) == 1 )
          {
            sub_C213B0((__int64)v43, *a1);
            sub_C16D60(v43, a1);
            sub_C16C20((__int64)v44, v43);
            sub_C177C0(a1, v44);
            sub_9955A0(v44);
            sub_9955A0(v43);
          }
          v18 = a2;
          if ( *a2 == v8 )
            v18 = (_QWORD *)a2[1];
          if ( (*((_BYTE *)v18 + 20) & 7) != 1 )
            goto LABEL_56;
          sub_C213B0((__int64)v43, *a2);
          sub_C16D60(v43, a2);
          sub_C16C20((__int64)v44, v43);
          v23 = a2;
          goto LABEL_102;
        }
      }
      v22 = a4;
      if ( *a4 == v8 )
        v22 = (__int64 *)a4[1];
      if ( (*((_BYTE *)v22 + 20) & 7) != 0 )
      {
        if ( v14 )
          goto LABEL_56;
        v24 = v36;
        if ( v36[0] == v8 )
          v24 = (_QWORD *)v36[1];
        if ( (*((_BYTE *)v24 + 20) & 7) != 0 )
        {
          v25 = v37;
          if ( v37[0] == v8 )
            v25 = (_QWORD *)v37[1];
          if ( (*((_BYTE *)v25 + 20) & 7) != 0 )
          {
            v26 = v38;
            if ( v38[0] == v8 )
              v26 = (_QWORD *)v38[1];
            if ( (*((_BYTE *)v26 + 20) & 7) != 0 )
            {
              v27 = v39;
              if ( v39[0] == v8 )
                v27 = (_QWORD *)v39[1];
              if ( (*((_BYTE *)v27 + 20) & 7) != 0 )
                goto LABEL_28;
            }
          }
        }
        v28 = a1;
        if ( *a1 == v8 )
          v28 = (__int64 *)a1[1];
        if ( (*((_BYTE *)v28 + 20) & 7) == 1 )
        {
          sub_C213B0((__int64)v43, *a1);
          sub_C16D60(v43, a1);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0(a1, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
        }
        v29 = a2;
        if ( *a2 == v8 )
          v29 = (_QWORD *)a2[1];
        if ( (*((_BYTE *)v29 + 20) & 7) == 1 )
        {
          sub_C213B0((__int64)v43, *a2);
          sub_C16D60(v43, a2);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0(a2, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
        }
        v30 = a3;
        if ( *(_QWORD *)a3 == v8 )
          v30 = *(_QWORD *)(a3 + 8);
        if ( (*(_BYTE *)(v30 + 20) & 7) == 1 )
        {
          sub_C213B0((__int64)v43, *(_QWORD *)a3);
          sub_C16D60(v43, (_QWORD *)a3);
          sub_C16C20((__int64)v44, v43);
          sub_C177C0((__int64 *)a3, v44);
          sub_9955A0(v44);
          sub_9955A0(v43);
        }
        v31 = a4;
        if ( *a4 == v8 )
          v31 = (__int64 *)a4[1];
        if ( (*((_BYTE *)v31 + 20) & 7) != 1 )
        {
LABEL_56:
          sub_995620((__int64)v42, a2);
          sub_C10A60(v42, (__int64)a4);
          sub_995620((__int64)v41, a1);
          sub_C10A60(v41, a3);
          sub_995620((__int64)v43, v41);
          if ( v8 == v43[0] )
            sub_2200970(v43, v42, 1);
          else
            sub_21FD850(v43, v42, 1);
          v19 = *a1;
          LODWORD(v44[0]) = 0;
          sub_995D80((__int64)v40, v19, (unsigned int *)v44);
          if ( v8 == v40[0] )
            sub_22000E0(v40, 0);
          else
            sub_21FB4C0(v40, 0);
          sub_995620((__int64)v44, v40);
          sub_C10A60(v44, (__int64)v43);
          sub_C177C0(a5, v44);
          sub_9955A0(v44);
          sub_9955A0(v40);
          sub_9955A0(v43);
          sub_9955A0(v41);
          sub_9955A0(v42);
          sub_995620((__int64)v42, a2);
          sub_C10A60(v42, a3);
          sub_995620((__int64)v41, a1);
          sub_C10A60(v41, (__int64)a4);
          sub_995620((__int64)v43, v41);
          if ( v8 == v43[0] )
            sub_2200B70(v43, v42, 1);
          else
            sub_21FD860(v43, v42, 1);
          v20 = *a1;
          LODWORD(v44[0]) = 0;
          sub_995D80((__int64)v40, v20, (unsigned int *)v44);
          if ( v8 == v40[0] )
            sub_22000E0(v40, 0);
          else
            sub_21FB4C0(v40, 0);
          sub_995620((__int64)v44, v40);
          sub_C10A60(v44, (__int64)v43);
          sub_C177C0((__int64 *)a6, v44);
          sub_9955A0(v44);
          sub_9955A0(v40);
          sub_9955A0(v43);
          sub_9955A0(v41);
          sub_9955A0(v42);
          goto LABEL_28;
        }
        sub_C213B0((__int64)v43, *a4);
        sub_C16D60(v43, a4);
        sub_C16C20((__int64)v44, v43);
        v23 = a4;
LABEL_102:
        sub_C177C0(v23, v44);
        sub_9955A0(v44);
        sub_9955A0(v43);
        goto LABEL_56;
      }
      v16 = 0;
      if ( v15 != v8 )
        goto LABEL_46;
LABEL_90:
      sub_21FFCB0(v43, v8, v16);
      goto LABEL_47;
    }
    v11 = 0;
    if ( v10 != v8 )
      goto LABEL_33;
LABEL_84:
    sub_21FFCB0(v43, v8, v11);
    goto LABEL_34;
  }
LABEL_28:
  sub_9955A0(v39);
  sub_9955A0(v38);
  sub_9955A0(v37);
  sub_9955A0(v36);
}
