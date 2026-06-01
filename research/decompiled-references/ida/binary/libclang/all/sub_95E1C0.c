__int64 __fastcall sub_95E1C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rbp
  _BYTE *v7; // r15
  _BYTE *v8; // rdx
  __int64 v9; // rdi
  char v10; // al
  int v11; // eax
  _BYTE *v12; // r15
  _BYTE *v13; // r9
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int8 **v16; // rax
  bool v17; // bp
  __int64 v18; // rdi
  unsigned int v19; // ebx
  int v21; // eax
  unsigned __int8 **v22; // rax
  __int64 v23; // rsi
  _BYTE *v24; // [rsp+8h] [rbp-190h]
  __int64 v25; // [rsp+18h] [rbp-180h]
  __int64 v26; // [rsp+18h] [rbp-180h]
  __int64 v27; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v28[6]; // [rsp+30h] [rbp-168h] BYREF
  int v29; // [rsp+60h] [rbp-138h]
  __int64 v30; // [rsp+68h] [rbp-130h]
  int v31; // [rsp+70h] [rbp-128h]
  _QWORD v32[3]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v33; // [rsp+98h] [rbp-100h]
  __int64 v34; // [rsp+A0h] [rbp-F8h]
  int v35; // [rsp+B0h] [rbp-E8h]
  __int64 v36; // [rsp+B8h] [rbp-E0h]
  int v37; // [rsp+C0h] [rbp-D8h]
  _BYTE v38[56]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+108h] [rbp-90h]
  int v40; // [rsp+110h] [rbp-88h]
  _BYTE v41[56]; // [rsp+118h] [rbp-80h] BYREF
  __int64 v42; // [rsp+150h] [rbp-48h]
  int v43; // [rsp+158h] [rbp-40h]
  _BYTE v44[56]; // [rsp+160h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 72);
  sub_A1C070(v32, v4);
  v36 = *(_QWORD *)(v4 + 56);
  v37 = *(_DWORD *)(v4 + 64);
  sub_A1A5E0(v3, 72);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 72);
  sub_A1C070(v28, v6);
  v30 = *(_QWORD *)(v6 + 56);
  v7 = v38;
  v31 = *(_DWORD *)(v6 + 64);
  sub_A1A5E0(v5, 72);
  sub_A1BFE0(v38, v28);
  v39 = v30;
  v40 = v31;
  sub_A1BFE0(v41, v32);
  v8 = v44;
  v42 = v36;
  v43 = v37;
  while ( 1 )
  {
    v9 = *((_QWORD *)v7 + 7);
    if ( v9 )
    {
      if ( (*(_BYTE *)(v9 + 28) & 0x7Fu) - 33 <= 3 )
      {
        v24 = v8;
        v10 = sub_783680(v9);
        v8 = v24;
        if ( v10 )
          break;
      }
    }
    v7 += 72;
    if ( v7 == v8 )
    {
      sub_A1C0C0(v41);
      sub_A1C0C0(v38);
      if ( !v29 || v29 == 2 )
      {
        if ( v28[3] )
          goto LABEL_10;
      }
      else if ( v29 == 3 || v28[0] | v28[4] )
      {
LABEL_10:
        v11 = v35;
LABEL_11:
        if ( !v11 || v11 == 2 )
        {
          if ( !v33 )
            goto LABEL_32;
        }
        else if ( v11 != 3 && !(v32[0] | v34) )
        {
LABEL_32:
          if ( !v36 )
            goto LABEL_25;
        }
        v12 = v38;
        sub_A1BFE0(v38, v28);
        v39 = v30;
        v40 = v31;
        sub_A1BFE0(v41, v32);
        v42 = v36;
        v43 = v37;
        do
        {
          v13 = *((_BYTE **)v12 + 7);
          if ( v13 )
          {
            if ( (v13[28] & 0x7Fu) - 33 <= 3 )
            {
              v25 = *((_QWORD *)v12 + 7);
              v14 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v13 + 32LL))(v13);
              v15 = v25;
              if ( (*(_BYTE *)(v14 + 82) & 0xC) != 0 || (v21 = sub_7A5910(v14), v15 = v25, v21) )
              {
                v26 = v15;
                v27 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
                v16 = (unsigned __int8 **)sub_A2E1B0(a1, &v27, 2193, 0);
                if ( v16 )
                  sub_8356A0(v16, v26, 0xAu);
              }
            }
          }
          v12 += 72;
        }
        while ( v44 != v12 );
        sub_A1C0C0(v41);
        sub_A1C0C0(v38);
        v17 = v30 != v36;
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v17;
LABEL_27:
        v19 = 1;
        goto LABEL_28;
      }
      v11 = v35;
      if ( v30 )
        goto LABEL_11;
      if ( !v35 )
      {
        if ( v33 )
          goto LABEL_25;
        goto LABEL_37;
      }
      if ( v35 == 2 )
      {
        if ( v33 )
          goto LABEL_25;
LABEL_37:
        v18 = *(_QWORD *)(a1 + 184);
        if ( !v36 )
        {
          *(_BYTE *)sub_A1A4E0(v18, 8) = 0;
          goto LABEL_27;
        }
      }
      else
      {
        if ( v35 != 3 && !(v32[0] | v34) )
          goto LABEL_37;
LABEL_25:
        v18 = *(_QWORD *)(a1 + 184);
      }
      *(_BYTE *)sub_A1A4E0(v18, 8) = 1;
      goto LABEL_27;
    }
  }
  v27 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v22 = (unsigned __int8 **)sub_A2E0C0(a1, &v27, 2230, 0);
  v23 = *((_QWORD *)v7 + 7);
  if ( v23 && (*(_BYTE *)(v23 + 28) & 0x7Fu) - 33 >= 4 )
    v23 = 0;
  if ( v22 )
    sub_8356A0(v22, v23, 0xAu);
  v19 = 0;
  sub_A1C0C0(v41);
  sub_A1C0C0(v38);
LABEL_28:
  sub_A1C0C0(v28);
  sub_A1C0C0(v32);
  return v19;
}

