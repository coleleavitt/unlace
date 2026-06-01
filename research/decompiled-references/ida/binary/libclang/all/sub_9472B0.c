__int64 __fastcall sub_9472B0(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, char a5)
{
  unsigned int v5; // r13d
  unsigned int v10; // r13d
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64); // rsi
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 (__fastcall **v18)(); // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 v23; // rax
  unsigned __int8 **v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 **v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp+10h] [rbp-C8h]
  __int64 (__fastcall **v31)(); // [rsp+18h] [rbp-C0h]
  __int64 v32; // [rsp+28h] [rbp-B0h] BYREF
  void *v33; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+38h] [rbp-A0h]
  void *v35; // [rsp+40h] [rbp-98h] BYREF
  size_t v36; // [rsp+48h] [rbp-90h]
  _QWORD v37[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+60h] [rbp-78h] BYREF
  unsigned int v39; // [rsp+68h] [rbp-70h]
  __int128 v40; // [rsp+70h] [rbp-68h]
  __int64 v41; // [rsp+80h] [rbp-58h]
  char v42; // [rsp+88h] [rbp-50h]
  int v43; // [rsp+8Ch] [rbp-4Ch]
  void **v44; // [rsp+90h] [rbp-48h]

  v5 = 1;
  if ( (unsigned int)(*((_DWORD *)a3 + 2) - 1) <= 0x1F )
    return v5;
  sub_92DD40((__int64)&v33, 0xFFFFFFCF / a4, 0);
  sub_2587BE0(&v38, a3, *((unsigned int *)a3 + 2));
  v10 = v39;
  BYTE4(v36) = 0;
  v11 = *(_QWORD *)(a1 + 24);
  LODWORD(v36) = v39;
  v35 = v38;
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL);
  if ( v39 > 0x40 )
  {
    v31 = v38;
    v30 = v11;
    v15 = v10 - sub_2587400(&v35);
    v16 = v12(v30);
    v17 = sub_B064C0(v16);
    v18 = v31;
    if ( v17 < v15 || (v19 = sub_25867A0(a3, &v33), v18 = v31, v19 > 0) )
    {
      if ( v18 )
        operator delete[](v18);
      goto LABEL_6;
    }
    if ( v31 )
      operator delete[](v31);
  }
  else
  {
    if ( v38 )
    {
      _BitScanReverse64(&v13, (unsigned __int64)v38);
      v14 = v12(v11);
      if ( (unsigned int)sub_B064C0(v14) < 64 - ((unsigned int)v13 ^ 0x3F) )
      {
LABEL_6:
        if ( !a5 )
        {
          v21 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          v22 = *((_DWORD *)a3 + 2);
          v32 = v21;
          v23 = *a3;
          if ( v22 > 0x40 )
            v23 = *(_QWORD *)(v23 + 8LL * ((v22 - 1) >> 6));
          if ( (v23 & (1LL << ((unsigned __int8)v22 - 1))) != 0 )
          {
            v24 = (unsigned __int8 **)sub_A2E0C0(a1, &v32, 2246, 0);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
            v35 = v37;
            v40 = 0;
            v44 = &v35;
            v36 = 0;
            LOBYTE(v37[0]) = 0;
            v39 = 0;
            v42 = 0;
            v43 = 1;
            v41 = 0;
            v38 = &off_49DA2C8;
            sub_2623850(&v38, 0, 0, 0, v25, v26);
            sub_2594DB0(a3, &v38, 1);
            v38 = &off_49DA2C8;
            sub_2623770(&v38);
            if ( v24 )
              sub_838D50(v24, v35, v36);
            if ( v35 != v37 )
              operator delete(v35, v37[0] + 1LL);
          }
          else
          {
            v27 = (unsigned __int8 **)sub_A2E0C0(a1, &v32, 2250, 0);
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
            v35 = v37;
            v40 = 0;
            LOBYTE(v37[0]) = 0;
            v36 = 0;
            v39 = 0;
            v42 = 0;
            v43 = 1;
            v41 = 0;
            v38 = &off_49DA2C8;
            v44 = &v35;
            sub_2623850(&v38, 0, 0, 0, v28, v29);
            sub_2594DB0(a3, &v38, 1);
            v38 = &off_49DA2C8;
            sub_2623770(&v38);
            if ( v27 )
              sub_838D50(v27, v35, v36);
            std::string::_M_dispose();
          }
        }
        v5 = 0;
        goto LABEL_8;
      }
    }
    else
    {
      v20 = v12(v11);
      sub_B064C0(v20);
    }
    if ( (int)sub_25867A0(a3, &v33) > 0 )
      goto LABEL_6;
  }
  v5 = 1;
LABEL_8:
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  return v5;
}

