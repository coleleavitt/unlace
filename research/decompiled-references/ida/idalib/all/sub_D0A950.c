__int64 __fastcall sub_D0A950(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  _BYTE *v5; // r15
  __int64 v6; // rdi
  int v7; // eax
  _BOOL4 v8; // edx
  __int64 *v9; // rsi
  _BYTE *v10; // r8
  _BYTE *v11; // r14
  __int64 v12; // rax
  unsigned __int8 **v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v17; // ebx
  char v18; // r13
  int v20; // eax
  unsigned __int8 **v21; // rax
  __int64 v22; // rsi
  _BYTE *v26; // [rsp+28h] [rbp-150h]
  _BYTE *v27; // [rsp+28h] [rbp-150h]
  __int64 v28; // [rsp+38h] [rbp-140h] BYREF
  _QWORD v29[3]; // [rsp+40h] [rbp-138h] BYREF
  int v30; // [rsp+58h] [rbp-120h]
  __int64 v31; // [rsp+60h] [rbp-118h]
  __int64 v32; // [rsp+68h] [rbp-110h]
  __int64 v33; // [rsp+70h] [rbp-108h]
  int v34; // [rsp+78h] [rbp-100h]
  _QWORD v35[3]; // [rsp+80h] [rbp-F8h] BYREF
  int v36; // [rsp+98h] [rbp-E0h]
  __int64 v37; // [rsp+A0h] [rbp-D8h]
  __int64 v38; // [rsp+A8h] [rbp-D0h]
  __int64 v39; // [rsp+B0h] [rbp-C8h]
  int v40; // [rsp+B8h] [rbp-C0h]
  _BYTE v41[48]; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-88h]
  int v43; // [rsp+F8h] [rbp-80h]
  _BYTE v44[48]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v45; // [rsp+130h] [rbp-48h]
  int v46; // [rsp+138h] [rbp-40h]
  _BYTE v47[56]; // [rsp+140h] [rbp-38h] BYREF

  v5 = v41;
  sub_D0A640((__int64)v29, *(_QWORD *)(a1 + 176));
  sub_D0A640((__int64)v35, *(_QWORD *)(a1 + 176));
  sub_E231E0(v41, v35);
  v42 = v39;
  v43 = v40;
  sub_E231E0(v44, v29);
  v45 = v33;
  v46 = v34;
  while ( 1 )
  {
    v6 = *((_QWORD *)v5 + 6);
    if ( v6 )
    {
      if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 35 <= 3 && (unsigned __int8)sub_B79700(v6) )
        break;
    }
    v5 += 64;
    if ( v47 == v5 )
    {
      sub_E232A0(v44);
      sub_E232A0(v41);
      if ( !v36 )
      {
        v7 = v30;
        v8 = v37 == 0;
LABEL_8:
        if ( !v8 || v39 )
          goto LABEL_10;
LABEL_29:
        v14 = *(_QWORD *)(a1 + 176);
        if ( !v7 || v7 == 2 )
        {
          if ( v31 || (v15 = 0, v33) )
LABEL_34:
            v15 = 4;
        }
        else
        {
          if ( v7 == 3 )
            goto LABEL_34;
          if ( v29[0] | v32 )
            goto LABEL_34;
          v15 = 0;
          if ( v33 )
            goto LABEL_34;
        }
LABEL_23:
        v16 = v14;
        v17 = 1;
        v18 = a3(a4, v15);
        *(_BYTE *)sub_E216C0(v16, 8) = v18;
        goto LABEL_24;
      }
      v7 = v30;
      if ( v36 == 2 )
      {
        LOBYTE(v8) = v37 == 0;
        goto LABEL_8;
      }
      if ( v36 != 3 && !(v35[0] | v38) && !v39 )
        goto LABEL_29;
LABEL_10:
      if ( !v7 || v7 == 2 )
      {
        if ( v31 )
          goto LABEL_14;
      }
      else if ( v7 == 3 || v29[0] | v32 )
      {
LABEL_14:
        sub_E231E0(v41, v35);
        v9 = v29;
        v42 = v39;
        v43 = v40;
        sub_E231E0(v44, v29);
        v10 = v41;
        v45 = v33;
        v46 = v34;
        do
        {
          v11 = *((_BYTE **)v10 + 6);
          if ( v11 )
          {
            if ( (v11[28] & 0x7Fu) - 35 <= 3 )
            {
              v26 = v10;
              v12 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v11 + 32LL))(v11);
              v10 = v26;
              if ( (*(_QWORD *)(v12 + 80) & 0x40000LL) != 0
                || ((*(_QWORD *)(v12 + 80) >> 16) & 8) != 0
                || (v20 = sub_B984E0(v12), v10 = v26, v20) )
              {
                v27 = v10;
                v9 = &v28;
                v28 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
                v13 = (unsigned __int8 **)sub_E33D20(a1, &v28, 2395, 0);
                v10 = v27;
                if ( v13 )
                {
                  LODWORD(v9) = (_DWORD)v11;
                  sub_AE9DF0(v13, (__int64)v11, 0xAu);
                  v10 = v27;
                }
              }
            }
          }
          v10 += 64;
        }
        while ( v47 != v10 );
        sub_E232A0(v44);
        sub_E232A0(v41);
        LOBYTE(v9) = v39 != v33;
        v14 = *(_QWORD *)(a1 + 176);
        v15 = (unsigned int)(4 * (_DWORD)v9);
        goto LABEL_23;
      }
      if ( !v33 )
      {
        v14 = *(_QWORD *)(a1 + 176);
        goto LABEL_34;
      }
      goto LABEL_14;
    }
  }
  v28 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v21 = (unsigned __int8 **)sub_E33BA0(a1, &v28, 2432, 0);
  v22 = *((_QWORD *)v5 + 6);
  if ( v22 && (*(_BYTE *)(v22 + 28) & 0x7Fu) - 35 >= 4 )
    v22 = 0;
  if ( v21 )
    sub_AE9DF0(v21, v22, 0xAu);
  sub_E232A0(v44);
  v17 = 0;
  sub_E232A0(v41);
LABEL_24:
  sub_E232A0(v35);
  sub_E232A0(v29);
  return v17;
}
