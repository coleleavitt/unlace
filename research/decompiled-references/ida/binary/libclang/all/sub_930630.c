__int64 __fastcall sub_930630(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v7; // r14
  unsigned __int8 **v8; // r14
  __int64 result; // rax
  char v10; // r14
  unsigned int v11; // edx
  void *v12; // rax
  unsigned __int8 v13; // bp
  unsigned __int64 v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  unsigned int v17; // esi
  unsigned __int64 v18; // rsi
  unsigned int v19; // eax
  void *v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rbx
  __int64 v23; // [rsp+8h] [rbp-70h]
  void *v24; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v25; // [rsp+18h] [rbp-60h]
  void *v26; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+2Ch] [rbp-4Ch]
  void *v29; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v26, 0x3Fu, *(_DWORD *)(a4 + 8));
    v30 = *(_DWORD *)(a4 + 8);
    if ( v30 > 0x40 )
      sub_2585B30(&v29);
    else
      v29 = *(void **)a4;
    sub_8CC450((__int64)&v29, &v26, a4);
    if ( v30 > 0x40 && v29 )
      operator delete[](v29);
    if ( v27 > 0x40 && v26 )
      operator delete[](v26);
  }
  sub_92A4D0((__int64)&v29, 0x40u, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v29) < 0 )
  {
    if ( v30 <= 0x40 || (v16 = v29) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v29, 0x3Fu, *(_DWORD *)(a4 + 8));
      v10 = sub_922400(a4, (__int64)&v29);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      v11 = *(_DWORD *)(a4 + 8);
      if ( v10 != 3 )
      {
        v27 = *(_DWORD *)(a4 + 8);
        if ( v11 > 0x40 )
        {
          sub_2585B30(&v26);
          v30 = v27;
          if ( v27 > 0x40 )
          {
            sub_2585B30(&v29);
            goto LABEL_17;
          }
          v12 = v26;
        }
        else
        {
          v12 = *(void **)a4;
          v30 = v11;
          v26 = v12;
        }
        v29 = v12;
LABEL_17:
        v13 = (unsigned __int8)sub_9301F0((__int64)&v29);
        if ( v30 > 0x40 && v29 )
          operator delete[](v29);
        v14 = *a3 << v13;
        if ( v27 <= 0x40 )
          goto LABEL_23;
        v15 = v26;
        if ( !v26 )
          goto LABEL_23;
        goto LABEL_22;
      }
      v17 = 64;
      if ( *a3 )
      {
        _BitScanReverse64(&v18, *a3);
        v17 = v18 ^ 0x3F;
      }
      sub_92A4D0((__int64)&v29, v17, v11);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v19 = v30;
      v20 = v29;
      *(_DWORD *)(a4 + 8) = v30;
      *(_QWORD *)a4 = v20;
      v25 = v19;
      if ( v19 > 0x40 )
      {
        sub_2585B30(&v24);
        v27 = v25;
        if ( v25 > 0x40 )
        {
          sub_2585B30(&v26);
          if ( v27 > 0x40 )
          {
            sub_25877E0(&v29, &v26, 64);
            LOBYTE(v21) = (_BYTE)v29;
            if ( v30 > 0x40 )
            {
              v21 = *(_QWORD *)v29;
              operator delete[](v29);
            }
LABEL_50:
            if ( v27 > 0x40 && v26 )
              operator delete[](v26);
            v14 = *a3 << v21;
            if ( v25 <= 0x40 )
              goto LABEL_23;
            v15 = v24;
            if ( !v24 )
              goto LABEL_23;
LABEL_22:
            operator delete[](v15);
LABEL_23:
            *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v14;
            return 1;
          }
LABEL_46:
          sub_2587D60(&v29, &v26);
          LOBYTE(v21) = (_BYTE)v29;
          if ( v30 > 0x40 )
          {
            v22 = *(_QWORD *)v29;
            if ( v29 )
              operator delete[](v29);
            LOBYTE(v21) = v22;
          }
          goto LABEL_50;
        }
        v20 = v24;
      }
      else
      {
        v24 = v20;
        v27 = v19;
      }
      v26 = v20;
      goto LABEL_46;
    }
LABEL_27:
    operator delete[](v16);
    goto LABEL_10;
  }
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v29, a4);
  v28 = 1;
  v27 = v30;
  v26 = v29;
  v23 = *(_QWORD *)(v7 + 8);
  v29 = (void *)sub_A2E240(a1, v7, 2220, 0);
  v8 = (unsigned __int8 **)v29;
  if ( v29 )
  {
    sub_8DF340((unsigned __int8 ***)&v29, (__int64)&v26);
    sub_8D69A0(v8, v23);
    sub_8D6E40(v8, 64);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v27 <= 0x40 )
      goto LABEL_10;
    v16 = v26;
    if ( !v26 )
      goto LABEL_10;
    goto LABEL_27;
  }
  if ( v27 > 0x40 && v26 )
  {
    operator delete[](v26);
    return 0;
  }
  return result;
}

