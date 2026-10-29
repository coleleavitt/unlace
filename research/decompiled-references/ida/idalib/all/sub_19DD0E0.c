void __fastcall sub_19DD0E0(__int64 *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r13
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v29[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+20h] [rbp-B8h]
  unsigned __int8 *v31; // [rsp+30h] [rbp-A8h] BYREF
  char v32; // [rsp+88h] [rbp-50h]
  unsigned int v33; // [rsp+90h] [rbp-48h]
  char v34; // [rsp+94h] [rbp-44h]

  v2 = (_QWORD *)sub_168B6C0((__int64)a1);
  v4 = sub_BFBAE0(a2);
  if ( (*(_WORD *)v4 & 0x1FF) == 0x21 && (*(_BYTE *)(v4 + 27) & 1) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 60) & 2) != 0 )
      {
        v6 = *(_QWORD *)(v4 + 8);
        v7 = (__int64 *)(*(_QWORD *)(v5 + 80) & 0xFFFFFFFFFFFFFFF0LL);
        v8 = *v7;
        if ( (unsigned int)*(unsigned __int8 *)(*v7 + 16) - 43 <= 1
          || (v19 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                  - 43,
              (unsigned int)v19 <= 1)
          && (v8 = sub_F63050(*v7, a2, v19, v3)) != 0 )
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v8 + 32);
            if ( (*(_BYTE *)(v8 + 18) & 0x10) == 0 )
              break;
            v8 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
            v10 = (unsigned int)*(unsigned __int8 *)(v8 + 16) - 43;
            if ( (unsigned int)v10 > 1 )
              v8 = sub_F63050(v8, a2, v10, v3);
          }
          v7 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
        }
        if ( *(_QWORD *)(v7[1] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL]
                                                                    & 0xFFFFFFFFFFFFFFF0LL) )
        {
          v11 = sub_A8A2C0(v2);
          v15 = *(_QWORD *)(v11 + 48);
          v16 = v15 ? v15 & 0xFFFFFFFFFFFFFFF0LL : sub_A7AA70((__int64)v2, v11, 0, v12, v13, v14) & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v5 + 80) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) )
          {
            sub_168B9F0((__int64)v29, a1, *(_DWORD *)(v5 + 24), 0x18CCu, 0);
            v17 = (*(_QWORD *)(v5 + 56) >> 17) & 1LL;
            if ( v32 )
            {
              sub_AE9DF0(&v31, (*(_QWORD *)(v5 + 56) & 0x20000LL) != 0, 2u);
            }
            else if ( v34 )
            {
              v24 = sub_168B9E0(v29);
              v25 = v30;
              if ( v30 )
                v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 32LL))(v30);
              v28 = v25;
              v26 = sub_1587BC0(v24, &v28, v20, v21, v22, v23);
              sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v33 + 8), (unsigned __int8)v17, 2u);
            }
            v27 = *(_QWORD *)(v5 + 40);
            v18 = sub_19D6730((__int64)v29, &v27);
            v28 = *(_QWORD *)(v4 + 8);
            sub_162B6D0(v18, &v28);
            sub_15F7200(v29);
          }
        }
      }
    }
  }
}
