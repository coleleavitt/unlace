void __fastcall sub_17C39D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  char v3; // dl
  unsigned int v4; // edx
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r14
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v18[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
    {
      v4 = *(_DWORD *)(a2 + 24);
      v16 = 0;
      sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), v4, 0xEF9u, 0);
      sub_15F7200(v18);
      sub_B88650(a2, 1);
    }
    else
    {
      v2 = *(_BYTE *)(a2 + 96);
      v16 = a2;
      *(_BYTE *)(a2 + 97) |= 8u;
      v3 = (v2 >> 3) & 3;
      switch ( v2 & 7 )
      {
        case 1:
          v5 = 6;
          if ( v3 != 2 )
            v5 = 0;
          goto LABEL_7;
        case 2:
          v5 = 5LL * (v3 == 2) + 1;
          goto LABEL_7;
        case 3:
          v5 = 4LL * (v3 == 2) + 2;
          goto LABEL_7;
        case 4:
          v5 = 3LL * (v3 == 2) + 3;
          goto LABEL_7;
        case 5:
          v5 = 2LL * (v3 == 2) + 4;
          goto LABEL_7;
        default:
          if ( v3 != 2 )
            return;
          v5 = 6;
LABEL_7:
          v6 = sub_B73090(a2);
          sub_168B9F0((__int64)v18, (__int64 *)(a1 + 8), v6, 0xEFFu, 0);
          v7 = sub_17B9080((__int64)v18, &v16);
          v8 = v7;
          if ( *(_BYTE *)(v7 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v7 + 32), v5, 2u);
          }
          else if ( *(_BYTE *)(v7 + 132) )
          {
            v13 = sub_168B9E0((_QWORD *)v7);
            v14 = *(_QWORD *)(v8 + 16);
            if ( v14 )
              v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 32LL))(*(_QWORD *)(v8 + 16));
            v17 = v14;
            v15 = sub_1587BC0(v13, &v17, v9, v10, v11, v12);
            sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * *(unsigned int *)(v8 + 128) + 8), v5, 2u);
          }
          sub_15F7200(v18);
          sub_B88650(a2, 1);
          break;
      }
    }
  }
}
