void __fastcall sub_93A320(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rdx
  unsigned __int8 v8; // al
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  unsigned int v11; // r12d
  __int64 v12; // rdx
  void *v13; // rbx
  unsigned __int64 v14; // rdi
  int v15; // r14d
  void *v16; // [rsp+8h] [rbp-60h]
  int v17[2]; // [rsp+10h] [rbp-58h] BYREF
  int v18[2]; // [rsp+18h] [rbp-50h]
  int v19[2]; // [rsp+20h] [rbp-48h] BYREF
  int v20[2]; // [rsp+28h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(*(_QWORD *)(v5 + 8872) + 16LL * a2) & 7) != 3
    || (v14 = *(_QWORD *)(*(_QWORD *)(v5 + 8872) + 16LL * a2) & 0xFFFFFFFFFFFFFFF8LL,
        v15 = *(_DWORD *)(a1 + 8),
        (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 40LL))(v14) != v15) )
  {
    v6 = *(_QWORD *)(a1 + 232);
    if ( v6 )
    {
      if ( a2 < *(_DWORD *)(v6 - 4) )
      {
        v7 = *(_DWORD **)(v6 + 8LL * a2);
        if ( v7 )
        {
          v8 = a3;
          v9 = v7[2];
          v10 = v7[1];
          ++*(_DWORD *)(a1 + 128);
          *(_QWORD *)v17 = 0;
          *(_QWORD *)v18 = 0;
          v11 = (v8 ^ 1) + 2 * a2;
          *(_QWORD *)v19 = 1;
          *(_QWORD *)v20 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)v17, v7 + 4);
          if ( (v11 & 1) != 0 )
          {
            sub_1831620(qword_1C7F2C0, v17);
            v12 = a1 + 64;
            if ( !*(_BYTE *)(*(_QWORD *)(a1 + 256) + v10) )
              v12 = a1 + 96;
            if ( (v19[1] & 1) != 0 || v19[0] != 1 || (*(_BYTE *)(v12 + 20) & 1) != 0 || *(_DWORD *)(v12 + 16) != 1 )
            {
              sub_1852000(qword_1C7F2C0, v17, v12);
            }
            else
            {
              v16 = qword_1C7F2C0;
              sub_1832A70(qword_1C7F2C0, v17, v12);
              sub_182CBA0(v16, v19);
              LOBYTE(v19[1]) &= ~1u;
              v19[0] = 1;
            }
            sub_9399C0(a1, v9, v10, v17, v11);
          }
          else
          {
            sub_9399C0(a1, v10, v9, v17, v11);
          }
          v13 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v17);
          sub_182CBA0(v13, v19);
        }
      }
    }
  }
}

