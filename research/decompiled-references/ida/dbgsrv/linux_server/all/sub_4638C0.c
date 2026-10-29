/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4638C0
// Address: 0x00000000004638C0

//----- (00000000004638C0) ----------------------------------------------------
__int64 __fastcall sub_4638C0(
        __int64 a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ebp
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  char v14; // r14
  __int64 v15; // r13
  void *v16; // rsi
  size_t v17; // rdx
  bool v18; // zf
  __off64_t v20; // r15
  __int64 v21; // rcx
  __int64 v22; // r8
  _BYTE *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE *v26; // r15
  size_t v27; // rax
  int v28; // eax
  int v29; // [rsp+Ch] [rbp-31Ch]
  void *ptr; // [rsp+10h] [rbp-318h] BYREF
  __m128i v31; // [rsp+18h] [rbp-310h]
  _QWORD v32[3]; // [rsp+30h] [rbp-2F8h] BYREF
  char v33; // [rsp+48h] [rbp-2E0h]
  void *src; // [rsp+50h] [rbp-2D8h]
  __int128 v35; // [rsp+58h] [rbp-2D0h]
  void *v36; // [rsp+68h] [rbp-2C0h]
  __int128 v37; // [rsp+70h] [rbp-2B8h]
  __int64 (__fastcall **v38)(); // [rsp+80h] [rbp-2A8h] BYREF
  void *v39; // [rsp+88h] [rbp-2A0h]
  __int128 v40; // [rsp+90h] [rbp-298h]
  int v41; // [rsp+C8h] [rbp-260h]
  unsigned __int16 v42; // [rsp+CCh] [rbp-25Ch]
  unsigned __int16 v43; // [rsp+CEh] [rbp-25Ah]
  unsigned int v44; // [rsp+D4h] [rbp-254h]
  int v45; // [rsp+D8h] [rbp-250h]
  unsigned __int16 v46; // [rsp+DCh] [rbp-24Ch]
  __int64 v47; // [rsp+2D0h] [rbp-58h]
  unsigned __int64 v48; // [rsp+2E8h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v38 = off_4C33F8;
  v40 = 0;
  v39 = nullptr;
  v10 = sub_45D5F0((__int64)&v38, a2, 1u, 1u, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10);
  if ( !(_BYTE)v10 )
    goto LABEL_29;
  v11 = v42;
  if ( v42 == 512 )
  {
    v29 = 31;
  }
  else
  {
    if ( v42 <= 0x200u )
    {
      if ( v42 > 0x1C4u )
      {
        v29 = (unsigned __int16)(v42 - 496) < 3u ? 15 : -1;
      }
      else if ( v42 > 0x1A1u )
      {
        LOWORD(v11) = v42 - 418;
        switch ( v11 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
          case 4LL:
          case 6LL:
            v29 = 18;
            break;
          case 30LL:
          case 32LL:
          case 34LL:
            goto LABEL_58;
          default:
LABEL_37:
            v29 = -1;
            break;
        }
      }
      else
      {
        LOWORD(v11) = v42 - 332;
        switch ( v11 )
        {
          case 0LL:
          case 1LL:
          case 2LL:
            goto LABEL_57;
          case 22LL:
          case 23LL:
          case 26LL:
          case 28LL:
          case 29LL:
            goto LABEL_55;
          case 56LL:
            v29 = 24;
            break;
          default:
            goto LABEL_37;
        }
      }
      goto LABEL_14;
    }
    if ( v42 == 2560 )
    {
LABEL_58:
      v29 = 13;
    }
    else
    {
      if ( v42 > 0xA00u )
      {
        if ( v42 == 0x8664 )
        {
LABEL_57:
          v29 = 0;
        }
        else
        {
          v29 = 37;
          if ( v42 != 0x9041 )
          {
            v12 = 57;
            if ( v42 != 3772 )
              v12 = -1;
            v29 = v12;
          }
        }
        goto LABEL_14;
      }
      if ( v42 != 870 )
      {
        if ( v42 > 0x366u )
        {
          if ( v42 != 1126 )
          {
            v28 = 27;
            if ( v42 != 1312 )
              v28 = -1;
            v29 = v28;
            goto LABEL_14;
          }
        }
        else if ( v42 != 614 )
        {
          v29 = 8 * (v42 == 616) - 1;
          goto LABEL_14;
        }
      }
LABEL_55:
      v29 = 12;
    }
  }
LABEL_14:
  ptr = nullptr;
  v31 = 0;
  if ( v44 )
  {
    v20 = v44 + (unsigned __int64)(unsigned int)(18 * v45);
    if ( v20 == sub_47F740(a2, v20, 0) && sub_47F6E0(a2, v32, 4, v21, v22) == 4 && LODWORD(v32[0]) > 4 )
    {
      sub_47F740(a2, -4, 1);
      if ( (unsigned __int8)sub_462B80(a2, v32, 1u, -1, -1) )
      {
        v23 = sub_4813B0((unsigned int)(LODWORD(v32[0]) + 1));
        v26 = v23;
        if ( v23 )
        {
          v27 = sub_47F6E0(a2, v23, LODWORD(v32[0]), v24, v25);
          if ( v27 == LODWORD(v32[0]) )
          {
            v26[v27] = 0;
            if ( ptr )
            {
              v31.m128i_i64[0] = 0;
              j__free(ptr);
            }
            ptr = v26;
            v31 = _mm_unpacklo_epi64(
                    (__m128i)(unsigned int)(LODWORD(v32[0]) + 1),
                    (__m128i)(unsigned int)(LODWORD(v32[0]) + 1));
          }
          else
          {
            j__free(v26);
          }
        }
      }
    }
  }
  v32[0] = off_4C34A8;
  v32[1] = a2;
  v32[2] = &ptr;
  v33 = 0;
  src = nullptr;
  v36 = nullptr;
  v35 = 0;
  v37 = 0;
  if ( v41 == 23126 )
    v13 = v47 + 40;
  else
    v13 = v46 + (_DWORD)v47 + 24;
  sub_45C810((__int64)&v38, a2, v13, v43, (__int64)v32);
  v14 = v33;
  if ( (unsigned __int64)v37 > 1 )
    sub_4821A0((_BYTE *)(a1 + 1034), (char *)v36, 4096);
  else
    *(_BYTE *)(a1 + 1034) = 0;
  v15 = v35;
  v16 = src;
  v17 = (int)v35;
  *(_DWORD *)(a1 + 4) = v29;
  if ( v17 > 0x400 )
  {
    *(_WORD *)(a1 + 8) = 1024;
    memmove((void *)(a1 + 10), v16, 0x400u);
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 1) = v14;
  }
  else
  {
    *(_WORD *)(a1 + 8) = v15;
    memmove((void *)(a1 + 10), v16, v17);
    v18 = v33 == 0;
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 1) = v14;
    if ( v18 && !v15 )
      LOBYTE(v10) = (unsigned __int64)v37 > 1;
  }
  v32[0] = off_4C34A8;
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    j__free(v36);
  }
  if ( src )
  {
    *(_QWORD *)&v35 = 0;
    j__free(src);
  }
  if ( ptr )
  {
    v31.m128i_i64[0] = 0;
    j__free(ptr);
  }
LABEL_29:
  v38 = off_4C33F8;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    j__free(v39);
  }
  return v10;
}
// 463C8A: variable 'v21' is possibly undefined
// 463C8A: variable 'v22' is possibly undefined
// 463D00: variable 'v24' is possibly undefined
// 463D00: variable 'v25' is possibly undefined
// 4C33F8: using guessed type __int64 (__fastcall *off_4C33F8[2])();
// 4C34A8: using guessed type __int64 (__fastcall *off_4C34A8[3])();
