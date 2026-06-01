__int64 __fastcall sub_92B660(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 v7; // r15
  unsigned __int8 **v8; // r14
  __int64 result; // rax
  char v10; // r14
  unsigned int v11; // edx
  void *v12; // rax
  void *v13; // rdi
  int v14; // ebp
  unsigned int v15; // ebx
  int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // eax
  void *v19; // rdx
  void *v20; // rdi
  __int64 v21; // [rsp+8h] [rbp-70h]
  void *v22; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-60h]
  void *v24; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-50h]
  char v26; // [rsp+2Ch] [rbp-4Ch]
  void *v27; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v24, 0x1Fu, *(_DWORD *)(a4 + 8));
    v28 = *(_DWORD *)(a4 + 8);
    if ( v28 > 0x40 )
      sub_2585B30(&v27);
    else
      v27 = *(void **)a4;
    sub_8CC450((__int64)&v27, &v24, a4);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
    if ( v25 > 0x40 && v24 )
      operator delete[](v24);
  }
  sub_92A4D0((__int64)&v27, 0x20u, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v27) < 0 )
  {
    if ( v28 <= 0x40 || (v20 = v27) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v27, 0x1Fu, *(_DWORD *)(a4 + 8));
      v10 = sub_922400(a4, (__int64)&v27);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
      v11 = *(_DWORD *)(a4 + 8);
      if ( v10 != 3 )
      {
        v23 = *(_DWORD *)(a4 + 8);
        if ( v11 > 0x40 )
        {
          sub_2585B30(&v22);
          v11 = v23;
          v25 = v23;
          if ( v23 > 0x40 )
          {
            sub_2585B30(&v24);
            v11 = v25;
LABEL_17:
            if ( v11 <= 0x20 )
            {
LABEL_18:
              sub_2587D60(&v27, &v24);
              v13 = v27;
              LOBYTE(v14) = (_BYTE)v27;
              if ( v28 <= 0x40 )
                goto LABEL_21;
              v14 = *(_DWORD *)v27;
              if ( !v27 )
                goto LABEL_21;
              goto LABEL_20;
            }
LABEL_38:
            sub_25877E0(&v27, &v24, 32);
            v13 = v27;
            LOBYTE(v14) = (_BYTE)v27;
            if ( v28 <= 0x40 )
            {
LABEL_21:
              if ( v25 > 0x40 && v24 )
                operator delete[](v24);
              v15 = *a3 << v14;
              if ( v23 > 0x40 )
              {
                if ( v22 )
                  operator delete[](v22);
              }
              *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v15;
              return 1;
            }
            v14 = *(_DWORD *)v27;
LABEL_20:
            operator delete[](v13);
            goto LABEL_21;
          }
          v12 = v22;
        }
        else
        {
          v12 = *(void **)a4;
          v25 = v11;
          v22 = v12;
        }
        v24 = v12;
        goto LABEL_17;
      }
      v16 = 32;
      if ( *a3 )
      {
        _BitScanReverse(&v17, *a3);
        v16 = v17 ^ 0x1F;
      }
      sub_92A4D0((__int64)&v27, v16, v11);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v18 = v28;
      v19 = v27;
      *(_DWORD *)(a4 + 8) = v28;
      *(_QWORD *)a4 = v19;
      v23 = v18;
      if ( v18 > 0x40 )
      {
        sub_2585B30(&v22);
        v18 = v23;
        v25 = v23;
        if ( v23 > 0x40 )
        {
          sub_2585B30(&v24);
          v18 = v25;
LABEL_37:
          if ( v18 <= 0x20 )
            goto LABEL_18;
          goto LABEL_38;
        }
        v19 = v22;
      }
      else
      {
        v22 = v19;
        v25 = v18;
      }
      v24 = v19;
      goto LABEL_37;
    }
LABEL_42:
    operator delete[](v20);
    goto LABEL_10;
  }
  if ( v28 > 0x40 && v27 )
    operator delete[](v27);
  v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v27, a4);
  v26 = 1;
  v25 = v28;
  v24 = v27;
  v21 = *(_QWORD *)(v7 + 8);
  v27 = (void *)sub_A2E240(a1, v7, 2220, 0);
  v8 = (unsigned __int8 **)v27;
  if ( v27 )
  {
    sub_8DF340((unsigned __int8 ***)&v27, (__int64)&v24);
    sub_8D69A0(v8, v21);
    sub_8D6E40(v8, 32);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v25 <= 0x40 )
      goto LABEL_10;
    v20 = v24;
    if ( !v24 )
      goto LABEL_10;
    goto LABEL_42;
  }
  if ( v25 > 0x40 && v24 )
  {
    operator delete[](v24);
    return 0;
  }
  return result;
}

