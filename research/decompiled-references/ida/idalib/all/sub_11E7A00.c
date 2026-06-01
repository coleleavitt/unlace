void __fastcall sub_11E7A00(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __m128i v17; // xmm0
  int v18; // edx
  __int128 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-D0h]
  __m128i v21; // [rsp+10h] [rbp-C8h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v23; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-98h] BYREF
  void *v25[2]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v26[16]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v27[4]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v28; // [rsp+90h] [rbp-48h]

  v4 = *(_DWORD *)(a1 + 3932);
  if ( v4 == 1 )
  {
    if ( *(_DWORD *)(a1 + 3936) == 2 )
      v17 = _mm_loadu_si128((const __m128i *)(a1 + 3956));
    else
      v17 = _mm_loadu_si128((const __m128i *)(a1 + 3940));
    v21 = v17;
    goto LABEL_27;
  }
  v21 = _mm_loadu_si128((const __m128i *)(a1 + 3940));
  if ( v4 != 3 )
  {
    if ( v4 == 2 )
    {
      v6 = *(_DWORD *)(a1 + 3936);
      if ( !v6 )
      {
        sub_10DC5D0(a3, (__int64)"-tvos_version_min");
        goto LABEL_10;
      }
      if ( v6 == 1 )
      {
        sub_10DC5D0(a3, (__int64)"-tvos_simulator_version_min");
        goto LABEL_10;
      }
LABEL_9:
      sub_10DC5D0(a3, (__int64)"-macosx_version_min");
      goto LABEL_10;
    }
    if ( v4 == 4 )
    {
      sub_10DC5D0(a3, (__int64)"-driverkit_version_min");
      goto LABEL_10;
    }
LABEL_27:
    if ( (unsigned int)(v4 - 1) <= 1 )
    {
      v18 = *(_DWORD *)(a1 + 3936);
      if ( v18 == 1 )
      {
        sub_10DC5D0(a3, (__int64)"-ios_simulator_version_min");
        goto LABEL_10;
      }
      if ( !v18 )
      {
        sub_10DC5D0(a3, (__int64)"-iphoneos_version_min");
        goto LABEL_10;
      }
      if ( *(_DWORD *)(a1 + 3936) == 2 )
      {
        sub_10DC5D0(a3, (__int64)"-maccatalyst_version_min");
        goto LABEL_10;
      }
    }
    goto LABEL_9;
  }
  v5 = *(_DWORD *)(a1 + 3936);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      sub_10DC5D0(a3, (__int64)"-watchos_simulator_version_min");
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  sub_10DC5D0(a3, (__int64)"-watchos_version_min");
LABEL_10:
  v7 = sub_22B8070(a1 + 1760);
  v22[1] = v8;
  v9 = v8;
  v10 = v7;
  v22[0] = v7;
  if ( ((unsigned int)v8 | HIDWORD(v7)) & 0x7FFFFFFF | (unsigned int)v7 | HIDWORD(v8) & 0x7FFFFFFF
    && (unsigned __int8)sub_A09E20((unsigned int *)&v21, (unsigned int *)v22) )
  {
    v21.m128i_i64[0] = v10;
    v21.m128i_i64[1] = v9;
  }
  sub_2257830(v25, &v21);
  v28 = 260;
  v27[0] = v25;
  v11 = sub_10DA6C0(a2, (__int64)v27);
  sub_10DC5D0(a3, v11);
  if ( v25[0] != v26 )
    operator delete(v25[0]);
  if ( *(_BYTE *)(a1 + 4104) )
  {
    v12 = *(_DWORD *)(a1 + 4092);
    v13 = a1 + 4048;
    v23 = 0;
    if ( (v12 & 0xFFFFFFF7) == 1 )
    {
      sub_10DC5D0(a3, (__int64)"-macosx_version_min");
      sub_22B7D00(v13, &v23);
    }
    else
    {
      sub_10DC5D0(a3, (__int64)"-maccatalyst_version_min");
      *(_QWORD *)&v19 = sub_22B83A0(v13);
      v23 = v19;
    }
    v15 = sub_22B8070(v13);
    v24[0] = v15;
    v24[1] = v14;
    if ( (_DWORD)v15 )
    {
      v20 = v14;
      if ( (unsigned __int8)sub_A09E20((unsigned int *)&v23, (unsigned int *)v24) )
      {
        *(_QWORD *)&v23 = v15;
        *((_QWORD *)&v23 + 1) = v20;
      }
    }
    sub_2257830(v25, &v23);
    v27[0] = v25;
    v28 = 260;
    v16 = sub_10DA6C0(a2, (__int64)v27);
    sub_10DC5D0(a3, v16);
    if ( v25[0] != v26 )
      operator delete(v25[0]);
  }
}
