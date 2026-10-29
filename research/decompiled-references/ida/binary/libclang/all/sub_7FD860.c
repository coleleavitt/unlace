__int64 __fastcall sub_7FD860(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 *v8; // rbx
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 *v11; // r12
  __int64 v12; // r13
  __int64 *v13; // rbx
  __int64 v14; // r12
  __int64 *v15; // rbx
  __int64 v16; // r12
  __int64 *v17; // rbx
  __int64 v18; // r12
  __int64 *v19; // rbx
  __int64 v20; // r12
  int v21; // r13d
  unsigned int v22; // r12d
  __int64 *v23; // rbx
  __int64 v24; // r12
  __int64 *v25; // rbx
  __int64 v26; // r12
  __int64 *v27; // rbx
  __int64 v28; // r12
  __int64 *v29; // rbx
  __int64 v30; // r12
  __int64 *v31; // rbx
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 *v34; // rbx
  __int64 *v35; // r12
  __int64 v36; // r13
  __int64 *v37; // rbx
  __int64 v38; // r12
  unsigned int v39; // r13d
  __int64 v40; // r12
  __int64 *v41; // rbx
  __int64 v42; // r12
  __int64 *v43; // rbx
  __int64 *v44; // rbx
  __int64 v45; // r12
  __int64 v46; // r12
  __int64 *v47; // rbx
  __int64 *v48; // rbx
  __int64 v49; // r12
  __int64 *v50; // rbx
  __int64 v51; // r12
  __int64 *v52; // rbx
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 *v55; // r12
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 *v58; // rbx
  __int64 *v59; // r12
  __int64 v60[9]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a2 )
    return 1;
  v60[5] = v6;
  switch ( *(_DWORD *)(a2 + 8) )
  {
    case 4:
      v39 = sub_7EBA80(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24));
      if ( !(_BYTE)v39 )
        return 0;
      v46 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      v47 = (__int64 *)(a2 + 24);
      if ( v46 == a2 + 24 )
        return v39;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v47);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v46 == ++v47 )
          return v39;
      }
      return result;
    case 5:
    case 8:
    case 0xF:
    case 0x17:
    case 0x19:
    case 0x2A:
    case 0x3A:
    case 0x4B:
    case 0x4C:
    case 0x56:
    case 0x5C:
      goto LABEL_10;
    case 6:
      v39 = sub_7EBA80(a1, *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24));
      if ( !(_BYTE)v39 )
        return 0;
      v42 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      v43 = (__int64 *)(a2 + 24);
      if ( v42 == a2 + 24 )
        return v39;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v43);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v42 == ++v43 )
          return v39;
      }
      return result;
    case 7:
      v39 = sub_7EBA80(a1, *(_QWORD *)(a2 + 24));
      if ( !(_BYTE)v39 )
        return 0;
      v40 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 72;
      v41 = (__int64 *)(a2 + 72);
      if ( v40 == a2 + 72 )
        return v39;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v41);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v40 == ++v41 )
          return v39;
      }
      return result;
    case 0x12:
      return sub_7ED050(a1, a2);
    case 0x13:
      return sub_7ECF00(a1, a2);
    case 0x16:
      v13 = (__int64 *)(a2 + 40);
      v14 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v14 == a2 + 40 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v13);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v14 == ++v13 )
          return 1;
      }
      return result;
    case 0x18:
    case 0x69:
      goto LABEL_19;
    case 0x1A:
    case 0x28:
    case 0x44:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      v10 = *(_QWORD *)(a2 + 40);
      return sub_7EBA80(a1, v10);
    case 0x1C:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      v10 = *(_QWORD *)(a2 + 48);
      return sub_7EBA80(a1, v10);
    case 0x1D:
      v50 = (__int64 *)(a2 + 40);
      v51 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v51 == a2 + 40 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v50);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v51 == ++v50 )
          return 1;
      }
      return result;
    case 0x20:
      v48 = (__int64 *)(a2 + 24);
      v49 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v49 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v48);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v49 == ++v48 )
          return 1;
      }
      return result;
    case 0x22:
    case 0x23:
    case 0x40:
    case 0x43:
    case 0x46:
    case 0x49:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 24)) )
        return 0;
