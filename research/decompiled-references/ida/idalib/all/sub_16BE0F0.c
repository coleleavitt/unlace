__int64 __fastcall sub_16BE0F0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rax
  int v4; // r15d
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  _QWORD *v8; // r15
  unsigned int v9; // r14d
  int v10; // eax
  unsigned int v11; // edx
  bool v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+8h] [rbp-60h]
  char v18; // [rsp+Ch] [rbp-5Ch]
  void *v19; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+18h] [rbp-50h]
  char v21; // [rsp+1Ch] [rbp-4Ch]
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-40h]

  v1 = *(unsigned int *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 12) )
  {
    while ( 1 )
    {
LABEL_4:
      v17 = 64;
      v16 = &qword_100;
      v18 = 0;
      if ( (_DWORD)v1 != 64 )
      {
        if ( (unsigned int)v1 > 0x40 )
        {
          sub_2206B70(&v22, &v16, v1);
          v21 = 0;
          v20 = v23;
          v19 = v22;
          v4 = sub_98E2D0((__int64 *)a1, (__int64 *)&v19);
          if ( v20 > 0x40 )
            goto LABEL_20;
          goto LABEL_7;
        }
        goto LABEL_17;
      }
      if ( *(_BYTE *)(a1 + 12) )
        v4 = sub_2205DB0(a1, &v16);
      else
        v4 = sub_2205E20(a1, &v16);
      while ( 1 )
      {
        if ( v4 < 0 )
          return 1;
        v5 = *(_DWORD *)(a1 + 8);
        v23 = v5;
        if ( v5 <= 0x40 )
        {
          v22 = *(void **)a1;
LABEL_13:
          v6 = (unsigned __int8)v22;
          v20 = v5;
          v23 = 0;
          v22 = (void *)v6;
          v19 = (void *)v6;
LABEL_14:
          if ( v6 )
            return 0;
          goto LABEL_31;
        }
        sub_2205510(&v22);
        v5 = v23;
        if ( v23 <= 0x40 )
          goto LABEL_13;
        *(_QWORD *)v22 = (unsigned __int8)*(_QWORD *)v22;
        v8 = v22;
        memset((char *)v22 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v5 + 63) >> 6) + 0x1FFFFFFF));
        v9 = v23;
        v6 = (unsigned __int64)v8;
        v19 = v8;
        v23 = 0;
        v20 = v9;
        if ( v9 <= 0x40 )
          goto LABEL_14;
        v10 = sub_2206780(&v19);
        v11 = v9;
        v12 = 0;
        if ( v11 - v10 <= 0x40 )
          v12 = *v8 == 0;
        if ( v8 )
        {
          operator delete[](v8);
          if ( v23 > 0x40 )
          {
            if ( v22 )
              operator delete[](v22);
          }
        }
        if ( !v12 )
          return 0;
LABEL_31:
        v1 = *(unsigned int *)(a1 + 8);
        if ( !*(_BYTE *)(a1 + 12) )
          break;
        if ( (unsigned int)v1 > 0x40 )
        {
          sub_220ABD0(a1, 8);
          v1 = *(unsigned int *)(a1 + 8);
          goto LABEL_4;
        }
        if ( (_DWORD)v1 != 8 )
        {
          *(_QWORD *)a1 >>= 8;
          goto LABEL_4;
        }
        *(_QWORD *)a1 = 0;
        v17 = 64;
        v16 = &qword_100;
        v18 = 0;
LABEL_17:
        if ( *(_BYTE *)(a1 + 12) )
        {
          sub_2206CD0(&v22, a1, 64);
          v21 = 1;
        }
        else
        {
          sub_2206B70(&v22, a1, 64);
          v21 = 0;
        }
        v20 = v23;
        v19 = v22;
        v4 = sub_98E2D0((__int64 *)&v19, (__int64 *)&v16);
        if ( v20 > 0x40 )
        {
LABEL_20:
          if ( v19 )
            operator delete[](v19);
        }
LABEL_7:
        if ( v17 > 0x40 && v16 )
          operator delete[](v16);
      }
      if ( (unsigned int)v1 > 0x40 )
      {
        sub_2206EF0(a1, 8);
        v1 = *(unsigned int *)(a1 + 8);
      }
      else
      {
        v13 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v1;
        v14 = 0;
        if ( (_DWORD)v1 )
        {
          v15 = (__int64)(*(_QWORD *)a1 << (64 - (unsigned __int8)v1)) >> (64 - (unsigned __int8)v1);
          if ( (_DWORD)v1 == 8 )
            v14 = v13 & (v15 >> 63);
          else
            v14 = v13 & (v15 >> 8);
        }
        *(_QWORD *)a1 = v14;
      }
    }
  }
  v2 = *(_QWORD *)a1;
  v3 = 1LL << ((unsigned __int8)v1 - 1);
  if ( (unsigned int)v1 > 0x40 )
  {
    if ( (*(_QWORD *)(v2 + 8LL * ((unsigned int)(v1 - 1) >> 6)) & v3) == 0 )
      goto LABEL_4;
  }
  else if ( (v2 & v3) == 0 )
  {
    goto LABEL_4;
  }
  return 0;
}
