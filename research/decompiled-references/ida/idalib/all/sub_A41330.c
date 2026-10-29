__int64 __fastcall sub_A41330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  void (__fastcall *v8)(__int128 *, __int64); // rbx
  __int64 v9; // r14
  _BYTE *v10; // r15
  size_t v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  void *v16; // [rsp+8h] [rbp-1D0h]
  void *v17[2]; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-1A8h] BYREF
  void *v20; // [rsp+40h] [rbp-198h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-188h] BYREF
  int v22; // [rsp+68h] [rbp-170h]
  void *v23; // [rsp+70h] [rbp-168h] BYREF
  _BYTE v24[16]; // [rsp+80h] [rbp-158h] BYREF
  void *v25; // [rsp+90h] [rbp-148h]
  __int64 v26; // [rsp+98h] [rbp-140h]
  _BYTE v27[16]; // [rsp+A0h] [rbp-138h] BYREF
  void *v28[2]; // [rsp+B0h] [rbp-128h]
  __int64 v29; // [rsp+C0h] [rbp-118h]
  _BYTE *v30; // [rsp+C8h] [rbp-110h]
  __int64 v31; // [rsp+D0h] [rbp-108h]
  _BYTE v32[256]; // [rsp+D8h] [rbp-100h] BYREF

  v8 = *(void (__fastcall **)(__int128 *, __int64))(a1 + 24);
  v9 = *(_QWORD *)(a1 + 32);
  sub_2253560(v17, &a7);
  v10 = v17[0];
  v16 = v17[1];
  v11 = j__strlen(&byte_22F0C30);
  v20 = v21;
  v19 = 0;
  sub_A40DF0(&v20, &byte_22F0C30, (__int64)(&byte_22F0C30 + v11));
  v23 = v24;
  v21[2] = -1;
  v22 = 0;
  sub_A40DF0(&v23, v10, (__int64)v16 + (_QWORD)v10);
  v25 = v27;
  v30 = v32;
  v31 = 0x400000000LL;
  v26 = 0;
  v27[0] = 0;
  *(_OWORD *)v28 = 0;
  v29 = 0;
  v8(&v19, v9);
  v12 = v30;
  v13 = &v30[48 * (unsigned int)v31];
  if ( v30 != (_BYTE *)v13 )
  {
    do
    {
      while ( 1 )
      {
        v13 -= 6;
        v14 = (_QWORD *)v13[2];
        if ( v14 == v13 + 4 )
          break;
        operator delete(v14);
        if ( v12 == v13 )
          goto LABEL_4;
      }
    }
    while ( v12 != v13 );
LABEL_4:
    v13 = v30;
  }
  if ( v13 != (_QWORD *)v32 )
    free(v13);
  if ( v28[0] )
    operator delete(v28[0]);
  if ( v25 != v27 )
    operator delete(v25);
  if ( v23 != v24 )
    operator delete(v23);
  if ( v20 != v21 )
    operator delete(v20);
  if ( v17[0] != &v18 )
    operator delete(v17[0]);
  *(_BYTE *)(a1 + 40) = 1;
  return 1;
}
