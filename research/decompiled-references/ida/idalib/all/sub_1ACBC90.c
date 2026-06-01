__int64 __fastcall sub_1ACBC90(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // r15
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-E0h]
  char v21; // [rsp+Eh] [rbp-D2h] BYREF
  char v22; // [rsp+Fh] [rbp-D1h] BYREF
  __int64 v23; // [rsp+10h] [rbp-D0h] BYREF
  _BYTE v24[200]; // [rsp+18h] [rbp-C8h] BYREF

  if ( *(_BYTE *)a2 != 7 && (unsigned __int8)(*(_BYTE *)a2 - 9) > 2u )
    return 0;
  v2 = *(_QWORD **)(a1 + 16);
  v3 = 8LL * *(_QWORD *)(a1 + 24);
  v4 = &v2[(unsigned __int64)v3 / 8];
  v5 = v3 >> 5;
  v6 = v3 >> 3;
  if ( v5 <= 0 )
  {
    v7 = *(_QWORD **)(a1 + 16);
LABEL_16:
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          return 0;
LABEL_19:
        result = 0;
        if ( *(_BYTE *)(*v7 + 8LL) != 43 )
          return result;
        goto LABEL_20;
      }
      if ( *(_BYTE *)(*v7 + 8LL) == 43 )
        goto LABEL_20;
      ++v7;
    }
    if ( *(_BYTE *)(*v7 + 8LL) == 43 )
      goto LABEL_20;
    ++v7;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(*v2 + 8LL) == 43 )
  {
    v7 = *(_QWORD **)(a1 + 16);
  }
  else
  {
    v7 = v2 + 1;
    if ( *(_BYTE *)(v2[1] + 8LL) != 43 )
    {
      v7 = v2 + 2;
      if ( *(_BYTE *)(v2[2] + 8LL) != 43 )
      {
        v7 = v2 + 3;
        v8 = &v2[4 * v5];
        if ( *(_BYTE *)(v2[3] + 8LL) != 43 )
        {
          while ( 1 )
          {
            v7 = v2 + 4;
            if ( v2 + 4 == v8 )
            {
              v6 = v4 - v8;
              goto LABEL_16;
            }
            if ( *(_BYTE *)(v2[4] + 8LL) == 43 )
              goto LABEL_20;
            if ( *(_BYTE *)(v2[5] + 8LL) == 43 )
            {
              v7 = v2 + 5;
              if ( v4 == v2 + 5 )
                return 0;
              goto LABEL_23;
            }
            if ( *(_BYTE *)(v2[6] + 8LL) == 43 )
            {
              v7 = v2 + 6;
              if ( v4 == v2 + 6 )
                return 0;
              goto LABEL_23;
            }
            if ( *(_BYTE *)(v2[7] + 8LL) == 43 )
              break;
            v2 += 4;
          }
          v7 = v2 + 7;
          if ( v4 == v2 + 7 )
            return 0;
          goto LABEL_23;
        }
      }
    }
  }
LABEL_20:
  if ( v4 == v7 )
    return 0;
LABEL_23:
  sub_168B9F0((__int64)v24, *(__int64 **)a1, *(_DWORD *)(a2 + 4), 0xB3Cu, 0);
  v21 = *(_BYTE *)(a2 + 1);
  v10 = sub_1AA5620((__int64)v24, &v21);
  v22 = *(_BYTE *)(*v7 + 8LL);
  v11 = sub_1AA5620(v10, &v22);
  v12 = *(_BYTE *)a2;
  v13 = v11;
  if ( *(_BYTE *)(v11 + 120) )
  {
    sub_1AA2FB0((unsigned __int8 **)(v11 + 32), *(_BYTE *)a2);
  }
  else if ( *(_BYTE *)(v11 + 132) )
  {
    v14 = sub_168B9E0((_QWORD *)v11);
    v18 = *(_QWORD *)(v13 + 16);
    if ( v18 )
    {
      v20 = v14;
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 32LL))(v18);
      v14 = v20;
    }
    v23 = v18;
    v19 = sub_1587BC0(v14, &v23, v14, v15, v16, v17);
    sub_1AA2FB0((unsigned __int8 **)(*v19 + 32LL * *(unsigned int *)(v13 + 128) + 8), v12);
  }
  sub_15F7200(v24);
  sub_168B9F0((__int64)v24, *(__int64 **)a1, *(_DWORD *)(*v7 + 12LL), 0x1675u, 0);
  LOBYTE(v23) = *(_BYTE *)(*v7 + 8LL);
  sub_1AA5620((__int64)v24, (char *)&v23);
  sub_15F7200(v24);
  return 1;
}
