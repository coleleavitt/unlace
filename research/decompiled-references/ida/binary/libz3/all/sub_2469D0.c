__int64 __fastcall sub_2469D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  _DWORD *v8; // r13
  _DWORD *v9; // r15
  bool v10; // zf
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  void (*v14)(); // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 *v21; // r12
  __int64 v22; // r12
  void (***v23)(void); // rdi
  _QWORD *v24; // rax
  __int64 v25; // r12
  void (***v26)(void); // rdi
  void *v27; // rbp
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rdx
  char i; // al
  int v33; // eax
  int v34; // eax
  __int64 *v35; // rsi
  unsigned __int8 v36; // [rsp+10h] [rbp-C8h]
  int ptr; // [rsp+18h] [rbp-C0h]
  void *v38; // [rsp+28h] [rbp-B0h] BYREF
  char v39[8]; // [rsp+30h] [rbp-A8h] BYREF
  char v40[8]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v41[16]; // [rsp+40h] [rbp-98h] BYREF
  int *v42; // [rsp+50h] [rbp-88h] BYREF
  int v43; // [rsp+58h] [rbp-80h]
  __int128 v44; // [rsp+60h] [rbp-78h]
  __int128 v45; // [rsp+70h] [rbp-68h]
  __int64 v46; // [rsp+80h] [rbp-58h]
  __int16 v47; // [rsp+88h] [rbp-50h]
  __int64 v48; // [rsp+90h] [rbp-48h]

  v38 = nullptr;
  v7 = sub_186B270(0x80u);
  v8 = (_DWORD *)v7;
  if ( a3 )
  {
    a3 = *(_QWORD *)(a3 + 24);
    if ( a3 )
      ++*(_DWORD *)(a3 + 32);
  }
  sub_ED5720(v7, a3);
  v9 = v38;
  ++v8[8];
  if ( v9 )
  {
    v10 = v9[8]-- == 1;
    if ( v10 )
    {
      sub_ED44E0(v9);
      sub_186B220(v9);
    }
  }
  v38 = v8;
  if ( a3 )
  {
    v10 = (*(_DWORD *)(a3 + 32))-- == 1;
    if ( v10 )
    {
      sub_ED44E0(a3);
      sub_186B220((void *)a3);
    }
  }
  v11 = sub_186B270(0xB8u);
  sub_2518F0(v11, a1);
  *(_QWORD *)v11 = &off_1C4C940;
  *(_QWORD *)(v11 + 24) = v11 + 40;
  *(_OWORD *)(v11 + 168) = 0;
  *(_QWORD *)(v11 + 32) = 0x1000000000LL;
  sub_24FBE0(a1, v11);
  ptr = sub_1859960(a4, "timeout", 0xFFFFFFFFLL);
  v36 = sub_1859610(a4, "ctrl_c", 0);
  v12 = *(_QWORD *)(a1 + 232);
  v43 = 0;
  v42 = &off_1C4C9C8;
  v46 = 0;
  v47 = 0;
  v48 = v12;
  v44 = 0;
  v45 = 0;
  if ( !a2 )
    BUG();
  v13 = *(_QWORD *)(a2 + 24);
  v14 = *(void (**)())(*(_QWORD *)v13 + 112LL);
  if ( v14 != nullsub_93 )
    ((void (__fastcall *)(__int64, __int64))v14)(v13, a4);
  sub_24FD10(v39, a1, &v42);
  sub_18086F0(v41, &v42, v36);
  sub_18561B0((unsigned int)v40, ptr, (unsigned int)&v42, v15, v16, v17);
  sub_EE4EF0(*(_QWORD *)(a2 + 24), (unsigned int)&v38, v11 + 24, v18, v19, v20);
  v21 = (__int64 *)v38;
  if ( (*((_BYTE *)v38 + 123) & 0x20) != 0 )
  {
    v29 = *((_QWORD *)v38 + 11);
    v30 = *(_QWORD *)v38;
    if ( v29 )
    {
      v31 = *((_QWORD *)v38 + 11);
      for ( i = *(_BYTE *)(v29 + 3) >> 6; !i; i = *(_BYTE *)(v31 + 3) >> 6 )
        v31 = *(_QWORD *)(v31 + 16);
      if ( i == 1 )
      {
        v33 = *(_DWORD *)(v31 + 4) + 1;
      }
      else if ( i == 2 )
      {
        v33 = *(_DWORD *)(v31 + 4) - 1;
      }
      else
      {
        v33 = *(_DWORD *)(v31 + 4);
      }
      if ( v33 )
      {
        v34 = 18;
        while ( --v34 )
        {
          if ( *(char *)(v29 + 3) >= 0 )
          {
            if ( !*(_DWORD *)(v29 + 4) )
            {
              v35 = (__int64 *)(v29 + 8);
              goto LABEL_43;
            }
          }
          else if ( *(_BYTE *)(v29 + 3) >> 6 != 2 )
          {
            v35 = *(__int64 **)(v29 + 16);
            goto LABEL_43;
          }
          v29 = *(_QWORD *)(v29 + 16);
        }
        sub_233F80((__int64 *)(v30 + 616), (_DWORD *)v38 + 22);
        v30 = *v21;
        v35 = *(__int64 **)(v21[11] + 16);
LABEL_43:
        v29 = *v35;
      }
      else
      {
        v29 = 0;
      }
    }
    v22 = sub_132F960(v30, v29);
  }
  else
  {
    v22 = *((_QWORD *)v38 + 2);
  }
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v23 = *(void (****)(void))(v11 + 176);
  if ( v23 )
  {
    v10 = (*((_DWORD *)v23 + 2))-- == 1;
    if ( v10 )
    {
      (**v23)();
      sub_186B220(v23);
    }
  }
  v24 = v38;
  *(_QWORD *)(v11 + 176) = v22;
  v25 = v24[1];
  if ( v25 )
    ++*(_DWORD *)(v25 + 8);
  v26 = *(void (****)(void))(v11 + 168);
  if ( v26 )
  {
    v10 = (*((_DWORD *)v26 + 2))-- == 1;
    if ( v10 )
    {
      (**v26)();
      sub_186B220(v26);
    }
  }
  *(_QWORD *)(v11 + 168) = v25;
  sub_1856400(v40);
  sub_1808900(v41);
  sub_24E910(v39);
  v42 = &off_1C4C9C8;
  if ( (_BYTE)v47 )
    sub_18296D0(v48);
  if ( HIBYTE(v47) )
    sub_1829760(v48);
  v27 = v38;
  if ( v38 )
  {
    v10 = (*((_DWORD *)v38 + 8))-- == 1;
    if ( v10 )
    {
      sub_ED44E0(v27);
      sub_186B220(v27);
    }
  }
  return v11;
}

