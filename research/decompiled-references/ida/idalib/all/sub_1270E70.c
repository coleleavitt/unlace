void __fastcall sub_1270E70(__int64 a1, __int64 a2, __int64 a3)
{
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  void **v12; // rbx
  void **v13; // r13
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rdi
  void **v17; // rbp
  void **v18; // rbx
  void **v19; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+8h] [rbp-D0h]
  void *v26; // [rsp+10h] [rbp-C8h] BYREF
  void **v27; // [rsp+18h] [rbp-C0h]
  void *v28; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-A0h]
  _BYTE v30[16]; // [rsp+40h] [rbp-98h] BYREF
  void *v31[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v32; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v33[4]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v34; // [rsp+90h] [rbp-48h]

  v5 = sub_10DCD30(a2, 0xB59u) == 0;
  v6 = *(unsigned int *)(a3 + 8);
  if ( !v5 )
  {
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-lmingwthrd";
    v6 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v6;
  }
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v6 + 1, 8);
    v6 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v6) = "-lmingw32";
  v7 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a3 + 8);
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 600LL))(v7, a2) != 1 )
  {
    sub_11BEF20(*(_QWORD *)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a3, a2);
    v8 = *(unsigned int *)(a3 + 8);
    goto LABEL_9;
  }
  if ( sub_10DCD30(a2, 0xCDDu) || sub_10DCD30(a2, 0xCE3u) )
  {
    sub_10DCD30(a2, 0xCC0u);
  }
  else
  {
    v24 = sub_10DCD30(a2, 0xCC0u);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 16LL) == 1 || v24 )
    {
      sub_10DC5D0(a3, (__int64)"-lgcc_s");
      sub_10DC5D0(a3, (__int64)"-lgcc");
      v8 = *(unsigned int *)(a3 + 8);
LABEL_9:
      v9 = v8 + 1;
      if ( v8 + 1 <= (unsigned __int64)*(unsigned int *)(a3 + 12) )
        goto LABEL_10;
      goto LABEL_58;
    }
  }
  v20 = *(unsigned int *)(a3 + 8);
  if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v20 + 1, 8);
    v20 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v20) = "-lgcc";
  v21 = *(unsigned int *)(a3 + 12);
  v22 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v22;
  if ( v22 + 1 > v21 )
  {
    sub_2237220(a3, a3 + 16, v22 + 1, 8);
    v22 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v22) = "-lgcc_eh";
  v23 = *(unsigned int *)(a3 + 12);
  v8 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  v9 = v8 + 1;
  *(_DWORD *)(a3 + 8) = v8;
  if ( v8 + 1 > v23 )
  {
LABEL_58:
    sub_2237220(a3, a3 + 16, v9, 8);
    v8 = *(unsigned int *)(a3 + 8);
  }
LABEL_10:
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = "-lmoldname";
  v10 = *(unsigned int *)(a3 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_2237220(a3, a3 + 16, v11 + 1, 8);
    v11 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = "-lmingwex";
  ++*(_DWORD *)(a3 + 8);
  sub_21B7150(&v26, a2, 2205);
  v12 = (void **)v26;
  v13 = v27;
  if ( v27 != v26 )
  {
    while ( 1 )
    {
      v28 = v30;
      sub_1270B70(&v28, *v12, (__int64)v12[1] + (_QWORD)*v12);
      if ( v29 <= 4 )
      {
        if ( v29 != 4 )
          goto LABEL_30;
      }
      else if ( *(_DWORD *)v28 == 1668707181 && *((_BYTE *)v28 + 4) == 114 )
      {
LABEL_16:
        v33[2] = &v28;
        v33[0] = "-l";
        v34 = 1027;
        sub_2253560(v31, v33);
        v14 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a2 + 16LL))(a2, v31[0], v31[1]);
        v15 = *(unsigned int *)(a3 + 8);
        if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v25 = v14;
          sub_2237220(a3, a3 + 16, v15 + 1, 8);
          v15 = *(unsigned int *)(a3 + 8);
          v14 = v25;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = v14;
        v16 = (__int64 *)v31[0];
        ++*(_DWORD *)(a3 + 8);
        if ( v16 != &v32 )
          operator delete(v16);
        if ( v28 != v30 )
          operator delete(v28);
        v17 = v27;
        v18 = (void **)v26;
        if ( v27 != v26 )
        {
          do
          {
            while ( *v18 != v18 + 2 )
            {
              operator delete(*v18);
              v18 += 4;
              if ( v17 == v18 )
                goto LABEL_25;
            }
            v18 += 4;
          }
          while ( v17 != v18 );
LABEL_25:
          v18 = (void **)v26;
        }
        if ( v18 )
          operator delete(v18);
        return;
      }
      if ( *(_DWORD *)v28 == 1953653621 )
        goto LABEL_16;
      if ( v29 > 5 && *(_DWORD *)v28 == 1685353059 )
      {
        if ( *((_WORD *)v28 + 2) == 27756 )
          goto LABEL_16;
        if ( v28 == v30 )
          goto LABEL_43;
LABEL_31:
        operator delete(v28);
        v12 += 4;
        if ( v13 == v12 )
          goto LABEL_32;
      }
      else
      {
LABEL_30:
        if ( v28 != v30 )
          goto LABEL_31;
LABEL_43:
        v12 += 4;
        if ( v13 == v12 )
        {
LABEL_32:
          v19 = v27;
          v12 = (void **)v26;
          if ( v27 != v26 )
          {
            do
            {
              while ( *v12 != v12 + 2 )
              {
                operator delete(*v12);
                v12 += 4;
                if ( v19 == v12 )
                  goto LABEL_35;
              }
              v12 += 4;
            }
            while ( v19 != v12 );
LABEL_35:
            v12 = (void **)v26;
          }
          break;
        }
      }
    }
  }
  if ( v12 )
    operator delete(v12);
  sub_10DC5D0(a3, (__int64)"-lmsvcrt");
}
