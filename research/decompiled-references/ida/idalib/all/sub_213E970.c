__int64 __fastcall sub_213E970(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  unsigned __int8 v5; // al
  unsigned int v6; // ebp
  __int64 *v7; // r13
  __int64 *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  void *v11; // rdi
  _QWORD *v12; // r12
  _QWORD *v13; // rbx
  void *v14; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-218h]
  char *v22; // [rsp+8h] [rbp-210h]
  void *v23[2]; // [rsp+30h] [rbp-1E8h] BYREF
  __int64 v24; // [rsp+40h] [rbp-1D8h]
  __m128 v25; // [rsp+50h] [rbp-1C8h] BYREF
  void *v26[2]; // [rsp+60h] [rbp-1B8h]
  __int64 v27; // [rsp+70h] [rbp-1A8h]
  __int16 v28; // [rsp+78h] [rbp-1A0h]
  const char *v29; // [rsp+80h] [rbp-198h] BYREF
  int v30; // [rsp+88h] [rbp-190h]
  __int128 v31; // [rsp+90h] [rbp-188h]
  __int64 v32; // [rsp+A0h] [rbp-178h]
  char v33; // [rsp+A8h] [rbp-170h]
  int v34; // [rsp+ACh] [rbp-16Ch]
  void **p_ptr; // [rsp+B0h] [rbp-168h]
  void *ptr; // [rsp+C0h] [rbp-158h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-150h]
  _WORD v38[160]; // [rsp+D8h] [rbp-140h] BYREF

  v4 = a2;
  *(_OWORD *)v26 = 0;
  v28 = 0;
  v25 = 0u;
  v27 = 0;
  *(_OWORD *)v23 = 0;
  v24 = 0;
  v29 = "expected identifier in '.irp' directive";
  LOWORD(v32) = 259;
  v5 = sub_213B1B0(a1, &v25, a3, a4, 0, 259);
  if ( (unsigned __int8)sub_2154470(a1, v5, &v29)
    || (v38[4] = 259, ptr = "expected comma", (unsigned __int8)sub_2154510(a1, 26, &ptr))
    || (unsigned __int8)sub_213DB00(a1, nullptr, (__int64)v23, v16, v17, v18)
    || (unsigned __int8)sub_21544B0(a1) )
  {
    v6 = 1;
  }
  else
  {
    v6 = 1;
    v21 = sub_2139590(a1, a2);
    if ( v21 )
    {
      ptr = v38;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
      v30 = 2;
      v29 = (const char *)&off_2BEBEE0;
      v33 = 0;
      v34 = 1;
      v32 = 0;
      v31 = 0;
      p_ptr = &ptr;
      sub_227B8B0(&v29, 0, 0, 0);
      v22 = (char *)v23[1];
      if ( v23[1] != v23[0] )
      {
        v19 = (char *)v23[0];
        do
        {
          v20 = sub_212F510(a1, (__int64)&v29, v21, (__int64)&v25, 1, 1, (__int64)v19, 1u);
          if ( (_BYTE)v20 )
          {
            v6 = v20;
            goto LABEL_35;
          }
          v19 += 24;
        }
        while ( v22 != v19 );
        v4 = a2;
      }
      v6 = 0;
      sub_2139C60(a1, v4, &v29);
LABEL_35:
      v29 = (const char *)&unk_2C76288;
      sub_227B7A0(&v29);
      if ( ptr != v38 )
        free(ptr);
    }
  }
  v7 = (__int64 *)v23[1];
  v8 = (__int64 *)v23[0];
  if ( v23[1] != v23[0] )
  {
    do
    {
      while ( 1 )
      {
        v9 = v8[1];
        v10 = *v8;
        if ( v9 != *v8 )
        {
          do
          {
            if ( *(_DWORD *)(v10 + 32) > 0x40u )
            {
              v11 = *(void **)(v10 + 24);
              if ( v11 )
                operator delete[](v11);
            }
            v10 += 40;
          }
          while ( v9 != v10 );
          v10 = *v8;
        }
        if ( !v10 )
          break;
        v8 += 3;
        operator delete((void *)v10);
        if ( v8 == v7 )
          goto LABEL_12;
      }
      v8 += 3;
    }
    while ( v7 != v8 );
LABEL_12:
    v8 = (__int64 *)v23[0];
  }
  if ( v8 )
    operator delete(v8);
  v12 = v26[1];
  v13 = v26[0];
  if ( v26[1] != v26[0] )
  {
    do
    {
      if ( *((_DWORD *)v13 + 8) > 0x40u )
      {
        v14 = (void *)v13[3];
        if ( v14 )
          operator delete[](v14);
      }
      v13 += 5;
    }
    while ( v12 != v13 );
    v13 = v26[0];
  }
  if ( v13 )
    operator delete(v13);
  return v6;
}
