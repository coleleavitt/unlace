__int64 __fastcall sub_D4B220(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  void *v13; // rdi
  __int64 v14; // r12
  unsigned __int8 **v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int64 i; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int8 **v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-140h]
  __int64 v27; // [rsp+18h] [rbp-130h] BYREF
  __int64 v28; // [rsp+20h] [rbp-128h] BYREF
  int v29; // [rsp+28h] [rbp-120h]
  void *v30; // [rsp+30h] [rbp-118h] BYREF
  signed __int64 v31; // [rsp+38h] [rbp-110h]
  __int64 v32; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v33[6]; // [rsp+50h] [rbp-F8h] BYREF
  int v34; // [rsp+68h] [rbp-E0h]
  unsigned int v35[6]; // [rsp+80h] [rbp-C8h] BYREF
  int v36; // [rsp+98h] [rbp-B0h]
  void *v37; // [rsp+B0h] [rbp-98h] BYREF
  signed __int64 v38; // [rsp+B8h] [rbp-90h]
  _DWORD v39[8]; // [rsp+C0h] [rbp-88h] BYREF
  _DWORD v40[26]; // [rsp+E0h] [rbp-68h] BYREF

  sub_D09010((__int64)v33, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v35, *(_QWORD *)(a1 + 176));
  v4 = sub_E24160(v33, v35);
  if ( !(_BYTE)v4 )
  {
    v6 = v4;
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 )
    {
      v28 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v15 = (unsigned __int8 **)sub_E33BA0(a1, &v28, 2468, 0);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v30, v33, v16);
      if ( v15 )
      {
        sub_AEC220(v15, v30, v31);
        v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(&v37, v35, v17);
        sub_AEC220(v15, v37, v38);
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(&v37, v35, v21);
      }
      if ( v37 != v39 )
        operator delete(v37);
      if ( v30 != &v32 )
        operator delete(v30);
      goto LABEL_29;
    }
  }
  LOBYTE(v5) = sub_CFDEF0((__int64)v33, (__int64)v35);
  v6 = v5;
  if ( (_BYTE)v5 )
  {
    v18 = sub_E216C0(*(_QWORD *)(a1 + 176), 16);
    *(_QWORD *)v18 = 0;
    *(_DWORD *)(v18 + 8) = 0;
    goto LABEL_29;
  }
  sub_E231E0(&v37, v33);
  v7 = (__int64)v35;
  sub_E231E0(v40, v35);
  if ( v39[2] == 2 || (v8 = sub_CFDF60((__int64)&v37)) == 0 || (v7 = *(unsigned int *)(v8 + 20), (_DWORD)v7) )
  {
    if ( v40[6] == 2 || (v9 = sub_CFDF60((__int64)v40)) == 0 || (v10 = (void **)v40, *(_DWORD *)(v9 + 20)) )
    {
      sub_E232A0(v40);
      sub_E232A0(&v37);
      if ( v34 )
      {
        v11 = sub_CFE3F0((__int64)v33);
      }
      else
      {
        if ( *(_QWORD *)v33 != 0xFFFFFFFFLL )
        {
          v11 = sub_CFE630(v33);
          if ( !v36 )
          {
LABEL_12:
            if ( *(_QWORD *)v35 == 0xFFFFFFFFLL )
              v12 = (unsigned int)sub_CFE5F0((__int64)v35);
            else
              v12 = sub_CFE630(v35);
LABEL_17:
            v29 = 64;
            v27 = v11 - v12;
            v28 = v11 - v12;
            sub_D47CB0((__int64)&v30, &v28);
            if ( (unsigned int)v31 > 0x40 )
            {
              sub_2206A40(&v37, &v30);
              if ( (unsigned int)v38 <= 0x40 )
              {
                v14 = 0;
                if ( (_DWORD)v38 )
                  v14 = (__int64)((_QWORD)v37 << (64 - (unsigned __int8)v38)) >> (64 - (unsigned __int8)v38);
                goto LABEL_33;
              }
              v13 = v37;
              v14 = *(_QWORD *)v37;
            }
            else
            {
              sub_2206CD0(&v37, &v30, 64);
              v13 = v37;
              if ( (unsigned int)v38 <= 0x40 )
              {
                v14 = 0;
                if ( (_DWORD)v38 )
                  v14 = (__int64)((_QWORD)v37 << (64 - (unsigned __int8)v38)) >> (64 - (unsigned __int8)v38);
                goto LABEL_33;
              }
              v14 = *(_QWORD *)v37;
              if ( !v37 )
              {
LABEL_33:
                if ( (unsigned int)v31 > 0x40 && v30 )
                  operator delete[](v30);
                if ( v27 == v14 )
                {
                  v20 = sub_E216C0(*(_QWORD *)(a1 + 176), 16);
                  *(_QWORD *)v20 = v14;
                  v6 = 1;
                  *(_DWORD *)(v20 + 8) = 64;
                }
                else
                {
                  v6 = sub_CF89B0(a1, a2, &v27);
                }
                goto LABEL_29;
              }
            }
            operator delete[](v13);
            goto LABEL_33;
          }
LABEL_16:
          v12 = sub_CFE3F0((__int64)v35);
          goto LABEL_17;
        }
        v11 = (unsigned int)sub_CFE5F0((__int64)v33);
      }
      if ( !v36 )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = &v37;
  }
  for ( i = sub_CFE250((__int64)v10, v7); ; i = *(_QWORD *)(v23 + 32) )
  {
    v23 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v23 + 16) - 2) > 4u )
      break;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v31) = 1;
  v30 = nullptr;
  v26 = sub_A70F70(v24, i, (__int64)&v30, nullptr, 0, 0);
  if ( (unsigned int)v31 > 0x40 && v30 )
    operator delete[](v30);
  v30 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v25 = (unsigned __int8 **)sub_E33BA0(a1, &v30, 2477, 0);
  if ( v25 )
    sub_AE9DF0(v25, v26, 8u);
  sub_E232A0(v40);
  sub_E232A0(&v37);
LABEL_29:
  sub_E232A0(v35);
  sub_E232A0(v33);
  return v6;
}
