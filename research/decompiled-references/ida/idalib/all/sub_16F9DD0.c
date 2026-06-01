__int64 __fastcall sub_16F9DD0(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned __int64 v19; // rdi
  __int64 v20; // r15
  __int64 v21; // r9
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // dl
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  char v30; // dl
  unsigned int v31; // eax
  __int64 v32; // rax
  unsigned __int8 v33; // [rsp+Fh] [rbp-F9h]
  __int64 v34; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+18h] [rbp-F0h] BYREF
  unsigned __int64 v36; // [rsp+20h] [rbp-E8h]
  __int64 v37; // [rsp+28h] [rbp-E0h]
  __int64 v38; // [rsp+30h] [rbp-D8h]
  _BYTE v39[200]; // [rsp+40h] [rbp-C8h] BYREF

  result = sub_16EC930(a1, a2, 3u, a4);
  if ( !(_BYTE)result )
  {
    v11 = sub_C00A40(a2, a2, v8, v9, v10);
    v12 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
    if ( !(unsigned __int8)sub_16CF790(a1, *(_QWORD *)(a2 + v12 + 32), *(_QWORD *)(a2 + v12 + 40), v11, a4) )
    {
      v13 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
      if ( !(unsigned __int8)sub_16CF790(a1, *(_QWORD *)(a2 + v13 + 40), *(_QWORD *)(a2 + v13 + 48), v11, a4) )
      {
        v14 = 0;
        while ( 1 )
        {
          v15 = sub_19179A0(a1, *(_QWORD *)(v14 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 1);
          if ( v15 == 1 )
            break;
          v16 = v15 & 0xFFFFFFFFFFFFFFFELL;
          v17 = sub_18C0DF0(a1, v15 & 0xFFFFFFFFFFFFFFFELL);
          if ( v17 == 1 )
            break;
          *(unsigned __int64 *)((char *)&v36 + v14) = v17 & 0xFFFFFFFFFFFFFFFELL;
          v14 += 8;
          if ( v14 == 24 )
          {
            v18 = 0;
            while ( 1 )
            {
              v19 = *(&v36 + v18);
              v20 = *(_QWORD *)(v19 + 8);
              v16 = (unsigned int)sub_EEB7E0(v19, v16, a4);
              result = sub_16F9610(a1, v16, v20, a3, (unsigned int)(v18 + 1), v21);
              if ( (_BYTE)result )
                break;
              if ( ++v18 == 3 )
              {
                v22 = v37;
                v23 = v36;
                v24 = *(_QWORD *)&byte_8[*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL];
                v25 = *(_QWORD *)&byte_8[*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL];
                v26 = v25 | *(_QWORD *)(v36 + 8);
                v27 = v25 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v24 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v24 | (unsigned __int8)*(_QWORD *)(v37 + 8)) & 7) == (v27 | v26 & 7)
                  && (*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40) = v37,
                      v22 = v38,
                      v28 = *(_QWORD *)&byte_8[*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL],
                      v29 = *(_QWORD *)&byte_8[*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL],
                      v30 = v29 | *(_QWORD *)(v23 + 8),
                      v27 = v29 & 0xFFFFFFFFFFFFFFF8LL,
                      (v28 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v28 | (unsigned __int8)*(_QWORD *)(v38 + 8)) & 7) == (v27 | v30 & 7)) )
                {
                  *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48) = v38;
                  *(_QWORD *)(a2 + 8) = *(_QWORD *)(v23 + 8);
                }
                else
                {
                  v31 = sub_EEB7E0(v23, v27, a4);
                  sub_168B9F0((__int64)v39, (__int64 *)(a1 + 8), v31, 0x1463u, 0);
                  v34 = *(_QWORD *)(v23 + 8);
                  v32 = sub_162B6D0((__int64)v39, &v34);
                  v35 = *(_QWORD *)(v22 + 8);
                  v33 = *(_BYTE *)(sub_162B6D0(v32, &v35) + 120);
                  sub_15F7200(v39);
                  return v33;
                }
                return result;
              }
            }
            return 1;
          }
        }
      }
    }
    return 1;
  }
  return result;
}
