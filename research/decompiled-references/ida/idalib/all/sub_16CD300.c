__int64 __fastcall sub_16CD300(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // r12
  __int64 v26; // rax
  unsigned __int8 v27; // cl
  int v28; // edx
  _QWORD *v29; // rcx
  __int64 v30; // r8
  __int64 *v31; // rsi
  _QWORD *v32; // rdx
  _QWORD *v33; // rcx
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-E8h] BYREF
  _OWORD *v39; // [rsp+8h] [rbp-E0h]
  __int64 v40; // [rsp+10h] [rbp-D8h]
  _OWORD v41[5]; // [rsp+18h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-80h]
  __int64 v43; // [rsp+70h] [rbp-78h]
  __int64 v44; // [rsp+78h] [rbp-70h]
  int v45; // [rsp+80h] [rbp-68h]
  __int64 v46; // [rsp+88h] [rbp-60h] BYREF
  __m128i si128; // [rsp+90h] [rbp-58h]
  __int64 v48; // [rsp+A0h] [rbp-48h]

  v6 = a5 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = a1 + 24;
  if ( *(_BYTE *)(v7 + 16) == 48 )
  {
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = 1;
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 20) = 1;
    v15 = sub_F60F10(v7, (__int64)a2, a3, a4, v6, a6);
    if ( (*((_BYTE *)v15 + 28) & 0x7Fu) - 59 <= 2 )
    {
      v16 = v15[16];
      if ( v16 || (sub_7052B0((__int64 *)(v15[13] + 96LL), v15[13], v11, v12, v13, v14), (v16 = v15[16]) != 0) )
      {
        if ( *(_QWORD *)(v16 + 88) )
        {
          v17 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a4 + 248) + 17504LL), a2, a3);
          v40 = 0x800000000LL;
          v18 = v17;
          v39 = v41;
          v41[4] = 0;
          v44 = v17;
          v38 = 0;
          v42 = 0;
          v43 = a4;
          v45 = 0;
          sub_B85890(&v46, v17);
          v48 = 0x101010000LL;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
          sub_1A395A0(&v38);
          *(_WORD *)((char *)&v48 + 3) = 0;
          v23 = sub_F60F10(v7, v18, v19, v20, v21, v22);
          if ( v23 )
            v23 += 8;
          if ( (unsigned __int8)sub_1A48440(a4, &v38, v23, 0) )
          {
            v24 = v39;
            v25 = (_QWORD *)v39 + (unsigned int)v40;
            if ( v39 != (_OWORD *)v25 )
            {
              do
              {
                v26 = *v24 & 0xFFFFFFFFFFFFFFF8LL;
                v27 = *(_BYTE *)(v26 + 28) & 0x7F;
                v28 = v27;
                if ( (unsigned int)v27 - 53 <= 1 || ((v27 + 52) & 0x7Fu) <= 1 )
                {
                  v26 = sub_B72ED0(v26);
                  v28 = *(_BYTE *)(v26 + 28) & 0x7F;
                }
                if ( (unsigned int)(v28 - 35) > 3 )
                  goto LABEL_27;
                if ( !*(_BYTE *)(a1 + 20) )
                  goto LABEL_31;
                v29 = *(_QWORD **)a1;
                v30 = *(unsigned int *)(a1 + 12);
                v31 = (__int64 *)(*(_QWORD *)a1 + 8 * v30);
                if ( *(__int64 **)a1 != v31 )
                {
                  v32 = *(_QWORD **)a1;
                  if ( *v29 == v26 )
                    goto LABEL_21;
                  do
                  {
                    if ( v31 == ++v32 )
                      break;
                  }
                  while ( v26 != *v32 );
                }
                if ( (unsigned int)v30 < *(_DWORD *)(a1 + 8) )
                {
                  *(_DWORD *)(a1 + 12) = v30 + 1;
                  *v31 = v26;
                  v29 = *(_QWORD **)a1;
                  v32 = (_QWORD *)(*(_QWORD *)a1 + 8 * v30);
                }
                else
                {
LABEL_31:
                  v37 = sub_2236760(a1, v26);
                  v29 = *(_QWORD **)a1;
                  v32 = (_QWORD *)v37;
                  if ( !*(_BYTE *)(a1 + 20) )
                  {
                    v33 = &v29[*(unsigned int *)(a1 + 8)];
                    goto LABEL_22;
                  }
                }
LABEL_21:
                v33 = &v29[*(unsigned int *)(a1 + 12)];
LABEL_22:
                if ( v33 != v32 && *v32 >= 0xFFFFFFFFFFFFFFFELL )
                {
                  v34 = v32 + 1;
                  do
                  {
                    v35 = v34;
                    if ( v33 == v34 )
                      break;
                    ++v34;
                  }
                  while ( *v35 >= 0xFFFFFFFFFFFFFFFELL );
                }
LABEL_27:
                ++v24;
              }
              while ( v25 != v24 );
            }
          }
          sub_169D230((__int64)&v38);
        }
      }
    }
  }
  else
  {
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = 1;
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 20) = 1;
  }
  return a1;
}
