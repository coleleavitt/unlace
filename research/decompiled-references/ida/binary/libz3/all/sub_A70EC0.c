__int64 __fastcall sub_A70EC0(__int64 a1, __int64 **a2, __int64 a3, __m128i **a4)
{
  __int64 v5; // rax
  void *v6; // rbx
  _OWORD *v7; // r13
  __m128i *v8; // r15
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  __int64 *v12; // r14
  __int64 v13; // rax
  _QWORD ***v14; // rcx
  __int64 v15; // r8
  int v16; // edx
  _QWORD ***v17; // rsi
  _QWORD ***v18; // rdx
  _QWORD ***v19; // r9
  _QWORD **v20; // rax
  __int64 *v21; // r10
  __int64 *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp-10h] [rbp-E0h]
  __m128i *v27; // [rsp+0h] [rbp-D0h]
  __int64 *v28; // [rsp+0h] [rbp-D0h]
  __int64 *v29; // [rsp+18h] [rbp-B8h]
  __int64 v32; // [rsp+38h] [rbp-98h]
  __m128i *v33; // [rsp+48h] [rbp-88h] BYREF
  __m128i v34; // [rsp+50h] [rbp-80h] BYREF
  void *v35[2]; // [rsp+60h] [rbp-70h] BYREF
  int v36; // [rsp+70h] [rbp-60h]
  void *ptr[2]; // [rsp+80h] [rbp-50h] BYREF
  int v38; // [rsp+90h] [rbp-40h]

  v5 = sub_186B270(0x100u);
  v36 = 0;
  *(_QWORD *)v5 = 0;
  v6 = (void *)v5;
  *(_BYTE *)(v5 + 8) = 1;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_BYTE *)(v5 + 40) = 1;
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_BYTE *)(v5 + 72) = 1;
  *(_QWORD *)(v5 + 80) = 0;
  *(_QWORD *)(v5 + 96) = 0;
  *(_BYTE *)(v5 + 104) = 1;
  *(_QWORD *)(v5 + 112) = 0;
  *(_QWORD *)(v5 + 128) = 0;
  *(_BYTE *)(v5 + 136) = 1;
  *(_QWORD *)(v5 + 144) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_BYTE *)(v5 + 168) = 1;
  *(_QWORD *)(v5 + 176) = 0;
  *(_QWORD *)(v5 + 192) = 0;
  *(_BYTE *)(v5 + 200) = 1;
  *(_QWORD *)(v5 + 208) = 0;
  *(_QWORD *)(v5 + 224) = 0;
  *(_BYTE *)(v5 + 232) = 1;
  *(_QWORD *)(v5 + 240) = 0;
  v35[1] = &byte_8;
  v7 = (_OWORD *)sub_186B270(0x40u);
  v8 = *(__m128i **)(a1 + 16);
  v38 = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  ptr[1] = &byte_8;
  if ( !v8 )
  {
    v12 = *a2;
    if ( !*a2 )
    {
      sub_186B220(v7);
      return sub_186B220(v6);
    }
    v29 = &v12[*((unsigned int *)v12 - 1)];
    if ( v29 == v12 )
      goto LABEL_23;
    goto LABEL_7;
  }
  v27 = (__m128i *)((char *)v8 + 8 * v8[-1].m128i_u32[3]);
  if ( v27 != v8 )
  {
    v9 = (__int64 *)v8;
    v8 = nullptr;
    do
    {
      v10 = *v9;
      v34.m128i_i8[0] = 1;
      v35[0] = v6;
      v34.m128i_i64[1] = v10;
      ptr[0] = v7;
      v33 = v8;
      sub_A6FE30(a1, &v34, (_QWORD ***)a2, a3, (__int64)v35, (char **)ptr, &v33, a4);
      v6 = v35[0];
      ++v9;
      v8 = v33;
      v7 = ptr[0];
    }
    while ( v27 != (__m128i *)v9 );
    result = (__int64)a2;
    v12 = *a2;
    if ( !*a2 )
      goto LABEL_22;
    result = (__int64)&v12[*((unsigned int *)v12 - 1)];
    v29 = (__int64 *)result;
    if ( (__int64 *)result == v12 )
      goto LABEL_22;
    goto LABEL_7;
  }
  v12 = *a2;
  if ( *a2 )
  {
    v8 = nullptr;
    v29 = &v12[*((unsigned int *)v12 - 1)];
    if ( v29 == v12 )
    {
LABEL_23:
      result = sub_186B220(v7);
LABEL_24:
      if ( !v6 )
        goto LABEL_26;
      goto LABEL_25;
    }
    do
    {
LABEL_7:
      v13 = *(unsigned int *)(a3 + 8);
      v14 = *(_QWORD ****)a3;
      v32 = *v12;
      v15 = *(unsigned int *)(*(_QWORD *)*v12 + 12LL);
      v16 = v13 - 1;
      v13 *= 16;
      v17 = (_QWORD ***)(*(_QWORD *)a3 + v13);
      v18 = (_QWORD ***)(16LL * ((unsigned int)v15 & v16));
      v19 = (_QWORD ***)((char *)v18 + *(_QWORD *)a3);
      if ( v18 != (_QWORD ***)v13 )
      {
        v18 = (_QWORD ***)((char *)v18 + (_QWORD)v14);
        do
        {
          v20 = *v18;
          if ( (unsigned __int64)*v18 > 1 )
          {
            if ( *((_DWORD *)*v20 + 3) == (_DWORD)v15 && (_QWORD **)*v12 == v20 )
            {
              v32 = *v12;
              v20 = v18;
              goto LABEL_15;
            }
          }
          else if ( !v20 )
          {
            v32 = *v12;
            goto LABEL_15;
          }
          v18 += 2;
        }
        while ( v17 != v18 );
        v32 = *v12;
      }
      if ( v14 != v19 )
      {
        v17 = (_QWORD ***)v32;
        while ( 1 )
        {
          v20 = *v14;
          if ( (unsigned __int64)*v14 > 1 )
          {
            v18 = (_QWORD ***)*v20;
            if ( *((_DWORD *)*v20 + 3) == (_DWORD)v15 && (_QWORD **)v32 == v20 )
            {
              v20 = v14;
              goto LABEL_15;
            }
          }
          else if ( !v20 )
          {
            goto LABEL_15;
          }
          v14 += 2;
          if ( v19 == v14 )
          {
            v20 = nullptr;
            goto LABEL_15;
          }
        }
      }
      v20 = nullptr;
LABEL_15:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD ***, _QWORD ***, _QWORD ***, __int64, _QWORD ***))(*v20[1] + 32LL))(
             v20[1],
             v17,
             v18,
             v14,
             v15,
             v19) )
      {
        v34.m128i_i8[0] = 0;
        v35[0] = v6;
        ptr[0] = v7;
        v25 = *(_QWORD *)(v32 + 8);
        v33 = v8;
        v34.m128i_i64[1] = v25;
        sub_A6FE30(a1, &v34, (_QWORD ***)a2, a3, (__int64)v35, (char **)ptr, &v33, a4);
        v6 = v35[0];
        v8 = v33;
        v7 = ptr[0];
      }
      ++v12;
    }
    while ( v29 != v12 );
    result = (__int64)a2;
    v21 = *a2;
    if ( *a2 )
    {
      result = (__int64)&v21[*((unsigned int *)v21 - 1)];
      v28 = (__int64 *)result;
      if ( v21 != (__int64 *)result )
      {
        v22 = *a2;
        do
        {
          v23 = *v22;
          v34.m128i_i8[0] = 0;
          v35[0] = v6;
          v24 = *(_QWORD *)(v23 + 8);
          ptr[0] = v7;
          v33 = v8;
          v34.m128i_i64[1] = v24;
          sub_A6FE30(a1, &v34, (_QWORD ***)a2, a3, (__int64)v35, (char **)ptr, &v33, a4);
          result = v26;
          v6 = v35[0];
          ++v22;
          v8 = v33;
          v7 = ptr[0];
        }
        while ( v28 != v22 );
      }
    }
LABEL_22:
    if ( !v7 )
      goto LABEL_24;
    goto LABEL_23;
  }
  v8 = nullptr;
  sub_186B220(v7);
LABEL_25:
  result = sub_186B220(v6);
LABEL_26:
  if ( v8 )
    return sub_186B220(&v8[-1].m128i_u64[1]);
  return result;
}

