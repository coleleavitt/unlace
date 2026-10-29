__int64 __fastcall sub_92BAA0(__int64 a1, __int64 a2, unsigned __int16 *a3, __int64 a4)
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
  unsigned __int16 v16; // cx
  unsigned int v17; // esi
  int v18; // eax
  unsigned int v19; // eax
  void *v20; // rdx
  void *v21; // rdi
  __int64 v22; // [rsp+8h] [rbp-70h]
  void *v23; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-60h]
  void *v25; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-50h]
  char v27; // [rsp+2Ch] [rbp-4Ch]
  void *v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92A4D0((__int64)&v25, 0xFu, *(_DWORD *)(a4 + 8));
    v29 = *(_DWORD *)(a4 + 8);
    if ( v29 > 0x40 )
      sub_2585B30(&v28);
    else
      v28 = *(void **)a4;
    sub_8CC450((__int64)&v28, &v25, a4);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    if ( v26 > 0x40 && v25 )
      operator delete[](v25);
  }
  sub_92A4D0((__int64)&v28, 0x10u, *(_DWORD *)(a4 + 8));
  if ( (int)sub_2586820(a4, &v28) < 0 )
  {
    if ( v29 <= 0x40 || (v21 = v28) == nullptr )
    {
LABEL_10:
      sub_92A4D0((__int64)&v28, 0xFu, *(_DWORD *)(a4 + 8));
      v10 = sub_922400(a4, (__int64)&v28);
      if ( v29 > 0x40 && v28 )
        operator delete[](v28);
      v11 = *(_DWORD *)(a4 + 8);
      if ( v10 != 3 )
      {
        v24 = *(_DWORD *)(a4 + 8);
        if ( v11 > 0x40 )
        {
          sub_2585B30(&v23);
          v11 = v24;
          v26 = v24;
          if ( v24 > 0x40 )
          {
            sub_2585B30(&v25);
            v11 = v26;
LABEL_17:
            if ( v11 <= 0x10 )
            {
LABEL_18:
              sub_2587D60(&v28, &v25);
              v13 = v28;
              LOBYTE(v14) = (_BYTE)v28;
              if ( v29 <= 0x40 )
                goto LABEL_21;
              v14 = *(_QWORD *)v28;
              if ( !v28 )
                goto LABEL_21;
              goto LABEL_20;
            }
LABEL_45:
            sub_25877E0(&v28, &v25, 16);
            v13 = v28;
            LOBYTE(v14) = (_BYTE)v28;
            if ( v29 <= 0x40 )
            {
LABEL_21:
              if ( v26 > 0x40 && v25 )
                operator delete[](v25);
              v15 = *a3 << v14;
              if ( v24 > 0x40 )
              {
                if ( v23 )
                  operator delete[](v23);
              }
              *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v15;
              return 1;
            }
            LOWORD(v14) = *(_WORD *)v28;
LABEL_20:
            operator delete[](v13);
            goto LABEL_21;
          }
          v12 = v23;
        }
        else
        {
          v12 = *(void **)a4;
          v26 = v11;
          v23 = v12;
        }
        v25 = v12;
        goto LABEL_17;
      }
      v16 = *a3;
      v17 = 16;
      if ( *a3 )
      {
        v18 = v16;
        v17 = 8;
        if ( (v16 & 0xFF00) != 0 )
        {
          v17 = 0;
          v18 = HIBYTE(v16);
        }
        if ( v18 >> 4 )
          v18 >>= 4;
        else
          v17 |= 4u;
        if ( v18 >> 2 )
          v18 >>= 2;
        else
          v17 |= 2u;
        if ( !((unsigned int)v18 >> 1) )
          v17 |= 1u;
      }
      sub_92A4D0((__int64)&v28, v17, v11);
      if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
        operator delete[](*(void **)a4);
      v19 = v29;
      v20 = v28;
      *(_DWORD *)(a4 + 8) = v29;
      *(_QWORD *)a4 = v20;
      v24 = v19;
      if ( v19 > 0x40 )
      {
        sub_2585B30(&v23);
        v19 = v24;
        v26 = v24;
        if ( v24 > 0x40 )
        {
          sub_2585B30(&v25);
          v19 = v26;
LABEL_44:
          if ( v19 <= 0x10 )
            goto LABEL_18;
          goto LABEL_45;
        }
        v20 = v23;
      }
      else
      {
        v23 = v20;
        v26 = v19;
      }
      v25 = v20;
      goto LABEL_44;
    }
LABEL_49:
    operator delete[](v21);
    goto LABEL_10;
  }
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v7 = sub_A180F0(*(_QWORD *)(a1 + 200), a2);
  sub_2587D60(&v28, a4);
  v27 = 1;
  v26 = v29;
  v25 = v28;
  v22 = *(_QWORD *)(v7 + 8);
  v28 = (void *)sub_A2E240(a1, v7, 2220, 0);
  v8 = (unsigned __int8 **)v28;
  if ( v28 )
  {
    sub_8DF340((unsigned __int8 ***)&v28, (__int64)&v25);
    sub_8D69A0(v8, v22);
    sub_8D6E40(v8, 16);
  }
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)result )
  {
    if ( v26 <= 0x40 )
      goto LABEL_10;
    v21 = v25;
    if ( !v25 )
      goto LABEL_10;
    goto LABEL_49;
  }
  if ( v26 > 0x40 && v25 )
  {
    operator delete[](v25);
    return 0;
  }
  return result;
}

