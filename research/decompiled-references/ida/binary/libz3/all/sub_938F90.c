void __fastcall sub_938F90(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  int v16; // r13d
  unsigned int v17; // [rsp+Ch] [rbp-8Ch]
  int v18[2]; // [rsp+10h] [rbp-88h]
  void *v19; // [rsp+10h] [rbp-88h]
  void *v20; // [rsp+10h] [rbp-88h]
  __int64 v21; // [rsp+18h] [rbp-80h]
  char v22[16]; // [rsp+20h] [rbp-78h] BYREF
  int v23; // [rsp+30h] [rbp-68h] BYREF
  char v24; // [rsp+34h] [rbp-64h]
  char v25[16]; // [rsp+40h] [rbp-58h] BYREF
  int v26; // [rsp+50h] [rbp-48h] BYREF
  char v27; // [rsp+54h] [rbp-44h]

  v6 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 8872) + 16LL * a2) & 7) != 3
    || (v15 = *(_QWORD *)(*(_QWORD *)(v6 + 8872) + 16LL * a2) & 0xFFFFFFFFFFFFFFF8LL,
        v16 = *(_DWORD *)(a1 + 8),
        (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v15 + 40LL))(v15) != v16) )
  {
    v7 = *(_QWORD *)(a1 + 296);
    if ( v7 )
    {
      if ( a2 < *(_DWORD *)(v7 - 4) )
      {
        v8 = *(_QWORD *)(v7 + 8LL * a2);
        if ( v8 )
        {
          ++*(_DWORD *)(a1 + 192);
          v9 = *(_DWORD *)(v8 + 4);
          v10 = v8 + 16;
          v11 = (a3 ^ 1) + 2 * a2;
          v17 = *(_DWORD *)(v10 - 8);
          sub_91F480((__int64)v22, v10);
          if ( (v11 & 1) != 0 )
          {
            sub_1831620(qword_1C7F2C0, v22);
            sub_1831620(qword_1C7F2C0, v25);
            v12 = a1 + 64;
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 320) + v9) )
              v12 = a1 + 128;
            if ( (v24 & 1) != 0 || v23 != 1 || (*(_BYTE *)(v12 + 20) & 1) != 0 || *(_DWORD *)(v12 + 16) != 1 )
            {
              *(_QWORD *)v18 = v12;
              sub_1852000(qword_1C7F2C0, v22, v12);
              v13 = *(_QWORD *)v18;
            }
            else
            {
              v21 = v12;
              v20 = qword_1C7F2C0;
              sub_1832A70(qword_1C7F2C0, v22, v12);
              sub_182CBA0(v20, &v23);
              v24 &= ~1u;
              v13 = v21;
              v23 = 1;
            }
            v14 = v13 + 32;
            if ( (v27 & 1) != 0 || v26 != 1 || (*(_BYTE *)(v13 + 52) & 1) != 0 || *(_DWORD *)(v13 + 48) != 1 )
            {
              sub_1852000(qword_1C7F2C0, v25, v14);
            }
            else
            {
              v19 = qword_1C7F2C0;
              sub_1832A70(qword_1C7F2C0, v25, v14);
              sub_182CBA0(v19, &v26);
              v27 &= ~1u;
              v26 = 1;
            }
            sub_938550(a1, v17, v9, (__int64)v22, v11);
          }
          else
          {
            sub_938550(a1, v9, v17, (__int64)v22, v11);
          }
          sub_25A130(v25);
          sub_25A130(v22);
        }
      }
    }
  }
}

