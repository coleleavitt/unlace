__int64 __fastcall sub_220AEA0(__int64 a1, unsigned __int8 *a2)
{
  unsigned int v3; // r13d
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v7; // rax
  const void *v8; // rdx
  unsigned __int16 v9; // ax
  const void *v10; // rdi
  unsigned int v11; // edx
  void *v12; // rax
  unsigned int v13; // r9d
  int v14; // eax
  int v15; // r9d
  void *v16; // rax
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  void *i; // rax
  bool v21; // cc
  __int64 v22; // rax
  void *v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-40h]
  void *src; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-30h]

  v3 = *((_DWORD *)a2 + 2);
  if ( v3 == 16 )
  {
    v8 = *(const void **)a2;
    *(_DWORD *)(a1 + 8) = 16;
    HIBYTE(v9) = byte_26F7E00[(unsigned __int8)v8];
    LOBYTE(v9) = byte_26F7E00[BYTE1(v8)];
    *(_QWORD *)a1 = v9;
    return a1;
  }
  else if ( v3 <= 0x10 )
  {
    if ( v3 )
    {
      if ( v3 != 8 )
        goto LABEL_12;
      v7 = *a2;
      *(_DWORD *)(a1 + 8) = 8;
      *(_QWORD *)a1 = byte_26F7E00[v7];
      return a1;
    }
    else
    {
      v22 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = v22;
      return a1;
    }
  }
  else
  {
    if ( v3 != 32 )
    {
      if ( v3 == 64 )
      {
        v4 = *(_QWORD *)a2;
        *(_DWORD *)(a1 + 8) = 64;
        v5 = ((unsigned __int64)byte_26F7E00[BYTE5(v4)] << 16)
           | ((unsigned __int64)byte_26F7E00[BYTE4(v4)] << 24)
           | ((unsigned __int64)byte_26F7E00[BYTE3(v4)] << 32)
           | ((unsigned __int64)byte_26F7E00[BYTE2(v4)] << 40)
           | ((unsigned __int64)byte_26F7E00[BYTE1(v4)] << 48)
           | ((unsigned __int64)byte_26F7E00[(unsigned __int8)v4] << 56);
        BYTE1(v5) = byte_26F7E00[BYTE6(v4)];
        LOBYTE(v5) = byte_26F7E00[HIBYTE(v4)];
        *(_QWORD *)a1 = v5;
        return a1;
      }
LABEL_12:
      v24 = *((_DWORD *)a2 + 2);
      if ( v3 > 0x40 )
      {
        sub_2205510((__int64)&v23, (const void **)a2);
        v3 = *((_DWORD *)a2 + 2);
        v26 = v3;
        if ( v3 > 0x40 )
        {
          sub_2205470((__int64)&src, 0, 0);
          v3 = *((_DWORD *)a2 + 2);
          v13 = v24;
LABEL_15:
          if ( v13 <= 0x40 )
          {
LABEL_29:
            for ( i = v23; i; i = nullptr )
            {
LABEL_18:
              if ( v26 > 0x40 )
              {
                sub_220A060(src, ((unsigned __int64)v26 + 63) >> 6, 1u);
                sub_CF8100((unsigned __int64 *)&src);
              }
              else
              {
                v16 = nullptr;
                if ( v26 != 1 )
                  v16 = (void *)(2LL * (_QWORD)src);
                src = v16;
                sub_CF8100((unsigned __int64 *)&src);
              }
              v17 = v24;
              LOBYTE(v18) = (_BYTE)v23;
              if ( v24 > 0x40 )
                v18 = *(_QWORD *)v23;
              v19 = v18 & 1;
              if ( v26 <= 0x40 )
              {
                src = (void *)((unsigned __int64)src | v19);
                sub_CF8100((unsigned __int64 *)&src);
                v17 = v24;
              }
              else
              {
                *(_QWORD *)src |= v19;
              }
              --v3;
              if ( v17 > 0x40 )
              {
                sub_220A970(v23, ((unsigned __int64)v17 + 63) >> 6, 1u);
                v13 = v24;
                goto LABEL_15;
              }
              if ( v17 != 1 )
              {
                v23 = (void *)((unsigned __int64)v23 >> 1);
                goto LABEL_29;
              }
              v23 = nullptr;
            }
          }
          else
          {
            v14 = sub_2206780((__int64 *)&v23);
            if ( (unsigned int)(v15 - v14) > 0x40 || *(_QWORD *)v23 )
              goto LABEL_18;
          }
          sub_220A160((unsigned __int64 *)&src, v3);
          v21 = v24 <= 0x40;
          *(_DWORD *)(a1 + 8) = v26;
          *(_QWORD *)a1 = src;
          if ( !v21 )
          {
            if ( v23 )
              operator delete[](v23);
          }
          return a1;
        }
        v13 = v24;
      }
      else
      {
        v12 = *(void **)a2;
        v26 = v3;
        v13 = v3;
        v23 = v12;
      }
      src = nullptr;
      goto LABEL_15;
    }
    v10 = *(const void **)a2;
    *(_DWORD *)(a1 + 8) = 32;
    v11 = (byte_26F7E00[BYTE1(v10)] << 16) | (byte_26F7E00[(unsigned __int8)v10] << 24);
    BYTE1(v11) = byte_26F7E00[BYTE2(v10)];
    LOBYTE(v11) = byte_26F7E00[(unsigned int)v10 >> 24];
    *(_QWORD *)a1 = v11;
    return a1;
  }
}
