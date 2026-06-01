void __fastcall sub_16049B0(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // r9
  __int64 v10; // r15
  unsigned __int64 v11; // r13
  int v12; // eax
  _QWORD *v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // r12
  unsigned int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // r14
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r13
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // [rsp+0h] [rbp-138h]
  unsigned int v31; // [rsp+1Ch] [rbp-11Ch] BYREF
  _BYTE v32[8]; // [rsp+20h] [rbp-118h] BYREF
  unsigned int v33; // [rsp+28h] [rbp-110h]
  unsigned int v34; // [rsp+2Ch] [rbp-10Ch]
  void *v35; // [rsp+30h] [rbp-108h]
  __int64 v36; // [rsp+40h] [rbp-F8h] BYREF
  unsigned __int8 *v37; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-C0h]

  sub_FC7230((__int64)v32, *(_QWORD *)(a1 + 264), a3);
  v5 = sub_1DBADC0(a1);
  if ( !(_BYTE)v6 )
  {
LABEL_7:
    v13 = *(_QWORD **)(a1 + 248);
    v14 = sub_16043A0(v13, *(_QWORD **)(a1 + 240), v6, v7, v8, v9);
    v13[2184] = v15;
    v13[2183] = v14;
    if ( (unsigned __int8)sub_FC7790(*(_QWORD *)(a1 + 264), a3, 0)
      && !(unsigned __int8)sub_FD3640(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), a2) )
    {
      v16 = *(_DWORD *)(a1 + 11320);
      v37 = (unsigned __int8 *)a1;
      if ( v16 && v16 != *(_DWORD *)(a1 + 12600) )
      {
        sub_1DBFED0(a1, sub_15FB250, &v37);
        *(_DWORD *)(a1 + 12600) = *(_DWORD *)(a1 + 11320);
      }
      if ( *(_QWORD *)(a1 + 2320) )
        sub_16662C0(a1, sub_15FB250, &v37);
    }
    goto LABEL_8;
  }
  v10 = v5;
  v11 = v6;
  v12 = sub_FD3320(v34);
  if ( v12 == 1 )
  {
    v17 = *(_QWORD *)(a1 + 264);
    if ( (unsigned __int8)sub_FD3E40(*(_QWORD *)(v17 + 32), v34, v33, v17) )
    {
      if ( v10 )
      {
        sub_15F9350(&v37, (__int64)v32, (unsigned __int8 *)(*(_QWORD *)(a1 + 248) + 2448LL));
        v31 = v33;
        if ( !*(_BYTE *)(v10 + 20) )
          sub_15F37F0(v10 + 32, &v31, (__int64)&v37);
        if ( v37 && v38 )
          sub_1580C40(v38, (unsigned __int64)v37);
        if ( !(unsigned __int8)sub_FD3640(*(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL), a2) )
        {
          v29 = *(_DWORD *)(a1 + 11320);
          v37 = (unsigned __int8 *)v10;
          v38 = v11;
          if ( v29 && v29 != *(_DWORD *)(a1 + 12600) )
          {
            sub_1DBFED0(a1, sub_15F0800, &v37);
            *(_DWORD *)(a1 + 12600) = *(_DWORD *)(a1 + 11320);
          }
          if ( *(_QWORD *)(a1 + 2320) )
            sub_16662C0(a1, sub_15F0800, &v37);
        }
        v17 = *(_QWORD *)(a1 + 264);
      }
      if ( *(_DWORD *)(v17 + 204) == 5 )
        *(_BYTE *)(v17 + 194) = 1;
      *(_DWORD *)(v17 + 204) = 0;
    }
  }
  else
  {
    if ( v12 )
    {
      if ( v12 != 3 || !*(_BYTE *)(a1 + 11248) && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 )
        goto LABEL_7;
      v18 = v33;
      ++*(_DWORD *)(a1 + 11200);
      if ( v10 && !*(_BYTE *)(v10 + 20) )
      {
        sub_15F9350(&v37, (__int64)v32, (unsigned __int8 *)(*(_QWORD *)(a1 + 248) + 2448LL));
        v31 = v33;
        if ( !*(_BYTE *)(v10 + 20) )
        {
          v19 = *(_QWORD *)(v10 + 32);
          v20 = v19 + 32LL * *(unsigned int *)(v10 + 40);
          while ( v19 != v20 )
          {
            while ( 1 )
            {
              v20 -= 32;
              v21 = *(_QWORD *)(v20 + 8);
              if ( !v21 )
                break;
              v22 = *(_QWORD *)(v20 + 16);
              if ( !v22 )
                break;
              v30 = v19;
              sub_1580C40(v22, v21);
              v19 = v30;
              if ( v30 == v20 )
                goto LABEL_37;
            }
          }
LABEL_37:
          *(_DWORD *)(v10 + 40) = 0;
          sub_15F37F0(v10 + 32, &v31, (__int64)&v37);
          *(_BYTE *)(v10 + 20) = 1;
        }
        if ( v37 && v38 )
          sub_1580C40(v38, (unsigned __int64)v37);
      }
      v23 = *(_QWORD *)(a1 + 264);
      if ( *(_DWORD *)(v23 + 204) == 5 )
        *(_BYTE *)(v23 + 194) = 1;
      *(_DWORD *)(v23 + 204) = 0;
      sub_168B9F0(&v37, a1 + 8, v18, 6776, 0);
      sub_15F7200(&v37);
    }
    else
    {
      ++*(_DWORD *)(a1 + 11200);
      if ( v10 && !*(_BYTE *)(v10 + 20) )
      {
        sub_15F9350(&v37, (__int64)v32, (unsigned __int8 *)(*(_QWORD *)(a1 + 248) + 2448LL));
        v31 = v33;
        if ( !*(_BYTE *)(v10 + 20) )
        {
          v25 = *(_QWORD *)(v10 + 32);
          v26 = v25 + 32LL * *(unsigned int *)(v10 + 40);
          while ( v25 != v26 )
          {
            while ( 1 )
            {
              v26 -= 32;
              v27 = *(_QWORD *)(v26 + 8);
              if ( !v27 )
                break;
              v28 = *(_QWORD *)(v26 + 16);
              if ( !v28 )
                break;
              sub_1580C40(v28, v27);
              if ( v25 == v26 )
                goto LABEL_55;
            }
          }
LABEL_55:
          *(_DWORD *)(v10 + 40) = 0;
          sub_15F37F0(v10 + 32, &v31, (__int64)&v37);
          *(_BYTE *)(v10 + 20) = 1;
        }
        if ( v37 && v38 )
          sub_1580C40(v38, (unsigned __int64)v37);
      }
    }
    v24 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v24 + 204) == 5 )
      *(_BYTE *)(v24 + 194) = 1;
    *(_DWORD *)(v24 + 204) = 0;
  }
LABEL_8:
  if ( v35 != &v36 )
    operator delete(v35);
}
