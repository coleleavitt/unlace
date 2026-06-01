__int64 __fastcall append_argloc_0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  int v9; // esi
  _QWORD *v10; // r14
  __int64 v11; // rbp
  __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rbp
  unsigned int v19; // eax
  unsigned int v20; // r13d
  __int64 v21; // r14
  char v22; // bp
  unsigned __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // rsi
  char v26; // r13
  __int64 v27; // rbp
  unsigned __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // r13
  char v33; // bp
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // rsi
  __int64 *v37; // rbp
  __int64 v38; // rbp
  __int64 v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+8h] [rbp-40h]

  LOBYTE(v2) = sub_6B1D60(a2);
  if ( !(_BYTE)v2 )
    return 0;
  v4 = v2;
  switch ( *(_DWORD *)a2 )
  {
    case 0:
    case 2:
    case 5:
    case 6:
      goto LABEL_4;
    case 1:
      if ( *(_QWORD *)(a2 + 8) )
        goto LABEL_4;
      v39 = a1[1];
      if ( v39 )
      {
        v40 = v39 + 1;
        v41 = a1[1];
        --v39;
      }
      else
      {
        v41 = 1;
        v40 = 2;
      }
      v42 = *a1;
      if ( a1[2] < v40 )
      {
        v45 = qvector_reserve(a1, v42, v40, 1);
        *a1 = v45;
        v42 = v45;
      }
      a1[1] = v40;
      *(_BYTE *)(v42 + v39) = 0x80;
      *(_BYTE *)(*a1 + v41) = 0;
      return v4;
    case 3:
      v31 = *(_DWORD *)(a2 + 8);
      if ( (unsigned __int16)v31 > 0x7Eu || HIWORD(v31) )
        goto LABEL_4;
      v32 = a1[1];
      v33 = *(_DWORD *)(a2 + 8) + 1;
      if ( v32 )
      {
        v34 = v32 + 1;
        v35 = a1[1];
        --v32;
      }
      else
      {
        v35 = 1;
        v34 = 2;
      }
      v36 = *a1;
      if ( a1[2] < v34 )
      {
        v46 = qvector_reserve(a1, v36, v34, 1);
        *a1 = v46;
        v36 = v46;
      }
      a1[1] = v34;
      *(_BYTE *)(v36 + v32) = v33;
      *(_BYTE *)(*a1 + v35) = 0;
      return v4;
    case 4:
      v19 = *(_DWORD *)(a2 + 8);
      v20 = HIWORD(v19);
      if ( (unsigned __int16)v19 <= 0x7Eu && v20 <= 0x7E )
      {
        v21 = a1[1];
        v22 = (*(_DWORD *)(a2 + 8) + 1) | 0x80;
        if ( v21 )
        {
          v23 = v21 + 1;
          v24 = a1[1];
          --v21;
        }
        else
        {
          v24 = 1;
          v23 = 2;
        }
        v25 = *a1;
        if ( a1[2] < v23 )
        {
          v47 = v24;
          v43 = qvector_reserve(a1, v25, v23, 1);
          v24 = v47;
          *a1 = v43;
          v25 = v43;
        }
        a1[1] = v23;
        v26 = v20 + 1;
        *(_BYTE *)(v25 + v21) = v22;
        *(_BYTE *)(*a1 + v24) = 0;
        v27 = a1[1];
        if ( v27 )
        {
          v28 = v27 + 1;
          v29 = a1[1];
          --v27;
        }
        else
        {
          v29 = 1;
          v28 = 2;
        }
        v30 = *a1;
        if ( a1[2] < v28 )
        {
          v44 = qvector_reserve(a1, v30, v28, 1);
          *a1 = v44;
          v30 = v44;
        }
        a1[1] = v28;
        *(_BYTE *)(v30 + v27) = v26;
        *(_BYTE *)(*a1 + v29) = 0;
        return v4;
      }
LABEL_4:
      v5 = a1[1];
      if ( v5 )
      {
        v8 = v5 + 1;
        v7 = a1[1];
        v6 = *a1;
        --v5;
        if ( a1[2] >= v8 )
          goto LABEL_6;
      }
      else
      {
        v6 = *a1;
        v7 = 1;
        v8 = 2;
        if ( (unsigned __int64)a1[2] >= 2 )
          goto LABEL_6;
      }
      v13 = qvector_reserve(a1, v6, v8, 1);
      *a1 = v13;
      v6 = v13;
LABEL_6:
      a1[1] = v8;
      *(_BYTE *)(v6 + v5) = -1;
      *(_BYTE *)(*a1 + v7) = 0;
      v9 = *(_DWORD *)a2;
      if ( !*(_DWORD *)a2 )
      {
        sub_6B2CF0(a1, 0x40u);
        return v4;
      }
      if ( v9 == 2 )
      {
        v10 = *(_QWORD **)(a2 + 8);
        v11 = v10[1];
        if ( (int)v11 <= 127 )
        {
          v15 = v10[1];
          LOBYTE(v15) = v11 | 0x80;
          sub_6B2CF0(a1, v15);
          if ( (int)v11 <= 0 )
            return v4;
          v16 = 0;
          v17 = 8 * (3LL * (unsigned int)(v11 - 1) + 3);
          while ( 1 )
          {
            v18 = v16 + *v10;
            if ( !(unsigned __int8)append_argloc_0(a1, v18)
              || !(unsigned __int8)sub_6B2CF0(a1, *(unsigned __int16 *)(v18 + 16))
              || !(unsigned __int8)sub_6B2E10(a1, *(unsigned __int16 *)(v18 + 18)) )
            {
              break;
            }
            v16 += 24;
            if ( v16 == v17 )
              return v4;
          }
        }
        return 0;
      }
      sub_6B2CF0(a1, (v9 - 1) | 0x20);
      v14 = *(_DWORD *)a2;
      if ( *(_DWORD *)a2 == 5 )
      {
        v37 = *(__int64 **)(a2 + 8);
        if ( !(unsigned __int8)sub_6B2CF0(a1, *((_DWORD *)v37 + 2)) )
          return 0;
        v38 = *v37;
        goto LABEL_48;
      }
      if ( v14 > 5 )
      {
        if ( v14 != 6 )
        {
LABEL_56:
          if ( !under_debugger )
            interr(1100);
LABEL_64:
          BUG();
        }
        goto LABEL_47;
      }
      if ( v14 == 1 )
      {
LABEL_47:
        v38 = *(_QWORD *)(a2 + 8);
LABEL_48:
        if ( !(unsigned __int8)sub_6B2E10(a1, v38) )
          return 0;
        return sub_6B2E10(a1, HIDWORD(v38));
      }
      if ( (unsigned int)(v14 - 3) > 1 )
        goto LABEL_56;
      if ( !(unsigned __int8)sub_6B2CF0(a1, *(unsigned __int16 *)(a2 + 8)) )
        return 0;
      return sub_6B2CF0(a1, *(unsigned __int16 *)(a2 + 10));
    default:
      if ( !under_debugger )
        interr(1099);
      goto LABEL_64;
  }
}
