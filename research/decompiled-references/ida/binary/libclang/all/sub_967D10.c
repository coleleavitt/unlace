__int64 __fastcall sub_967D10(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int8 **v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  char v15; // r13
  int v16; // eax
  unsigned int v17; // edx
  unsigned __int8 **v18; // rax
  void *v19; // rdi
  __int64 v20; // rbx
  int v21; // r13d
  unsigned __int8 **v22; // rdi
  unsigned int v23; // esi
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // r13d
  int v27; // r13d
  int v28; // eax
  __int64 v29; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int8 **v30; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+28h] [rbp-60h]
  void *v32; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-50h]
  char v34; // [rsp+3Ch] [rbp-4Ch]
  void *v35; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-40h]

  if ( (*(_BYTE *)(sub_A2CB40(a1) + 47) & 0x20) != 0 )
  {
    sub_92DD40((__int64)&v32, 7u, *(_DWORD *)(a4 + 8));
    v36 = *(_DWORD *)(a4 + 8);
    if ( v36 > 0x40 )
      sub_2585B30(&v35);
    else
      v35 = *(void **)a4;
    sub_8CC340((__int64)&v35, &v32, a4);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
  }
  v8 = *(_DWORD *)(a4 + 8);
  v9 = *(_QWORD *)a4;
  if ( v8 > 0x40 )
    v9 = *(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6));
  if ( (v9 & (1LL << ((unsigned __int8)v8 - 1))) == 0 )
  {
    v13 = sub_9522C0(a1, a2, a3, (__int64 *)a4, 8u);
    if ( !(_BYTE)v13 )
      return v13;
    sub_92DD40((__int64)&v35, 7u, *(_DWORD *)(a4 + 8));
    v15 = sub_922490(a4, (__int64)&v35);
    if ( v36 > 0x40 && v35 )
      operator delete[](v35);
    v16 = *a3;
    if ( v15 != 3 )
    {
      if ( (v16 & 0x80u) != 0 )
      {
        LOBYTE(v21) = 0;
        if ( (_BYTE)v16 != 0x80 )
        {
          v26 = -v16;
          v36 = *(_DWORD *)(a4 + 8);
          if ( v36 > 0x40 )
            sub_2585B30(&v35);
          else
            v35 = *(void **)a4;
          v27 = v26 << sub_8CC910((__int64)&v35);
          if ( v36 > 0x40 && v35 )
            operator delete[](v35);
          v21 = -v27;
        }
        goto LABEL_30;
      }
      v17 = *(_DWORD *)(a4 + 8);
      v31 = v17;
      if ( v17 > 0x40 )
      {
        sub_2585B30(&v30);
        v17 = v31;
        v33 = v31;
        if ( v31 > 0x40 )
        {
          sub_2585B30(&v32);
          v17 = v33;
LABEL_21:
          if ( v17 <= 8 )
          {
            sub_2587BE0(&v35, &v32, 8);
            v19 = v35;
            LOBYTE(v20) = (_BYTE)v35;
            if ( v36 > 0x40 )
            {
              v20 = *(_QWORD *)v35;
              if ( v35 )
                goto LABEL_24;
            }
          }
          else
          {
            sub_25877E0(&v35, &v32, 8);
            v19 = v35;
            LOBYTE(v20) = (_BYTE)v35;
            if ( v36 > 0x40 )
            {
              LOBYTE(v20) = *(_BYTE *)v35;
LABEL_24:
              operator delete[](v19);
            }
          }
          if ( v33 > 0x40 && v32 )
            operator delete[](v32);
          v21 = (unsigned __int8)*a3 << v20;
          if ( v31 <= 0x40 )
            goto LABEL_30;
          v22 = v30;
          if ( !v30 )
            goto LABEL_30;
          goto LABEL_57;
        }
        v18 = v30;
      }
      else
      {
        v18 = *(unsigned __int8 ***)a4;
        v33 = v17;
        v30 = v18;
      }
      v32 = v18;
      goto LABEL_21;
    }
    LOBYTE(v21) = 0;
    if ( (v16 & 0x80u) != 0 )
    {
LABEL_30:
      *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 184), 8) = v21;
      return v13;
    }
    v23 = 8;
    if ( (_BYTE)v16 )
    {
      v24 = v16 >> 4;
      if ( v16 >> 4 )
      {
        v23 = 1;
        if ( (unsigned int)v16 >> 6 )
          goto LABEL_50;
        v23 = 2;
      }
      else
      {
        v24 = *a3;
        v28 = v16 >> 2;
        v23 = 6;
        if ( v28 )
        {
          v24 = v28;
          v23 = 4;
        }
      }
      if ( !(v24 >> 1) )
        v23 |= 1u;
    }
LABEL_50:
    sub_92DD40((__int64)&v35, v23, *(_DWORD *)(a4 + 8));
    if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
      operator delete[](*(void **)a4);
    *(_QWORD *)a4 = v35;
    v25 = v36;
    *(_DWORD *)(a4 + 8) = v36;
    if ( v25 > 0x40 )
      sub_2585B30(&v35);
    v21 = (unsigned __int8)*a3 << sub_8CC910((__int64)&v35);
    if ( v36 <= 0x40 )
      goto LABEL_30;
    v22 = (unsigned __int8 **)v35;
    if ( !v35 )
      goto LABEL_30;
LABEL_57:
    operator delete[](v22);
    goto LABEL_30;
  }
  v29 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
  v10 = (unsigned __int8 **)sub_A2E1B0(a1, &v29, 2242, 0);
  v11 = *(unsigned int *)(a4 + 8);
  v30 = v10;
  sub_2587BE0(&v35, a4, v11);
  v12 = v36;
  v34 = 0;
  v33 = v36;
  v32 = v35;
  if ( v30 )
  {
    sub_8DF340(&v30, (__int64)&v32);
    v12 = v33;
  }
  if ( v12 > 0x40 && v32 )
    operator delete[](v32);
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 32LL))(*(_QWORD *)(a1 + 24));
  if ( (_BYTE)v13 )
  {
    sub_938B60((__int64)&v35, a4);
    if ( *(_DWORD *)(a4 + 8) > 0x40u && *(_QWORD *)a4 )
      operator delete[](*(void **)a4);
    *(_QWORD *)a4 = v35;
    *(_DWORD *)(a4 + 8) = v36;
    return (unsigned int)sub_967840(a1, a2, a3, a4);
  }
  return v13;
}

