__int64 __fastcall sub_D51F30(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  void **v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // r13
  unsigned __int8 **v17; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // r14
  int v23; // r12d
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 i; // rsi
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int8 **v30; // rax
  void *v31; // [rsp+0h] [rbp-148h]
  unsigned __int64 v32; // [rsp+8h] [rbp-140h]
  __int64 v33; // [rsp+18h] [rbp-130h] BYREF
  __int64 v34; // [rsp+20h] [rbp-128h] BYREF
  int v35; // [rsp+28h] [rbp-120h]
  void *v36; // [rsp+30h] [rbp-118h] BYREF
  signed __int64 v37; // [rsp+38h] [rbp-110h]
  __int64 v38; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v39[6]; // [rsp+50h] [rbp-F8h] BYREF
  int v40; // [rsp+68h] [rbp-E0h]
  unsigned int v41[6]; // [rsp+80h] [rbp-C8h] BYREF
  int v42; // [rsp+98h] [rbp-B0h]
  void *v43; // [rsp+B0h] [rbp-98h] BYREF
  signed __int64 v44; // [rsp+B8h] [rbp-90h]
  _DWORD v45[8]; // [rsp+C0h] [rbp-88h] BYREF
  _DWORD v46[26]; // [rsp+E0h] [rbp-68h] BYREF

  sub_D09010((__int64)v39, *(_QWORD *)(a1 + 176));
  sub_D09010((__int64)v41, *(_QWORD *)(a1 + 176));
  v4 = sub_E24160(v39, v41);
  if ( !(_BYTE)v4 )
  {
    v6 = v4;
    if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) != 0 )
    {
      v34 = sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
      v17 = (unsigned __int8 **)sub_E33BA0(a1, &v34, 2468, 0);
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_E29020(&v36, v39, v18);
      if ( v17 )
      {
        sub_AEC220(v17, v36, v37);
        v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(&v43, v41, v19);
        sub_AEC220(v17, v43, v44);
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
        sub_E29020(&v43, v41, v26);
      }
      if ( v43 != v45 )
        operator delete(v43);
      if ( v36 != &v38 )
        operator delete(v36);
      goto LABEL_32;
    }
  }
  LOBYTE(v5) = sub_CFDEF0((__int64)v39, (__int64)v41);
  v6 = v5;
  if ( (_BYTE)v5 )
  {
    v20 = sub_E216C0(*(_QWORD *)(a1 + 176), 16);
    *(_QWORD *)v20 = 0;
    *(_DWORD *)(v20 + 8) = 0;
    goto LABEL_32;
  }
  sub_E231E0(&v43, v39);
  v7 = (__int64)v41;
  sub_E231E0(v46, v41);
  if ( v45[2] == 2 || (v8 = sub_CFDF60((__int64)&v43)) == 0 || (v7 = *(unsigned int *)(v8 + 20), (_DWORD)v7) )
  {
    if ( v46[6] == 2 || (v9 = sub_CFDF60((__int64)v46)) == 0 || (v10 = (void **)v46, *(_DWORD *)(v9 + 20)) )
    {
      sub_E232A0(v46);
      sub_E232A0(&v43);
      if ( v40 )
      {
        v11 = sub_CFE3F0((__int64)v39);
      }
      else
      {
        if ( *(_QWORD *)v39 != 0xFFFFFFFFLL )
        {
          v11 = sub_CFE630(v39);
          if ( !v42 )
          {
LABEL_12:
            if ( *(_QWORD *)v41 == 0xFFFFFFFFLL )
              v12 = (unsigned int)sub_CFE5F0((__int64)v41);
            else
              v12 = sub_CFE630(v41);
LABEL_17:
            LODWORD(v44) = 64;
            v33 = v11 - v12;
            v43 = (void *)(v11 - v12);
            sub_CF8100((unsigned __int64 *)&v43);
            v13 = v44;
            if ( (unsigned int)v44 > 0x40 )
            {
              v14 = (__int64)v43;
              if ( v43 )
              {
                v31 = v43;
                operator delete[](v43);
                v14 = (__int64)v31;
              }
            }
            else
            {
              v14 = 0;
              if ( (_DWORD)v44 )
                v14 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v44)) >> (64 - (unsigned __int8)v44);
            }
            v35 = v13;
            v34 = v14;
            sub_D4B720((__int64)&v36, &v34);
            if ( (unsigned int)v37 > 0x40 )
            {
              sub_2206A40(&v43, &v36);
              if ( (unsigned int)v44 <= 0x40 )
              {
                v16 = 0;
                if ( (_DWORD)v44 )
                  v16 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v44)) >> (64 - (unsigned __int8)v44);
                goto LABEL_38;
              }
              v15 = v43;
              v16 = *(_QWORD *)v43;
            }
            else
            {
              sub_2206B70(&v43, &v36, 64);
              v15 = v43;
              if ( (unsigned int)v44 <= 0x40 )
              {
                v16 = 0;
                if ( (_DWORD)v44 )
                  v16 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v44)) >> (64 - (unsigned __int8)v44);
                goto LABEL_38;
              }
              v16 = *(_QWORD *)v43;
              if ( !v43 )
              {
LABEL_38:
                if ( (unsigned int)v37 > 0x40 && v36 )
                  operator delete[](v36);
                if ( v33 == v16 )
                {
                  v22 = *(_QWORD *)(a1 + 176);
                  LODWORD(v44) = 64;
                  v43 = (void *)v16;
                  sub_CF8100((unsigned __int64 *)&v43);
                  v23 = v44;
                  if ( (unsigned int)v44 > 0x40 )
                  {
                    v24 = (__int64)v43;
                    if ( v43 )
                      operator delete[](v43);
                  }
                  else
                  {
                    v24 = 0;
                    if ( (_DWORD)v44 )
                      v24 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v44)) >> (64 - (unsigned __int8)v44);
                  }
                  v25 = sub_E216C0(v22, 16);
                  *(_QWORD *)v25 = v24;
                  v6 = 1;
                  *(_DWORD *)(v25 + 8) = v23;
                }
                else
                {
                  v6 = sub_CF89B0(a1, a2, &v33);
                }
                goto LABEL_32;
              }
            }
            operator delete[](v15);
            goto LABEL_38;
          }
LABEL_16:
          v12 = sub_CFE3F0((__int64)v41);
          goto LABEL_17;
        }
        v11 = (unsigned int)sub_CFE5F0((__int64)v39);
      }
      if ( !v42 )
        goto LABEL_12;
      goto LABEL_16;
    }
  }
  else
  {
    v10 = &v43;
  }
  for ( i = sub_CFE250((__int64)v10, v7); ; i = *(_QWORD *)(v28 + 32) )
  {
    v28 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned __int8)(*(_BYTE *)(v28 + 16) - 2) > 4u )
      break;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  LODWORD(v37) = 1;
  v36 = nullptr;
  v32 = sub_A70F70(v29, i, (__int64)&v36, nullptr, 0, 0);
  if ( (unsigned int)v37 > 0x40 && v36 )
    operator delete[](v36);
  v36 = (void *)sub_E1EEA0(*(_QWORD *)(a1 + 400), a2);
  v30 = (unsigned __int8 **)sub_E33BA0(a1, &v36, 2477, 0);
  if ( v30 )
    sub_AE9DF0(v30, v32, 8u);
  sub_E232A0(v46);
  sub_E232A0(&v43);
LABEL_32:
  sub_E232A0(v41);
  sub_E232A0(v39);
  return v6;
}
