__int64 __fastcall sub_9E05B0(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbp
  _BYTE *v9; // r15
  __int64 v10; // rdi
  int v11; // eax
  _BYTE *v12; // r15
  __int64 *v13; // rsi
  _BYTE *v14; // r9
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int8 **v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rsi
  char v20; // bl
  unsigned int v21; // ebx
  int v23; // eax
  unsigned __int8 **v24; // rax
  __int64 v25; // rsi
  __int64 v29; // [rsp+28h] [rbp-180h]
  __int64 v30; // [rsp+28h] [rbp-180h]
  __int64 v31; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v32[3]; // [rsp+40h] [rbp-168h] BYREF
  __int64 v33; // [rsp+58h] [rbp-150h]
  __int64 v34; // [rsp+60h] [rbp-148h]
  int v35; // [rsp+70h] [rbp-138h]
  __int64 v36; // [rsp+78h] [rbp-130h]
  int v37; // [rsp+80h] [rbp-128h]
  _QWORD v38[6]; // [rsp+90h] [rbp-118h] BYREF
  int v39; // [rsp+C0h] [rbp-E8h]
  __int64 v40; // [rsp+C8h] [rbp-E0h]
  int v41; // [rsp+D0h] [rbp-D8h]
  _BYTE v42[56]; // [rsp+E0h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+118h] [rbp-90h]
  int v44; // [rsp+120h] [rbp-88h]
  _BYTE v45[56]; // [rsp+128h] [rbp-80h] BYREF
  __int64 v46; // [rsp+160h] [rbp-48h]
  int v47; // [rsp+168h] [rbp-40h]
  _BYTE v48[56]; // [rsp+170h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 72);
  sub_A1C070(v32, v6);
  v36 = *(_QWORD *)(v6 + 56);
  v37 = *(_DWORD *)(v6 + 64);
  sub_A1A5E0(v5, 72);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 72);
  sub_A1C070(v38, v8);
  v40 = *(_QWORD *)(v8 + 56);
  v9 = v42;
  v41 = *(_DWORD *)(v8 + 64);
  sub_A1A5E0(v7, 72);
  sub_A1BFE0(v42, v38);
  v43 = v40;
  v44 = v41;
  sub_A1BFE0(v45, v32);
  v46 = v36;
  v47 = v37;
  while ( 1 )
  {
    v10 = *((_QWORD *)v9 + 7);
    if ( v10 )
    {
      if ( (*(_BYTE *)(v10 + 28) & 0x7Fu) - 33 <= 3 && (unsigned __int8)sub_783680(v10) )
        break;
    }
    v9 += 72;
    if ( v48 == v9 )
    {
      sub_A1C0C0(v45);
      sub_A1C0C0(v42);
      if ( !v39 || v39 == 2 )
      {
        if ( v38[3] )
          goto LABEL_10;
      }
      else if ( v39 == 3 || v38[0] | v38[4] )
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
        v12 = v42;
        sub_A1BFE0(v42, v38);
        v13 = v32;
        v43 = v40;
        v44 = v41;
        sub_A1BFE0(v45, v32);
        v46 = v36;
        v47 = v37;
        do
        {
          v14 = *((_BYTE **)v12 + 7);
          if ( v14 )
          {
            if ( (v14[28] & 0x7Fu) - 33 <= 3 )
            {
              v29 = *((_QWORD *)v12 + 7);
              v15 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v14 + 32LL))(v14);
              v16 = v29;
              if ( (*(_BYTE *)(v15 + 82) & 0xC) != 0 || (v23 = sub_7A5910(v15), v16 = v29, v23) )
              {
                v30 = v16;
                v13 = &v31;
                v31 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
                v17 = (unsigned __int8 **)sub_A2E1B0(a1, &v31, 2193, 0);
                if ( v17 )
                {
                  LODWORD(v13) = v30;
                  sub_8356A0(v17, v30, 0xAu);
                }
              }
            }
          }
          v12 += 72;
        }
        while ( v48 != v12 );
        sub_A1C0C0(v45);
        sub_A1C0C0(v42);
        LOBYTE(v13) = v40 != v36;
        v18 = *(_QWORD *)(a1 + 184);
        v19 = (unsigned int)(4 * (_DWORD)v13);
LABEL_27:
        v20 = a3(a4, v19);
        *(_BYTE *)sub_A1A4E0(v18, 8) = v20;
        v21 = 1;
        goto LABEL_28;
      }
      v11 = v35;
      if ( v40 )
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
        v19 = 0;
        v18 = *(_QWORD *)(a1 + 184);
        if ( !v36 )
          goto LABEL_27;
      }
      else
      {
        if ( v35 != 3 && !(v32[0] | v34) )
          goto LABEL_37;
LABEL_25:
        v18 = *(_QWORD *)(a1 + 184);
      }
      v19 = 4;
      goto LABEL_27;
    }
  }
  v31 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v24 = (unsigned __int8 **)sub_A2E0C0(a1, &v31, 2230, 0);
  v25 = *((_QWORD *)v9 + 7);
  if ( v25 && (*(_BYTE *)(v25 + 28) & 0x7Fu) - 33 >= 4 )
    v25 = 0;
  if ( v24 )
    sub_8356A0(v24, v25, 0xAu);
  v21 = 0;
  sub_A1C0C0(v45);
  sub_A1C0C0(v42);
LABEL_28:
  sub_A1C0C0(v38);
  sub_A1C0C0(v32);
  return v21;
}

