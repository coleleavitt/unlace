void __fastcall sub_1A09A70(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int v6; // edi
  unsigned int v7; // r8d
  char v8; // r15
  char v9; // r12
  char v10; // bp
  char v11; // r11
  __int64 v12; // r10
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  char v17; // bl
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  int v22; // ecx
  unsigned __int64 v23; // rbp
  char v24; // di
  char v25; // al
  char v26; // r12
  char v27; // bp
  char v28; // r11
  char v29; // r10
  char v30; // r9
  char v31; // r8
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rcx
  int v35; // r8d
  char v36; // [rsp+5h] [rbp-53h]
  char v37; // [rsp+6h] [rbp-52h]
  char v38; // [rsp+7h] [rbp-51h]
  __int64 v39; // [rsp+8h] [rbp-50h]

  v4 = a2 - a1;
  if ( (__int64)(a2 - a1) > 192 )
  {
    if ( !a3 )
    {
      v23 = a2;
      goto LABEL_20;
    }
    v39 = a1 + 12;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 12);
      --a3;
      v7 = *(_DWORD *)(a2 - 12);
      v8 = *(_BYTE *)(a1 + 4);
      v9 = *(_BYTE *)(a1 + 5);
      v10 = *(_BYTE *)(a1 + 6);
      v11 = *(_BYTE *)(a1 + 11);
      v12 = *(_QWORD *)a1;
      v36 = *(_BYTE *)(a1 + 7);
      v13 = *(_DWORD *)(a1 + 8);
      v37 = *(_BYTE *)(a1 + 8);
      v14 = (unsigned int *)(a1 + 12 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 2)) >> 1));
      v15 = *(_DWORD *)a1;
      v16 = *v14;
      v38 = *(_BYTE *)(a1 + 9);
      v17 = *(_BYTE *)(a1 + 10);
      if ( v6 >= *v14 )
      {
        if ( v6 >= v7 )
        {
          if ( v16 >= v7 )
          {
LABEL_24:
            *(_QWORD *)a1 = *(_QWORD *)v14;
            *(_DWORD *)(a1 + 8) = v14[2];
            *(_QWORD *)v14 = v12;
            v14[2] = v13;
            v15 = *(_DWORD *)(a2 - 12);
            goto LABEL_8;
          }
LABEL_17:
          *(_QWORD *)a1 = *(_QWORD *)(a2 - 12);
          *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 - 4);
          *(_BYTE *)(a2 - 5) = v36;
          *(_DWORD *)(a2 - 12) = v15;
          *(_BYTE *)(a2 - 4) = v37;
          *(_BYTE *)(a2 - 8) = v8;
          *(_BYTE *)(a2 - 7) = v9;
          *(_BYTE *)(a2 - 6) = v10;
          *(_BYTE *)(a2 - 3) = v38;
          *(_BYTE *)(a2 - 2) = v17;
          *(_BYTE *)(a2 - 1) = v11;
          goto LABEL_8;
        }
      }
      else
      {
        if ( v16 < v7 )
          goto LABEL_24;
        if ( v6 < v7 )
          goto LABEL_17;
      }
      v18 = *(_QWORD *)(a1 + 12);
      *(_QWORD *)(a1 + 12) = v12;
      *(_QWORD *)a1 = v18;
      LODWORD(v18) = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v13;
      *(_DWORD *)(a1 + 8) = v18;
      v15 = *(_DWORD *)(a2 - 12);
LABEL_8:
      v19 = *(_DWORD *)a1;
      v20 = v39;
      v21 = a2;
      while ( 1 )
      {
        v22 = *(_DWORD *)v20;
        v23 = v20;
        if ( *(_DWORD *)v20 < v19 )
          goto LABEL_14;
        v21 -= 12LL;
        if ( v15 > v19 )
        {
          do
            v21 -= 12LL;
          while ( *(_DWORD *)v21 > v19 );
        }
        if ( v20 >= v21 )
          break;
        v24 = *(_BYTE *)(v20 + 10);
        v25 = *(_BYTE *)(v20 + 11);
        v26 = *(_BYTE *)(v20 + 4);
        v27 = *(_BYTE *)(v20 + 5);
        v28 = *(_BYTE *)(v20 + 6);
        v29 = *(_BYTE *)(v20 + 7);
        v30 = *(_BYTE *)(v20 + 8);
        *(_QWORD *)v20 = *(_QWORD *)v21;
        v31 = *(_BYTE *)(v20 + 9);
        *(_DWORD *)(v20 + 8) = *(_DWORD *)(v21 + 8);
        *(_BYTE *)(v21 + 11) = v25;
        v15 = *(_DWORD *)(v21 - 12);
        *(_DWORD *)v21 = v22;
        *(_BYTE *)(v21 + 4) = v26;
        *(_BYTE *)(v21 + 5) = v27;
        *(_BYTE *)(v21 + 6) = v28;
        *(_BYTE *)(v21 + 7) = v29;
        *(_BYTE *)(v21 + 8) = v30;
        *(_BYTE *)(v21 + 9) = v31;
        *(_BYTE *)(v21 + 10) = v24;
        v19 = *(_DWORD *)a1;
LABEL_14:
        v20 += 12LL;
      }
      sub_1A09A70(v20, a2, a3);
      v4 = v20 - a1;
      if ( (__int64)(v20 - a1) <= 192 )
        return;
      a2 = v20;
      if ( !a3 )
      {
LABEL_20:
        v32 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 2);
        v33 = (v32 - 2) >> 1;
        sub_1A098F0(a1, v33, v32, *(_QWORD *)(a1 + 12 * v33), *(_DWORD *)(a1 + 12 * v33 + 8));
        do
        {
          --v33;
          sub_1A098F0(a1, v33, v32, *(_QWORD *)(a1 + 12 * v33), *(_DWORD *)(a1 + 12 * v33 + 8));
        }
        while ( v33 );
        do
        {
          v23 -= 12LL;
          v34 = *(_QWORD *)v23;
          v35 = *(_DWORD *)(v23 + 8);
          *(_QWORD *)v23 = *(_QWORD *)a1;
          *(_DWORD *)(v23 + 8) = *(_DWORD *)(a1 + 8);
          sub_1A098F0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((__int64)(v23 - a1) >> 2), v34, v35);
        }
        while ( (__int64)(v23 - a1) > 12 );
        return;
      }
    }
  }
}
