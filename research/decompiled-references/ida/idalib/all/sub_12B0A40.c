void __fastcall sub_12B0A40(__int64 a1, __int64 a2, const __m128i *a3, void *a4)
{
  __int32 v6; // eax
  __int64 v7; // r12
  const char *v8; // r15
  __int64 v9; // r13
  size_t v10; // r9
  size_t v11; // rcx
  _BYTE *v12; // r10
  _BYTE *v13; // r14
  int v14; // eax
  char v15; // al
  __int64 v16; // rax
  __int64 v17; // rdx
  void **v18; // rcx
  void ***v19; // rdx
  const void *v20; // [rsp+0h] [rbp-D8h]
  size_t v21; // [rsp+8h] [rbp-D0h]
  size_t v22; // [rsp+10h] [rbp-C8h]
  __int64 v23; // [rsp+18h] [rbp-C0h]
  void *v24[2]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-A8h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-88h] BYREF
  __int16 v28; // [rsp+60h] [rbp-78h]
  void **v29; // [rsp+70h] [rbp-68h] BYREF
  __int64 v30; // [rsp+78h] [rbp-60h]
  const char *v31; // [rsp+80h] [rbp-58h]
  __int64 v32; // [rsp+88h] [rbp-50h]
  __int16 v33; // [rsp+90h] [rbp-48h]

  sub_121FCF0(a1, a2, a3, (__int64)a4);
  *(_QWORD *)a1 = off_2C3FFE0;
  sub_122CEF0(a1 + 2384, (__int64)a3, a4);
  v6 = a3[2].m128i_i32[0];
  if ( v6 == 30 )
  {
    v7 = 8;
    v8 = "/sparcv9";
    v9 = a1 + 624;
    if ( !*(_BYTE *)(a1 + 2384) )
      goto LABEL_5;
LABEL_19:
    v16 = *(_QWORD *)(a1 + 2464);
    v29 = *(void ***)(a1 + 2456);
    v30 = v16;
    v31 = (const char *)(a1 + 2520);
    v33 = 1029;
    sub_11C52D0(a2, (__int64)&v29, v9);
    v17 = *(_QWORD *)(a1 + 2496);
    v18 = *(void ***)(a1 + 2488);
    v31 = v8;
    v30 = v17;
    v29 = v18;
    v32 = v7;
    v33 = 1285;
    sub_11C52D0(a2, (__int64)&v29, v9);
    goto LABEL_5;
  }
  v7 = 6;
  v8 = "/amd64";
  if ( v6 != 38 )
  {
    v7 = 0;
    v8 = &byte_22F0C30;
  }
  v9 = a1 + 624;
  if ( *(_BYTE *)(a1 + 2384) )
    goto LABEL_19;
LABEL_5:
  v10 = *(_QWORD *)(a2 + 112);
  v11 = *(_QWORD *)(a2 + 496);
  v12 = *(_BYTE **)(a2 + 104);
  v13 = *(_BYTE **)(a2 + 488);
  if ( v11 <= v10 )
  {
    if ( !v11
      || (v22 = *(_QWORD *)(a2 + 112),
          v21 = *(_QWORD *)(a2 + 496),
          v20 = *(const void **)(a2 + 104),
          v14 = memcmp(v20, *(const void **)(a2 + 488), v21),
          v12 = v20,
          v11 = v21,
          v10 = v22,
          !v14) )
    {
      v26[0] = v27;
      sub_12AF280(v26, v12, (__int64)&v12[v10]);
      if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v26[1] <= 6 )
        goto LABEL_26;
      sub_9EE560(v26, "/../lib", 7u);
      v33 = 260;
      v29 = v26;
      sub_11C52D0(a2, (__int64)&v29, v9);
      if ( v26[0] != v27 )
        operator delete(v26[0]);
      v13 = *(_BYTE **)(a2 + 488);
      v11 = *(_QWORD *)(a2 + 496);
    }
  }
  v29 = (void **)v8;
  v33 = 261;
  v24[0] = v25;
  v30 = v7;
  sub_12AF280(v24, v13, (__int64)&v13[v11]);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v24[1] <= 7 )
LABEL_26:
    std::__throw_length_error("basic_string::append");
  sub_9EE560(v24, "/usr/lib", 8u);
  v15 = v33;
  if ( (_BYTE)v33 )
  {
    if ( (_BYTE)v33 == 1 )
    {
      v26[0] = v24;
      v28 = 260;
    }
    else
    {
      if ( HIBYTE(v33) == 1 )
      {
        v19 = (void ***)v29;
        v23 = v30;
      }
      else
      {
        v19 = &v29;
        v15 = 2;
      }
      v26[0] = v24;
      v27[0] = v19;
      v27[1] = v23;
      LOBYTE(v28) = 4;
      HIBYTE(v28) = v15;
    }
  }
  else
  {
    v28 = 256;
  }
  sub_11C52D0(a2, (__int64)v26, v9);
  if ( v24[0] != v25 )
    operator delete(v24[0]);
}
