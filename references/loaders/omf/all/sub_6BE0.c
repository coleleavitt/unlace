unsigned __int64 __fastcall sub_6BE0(__int64 a1, void (__fastcall *a2)(__int64 *))
{
  _BOOL8 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r15d
  unsigned __int8 v7; // bp
  __int64 v8; // rax
  __int16 v9; // cx
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // rbp
  __int64 v15; // rax
  char *v16; // rdx
  __int64 v17; // [rsp+0h] [rbp-88h] BYREF
  __m128i si128; // [rsp+8h] [rbp-80h]
  __int64 v19; // [rsp+18h] [rbp-70h]
  __int64 v20; // [rsp+20h] [rbp-68h]
  unsigned __int64 v21; // [rsp+28h] [rbp-60h]
  char v22; // [rsp+42h] [rbp-46h]
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  while ( *(_QWORD *)(a1 + 48) < *(_QWORD *)(a1 + 8) )
  {
    sub_5890(a1, -1, 1);
    v4 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = v4 + 1;
    v5 = *(_QWORD *)a1;
    v6 = *(unsigned __int8 *)(*(_QWORD *)a1 + v4);
    if ( (v6 & 0x80u) == 0 )
    {
      v14 = 9LL * (v6 & 3);
      if ( (v6 & 0x40) != 0 )
      {
        v15 = 0;
        if ( (v6 & 0x10) == 0 )
          v15 = (unsigned __int16)sub_6A10(a1, -1, v5, v3);
        v16 = (char *)&unk_14440 + v14;
      }
      else
      {
        v15 = (unsigned __int16)sub_6A10(a1, -1, v5, v3);
        v16 = (char *)&unk_14480 + v14;
      }
      v16[8] = v6;
      *(_QWORD *)v16 = v15;
    }
    else
    {
      v17 = 0;
      v7 = 1;
      v19 = 0;
      v20 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_11480);
      if ( !dword_145C8 )
        v7 = *(_BYTE *)(a1 + 58) & 1;
      sub_5890(a1, -1, 1);
      v8 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 48) = v8 + 1;
      v9 = *(unsigned __int8 *)(*(_QWORD *)a1 + v8) + ((_WORD)v6 << 8);
      switch ( (((unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + v8) + 256 * v6) >> 10) & 0xF )
      {
        case 0u:
          v10 = 13;
          goto LABEL_7;
        case 1u:
          v10 = 1;
          goto LABEL_7;
        case 2u:
          v10 = 2;
          goto LABEL_7;
        case 3u:
          v10 = 3;
          goto LABEL_7;
        case 4u:
          v10 = 6;
          goto LABEL_7;
        case 5u:
          v10 = 4;
          if ( !dword_145C8 )
            v10 = 1;
          goto LABEL_7;
        case 6u:
        case 0xBu:
          v10 = 5;
          goto LABEL_7;
        case 9u:
        case 0xDu:
          v10 = 4;
LABEL_7:
          LOWORD(v17) = v10;
          HIDWORD(v17) = 0;
          v22 = 0;
          if ( (v9 & 0x4000) == 0 )
          {
            if ( (BYTE2(dword_143F8) & 0xFE) == 0xA2 )
              sub_5230(
                (__int64)"Bad input file: at position %08llX IDA found a self-\n"
                         "relative fixup on LIDATA. This is not permitted.",
                qword_145E0);
            v22 = 1;
          }
          goto LABEL_10;
        case 0xAu:
          if ( !v7 || (v9 & 0x4000) == 0 )
            goto LABEL_32;
          HIDWORD(v17) = 0;
          LOWORD(v17) = 4;
          v22 = 0;
LABEL_10:
          v21 = v9 & 0x3FF;
          if ( v21 >= qword_14408 )
            sub_52E0("fixup_offset");
          sub_5890(a1, -1, 1);
          v11 = *(_QWORD *)(a1 + 48);
          v12 = *(_QWORD *)a1;
          *(_QWORD *)(a1 + 48) = v11 + 1;
          sub_6A80(*(_BYTE *)(v12 + v11), (_QWORD *)a1, (char *)v7, (__int64)&v17);
          a2(&v17);
          break;
        default:
LABEL_32:
          sub_52E0("fixup_type");
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}
