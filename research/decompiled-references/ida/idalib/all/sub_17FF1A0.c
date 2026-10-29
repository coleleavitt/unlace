__int64 __fastcall sub_17FF1A0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  _BYTE *v15; // rdx
  int v16; // eax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // rax
  _DWORD *v23; // rsi
  _DWORD *v24; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  __int64 v26; // [rsp+8h] [rbp-50h]
  _BYTE v27[72]; // [rsp+10h] [rbp-48h] BYREF

  *(_BYTE *)(a3 + 720) &= 0xF3u;
  ptr = v27;
  v26 = 0x400000000LL;
  if ( *(_DWORD *)(a1[29] + 64LL) )
  {
    v11 = a1[95];
    v12 = *(unsigned int *)(v11 + 264);
    if ( (_DWORD)v12 )
    {
      v18 = *(__int64 **)(*(_QWORD *)(v11 + 256) + 40 * v12 - 40);
      v19 = *v18;
      a8 = *v18 + 136LL * *((unsigned int *)v18 + 2);
      if ( *v18 != a8 )
      {
        if ( *(_DWORD *)v19 == 4 )
          goto LABEL_19;
LABEL_17:
        while ( 1 )
        {
          v19 += 136;
          if ( a8 == v19 )
            break;
          if ( *(_DWORD *)v19 == 4 )
          {
LABEL_19:
            v20 = *(_QWORD *)(v19 + 8);
            v21 = v20 + 56LL * *(unsigned int *)(v19 + 16);
            if ( v20 != v21 )
            {
              while ( 1 )
              {
                if ( *(_DWORD *)(v20 + 8) == 12 )
                {
                  v22 = *(_DWORD **)(v20 + 16);
                  v23 = &v22[6 * *(unsigned int *)(v20 + 24)];
                  if ( v22 != v23 )
                  {
                    if ( *v22 == 68 )
                    {
LABEL_28:
                      sub_1AFDF10(v11, a2, a3, 0, 0, &ptr);
                      goto LABEL_3;
                    }
                    v24 = v22 + 6;
                    while ( v23 != v24 )
                    {
                      v24 += 6;
                      if ( *(v24 - 6) == 68 )
                        goto LABEL_28;
                    }
                  }
                }
                v20 += 56;
                if ( v21 == v20 )
                  goto LABEL_17;
              }
            }
          }
        }
      }
    }
  }
LABEL_3:
  v13 = sub_17FE280((__int64)a1, a2, a3, nullptr, 0, a8, a4, a5);
  v14 = a1[379];
  if ( v14 && (*(_BYTE *)(v14 + 8) & 0x7Fu) - 19 <= 4 && v13 )
  {
    v15 = (_BYTE *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
    {
      v16 = *(_BYTE *)(*(_QWORD *)v15 + 8LL) & 0x7F;
      if ( v16 != 24 )
      {
LABEL_8:
        if ( v16 )
          goto LABEL_10;
      }
    }
    else
    {
      v16 = v15[8] & 0x7F;
      if ( v16 != 24 )
        goto LABEL_8;
    }
    *(_BYTE *)(v13 + 29) |= 0x10u;
  }
LABEL_10:
  if ( (_DWORD)v26 )
    sub_1AF4110(a1[95], v13, &ptr);
  if ( ptr != v27 )
    free(ptr);
  return v13;
}
