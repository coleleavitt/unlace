__int64 __fastcall sub_1655680(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r12
  __int64 (__fastcall *v3)(_QWORD *); // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // eax

  v2 = a2;
  v3 = *(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL);
  if ( (char *)v3 == (char *)sub_A01140 )
    v4 = sub_B70A60((__int64)a2);
  else
    v4 = v3(a2);
  v7 = *(_QWORD **)(a1 + 56);
  v8 = 8LL * *(unsigned int *)(a1 + 64);
  v9 = &v7[(unsigned __int64)v8 / 8];
  v10 = v8 >> 3;
  v11 = v8 >> 5;
  if ( v11 )
  {
    if ( *v7 == v4 )
    {
      v13 = *(_QWORD *)(a1 + 56);
    }
    else if ( v4 == v7[1] )
    {
      v13 = (__int64)(v7 + 1);
    }
    else if ( v4 == v7[2] )
    {
      v13 = (__int64)(v7 + 2);
    }
    else
    {
      a2 = *(_QWORD **)(a1 + 56);
      v12 = &v7[4 * v11];
      v13 = (__int64)(v7 + 3);
      if ( v4 != v7[3] )
      {
        while ( 1 )
        {
          v13 = (__int64)(a2 + 4);
          if ( v12 == a2 + 4 )
          {
            v10 = ((__int64)v9 - v13) >> 3;
            goto LABEL_16;
          }
          if ( v4 == a2[4] )
            goto LABEL_20;
          if ( v4 == a2[5] )
          {
            v13 = (__int64)(a2 + 5);
            goto LABEL_20;
          }
          if ( v4 == a2[6] )
          {
            v13 = (__int64)(a2 + 6);
            goto LABEL_20;
          }
          if ( v4 == a2[7] )
            break;
          a2 += 4;
        }
        v13 = (__int64)(a2 + 7);
      }
    }
LABEL_20:
    result = 0;
    if ( v9 != (_QWORD *)v13 )
      return result;
    goto LABEL_21;
  }
  v13 = *(_QWORD *)(a1 + 56);
LABEL_16:
  if ( v10 != 2 )
  {
    if ( v10 != 3 )
    {
      if ( v10 != 1 )
        goto LABEL_21;
      goto LABEL_19;
    }
    if ( v4 == *(_QWORD *)v13 )
      goto LABEL_20;
    v13 += 8;
  }
  if ( v4 == *(_QWORD *)v13 )
    goto LABEL_20;
  v13 += 8;
LABEL_19:
  if ( v4 == *(_QWORD *)v13 )
    goto LABEL_20;
LABEL_21:
  if ( !*(_BYTE *)(a1 + 104) || v7 == v9 )
    return 1;
  while ( 1 )
  {
    v15 = *(_QWORD *)(*v7 + 40LL);
    if ( v2[5] == v15 )
    {
      v16 = *(_QWORD *)(*v7 + 16LL);
      v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v16 & 4) != 0 )
        v17 = (_QWORD *)*v17;
      v18 = sub_B91570((__int64)v17, (__int64)a2, v13, v15, v5, v6);
      v23 = v2[2];
      v24 = v18;
      v25 = (v23 & 4) != 0 ? *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF8LL) : v23 & 0xFFFFFFFFFFFFFFF8LL;
      v26 = sub_B91570(v25, (__int64)a2, v19, v20, v21, v22);
      if ( v24 == v26 )
        break;
      v13 = *(_BYTE *)(v24 + 8) & 0x7F;
      if ( (*(_BYTE *)(v24 + 8) & 0x7F) != 0 && (_DWORD)v13 != 24 )
      {
        v27 = *(_BYTE *)(v26 + 8) & 0x7F;
        if ( v27 )
        {
          if ( v27 != 24 )
            break;
        }
      }
    }
    if ( v9 == ++v7 )
      return 1;
  }
  return 2;
}
