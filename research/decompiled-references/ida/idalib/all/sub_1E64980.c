__int64 __fastcall sub_1E64980(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 *v11; // rbx
  __int64 *v12; // rax
  __int64 result; // rax
  __int64 *v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // dl
  bool v18; // [rsp+Fh] [rbp-B9h] BYREF
  _BYTE v19[184]; // [rsp+10h] [rbp-B8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v4 == *(_DWORD *)(v3 + 136) )
    v5 = *(_QWORD *)v3 + 32LL;
  else
    v5 = *(_QWORD *)(v3 + 128) + 144 * v4 + 16;
  v6 = *(__int64 **)(v5 + 8);
  v7 = 8LL * *(unsigned int *)(v5 + 16);
  v8 = &v6[(unsigned __int64)v7 / 8];
  v9 = v7 >> 3;
  v10 = v7 >> 5;
  if ( v10 )
  {
    if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(*v6 + 72) + 8LL) )
    {
      v11 = v6;
    }
    else
    {
      v11 = v6 + 1;
      if ( a3 != *(unsigned __int16 *)(*(_QWORD *)(v6[1] + 72) + 8LL) )
      {
        v12 = &v6[4 * v10];
        if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(v6[2] + 72) + 8LL) )
        {
          v11 = v6 + 2;
        }
        else
        {
          while ( 1 )
          {
            if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(v6[3] + 72) + 8LL) )
            {
              v11 = v6 + 3;
              goto LABEL_15;
            }
            v11 = v6 + 4;
            if ( v12 == v6 + 4 )
            {
              v9 = v8 - v11;
              goto LABEL_22;
            }
            if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(v6[4] + 72) + 8LL) )
              goto LABEL_15;
            if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(v6[5] + 72) + 8LL) )
            {
              v11 = v6 + 5;
              goto LABEL_15;
            }
            if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(v6[6] + 72) + 8LL) )
              break;
            v6 += 4;
          }
          v11 = v6 + 6;
        }
      }
    }
    goto LABEL_15;
  }
  v11 = v6;
LABEL_22:
  if ( v9 == 2 )
    goto LABEL_28;
  if ( v9 == 3 )
  {
    if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(*v11 + 72) + 8LL) )
      goto LABEL_15;
    ++v11;
LABEL_28:
    if ( a3 == *(unsigned __int16 *)(*(_QWORD *)(*v11 + 72) + 8LL) )
      goto LABEL_15;
    ++v11;
    goto LABEL_30;
  }
  if ( v9 != 1 )
    return 0;
LABEL_30:
  if ( a3 != *(unsigned __int16 *)(*(_QWORD *)(*v11 + 72) + 8LL) )
    return 0;
LABEL_15:
  if ( v8 == v11 )
    return 0;
  result = 0;
  if ( (*(_BYTE *)(*v11 + 58) & 1) == 0 )
  {
    v14 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    sub_168B9F0((__int64)v19, v14, *(_DWORD *)(a2 + 24), 0xCADu, 0);
    v15 = sub_15DD120((__int64)v19, *v11);
    v16 = sub_15DD120(v15, a2);
    v17 = 1;
    if ( (*(_BYTE *)(*v11 + 35) & 2) == 0 )
      v17 = (*(_BYTE *)(a2 + 35) & 2) != 0;
    v18 = v17;
    sub_1588420(v16, (unsigned __int8 *)&v18);
    sub_15F7200(v19);
    sub_168B9F0((__int64)v19, v14, *(_DWORD *)(*v11 + 24), 0x16CFu, 0);
    sub_15F7200(v19);
    *(_BYTE *)(a2 + 58) |= 1u;
    return 1;
  }
  return result;
}
