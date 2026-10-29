__int64 __fastcall sub_DD45B0(__int64 a1, __int64 *a2, unsigned int a3, int a4, int a5)
{
  __int64 v8; // rbp
  __int64 v9; // rbp
  int v10; // r15d
  unsigned int v11; // r14d
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  int v17; // ecx
  __int64 v18; // rsi
  unsigned int v19; // r14d
  unsigned __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // r15
  int v29; // eax
  char v30; // al
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned __int8 v36; // [rsp+0h] [rbp-F8h]
  int v38; // [rsp+14h] [rbp-E4h]
  int v39; // [rsp+20h] [rbp-D8h]
  int v40; // [rsp+24h] [rbp-D4h]
  _BYTE v41[24]; // [rsp+30h] [rbp-C8h] BYREF
  int v42; // [rsp+48h] [rbp-B0h]
  __int64 v43; // [rsp+50h] [rbp-A8h]
  __int64 v44; // [rsp+58h] [rbp-A0h]
  __int64 v45; // [rsp+60h] [rbp-98h] BYREF
  __int128 v46; // [rsp+68h] [rbp-90h]
  int v47; // [rsp+78h] [rbp-80h]
  __int64 v48; // [rsp+80h] [rbp-78h]
  __int64 v49; // [rsp+88h] [rbp-70h]
  __int64 v50; // [rsp+90h] [rbp-68h] BYREF
  __int128 v51; // [rsp+98h] [rbp-60h]
  int v52; // [rsp+A8h] [rbp-50h]
  __int64 v53; // [rsp+B0h] [rbp-48h]
  __int64 v54; // [rsp+B8h] [rbp-40h]

  v8 = *(_QWORD *)(a1 + 176);
  sub_E21760(v8, 48);
  sub_E23260(v41);
  sub_E21790(v8, 48);
  v9 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v38 = a5 + a3;
  if ( a5 )
  {
    v39 = a4 - a3;
    do
    {
      v10 = v42;
      if ( v42 == 1 )
      {
        v45 = a3;
        v46 = 0;
        v49 = v44;
        v47 = 1;
        v48 = v43;
      }
      else if ( v42 == 2 )
      {
        v45 = a3;
        v46 = 0;
        v47 = 2;
        v48 = v43;
      }
      else
      {
        v11 = v44;
        if ( (_DWORD)v44 == -1 )
        {
          if ( v42 == 3 )
            goto LABEL_57;
          sub_E23220(&v45, v43, (unsigned int)v44, *(unsigned int *)(*(_QWORD *)(v43 + 32) + 20LL));
        }
        else
        {
          v12 = a3 * (unsigned __int64)*(unsigned int *)(sub_CFDF60((__int64)v41) + 16);
          if ( v10 )
          {
            if ( v10 == 3 )
              goto LABEL_56;
            v13 = v43;
            v14 = v11;
            v15 = *(_QWORD *)(v43 + 32);
          }
          else
          {
            v13 = v43;
            v14 = v11;
            v15 = *(_QWORD *)(v43 + 32);
            if ( *(_DWORD *)(v15 + 24) != v11 && v11 )
              v15 = *(_QWORD *)(v43 + v11 + 32);
          }
          v16 = v12 + 32;
          if ( *(_QWORD *)(v15 + 40) )
            v16 = v12 + 16;
          sub_E23220(&v45, v13, v11, v14 + v16);
        }
      }
      if ( !(unsigned __int8)sub_DCC160(a1, a2, (__int64)&v45, 0) )
      {
        sub_E232A0(&v45);
        v30 = 0;
        goto LABEL_28;
      }
      v17 = *(_DWORD *)(v9 + 24);
      v18 = v39 + a3;
      if ( v17 == 1 )
      {
        v26 = *(_QWORD *)(v9 + 32);
        v32 = *(_QWORD *)(v9 + 40);
        v50 = v39 + a3;
        v51 = 0;
        v52 = 1;
        v54 = v32;
        v53 = v26;
      }
      else if ( v17 == 2 )
      {
        v26 = *(_QWORD *)(v9 + 32);
        v50 = v39 + a3;
        v51 = 0;
        v52 = 2;
        v53 = v26;
      }
      else
      {
        v19 = *(_DWORD *)(v9 + 40);
        if ( v19 == -1 )
        {
          if ( v17 == 3 )
LABEL_57:
            BUG();
          v21 = *(_QWORD *)(v9 + 32);
          v25 = *(unsigned int *)(*(_QWORD *)(v21 + 32) + 20LL);
        }
        else
        {
          v40 = *(_DWORD *)(v9 + 24);
          v20 = (v39 + a3) * (unsigned __int64)*(unsigned int *)(sub_CFDF60(v9) + 16);
          if ( v40 )
          {
            if ( v40 == 3 )
LABEL_56:
              BUG();
            v21 = *(_QWORD *)(v9 + 32);
            v22 = v19;
            v23 = *(_QWORD *)(v21 + 32);
          }
          else
          {
            v21 = *(_QWORD *)(v9 + 32);
            v22 = v19;
            v23 = *(_QWORD *)(v21 + 32);
            if ( *(_DWORD *)(v23 + 24) != v19 && v19 )
              v23 = *(_QWORD *)(v21 + v19 + 32);
          }
          v24 = v20 + 32;
          if ( *(_QWORD *)(v23 + 40) )
            v24 = v20 + 16;
          v25 = v22 + v24;
        }
        sub_E23220(&v50, v21, v19, v25);
        v17 = v52;
        v18 = v50;
        v26 = v53;
      }
      if ( v47 )
        goto LABEL_24;
      v33 = *(_QWORD *)(v48 + 32);
      if ( *(_DWORD *)(v33 + 24) != (_DWORD)v49 && (_DWORD)v49 )
        v33 = *(_QWORD *)(v48 + (unsigned int)v49 + 32);
      if ( *(_BYTE *)(v33 + 60) && (v27 = v48 + v45 + 72, (unsigned int)v49 == v45) )
      {
        if ( !v17 )
        {
LABEL_39:
          v34 = *(_QWORD *)(v26 + 32);
          if ( *(_DWORD *)(v34 + 24) != (_DWORD)v54 && (_DWORD)v54 )
            v34 = *(_QWORD *)(v26 + (unsigned int)v54 + 32);
          if ( *(_BYTE *)(v34 + 60) )
          {
            v28 = v26 + v18 + 72;
            if ( v18 == (unsigned int)v54 )
              goto LABEL_26;
          }
        }
      }
      else
      {
LABEL_24:
        v27 = v48 + v45 + 40;
        if ( !v17 )
          goto LABEL_39;
      }
      v28 = v26 + v18 + 40;
LABEL_26:
      ++a3;
      sub_E23300(v28, v27);
      v29 = *(_DWORD *)(v27 + 56);
      *(_QWORD *)(v28 + 48) = *(_QWORD *)(v27 + 48);
      *(_DWORD *)(v28 + 56) = v29;
      sub_E24D00(&v50);
      sub_E232A0(&v50);
      sub_E232A0(&v45);
    }
    while ( v38 != a3 );
  }
  v30 = 1;
LABEL_28:
  v36 = v30;
  sub_E232A0(v41);
  return v36;
}
