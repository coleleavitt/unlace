__int64 __fastcall sub_15684E0(__int64 a1, unsigned int a2, __int64 a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // r14
  int *v6; // rbp
  __int16 v8; // ax
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 *v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r10
  unsigned __int64 v16; // r10
  unsigned __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v23; // [rsp+10h] [rbp-98h]
  unsigned __int64 v24; // [rsp+18h] [rbp-90h]
  unsigned __int8 *v25[17]; // [rsp+20h] [rbp-88h] BYREF

  v6 = (int *)(a1 + 16);
  v8 = *(_WORD *)(a1 + 32);
  if ( v8 == 5 )
  {
    while ( 1 )
    {
      v12 = *(unsigned int *)(a3 + 8);
      v13 = *(unsigned int *)(a3 + 12);
      v14 = *(_QWORD *)(a1 + 24);
      v15 = *(unsigned int *)(a1 + 16);
      if ( v12 < v13 )
      {
        v9 = *(_QWORD *)a3 + 16 * v12;
        *(_DWORD *)v9 = v15;
        *(_QWORD *)(v9 + 8) = v14;
        ++*(_DWORD *)(a3 + 8);
      }
      else
      {
        v16 = v4 & 0xFFFFFFFF00000000LL | v15;
        v4 = v16;
        if ( v13 < v12 + 1 )
        {
          v24 = v16;
          v23 = *(_QWORD *)(a1 + 24);
          sub_2237220(a3, a3 + 16, v12 + 1, 16);
          v12 = *(unsigned int *)(a3 + 8);
          v16 = v24;
          v14 = v23;
        }
        v17 = (unsigned __int64 *)(*(_QWORD *)a3 + 16 * v12);
        *v17 = v16;
        v17[1] = v14;
        ++*(_DWORD *)(a3 + 8);
      }
      v10 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v10, v6);
      if ( *(_WORD *)(a1 + 32) != 26 )
        return 0;
      v11 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v11, v6);
      v8 = *(_WORD *)(a1 + 32);
      if ( v8 != 5 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( v8 == 3 )
    {
      v18 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v18 + 760) )
      {
        *(_BYTE *)(v18 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v18 + 48) + 6LL) = 1;
      }
      v19 = *(_QWORD *)(a1 + 96);
      v20 = *(unsigned int *)(a3 + 8);
      *(_WORD *)(a1 + 32) = 1;
      sub_170FA60(*(_QWORD *)(v19 + 656), a2, *(_QWORD *)a3, v20);
      return 1;
    }
    else
    {
      sub_FC70B0((__int64)v25, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1736);
      sub_AE9DF0(v25, a4, 2u);
      sub_AEA040((__int64)v25);
      LOWORD(v25[0]) = 63;
      sub_1566E40(a1, v25, 1, 0);
      return 1;
    }
  }
}
