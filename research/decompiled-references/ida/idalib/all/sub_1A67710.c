void __fastcall sub_1A67710(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 *v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // [rsp+8h] [rbp-F0h]
  __int64 v31; // [rsp+10h] [rbp-E8h]
  _QWORD *v32; // [rsp+18h] [rbp-E0h]
  _QWORD *v33; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+38h] [rbp-C0h]
  _BYTE v36[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v35 = 0x1000000000LL;
  v8 = *(_QWORD *)(*v6 + 8);
  ptr = v36;
  v9 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  while ( 2 )
  {
    switch ( *(_BYTE *)(v9 + 16) )
    {
      case 2:
      case 5:
      case 6:
      case 7:
      case 0xB:
      case 0x29:
      case 0x2A:
        goto LABEL_5;
      case 0x19:
        goto LABEL_17;
      case 0x1A:
        a5 = (_QWORD *)(v9 + 48);
        a6 = v9 + 48 + 8LL * *(unsigned __int16 *)(v9 + 22);
        if ( a6 == v9 + 48 )
          goto LABEL_17;
        v15 = (unsigned int)v35;
        do
        {
          while ( 1 )
          {
            a4 = HIDWORD(v35);
            v16 = *(_QWORD *)(*a5 & 0xFFFFFFFFFFFFFFF0LL);
            if ( v15 + 1 > (unsigned __int64)HIDWORD(v35) )
              break;
            a3 = (__int64)ptr;
            ++a5;
            *((_QWORD *)ptr + v15) = v16;
            v15 = (unsigned int)(v35 + 1);
            LODWORD(v35) = v35 + 1;
            if ( (_QWORD *)a6 == a5 )
              goto LABEL_17;
          }
          v6 = (__int64 *)v36;
          v32 = a5;
          v31 = *(_QWORD *)(*a5 & 0xFFFFFFFFFFFFFFF0LL);
          v30 = a6;
          sub_2237220(&ptr, v36, v15 + 1, 8);
          a3 = (unsigned int)v35;
          a6 = v30;
          *((_QWORD *)ptr + (unsigned int)v35) = v31;
          a5 = v32 + 1;
          v15 = (unsigned int)(v35 + 1);
          LODWORD(v35) = v35 + 1;
        }
        while ( (_QWORD *)v30 != v32 + 1 );
LABEL_17:
        v9 = *(_QWORD *)(*(_QWORD *)(v9 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x21:
        v10 = sub_F61C10(v9);
        if ( v10 )
        {
          v6 = v10;
          sub_1A68950(a1, v10);
        }
LABEL_5:
        v11 = *(_QWORD *)(v9 + 32);
        goto LABEL_6;
      case 0x22:
      case 0x23:
      case 0x24:
        v23 = a1[1];
        v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL) + 80LL);
        v25 = sub_704780((__int64 *)(v24 + 72), v24, a3, a4, (__int64)a5, a6);
        v6 = (__int64 *)&v33;
        v29 = (__int64)(v25 + 5);
        if ( v25 )
          v25 += 5;
        v33 = v25;
        sub_1A66F90(v23, (__int64 *)&v33, v29, v26, v27, v28);
        goto LABEL_7;
      case 0x2B:
      case 0x2C:
        while ( 1 )
        {
          v11 = *(_QWORD *)(v9 + 32);
          if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
            break;
          v9 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 43 > 1 )
            v9 = sub_F63050(v9, v6, a3, a4);
        }
LABEL_6:
        v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
        v9 = *(_QWORD *)v12;
        if ( *(_BYTE *)(*(_QWORD *)v12 + 16LL) > 0x30u )
          goto LABEL_7;
        continue;
      case 0x2F:
        v19 = sub_F60F10(v9, (__int64)v6, a3, a4, (__int64)a5, a6)[2];
        if ( (v19 & 4) != 0 )
          v22 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v22 + 8) & 0x7Fu) - 59 <= 2 )
        {
          v33 = (_QWORD *)(v22 - 64);
          if ( v22 != 64 )
            sub_1A66720(a1[2], (__int64 *)&v33, v17, v18, v20, v21);
        }
        v6 = (__int64 *)v22;
        sub_1A675A0(a1[1], v22);
        v13 = v35;
        v14 = ptr;
        if ( !(_DWORD)v35 )
          goto LABEL_24;
        goto LABEL_8;
      case 0x30:
        v6 = sub_F60F10(v9, (__int64)v6, a3, a4, (__int64)a5, a6);
        sub_1A68950(a1, v6);
        goto LABEL_7;
      default:
LABEL_7:
        v13 = v35;
        v14 = ptr;
        if ( (_DWORD)v35 )
        {
LABEL_8:
          a3 = v13;
          v9 = v14[v13 - 1];
          LODWORD(v35) = v13 - 1;
          continue;
        }
LABEL_24:
        if ( v14 != (_QWORD *)v36 )
          free(v14);
        return;
    }
  }
}
