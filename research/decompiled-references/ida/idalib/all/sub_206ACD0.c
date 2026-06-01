__int64 __fastcall sub_206ACD0(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // dx
  int v4; // ebx
  __int64 v5; // r13
  unsigned int v6; // ebx
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned int v14; // eax
  __int64 v15; // rbp
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  char v20; // bp
  __int64 v21; // rax
  __int64 v22; // rdx
  _BYTE *v23; // rax
  _DWORD *v24; // r8
  unsigned int v25; // esi
  _DWORD *v26; // rdi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int *v30; // rcx
  __int64 v31; // [rsp+0h] [rbp-38h] BYREF
  __int64 v32; // [rsp+8h] [rbp-30h]

  v3 = *(_WORD *)(a2 + 34) >> 1;
  v4 = v3;
  if ( (v3 & 0x3F) != 0 )
  {
    LOWORD(v4) = v3 & 0x3F;
    v6 = v4 - 1;
    if ( (v3 & 0x200) == 0 )
    {
      v12 = *(_QWORD *)(a2 + 24);
      if ( (unsigned __int8)v6 < (unsigned __int8)sub_2067E70(a1, v12, 0) )
      {
        v14 = sub_2067E70(a1, v12, 1);
        if ( (unsigned __int8)v6 < (unsigned __int8)v14 )
          v6 = v14;
      }
      sub_208F2E0(a2);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = sub_2067E70(a1, v5, 0);
    v7 = sub_208F2E0(a2);
    if ( (unsigned __int8)v6 <= 3u && v7 != 1 )
    {
      while ( 2 )
      {
        v11 = *(unsigned __int8 *)(v5 + 8);
        switch ( *(_BYTE *)(v5 + 8) )
        {
          case 0:
          case 1:
            v16 = 0;
            v18 = 16;
            goto LABEL_13;
          case 2:
            v16 = 0;
            v18 = 32;
            goto LABEL_13;
          case 3:
            v16 = 0;
            v18 = 64;
            goto LABEL_13;
          case 4:
            v16 = 0;
            v18 = 80;
            goto LABEL_13;
          case 5:
          case 6:
            v16 = 0;
            v18 = 128;
            goto LABEL_13;
          case 7:
          case 9:
          case 0xB:
          case 0xD:
          case 0x13:
          case 0x14:
            v5 = sub_20C5D00(v5);
            continue;
          case 8:
            v16 = 0;
            v18 = *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL);
            goto LABEL_13;
          case 0xA:
            v16 = 0;
            v18 = 0x2000;
            goto LABEL_13;
          case 0xC:
            v16 = 0;
            v18 = *(_DWORD *)(v5 + 8) >> 8;
            goto LABEL_13;
          case 0xE:
            v24 = *(_DWORD **)(a1 + 272);
            v25 = *(_DWORD *)(v5 + 8) >> 8;
            if ( !v25 )
              goto LABEL_25;
            v26 = *(_DWORD **)(a1 + 272);
            v27 = 5LL * *(unsigned int *)(a1 + 280);
            v28 = *(unsigned int *)(a1 + 280);
            if ( !(v27 * 4) )
              goto LABEL_22;
            break;
          case 0xF:
            v23 = sub_2069970(a1, v5, v11, v8, v9, v10);
            v16 = v23[8];
            v18 = 8LL * *(_QWORD *)v23;
            goto LABEL_13;
          case 0x10:
            v19 = *(_QWORD *)(v5 + 24);
            v20 = sub_2067E70(a1, v19, 1);
            v21 = sub_200E290(a1, v19);
            v32 = v22;
            v16 = v22;
            v31 = v21;
            v18 = 8 * *(_QWORD *)(v5 + 32) * (((1LL << v20) + ((unsigned __int64)(v21 + 7) >> 3) - 1) >> v20 << v20);
            goto LABEL_13;
          case 0x11:
          case 0x12:
            v15 = *(unsigned int *)(v5 + 32);
            v16 = (_BYTE)v11 == 18;
            v31 = sub_200E290(a1, *(_QWORD *)(v5 + 24));
            v32 = v17;
            v18 = v31 * v15;
            goto LABEL_13;
        }
        break;
      }
      do
      {
        while ( 1 )
        {
          v29 = v28 >> 1;
          v30 = &v26[5 * (v28 >> 1)];
          if ( v25 <= *v30 )
            break;
          v26 = v30 + 5;
          v28 = v28 - v29 - 1;
          if ( v28 <= 0 )
            goto LABEL_22;
        }
        v28 >>= 1;
      }
      while ( v29 );
LABEL_22:
      if ( v26 != &v24[v27] && v25 == *v26 )
        v24 = v26;
LABEL_25:
      v18 = (unsigned int)v24[1];
      v16 = 0;
LABEL_13:
      v31 = v18;
      LOBYTE(v32) = v16;
      if ( (unsigned __int64)sub_2254830(&v31) >= 0x81 )
        return 4;
    }
  }
  return v6;
}
