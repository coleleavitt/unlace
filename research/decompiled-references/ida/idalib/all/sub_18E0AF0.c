void __fastcall sub_18E0AF0(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // sf
  _QWORD *v13; // rdi
  unsigned __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+10h] [rbp-D0h] BYREF
  _QWORD v48[2]; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+28h] [rbp-B8h]
  unsigned __int8 *v50[11]; // [rsp+38h] [rbp-A8h] BYREF
  char v51; // [rsp+90h] [rbp-50h]
  unsigned int v52; // [rsp+98h] [rbp-48h]
  char v53; // [rsp+9Ch] [rbp-44h]

  if ( (*(_WORD *)a2 & 0x1FF) == 5
    && (*(_WORD *)a3 & 0x1FF) == 5
    && (*(_BYTE *)(a2 + 2) & 0x78) == 0
    && *(char *)(a2 + 2) >= 0
    && (*(_BYTE *)(a3 + 2) & 0x78) == 0 )
  {
    v9 = sub_BFB9F0(*(_QWORD *)(a2 + 16));
    v12 = *(char *)(a3 + 2) < 0;
    v13 = *(_QWORD **)(a3 + 16);
    v45 = 0;
    v14 = v9;
    v15 = *(_QWORD *)(v9 + 8);
    if ( v12 )
    {
      v48[0] = *v13;
      v45 = sub_C1BEF0((__int64)v48, a2, v10, v11);
    }
    else
    {
      v45 = *(_QWORD *)(sub_BFB9F0((__int64)v13) + 8);
    }
    v19 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      v21 = sub_A72040(*(_QWORD **)(a1 + 248), v15);
      if ( v21 )
      {
        v22 = *(_QWORD *)(a1 + 248);
        v46 = *(_QWORD *)(v21 + 32);
        if ( v46 == sub_A71600(v22, v21) && (*(_BYTE *)(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        {
          v23 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v23 + 17) & 4) == 0
            && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1
            && !(unsigned __int8)sub_F57EE0(*(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            v24 = sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF0LL));
            if ( v24 != sub_A97D20(*(_QWORD *)(a1 + 248), *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v25 = (__int64 *)(a1 + 8);
              sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a4, 0x1AC6u, 0);
              v47 = sub_EEC8C0(v14, a1 + 8, a5);
              v26 = sub_1587DB0((__int64)v48, &v47);
              v27 = sub_1605D30(v26, &v46);
              sub_1605D30(v27, &v45);
              sub_15F7200(v48);
              if ( (*(_WORD *)v14 & 0x1FF) == 0x47 )
              {
                v28 = *(_QWORD *)(v14 + 16);
                v47 = v28;
                if ( v28 )
                {
                  sub_168B9F0((__int64)v48, v25, *(_DWORD *)(v28 + 24), 0x169Du, 0);
                  sub_18DA350((__int64)v48, &v47);
                  sub_15F7200(v48);
                }
              }
              sub_168B9F0((__int64)v48, v25, a4, 0x1883u, 0);
              if ( v51 )
              {
                sub_AE9DF0(v50, a3, 0xFu);
              }
              else if ( v53 )
              {
                v40 = sub_168B9E0(v48);
                v43 = v49;
                if ( v49 )
                  v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
                v47 = v43;
                v44 = sub_1587BC0(v40, &v47, v38, v39, v41, v42);
                sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v52 + 8), a3, 0xFu);
              }
              sub_15F7200(v48);
            }
          }
        }
      }
    }
    else
    {
      v20 = sub_F68450(v19, a2, v16, v17, v18);
      if ( sub_18BBB30(v20, v45) )
      {
        v29 = a1 + 8;
        sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a4, 0x1AC7u, 0);
        if ( v51 )
        {
          v29 = a2;
          sub_AE9DF0(v50, a2, 0xFu);
        }
        else if ( v53 )
        {
          v35 = sub_168B9E0(v48);
          v36 = v49;
          if ( v49 )
            v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 32LL))(v49);
          v47 = v36;
          v37 = sub_1587BC0(v35, &v47, v31, v32, v33, v34);
          v29 = a2;
          sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v52 + 8), a2, 0xFu);
        }
        v47 = sub_EEC8C0(a2, v29, a5);
        sub_1587DB0((__int64)v48, &v47);
        sub_15F7200(v48);
        if ( (*(_WORD *)v14 & 0x1FF) == 0x47 )
        {
          v30 = *(_QWORD *)(v14 + 16);
          v47 = v30;
          if ( v30 )
          {
            sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), *(_DWORD *)(v30 + 24), 0x187Bu, 0);
            sub_18DA350((__int64)v48, &v47);
            sub_15F7200(v48);
          }
        }
      }
    }
  }
}
