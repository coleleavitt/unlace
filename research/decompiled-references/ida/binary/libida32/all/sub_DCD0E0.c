__int64 __fastcall sub_DCD0E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 *v27; // r13
  unsigned int v28; // r15d
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+8h] [rbp-A0h]
  _BYTE v38[48]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v39[13]; // [rsp+40h] [rbp-68h] BYREF

  v3 = sub_CDA220(a2);
  result = *(_QWORD *)(v3 + 32);
  if ( !result )
  {
    if ( !*(_BYTE *)(v3 + 60) )
      return result;
    result = *(unsigned int *)(v3 + 20);
    if ( (_DWORD)result == -1 || (unsigned int)result < *(_DWORD *)(v3 + 16) )
      return result;
    v11 = 0;
    if ( *(_QWORD *)(v3 + 40) )
    {
      while ( 1 )
      {
        result = (unsigned int)result / *(_DWORD *)(v3 + 16);
        if ( v11 == (_DWORD)result )
          break;
        while ( 1 )
        {
          v12 = v11++;
          sub_CDA6F0((__int64)v39, a2, v12);
          sub_CDAA60((__int64)v38, v39);
          sub_DFF560(v39);
          sub_DCD0E0(a1, v38);
          sub_DFF560(v38);
          result = *(unsigned int *)(v3 + 20);
          if ( (_DWORD)result != -1 )
            break;
          if ( !v11 )
            return result;
        }
      }
      return result;
    }
    v22 = *(_DWORD *)(v3 + 48);
    result = (unsigned int)(v22 - 8);
    if ( (unsigned int)result > 1 && v22 != 12 )
      return result;
    sub_CDA6F0((__int64)v38, a2, 0);
    if ( v22 == 9 )
    {
      if ( ((unsigned __int64)*(unsigned int *)(sub_CEA4F0((__int64)v38) + 8) + 63) >> 6 != 1 )
      {
        v27 = (__int64 *)(a1 + 168);
        sub_DCA820(a1 + 168, (__int64)v38, v23, v24, v25, v26);
LABEL_33:
        v28 = 1;
        while ( 1 )
        {
          v30 = *(_DWORD *)(v3 + 20);
          if ( v30 == -1 )
          {
            if ( !v28 )
              return sub_DFF560(v38);
          }
          else if ( v28 == v30 / *(_DWORD *)(v3 + 16) )
          {
            return sub_DFF560(v38);
          }
          v29 = v28++;
          sub_CDA6F0((__int64)v39, a2, v29);
          sub_DCCF20(v27, (__int64)v39, v22);
          sub_DFF560(v39);
        }
      }
    }
    else if ( v22 == 12 )
    {
      v35 = sub_CEA540((__int64)v38);
      v36 = sub_21D4FB0(*(unsigned int *)(v35 + 8));
      if ( ((unsigned __int64)(unsigned int)sub_21D53E0(v36) + 63) >> 6 != 1 )
      {
        v27 = (__int64 *)(a1 + 168);
        sub_DCA5F0((_QWORD *)(a1 + 168), (__int64)v38);
        goto LABEL_33;
      }
    }
    else if ( v22 == 8 && ((unsigned __int64)*(unsigned int *)(sub_CEA4A0((__int64)v38) + 8) + 63) >> 6 != 1 )
    {
      v27 = (__int64 *)(a1 + 168);
      sub_DCA740(a1 + 168, (__int64)v38, v31, v32, v33, v34);
      goto LABEL_33;
    }
    return sub_DFF560(v38);
  }
  v5 = *(_QWORD *)(result + 280);
  result = 3LL * *(unsigned int *)(result + 288);
  v6 = v5 + 8 * result;
  if ( v6 != v5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = (unsigned int)(*(_DWORD *)a2 + *(_DWORD *)(v5 + 8));
      v9 = *(_QWORD *)(a2 + 32);
      v10 = v8;
      if ( !*(_BYTE *)(v7 + 60) && !*(_QWORD *)(v7 + 32) && *(_BYTE *)(v7 + 52) )
        break;
      sub_DFF4E0(v39, v9, v8, v8);
      sub_DCD0E0(a1, v39);
      result = sub_DFF560(v39);
LABEL_6:
      v5 += 24;
      if ( v5 == v6 )
        return result;
    }
    v13 = *(_DWORD *)(v7 + 48);
    switch ( v13 )
    {
      case 9:
        sub_DFF4E0(v39, v9, v8, v8);
        sub_DCA820(a1 + 168, (__int64)v39, v14, v15, v16, v17);
        break;
      case 12:
        sub_DFF4E0(v39, v9, v8, v8);
        sub_DCA5F0((_QWORD *)(a1 + 168), (__int64)v39);
        break;
      case 8:
        sub_DFF4E0(v39, v9, v8, v8);
        sub_DCA740(a1 + 168, (__int64)v39, v18, v19, v20, v21);
        break;
      default:
LABEL_20:
        v37 = v13;
        sub_DFF4E0(v39, v9, v8, v10);
        sub_DCCF20((__int64 *)(a1 + 168), (__int64)v39, v37);
        result = sub_DFF560(v39);
        goto LABEL_6;
    }
    sub_DFF560(v39);
    v8 = (unsigned int)(*(_DWORD *)a2 + *(_DWORD *)(v5 + 8));
    v9 = *(_QWORD *)(a2 + 32);
    v10 = (unsigned int)v8;
    v13 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 48LL);
    goto LABEL_20;
  }
  return result;
}

