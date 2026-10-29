__int64 __fastcall sub_18C8840(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned int *v11; // rdi
  _QWORD *v12; // rsi
  _BYTE *v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int16 v16; // dx
  __int64 v17; // rax
  unsigned int v18; // r14d
  unsigned int v19; // r14d
  unsigned int v20; // eax
  _QWORD *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // r13
  int v26; // [rsp+0h] [rbp-1C8h]
  __int64 v27; // [rsp+0h] [rbp-1C8h]
  __int64 v28; // [rsp+0h] [rbp-1C8h]
  __int64 v29; // [rsp+8h] [rbp-1C0h]
  char v30; // [rsp+14h] [rbp-1B4h]
  unsigned int v31; // [rsp+14h] [rbp-1B4h]
  __int64 v32; // [rsp+18h] [rbp-1B0h]
  char v33; // [rsp+27h] [rbp-1A1h] BYREF
  __int64 v34; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v35[2]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v36; // [rsp+40h] [rbp-188h] BYREF
  unsigned int v37; // [rsp+48h] [rbp-180h]
  __int64 v38; // [rsp+50h] [rbp-178h] BYREF
  void *ptr; // [rsp+60h] [rbp-168h] BYREF
  __m128i si128; // [rsp+68h] [rbp-160h]
  _BYTE v41[24]; // [rsp+78h] [rbp-150h] BYREF
  __int64 v42; // [rsp+90h] [rbp-138h] BYREF
  __int16 v43; // [rsp+98h] [rbp-130h]
  char v44; // [rsp+9Ah] [rbp-12Eh]
  char v45; // [rsp+9Bh] [rbp-12Dh]
  void *v46; // [rsp+A0h] [rbp-128h]
  size_t v47; // [rsp+A8h] [rbp-120h]
  unsigned int v48[10]; // [rsp+B8h] [rbp-110h] BYREF
  _QWORD v49[29]; // [rsp+E0h] [rbp-E8h] BYREF

  v6 = a1[30];
  v33 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  ptr = v41;
  v7 = sub_145C740(v6, a2, (__int64 *)&ptr, &v33);
  if ( v33 )
  {
    v9 = 1;
    goto LABEL_3;
  }
  sub_13EE630((__int64)&v42, v7, (_BYTE *)(v7 + v8), *(_DWORD *)a2, a1[30], *(_WORD *)(a2 + 16));
  if ( !v45 )
  {
    v12 = (_QWORD *)a1[31];
    switch ( v43 )
    {
      case 10:
        v30 = 1;
        v29 = v12[2333];
        break;
      case 11:
        v13 = (_BYTE *)a1[29];
        if ( (*v13 & 8) != 0 )
        {
          v29 = v12[2344];
        }
        else
        {
          if ( (v13[3] & 0x20) == 0 )
          {
LABEL_15:
            if ( (v13[1] & 8) == 0 || v44 )
              v29 = v12[2340];
            else
              v29 = v12[2331];
            v30 = 2 * (v43 == 11);
            break;
          }
          v29 = v12[2335];
        }
        v30 = 2;
        break;
      case 12:
        v30 = 3;
        v29 = v12[2336];
        break;
      case 13:
        v30 = 4;
        v29 = v12[2337];
        break;
      default:
        v13 = (_BYTE *)a1[29];
        goto LABEL_15;
    }
    v14 = *(_DWORD *)a2;
    v26 = v42;
    v15 = sub_EEE9A0(24, v12, 8u);
    *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x4E;
    if ( unk_2CD7484 )
    {
      v32 = v15;
      sub_EE9B50(78);
      v15 = v32;
    }
    v16 = *(_WORD *)(v15 + 1);
    *(_DWORD *)(v15 + 20) = v14;
    v16 &= 0xF801u;
    *(_QWORD *)(v15 + 8) = v29;
    *(_WORD *)(v15 + 1) = v16;
    *(_DWORD *)(v15 + 16) = v26;
    *(_BYTE *)(v15 + 2) = (8 * v30) | HIBYTE(v16) & 0xC7;
    v34 = v15;
    v11 = (unsigned int *)v46;
    if ( v47 )
    {
      v17 = sub_6F3470(*(_QWORD *)(a1[31] + 17504), v46, v47);
      v18 = *(_DWORD *)a2;
      v27 = v17;
      v19 = sub_13D1C70(*(_DWORD *)a2, v48[8], a1[34], a1[29]) + v18;
      if ( a3 )
      {
        v20 = *(_DWORD *)a2;
        v21 = (_QWORD *)a1[31];
        v35[1] = 0;
        v31 = v20;
        v35[0] = *(_QWORD *)(v34 + 8);
        if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35[0] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
                             - 2) <= 4u )
        {
          v22 = sub_A72210(v21, v35[0]);
          v21 = (_QWORD *)a1[31];
          v35[0] = v22;
        }
        v23 = sub_B87830((__int64)(v21 + 2192), v27);
        v37 = v19;
        v36 = v23;
        v28 = v23;
        sub_B85890(&v38, v23);
        v49[0] = v19;
        v38 = v19;
        sub_18BBF60((__int64)v49, (__int64)a1, v28, v19, 0);
        v24 = a3;
        v25 = 1;
        if ( (unsigned int)sub_1A5BB50((_DWORD)a1, v24, (unsigned int)v49, (unsigned int)v35, 1, 0, 0, 0, 1, 0) )
          v25 = sub_1C03D10((_DWORD)a1, (unsigned int)v49, (unsigned int)&v36, (unsigned int)&v34, 1, v31, 0);
        v9 = v25;
        sub_169D230((__int64)v49);
        v11 = (unsigned int *)v46;
      }
      else
      {
        v9 = 1;
        sub_168B9F0((__int64)v49, a1 + 1, v19, 0x18u, 0);
        sub_15F7200(v49);
        v11 = (unsigned int *)v46;
      }
    }
    else
    {
      v9 = v15;
    }
    goto LABEL_8;
  }
  v11 = (unsigned int *)v46;
  v9 = 1;
LABEL_8:
  if ( v11 != v48 )
    free(v11);
LABEL_3:
  if ( ptr != v41 )
    free(ptr);
  return v9;
}
