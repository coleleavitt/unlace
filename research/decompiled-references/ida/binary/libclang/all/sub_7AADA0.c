__int64 __fastcall sub_7AADA0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  char (__fastcall **v7)(__int64, __int64); // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // r15
  unsigned __int8 *v18; // r14
  __int64 i; // rbx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+0h] [rbp-D8h] BYREF
  int v23; // [rsp+8h] [rbp-D0h]
  __int64 v24; // [rsp+10h] [rbp-C8h] BYREF
  int v25; // [rsp+18h] [rbp-C0h]
  __int64 v26; // [rsp+20h] [rbp-B8h] BYREF
  int v27; // [rsp+28h] [rbp-B0h]
  __int64 v28; // [rsp+30h] [rbp-A8h] BYREF
  int v29; // [rsp+38h] [rbp-A0h]
  _QWORD v30[3]; // [rsp+40h] [rbp-98h] BYREF
  int v31; // [rsp+58h] [rbp-80h]
  char (__fastcall *v32)(__int64, __int64); // [rsp+60h] [rbp-78h] BYREF
  __int64 *v33; // [rsp+68h] [rbp-70h] BYREF
  char (__fastcall *v34)(__int64, __int64); // [rsp+70h] [rbp-68h]
  __int64 *v35; // [rsp+78h] [rbp-60h]
  char (__fastcall *v36)(__int64, __int64); // [rsp+80h] [rbp-58h]
  __int64 *v37; // [rsp+88h] [rbp-50h]
  __int64 (__fastcall *v38)(__int64, __int64); // [rsp+90h] [rbp-48h]
  _QWORD *v39; // [rsp+98h] [rbp-40h]
  _BYTE v40[56]; // [rsp+A0h] [rbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 80) )
    return a1 + 80;
  v3 = *(_QWORD *)(a1 + 48);
  v29 = 32;
  v28 = sub_798D40(a1);
  v33 = &v28;
  v26 = v28;
  v24 = v28;
  v22 = v28;
  v30[0] = v28;
  v35 = &v26;
  v38 = sub_7A1BA0;
  v32 = sub_7A1B50;
  v27 = 16;
  v34 = sub_7A1B50;
  v25 = 16;
  v36 = sub_7A1B50;
  v37 = &v24;
  v23 = 8;
  v30[1] = sub_7A1B50;
  v30[2] = &v22;
  v31 = 8;
  v39 = v30;
  v4 = sub_B0E890(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v4 )
    return a1 + 80;
  v1 = a1 + 80;
  if ( *(_BYTE *)(v4 + 73) >> 5 != 2 )
  {
    v5 = sub_78B3D0(v4);
    v6 = v5;
    if ( v5 )
    {
      if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 57 > 2
        || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(v5 + 104) + 96LL), *(_QWORD *)(v5 + 104)),
            !*(_DWORD *)(*(_QWORD *)(v6 + 128) + 16LL)) )
      {
        v7 = &v32;
        v8 = sub_7868A0(v6);
        if ( !v8 )
          return a1 + 80;
LABEL_10:
        if ( (*(_BYTE *)(v8 + 68) & 1) == 0 )
        {
          if ( v7 != (char (__fastcall **)(__int64, __int64))v40 && (*v7)((__int64)v7[1], *(_QWORD *)(v8 + 48)) )
          {
            v7 += 2;
            goto LABEL_15;
          }
          return a1 + 80;
        }
        v9 = *(_QWORD *)(v8 + 40);
        if ( v9 > 7 || (_DWORD)v9 )
          return a1 + 80;
LABEL_15:
        while ( 1 )
        {
          v10 = *(_QWORD *)(v8 + 8);
          v8 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v10 <= 7 )
            break;
          if ( (*(_BYTE *)(v8 + 28) & 0x7Fu) - 47 <= 2 )
            goto LABEL_10;
        }
        if ( v7 != (char (__fastcall **)(__int64, __int64))v40 )
          return a1 + 80;
        v1 = a1 + 80;
        BYTE4(v32) &= ~1u;
        LODWORD(v32) = 0;
        sub_69F640((__int64)&v33, 0, 4);
        LODWORD(v32) = 10;
        sub_6A01B0(a1 + 80, (__int64)&v32);
        if ( (unsigned int)v32 > 1 )
          sub_69F740((__int64)&v32);
        v11 = *(unsigned int *)(a1 + 96);
        v12 = (__int64 *)*(unsigned int *)(a1 + 64);
        BYTE4(v34) = 1;
        BYTE4(v32) &= ~1u;
        v33 = v12;
        v13 = 7 * v11;
        v14 = *(_QWORD *)(a1 + 88);
        LODWORD(v32) = 2;
        LODWORD(v34) = 32;
        sub_6A01B0(v14 + 8 * v13, (__int64)&v32);
        if ( (unsigned int)v32 > 1 )
          sub_69F740((__int64)&v32);
        v15 = (__int64 *)*(unsigned __int16 *)(a1 + 68);
        BYTE4(v32) &= ~1u;
        BYTE4(v34) = 1;
        v33 = v15;
        LODWORD(v15) = *(_DWORD *)(a1 + 96);
        LODWORD(v32) = 2;
        LODWORD(v34) = 16;
        sub_6A01B0(*(_QWORD *)(a1 + 88) + 56LL * (unsigned int)((_DWORD)v15 + 1), (__int64)&v32);
        if ( (unsigned int)v32 > 1 )
          sub_69F740((__int64)&v32);
        v16 = (__int64 *)*(unsigned __int16 *)(a1 + 70);
        BYTE4(v32) &= ~1u;
        BYTE4(v34) = 1;
        v33 = v16;
        LODWORD(v16) = *(_DWORD *)(a1 + 96);
        LODWORD(v32) = 2;
        LODWORD(v34) = 16;
        sub_6A01B0(*(_QWORD *)(a1 + 88) + 56LL * (unsigned int)((_DWORD)v16 + 2), (__int64)&v32);
        if ( (unsigned int)v32 > 1 )
          sub_69F740((__int64)&v32);
        BYTE4(v32) &= ~1u;
        LODWORD(v32) = 0;
        sub_6A3820((__int64)&v32, 8, 8);
        v17 = sub_6A01B0(*(_QWORD *)(a1 + 88) + 56LL * (unsigned int)(*(_DWORD *)(a1 + 96) + 3), (__int64)&v32);
        if ( (unsigned int)v32 > 1 )
          sub_69F740((__int64)&v32);
        v18 = (unsigned __int8 *)(a1 + 72);
        for ( i = 0; i != 448; i += 56 )
        {
          while ( 1 )
          {
            v20 = (__int64 *)*v18;
            BYTE4(v32) &= ~1u;
            BYTE4(v34) = 1;
            LODWORD(v32) = 2;
            v33 = v20;
            LODWORD(v34) = 8;
            sub_6A01B0(i + *(_QWORD *)(v17 + 8), (__int64)&v32);
            if ( (unsigned int)v32 > 1 )
              break;
            i += 56;
            ++v18;
            if ( i == 448 )
              goto LABEL_30;
          }
          ++v18;
          sub_69F740((__int64)&v32);
        }
LABEL_30:
        v21 = sub_798D40(a1);
        sub_6B5A70(v21, (__int64)sub_778160, a1 + 80);
      }
    }
  }
  return v1;
}

