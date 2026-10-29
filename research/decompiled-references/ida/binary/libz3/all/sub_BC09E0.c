__m128 *__fastcall sub_BC09E0(__m128 *a1, __int64 a2, unsigned int *a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  _DWORD *v9; // rbp
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  _DWORD *v18; // rbx
  bool v19; // zf
  int v20; // eax
  _OWORD *v21; // rax
  __m128i si128; // xmm1
  int v23[4]; // [rsp+0h] [rbp-E8h] BYREF
  int v24[2]; // [rsp+18h] [rbp-D0h]
  __m128 *v25; // [rsp+20h] [rbp-C8h]
  _QWORD *v26; // [rsp+28h] [rbp-C0h]
  int v27[2]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE *v28; // [rsp+38h] [rbp-B0h]
  __int64 v29; // [rsp+40h] [rbp-A8h]
  _QWORD v30[3]; // [rsp+48h] [rbp-A0h] BYREF
  void *v31; // [rsp+60h] [rbp-88h] BYREF
  __int64 v32; // [rsp+68h] [rbp-80h]
  _BYTE v33[120]; // [rsp+70h] [rbp-78h] BYREF

  v25 = a1;
  v28 = v33;
  v31 = v33;
  v32 = 0x1000000000LL;
  *(_QWORD *)v23 = a2 + 1728;
  if ( !(unsigned __int8)sub_163BAA0(a2 + 1728, a3, &v31) )
  {
    sub_1872CE0("");
    sub_1873130(114, 2784);
  }
  *(_QWORD *)v27 = *(_QWORD *)(a2 + 24);
  if ( (_DWORD)v32 )
  {
    v6 = sub_163B0B0(*(_QWORD *)v23, &v31, (unsigned int)(v32 - 1));
    v7 = *(_QWORD *)(a2 + 1736);
    v29 = v6;
    v8 = sub_15E1AF0(v7);
    v9 = (_DWORD *)v8;
    if ( v8 )
      ++*(_DWORD *)(v8 + 8);
    v10 = v32 - 2;
    if ( (_DWORD)v32 != 1 )
    {
      v26 = v30;
      while ( 1 )
      {
        v12 = sub_163B0B0(*(_QWORD *)v23, &v31, v10);
        v13 = *(_QWORD *)(a2 + 1736);
        v30[0] = v12;
        v14 = sub_15E1AF0(v13);
        v15 = *(_QWORD *)(a2 + 24);
        v16 = *(_QWORD *)(a2 + 1736);
        v30[1] = v14;
        *(_QWORD *)v24 = v15;
        v30[2] = v9;
        v17 = sub_15E1AF0(v16);
        v18 = (_DWORD *)v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        if ( v9 && (v19 = v9[2] == 1, --v9[2], v19) )
        {
          sub_15D7BC0(*(_QWORD *)v24, v9);
          v11 = v10 - 1;
          if ( !v10 )
            goto LABEL_20;
        }
        else
        {
          v11 = v10 - 1;
          if ( !v10 )
            goto LABEL_20;
        }
        v9 = v18;
        v10 = v11;
      }
    }
    v18 = (_DWORD *)v8;
LABEL_20:
    v20 = sub_966380(a2, a3, v18);
    *(__m128 *)v23 = _mm_loadh_ps((const double *)v27);
    sub_BBF3C0((_QWORD *)a2, v20, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a4);
    sub_BB77A0((_QWORD *)(a2 + 136), a3, (__int64)v18, 0);
    v21 = v25;
    si128 = _mm_load_si128((const __m128i *)v23);
    *(_BYTE *)(a2 + 4169) = 1;
    *v21 = si128;
  }
  else
  {
    *v25 = _mm_loadh_ps((const double *)v27);
    if ( a3 )
      ++a3[2];
  }
  if ( v31 != v28 && v31 )
    sub_186B220(v31);
  return v25;
}

