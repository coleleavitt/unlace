void __fastcall sub_1868380(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int64 v6; // rbp
  unsigned int v7; // r15d
  __int64 v8; // rbx
  unsigned int v9; // r13d
  bool v10; // al
  unsigned int v11; // edx
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 *v26; // [rsp+8h] [rbp-F0h]
  __int64 v27; // [rsp+18h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v31; // [rsp+50h] [rbp-A8h] BYREF
  char v32; // [rsp+A8h] [rbp-50h]
  unsigned int v33; // [rsp+B0h] [rbp-48h]
  char v34; // [rsp+B4h] [rbp-44h]

  v5 = sub_B76070(a2, a2, a3, a4);
  if ( v5 )
  {
    v6 = v5 - 1;
    v7 = v5;
    v8 = 0;
    v9 = v5 - 1;
    while ( 1 )
    {
      v10 = sub_B74820(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 8 * v8));
      v11 = v8 + 1;
      if ( v10 )
        break;
      if ( v6 == v8 )
      {
        v11 = v8 + 2;
        break;
      }
      ++v8;
    }
    if ( v7 > v11 )
    {
      v12 = 8LL * v11;
      v13 = 8 * (v11 + (unsigned __int64)(v9 - v11) + 1);
      v26 = (__int64 *)(a1 + 8);
      do
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a2 + 120) + v12);
        if ( !sub_B74820(v14) && !sub_B799A0(v14) )
        {
          v15 = *(_QWORD *)(a1 + 11280);
          if ( (!v15 || !(unsigned __int8)sub_1DBAE60(v15, v14)) && *(char *)(v14 + 28) >= 0 )
          {
            v16 = *(_QWORD *)(v14 + 40);
            v17 = *(_DWORD *)(v14 + 24);
            if ( (v16 & 7) == 0 && (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              sub_168B9F0((__int64)v29, v26, v17, 0x12B2u, 0);
              v18 = *(_QWORD *)(v14 + 40);
              v19 = 0;
              if ( (v18 & 7) == 0 )
                v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v32 )
              {
                sub_AE9DF0(&v31, v19, 5u);
              }
              else if ( v34 )
              {
                v20 = sub_168B9E0(v29);
                v24 = v30;
                if ( v30 )
                {
                  v27 = v20;
                  v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
                  v20 = v27;
                }
                v28 = v24;
                v25 = sub_1587BC0(v20, &v28, v20, v21, v22, v23);
                sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v33 + 8), v19, 5u);
              }
            }
            else
            {
              sub_168B9F0((__int64)v29, v26, v17, 0x12B1u, 0);
            }
            sub_15F7200(v29);
          }
        }
        v12 += 8;
      }
      while ( v12 != v13 );
    }
  }
}
