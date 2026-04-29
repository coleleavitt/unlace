unsigned __int64 __fastcall sub_47140(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  char *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // r12d
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rbx
  int flags; // edx
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-250h]
  unsigned __int16 v18; // [rsp+16h] [rbp-242h]
  __int16 v19; // [rsp+18h] [rbp-240h]
  __int16 v20; // [rsp+18h] [rbp-240h]
  const char *v21; // [rsp+20h] [rbp-238h] BYREF
  _BYTE v22[24]; // [rsp+28h] [rbp-230h]
  __int64 v23; // [rsp+40h] [rbp-218h]
  __int16 v24; // [rsp+48h] [rbp-210h]
  __int128 v25; // [rsp+50h] [rbp-208h]
  __int64 v26; // [rsp+60h] [rbp-1F8h]
  __int64 v27; // [rsp+68h] [rbp-1F0h]
  int v28; // [rsp+70h] [rbp-1E8h]
  __int64 v29; // [rsp+78h] [rbp-1E0h]
  int v30; // [rsp+80h] [rbp-1D8h]
  __int64 v31; // [rsp+88h] [rbp-1D0h]
  int v32; // [rsp+90h] [rbp-1C8h]
  __int64 v33; // [rsp+98h] [rbp-1C0h]
  int v34; // [rsp+A0h] [rbp-1B8h]
  __int64 v35; // [rsp+A8h] [rbp-1B0h]
  __int128 v36; // [rsp+B0h] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-198h]
  __int64 v38; // [rsp+C8h] [rbp-190h]
  __int64 v39; // [rsp+D0h] [rbp-188h]
  char v40; // [rsp+D8h] [rbp-180h] BYREF
  char v41; // [rsp+D9h] [rbp-17Fh]
  unsigned __int16 v42; // [rsp+DEh] [rbp-17Ah]
  __int64 v43; // [rsp+100h] [rbp-158h]
  __int16 v44; // [rsp+110h] [rbp-148h]
  _QWORD v45[8]; // [rsp+218h] [rbp-40h] BYREF

  v45[0] = __readfsqword(0x28u);
  if ( (a2 & 3) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 544);
    if ( v2 == -1 )
    {
      v37 = -1;
      v5 = &v40;
      v38 = 0;
      v39 = 0;
      v36 = -1;
      do
      {
        *(_WORD *)v5 = 0;
        v5 += 40;
        *((_WORD *)v5 - 19) = 0;
        *((_WORD *)v5 - 18) = 0;
        *((_DWORD *)v5 - 2) = 0;
        *((_WORD *)v5 - 17) = 0;
        *((_OWORD *)v5 - 2) = 0;
        *((_QWORD *)v5 - 2) = 0;
      }
      while ( v5 != (char *)v45 );
      if ( (unsigned int)decode_insn(&v36, a2, v45, 0.0) == 4
        && (_WORD)v38 == 206
        && v41 == 1
        && v42 > 0xCu
        && (v43 & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
      {
        v6 = 4 * (unsigned int)v42 - 128;
        if ( v44 == (_DWORD)v6 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (a2 + -v44);
          if ( (unsigned int)decode_insn(&v36, v7, v6, 0.0) )
          {
            v8 = 0x10000000140LL;
            if ( (v38 & 0x1000000FFFFLL) == 0x10000000140LL )
            {
              v9 = v7 - 4;
              v10 = 31;
              v18 = WORD1(v38);
              while ( v7 >= v9 )
              {
                if ( a2 != v9 )
                {
                  if ( (unsigned int)decode_insn(&v36, v9, v8, 0.0) != 4
                    || (_WORD)v38 != 206
                    || v41 != 1
                    || v42 != v10
                    || (v43 & 0xFFFF00000000FF00LL) != 0x1000000000400LL
                    || (v8 = (unsigned int)v44, (_DWORD)v8 != 4 * v10 - 128) )
                  {
                    if ( a2 < v9 )
                      return 0;
                    break;
                  }
                }
                if ( --v10 == 12 )
                {
                  v16 = *(_QWORD *)(a1 + 32);
                  *(_QWORD *)(a1 + 544) = v7;
                  v12 = 13;
                  *(_DWORD *)(a1 + 552) = 13;
                  v13 = *(_QWORD *)(v16 + 16) & v9;
                  v17 = v13;
                  goto LABEL_30;
                }
                v9 -= 4LL;
              }
              v11 = *(_QWORD *)(a1 + 32);
              v12 = v10 + 1;
              *(_QWORD *)(a1 + 544) = v7;
              *(_DWORD *)(a1 + 552) = v12;
              v13 = *(_QWORD *)(v11 + 16) & (v9 + 4);
              v17 = v13;
              if ( v12 == 32 )
                goto LABEL_38;
              do
              {
LABEL_30:
                flags = get_flags_ex(v13, 4);
                if ( (~(_WORD)flags & 0x600) != 0 )
                {
                  v19 = flags;
                  create_insn(v13, 0);
                  LOWORD(flags) = v19;
                }
                else if ( (flags & 0x10000000) != 0 )
                {
                  v20 = flags;
                  del_func(v13);
                  LOWORD(flags) = v20;
                }
                if ( (flags & 0xC000) != 0x4000 && !(unsigned __int8)is_public_name(v13) )
                {
                  v21 = nullptr;
                  *(_OWORD *)v22 = 0;
                  sub_47050((__int64 *)&v21, (__int64)"_save32gpr_%d", v12);
                  v15 = s1;
                  if ( *(_QWORD *)v22 )
                    v15 = v21;
                  set_name(v13, v15, 289);
                  if ( v21 )
                  {
                    *(_QWORD *)v22 = 0;
                    qfree(v21, v15, 0, 0.0);
                  }
                }
                ++v12;
                v13 += 4;
              }
              while ( v12 != 32 );
              v13 = v17;
LABEL_38:
              v21 = (const char *)v13;
              v27 = 0;
              *(_QWORD *)v22 = v7 + v18;
              *(__m128i *)&v22[8] = _mm_load_si128((const __m128i *)&xmmword_77DA0);
              v23 = 0;
              v26 = 0xFFFFFFFFLL;
              v24 = 0;
              v28 = 0;
              v29 = 0;
              v30 = 0;
              v31 = 0;
              v32 = 0;
              v33 = 0;
              v34 = 0;
              v35 = 0;
              v25 = 0;
              add_func_ex(&v21);
              v2 = *(_QWORD *)(a1 + 544);
              return (v2 - a2) >> 2;
            }
          }
        }
      }
    }
    else if ( a2 >= v2 - 4 * (32 - *(_DWORD *)(a1 + 552)) && a2 < v2 )
    {
      return (v2 - a2) >> 2;
    }
  }
  return 0;
}
