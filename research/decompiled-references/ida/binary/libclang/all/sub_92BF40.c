__int64 __fastcall sub_92BF40(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v7; // r15
  unsigned __int8 **v8; // r14
  __int64 result; // rax
  char v10; // r14
  unsigned int v11; // edx
  void *v12; // rax
  void *v13; // rdi
  __int64 v14; // rbp
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // esi
  int v18; // r9d
  int v19; // edi
  int v20; // ecx
  unsigned int v21; // eax
  void *v22; // rdx
  void *v23; // rdi
  __int64 v24; // [rsp+8h] [rbp-70h]
  void *v25; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v26; // [rsp+18h] [rbp-60h]
  void *v27; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-50h]
  char v29; // [rsp+2Ch] [rbp-4Ch]
  void *v30; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v27, 7u, *(_DWORD *)(a4 + 8));
    v31 = *(_DWORD *)(a4 + 8);
    if ( v31 > 0x40 )
      sub_2585B30(&v30);
    else
      v30 = *(void **)a4;
    sub_8CC450((__int64)&v30, &v27, a4);
    if ( v31 > 0x40 && v30 )
      operator delete[](v30);
    if ( v28 > 0x40 && v27 )
      operator delete[](v27);
  }
  sub_92A4D0((__int64)&v30, 8u, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v30) < 0 )
  {
    if ( v31 <= 0x40 || (v23 = v30) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v30, 7u, *(_DWORD *)(a4 + 8));
      v10 = sub_922400(a4, (__int64)&v30);
      if ( v31 > 0x40 && v30 )
        operator delete[](v30);
      v11 = *(_DWORD *)(a4 + 8);
      if ( v10 != 3 )
      {
        v26 = *(_DWORD *)(a4 + 8);
        if ( v11 > 0x40 )
        {
          sub_2585B30(&v25);
          v11 = v26;
          v28 = v26;
          if ( v26 > 0x40 )
          {
            sub_2585B30(&v27);
            v11 = v28;
LABEL_17:
            if ( v11 <= 8 )
            {
LABEL_18:
              sub_2587D60(&v30, &v27);
              v13 = v30;
              LOBYTE(v14) = (_BYTE)v30;
              if ( v31 <= 0x40 )
                goto LABEL_21;
              v14 = *(_QWORD *)v30;
              if ( !v30 )
                goto LABEL_21;
              goto LABEL_20;
            }
LABEL_43:
            sub_25877E0(&v30, &v27, 8);
            v13 = v30;
            LOBYTE(v14) = (_BYTE)v30;
            if ( v31 <= 0x40 )
            {
LABEL_21:
              if ( v28 > 0x40 && v27 )
                operator delete[](v27);
              v15 = *a3 << v14;
              if ( v26 > 0x40 )
              {
                if ( v25 )
                  operator delete[](v25);
              }
              *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v15;
              return 1;
            }
            LOBYTE(v14) = *(_BYTE *)v30;
LABEL_20:
            operator delete[](v13);
            goto LABEL_21;
          }
          v12 = v25;
        }
        else
        {
          v12 = *(void **)a4;
          v28 = v11;
          v25 = v12;
        }
        v27 = v12;
        goto LABEL_17;
      }
      v16 = *a3;
      v17 = 8;
      if ( (_BYTE)v16 )
      {
        if ( v16 >> 4 )
        {
          v16 >>= 4;
          v18 = 1;
          v17 = 3;
          v19 = 0;
          v20 = 2;
        }
        else
        {
          v18 = 5;
          v17 = 7;
          v20 = 6;
          v19 = 4;
        }
        if ( v16 >> 2 )
        {
          v17 = v18;
          v16 >>= 2;
          v20 = v19;
        }
        if ( (unsigned int)v16 >> 1 )
          v17 = v20;
      }
      sub_92A4D0((__int64)&v30, v17, v11);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v21 = v31;
      v22 = v30;
      *(_DWORD *)(a4 + 8) = v31;
      *(_QWORD *)a4 = v22;
      v26 = v21;
      if ( v21 > 0x40 )
      {
        sub_2585B30(&v25);
        v21 = v26;
        v28 = v26;
        if ( v26 > 0x40 )
        {
          sub_2585B30(&v27);
          v21 = v28;
LABEL_42:
          if ( v21 <= 8 )
            goto LABEL_18;
          goto LABEL_43;
        }
        v22 = v25;
      }
      else
      {
        v25 = v22;
        v28 = v21;
      }
      v27 = v22;
      goto LABEL_42;
    }
LABEL_47:
    operator delete[](v23);
    goto LABEL_10;
  }
  if ( v31 > 0x40 && v30 )
    operator delete[](v30);
  v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v30, a4);
  v29 = 1;
  v28 = v31;
  v27 = v30;
  v24 = *(_QWORD *)(v7 + 8);
  v30 = (void *)sub_A2E240(a1, v7, 2220, 0);
  v8 = (unsigned __int8 **)v30;
  if ( v30 )
  {
    sub_8DF340((unsigned __int8 ***)&v30, (__int64)&v27);
    sub_8D69A0(v8, v24);
    sub_8D6E40(v8, 8);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v28 <= 0x40 )
      goto LABEL_10;
    v23 = v27;
    if ( !v27 )
      goto LABEL_10;
    goto LABEL_47;
  }
  if ( v28 > 0x40 && v27 )
  {
    operator delete[](v27);
    return 0;
  }
  return result;
}