LABEL_10:
      v10 = *(_QWORD *)(a2 + 16);
      return sub_7EBA80(a1, v10);
    case 0x24:
      return sub_7ECE10(a1, a2);
    case 0x25:
      v52 = (__int64 *)(a2 + 24);
      v53 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v53 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v52);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v53 == ++v52 )
          return 1;
      }
      return result;
    case 0x26:
      v27 = (__int64 *)(a2 + 104);
      v28 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v28 == a2 + 104 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v27);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v28 == ++v27 )
          return 1;
      }
      return result;
    case 0x29:
      v29 = (__int64 *)(a2 + 80);
      v30 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v30 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v29);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v30 == ++v29 )
          return 1;
      }
      return result;
    case 0x2C:
    case 0x4E:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      v10 = *(_QWORD *)(a2 + 32);
      return sub_7EBA80(a1, v10);
    case 0x2D:
      return sub_7FD650(a1, a2, (__int64)a3, a4, a5, a6);
    case 0x2F:
      v19 = (__int64 *)(a2 + 24);
      v20 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v20 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v19);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v20 == ++v19 )
          return 1;
      }
      return result;
    case 0x31:
      v17 = (__int64 *)(a2 + 32);
      v18 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 32;
      if ( v18 == a2 + 32 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v17);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v18 == ++v17 )
          return 1;
      }
      return result;
    case 0x32:
      v15 = (__int64 *)(a2 + 80);
      v16 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v16 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v15);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v16 == ++v15 )
          return 1;
      }
      return result;
    case 0x33:
      return sub_7FC440(a1, a2);
    case 0x34:
      return sub_7FD470(a1, a2);
    case 0x36:
      v25 = (__int64 *)(a2 + 144);
      v26 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 144;
      if ( v26 == a2 + 144 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v25);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v26 == ++v25 )
          return 1;
      }
      return result;
    case 0x41:
      return sub_7ECCF0(a1, a2, a3, a4, a5, a6);
    case 0x45:
      v35 = (__int64 *)(a2 + 40);
      v36 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v36 == a2 + 40 )
        goto LABEL_19;
      while ( (unsigned __int8)sub_7EBA80(a1, *v35) )
      {
        if ( (__int64 *)v36 == ++v35 )
          goto LABEL_19;
      }
      return 0;
    case 0x4D:
      v33 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 24 == v33 )
        return 1;
      v34 = (__int64 *)(a2 + 24);
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v34);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v33 == ++v34 )
          return 1;
      }
      return result;
    case 0x4F:
      v54 = *(unsigned int *)(a2 + 16);
      v55 = (__int64 *)(a2 + 24);
      v56 = a2 + 8 * v54 + 24;
      if ( v56 == a2 + 24 )
        goto LABEL_129;
      do
      {
        if ( !(unsigned __int8)sub_7EBA80(a1, *v55) )
          return 0;
        ++v55;
      }
      while ( (__int64 *)v56 != v55 );
      v54 = *(unsigned int *)(a2 + 16);
LABEL_129:
      v57 = v54;
      v58 = (__int64 *)(a2 + v57 * 8 + 24);
      v59 = &v58[v57];
      if ( v58 == &v58[v57] )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v58);
        if ( !(_BYTE)result )
          break;
        if ( v59 == ++v58 )
          return 1;
      }
      return result;
    case 0x52:
      return sub_7F17F0(a1, a2, (__int64)a3, a4, a5, a6);
    case 0x57:
      if ( !(unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(a2 + 16)) )
        return 0;
      v10 = *(_QWORD *)(a2 + 64);
      return sub_7EBA80(a1, v10);
    case 0x5A:
      v31 = (__int64 *)(a2 + 24);
      v32 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 24;
      if ( v32 == a2 + 24 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v31);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v32 == ++v31 )
          return 1;
      }
      return result;
    case 0x5D:
      v7 = a2 + 24 + 8LL * *(unsigned int *)(a2 + 16);
      if ( a2 + 24 == v7 )
        return 1;
      v8 = (__int64 *)(a2 + 24);
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v8);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v7 == ++v8 )
          return 1;
      }
      return result;
    case 0x5E:
      return sub_7FD2A0(a1, a2, (__int64)a3, a4, a5, a6);
    case 0x5F:
      v11 = (__int64 *)(a2 + 40);
      v12 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 40;
      if ( v12 == a2 + 40 )
        goto LABEL_19;
      while ( (unsigned __int8)sub_7EBA80(a1, *v11) )
      {
        if ( (__int64 *)v12 == ++v11 )
        {
LABEL_19:
          v10 = *(_QWORD *)(a2 + 24);
          return sub_7EBA80(a1, v10);
        }
      }
      return 0;
    case 0x62:
      v23 = (__int64 *)(a2 + 104);
      v24 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 104;
      if ( v24 == a2 + 104 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v23);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v24 == ++v23 )
          return 1;
      }
      return result;
    case 0x6A:
      v37 = (__int64 *)(a2 + 80);
      v38 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v38 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v37);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v38 == ++v37 )
          return 1;
      }
      return result;
    case 0x6B:
      v44 = (__int64 *)(a2 + 80);
      v45 = a2 + 8LL * *(unsigned int *)(a2 + 16) + 80;
      if ( v45 == a2 + 80 )
        return 1;
      while ( 1 )
      {
        result = sub_7EBA80(a1, *v44);
        if ( !(_BYTE)result )
          break;
        if ( (__int64 *)v45 == ++v44 )
          return 1;
      }
      return result;
    case 0x6C:
      v21 = *(_DWORD *)(a2 + 16);
      v22 = 0;
      if ( !v21 )
        return 1;
      break;
    default:
      return 1;
  }
  while ( 1 )
  {
    sub_A91B60(v60, a2, v22);
    if ( !(unsigned __int8)sub_7EBA80(a1, v60[0]) )
      break;
    if ( !(unsigned __int8)sub_7EBA80(a1, v60[1]) )
      return 0;
    if ( v21 == ++v22 )
      return 1;
  }
  return 0;
}

