void __fastcall sub_19A70B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r13
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbp
  size_t v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rbp
  size_t v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+8h] [rbp-38h] BYREF
  __int64 *v27[6]; // [rsp+10h] [rbp-30h] BYREF

  if ( !*(_BYTE *)(a1 + 9896) )
  {
    v1 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v1 + 52) & 1) == 0 )
    {
      if ( (*(_BYTE *)(v1 + 21) & 4) != 0 )
      {
        v3 = *(unsigned int *)(a1 + 10152);
        if ( (_DWORD)v3 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v3 - 40) )
            sub_1A800B0(a1, 0);
        }
      }
      if ( (*(_BYTE *)(a1 + 9872) & 1) == 0
        && !*(_QWORD *)(a1 + 9872)
        && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 )
      {
        v19 = *(_QWORD *)(a1 + 240) + 552LL;
        v20 = j__strlen("bad_alloc");
        v21 = sub_6F3470(v19, "bad_alloc", v20);
        v22 = sub_1847050((_QWORD *)a1);
        if ( v22 )
          v22 += 48;
        *(_QWORD *)(a1 + 9872) = sub_B96A60(*(_QWORD **)(a1 + 248), 3, v22, 0, 0, v21, 0, 0);
        v23 = sub_183D2D0(a1);
        *(_BYTE *)(v23 + 29) |= 2u;
        if ( *(_QWORD *)(a1 + 10936) )
        {
          v24 = sub_183D2D0(a1);
          *(_QWORD *)(v24 + 8) = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL | 3;
          *(_QWORD *)(sub_183D2D0(a1) - 8) = *(_QWORD *)(a1 + 10936);
        }
      }
      if ( (*(_BYTE *)(a1 + 9880) & 1) == 0
        && !*(_QWORD *)(a1 + 9880)
        && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 97LL) & 0x20) != 0 )
      {
        v11 = *(_QWORD *)(a1 + 240) + 552LL;
        v12 = j__strlen("align_val_t");
        v13 = sub_6F3470(v11, "align_val_t", v12);
        v14 = sub_1847050((_QWORD *)a1);
        if ( v14 )
          v14 += 48;
        v15 = sub_B80200(*(_QWORD *)(a1 + 248), v14, 0, 0, v13, 0, 1, 1, 1);
        v16 = v15;
        if ( *(_QWORD *)(a1 + 10936) )
        {
          *(_QWORD *)(v15 + 8) = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL | 3;
          *(_QWORD *)(v15 - 8) = *(_QWORD *)(a1 + 10936);
        }
        v17 = (_QWORD *)(sub_A63CE0(*(_QWORD **)(a1 + 248)) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v17 )
          v17 = (_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFFBLL);
        *(_QWORD *)(v16 + 128) = v17;
        v18 = sub_A63CE0(*(_QWORD **)(a1 + 248));
        *(_BYTE *)(v16 + 29) |= 2u;
        *(_QWORD *)(v16 + 136) = v18;
        *(_QWORD *)(a1 + 9880) = v16;
      }
      v4 = *(_QWORD *)(a1 + 248);
      *(_BYTE *)(a1 + 9896) = 1;
      v5 = sub_A70010(v4, *(_QWORD *)(v4 + 18632));
      v25 = sub_A63CE0(*(_QWORD **)(a1 + 248));
      v27[0] = &v25;
      v26 = a1;
      sub_19A6450(&v26, v27, 1, v5, v25, v6);
      sub_19A6450(&v26, v27, 3, v5, v25, v7);
      sub_19A6450(&v26, v27, 2, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL), v5, v8);
      sub_19A6450(&v26, v27, 4, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL), v5, v9);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) != 0 )
      {
        v10 = *(unsigned int *)(a1 + 10152);
        if ( (_DWORD)v10 )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1 + 10144) + 48 * v10 - 40) )
            sub_1A7BF90(a1);
        }
      }
    }
  }
}
