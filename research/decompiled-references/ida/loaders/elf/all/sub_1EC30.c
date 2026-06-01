const char *__fastcall sub_1EC30(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        double a6,
        double a7,
        double a8)
{
  const char *v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int8 v10; // bp
  __int64 v11; // rax
  __int64 v12; // r14
  const char *result; // rax
  int v14; // eax
  __int64 v15; // rax
  int dword; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v23; // [rsp+20h] [rbp-68h]
  __int128 v24; // [rsp+28h] [rbp-60h]
  __int16 v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+3Ch] [rbp-4Ch]
  __int16 v27; // [rsp+44h] [rbp-44h]
  unsigned __int64 v28; // [rsp+48h] [rbp-40h]

  v8 = (const char *)a3;
  v9 = a4;
  v10 = a2;
  v11 = *(_QWORD *)(a1 + 16);
  v28 = __readfsqword(0x28u);
  v12 = a5;
  if ( *(_WORD *)(v11 + 520) != 1 )
  {
    if ( !*(_BYTE *)(a1 + 404) )
      sub_1AEA0(a1);
    v14 = *(_DWORD *)(a1 + 376);
    if ( !v14 )
      return nullptr;
    if ( v14 != 4 )
    {
      v20 = *(_QWORD *)(a1 + 388);
      v21 = *(_QWORD *)(a1 + 396);
      if ( *(_DWORD *)(get_ph(a1, a2, v21) + 4) != 15 )
      {
        sub_1AAC0(a1, a2, v21);
        goto LABEL_45;
      }
      sub_101F0(0xBB9u, v20, v21);
      *(_DWORD *)(a1 + 376) = 4;
    }
LABEL_8:
    a6 = 0.0;
    a2 = 0xFFFFFFFFLL;
    v22[0] = a1;
    v23 = 0;
    v25 = -1;
    v26 = 0;
    v27 = 257;
    v24 = 0;
    if ( v10 <= 0x1Au )
    {
      if ( v10 )
      {
        switch ( v10 )
        {
          case 1u:
            a4 = 5;
            HIWORD(v26) = 5;
            break;
          case 2u:
            a3 = 6;
            HIWORD(v26) = 6;
            break;
          case 3u:
            HIWORD(v26) = 1;
            break;
          case 4u:
            HIWORD(v26) = 2;
            break;
          case 5u:
            HIWORD(v26) = 3;
            break;
          case 6u:
            HIWORD(v26) = 4;
            break;
          case 7u:
            HIWORD(v26) = 7;
            break;
          case 0xAu:
            HIWORD(v26) = 22;
            break;
          case 0xBu:
            HIWORD(v26) = 23;
            break;
          case 0x1Au:
            HIWORD(v26) = -32747;
            break;
          default:
            goto LABEL_11;
        }
      }
      goto LABEL_16;
    }
    if ( v10 == 0xFB )
    {
      a5 = 4294934547LL;
      HIWORD(v26) = -32749;
      goto LABEL_16;
    }
    if ( v10 > 0xFBu )
    {
      if ( v10 == 0xFC )
        HIWORD(v26) = -32748;
      goto LABEL_16;
    }
    if ( v10 == 0xF9 )
    {
      HIWORD(v26) = -32751;
      goto LABEL_16;
    }
    if ( v10 == 0xFA )
    {
      HIWORD(v26) = -32750;
LABEL_16:
      if ( v9 < *(_QWORD *)(*(_QWORD *)(a1 + 8) + 312LL) )
      {
        v9 += v12;
      }
      else
      {
        v23 = v12;
        HIBYTE(v27) = 0;
      }
      v15 = *(_QWORD *)(a1 + 388);
      v22[1] = v9;
      *(_QWORD *)&v24 = v15;
      dword = get_dword(v8, a2, a3, a4, a5);
      sub_1D2B0(v22, dword);
      sub_1D4D0(v22, v8, v17, v18, v19, a6, a7, a8);
      return nullptr;
    }
LABEL_11:
    if ( v10 == 56 )
    {
      a3 = 9;
      HIWORD(v26) = 9;
      goto LABEL_16;
    }
    if ( v10 <= 0x38u )
    {
      if ( v10 == 38 )
      {
        a2 = 8;
        HIWORD(v26) = 8;
      }
      else if ( v10 == 44 )
      {
        a4 = 4294934552LL;
        HIWORD(v26) = -32744;
      }
      goto LABEL_16;
    }
LABEL_45:
    if ( v10 == 57 )
      HIWORD(v26) = 10;
    goto LABEL_16;
  }
  result = "Invalid TOC16 relocation (no TOC)";
  if ( *(_DWORD *)(a1 + 376) == 1 )
    goto LABEL_8;
  return result;
}

