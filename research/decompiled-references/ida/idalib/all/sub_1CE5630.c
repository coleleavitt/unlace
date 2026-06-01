__int64 __fastcall sub_1CE5630(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        __m128i *a5,
        __int64 *a6,
        double a7,
        double a8)
{
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  int v17; // ecx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v23; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+8h] [rbp-D8h] BYREF
  void *ptr; // [rsp+10h] [rbp-D0h]
  __int64 v26; // [rsp+18h] [rbp-C8h]
  _BYTE v27[64]; // [rsp+20h] [rbp-C0h] BYREF
  void *v28[2]; // [rsp+60h] [rbp-80h]
  __int64 v29; // [rsp+70h] [rbp-70h]
  _QWORD *v30; // [rsp+78h] [rbp-68h]
  __int64 v31; // [rsp+80h] [rbp-60h]
  int v32; // [rsp+88h] [rbp-58h]
  __int64 v33; // [rsp+90h] [rbp-50h] BYREF
  __int128 v34; // [rsp+98h] [rbp-48h]
  __int64 v35; // [rsp+A8h] [rbp-38h]

  v30 = a1;
  v31 = a3;
  ptr = v27;
  v32 = a4;
  v26 = 0x800000000LL;
  *(_OWORD *)v28 = 0;
  v24 = 0;
  v29 = 0;
  sub_B85890(&v33, a3);
  v34 = 0;
  v35 = 0x101010000LL;
  sub_1A395A0((__int64)&v24);
  v10 = sub_1CE41F0((__int64)a1, (__int64)&v24, a2, a5, 0, 0, 0.0, a8, 0x100000000LL, nullptr, 1u);
  if ( !(_BYTE)v10 )
  {
    v11 = (unsigned int)v26;
    v14 = v10;
    if ( !(_DWORD)v26 )
      goto LABEL_13;
    if ( (_DWORD)v24 == 5 )
    {
      *(_WORD *)((char *)&v35 + 3) = 0;
      goto LABEL_17;
    }
    if ( (_DWORD)v24 == 2 )
    {
      v15 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
      v16 = *(_BYTE *)(v15 + 28) & 0x7F;
      v17 = v16;
      if ( (unsigned int)v16 - 53 <= 1 || ((v16 + 52) & 0x7Fu) <= 1 )
      {
        v15 = sub_B72ED0(v15);
        v16 = *(_BYTE *)(v15 + 28) & 0x7F;
        v17 = v16;
      }
      if ( (unsigned int)(v17 - 68) <= 6 )
      {
        v18 = (v16 + 67) & 0x7F;
        if ( (unsigned __int8)v18 <= 0xBu )
        {
          v19 = 2689;
          if ( _bittest64(&v19, v18) )
          {
            if ( a6 )
            {
              v20 = a1[31];
              sub_F22AA0((unsigned __int64 *)&v23, v15);
              v21 = v20;
              v14 = 1;
              *a6 = sub_A80CA0(v21, a5->m128i_i64[1], 0, v23);
LABEL_13:
              if ( !BYTE3(v35) )
              {
LABEL_23:
                if ( !BYTE4(v35) || (_DWORD)v24 != 5 )
                  goto LABEL_17;
LABEL_32:
                sub_1A445B0((__int64)v30, (__int64)&v24, v11, v12, v13);
                goto LABEL_17;
              }
              goto LABEL_14;
            }
            v14 = 1;
          }
        }
      }
    }
    if ( !BYTE3(v35) )
      goto LABEL_17;
    goto LABEL_15;
  }
  v14 = 0;
  if ( !BYTE3(v35) )
    goto LABEL_23;
LABEL_14:
  if ( (_DWORD)v24 == 5 )
  {
    if ( !BYTE4(v35) )
      goto LABEL_17;
    goto LABEL_32;
  }
LABEL_15:
  if ( v28[1] && (*(_BYTE *)(v30[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v30, (__int64)&v24);
    goto LABEL_23;
  }
LABEL_17:
  if ( v28[0] )
    sub_1A39780((char *)v28[0]);
  if ( ptr != v27 )
    free(ptr);
  return v14;
}
