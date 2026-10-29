void __fastcall sub_118F190(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  char *v8; // r15
  size_t v9; // rax
  size_t v10; // rax
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  size_t v16; // [rsp+8h] [rbp-F0h]
  __m128i v17; // [rsp+10h] [rbp-E8h] BYREF
  __int16 v18; // [rsp+30h] [rbp-C8h]
  __m128i v19[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int16 v20; // [rsp+60h] [rbp-98h]
  __m128i v21[8]; // [rsp+70h] [rbp-88h] BYREF

  v6 = sub_10DCD30(a1, 0x82Cu);
  if ( v6 )
  {
    v7 = v6;
    if ( (unsigned __int8)sub_1189FF0(v6, a1, a3, a4) )
    {
      v8 = **(char ***)(v7 + 48);
      v9 = j__strlen("none");
      if ( v8 )
      {
        v16 = v9;
        v10 = j__strlen(v8);
        v11 = v10;
        if ( v10 == v16 )
        {
          if ( v10 && memcmp(v8, "none", v10) )
          {
            if ( v11 != j__strlen("zlib") )
              goto LABEL_17;
            goto LABEL_8;
          }
LABEL_21:
          sub_10DC5D0(a2, (__int64)"--compress-debug-sections=none");
          return;
        }
        if ( v10 != j__strlen("zlib") )
        {
          if ( v11 != j__strlen("zstd") )
            goto LABEL_16;
          if ( !v11 )
          {
LABEL_19:
            if ( !(unsigned __int8)sub_2218210() )
            {
              sub_FC70B0((__int64)v21, *a3, 0, 533);
              sub_1188FA0((unsigned __int8 **)v21, (__int64)"zstd");
              sub_AEA040((__int64)v21);
              return;
            }
LABEL_10:
            v17.m128i_i64[0] = (__int64)v8;
            v18 = 261;
            v20 = 259;
            v19[0].m128i_i64[0] = (__int64)"--compress-debug-sections=";
            v17.m128i_i64[1] = v11;
            sub_A41580(v21, v19, &v17, v12, v13, v14);
            v15 = sub_10DA6C0(a1, (__int64)v21);
            sub_10DC5D0(a2, v15);
            return;
          }
LABEL_18:
          if ( !memcmp(v8, "zstd", v11) )
            goto LABEL_19;
LABEL_16:
          sub_FC70B0((__int64)v21, *a3, 0, 497);
          sub_AEC220((unsigned __int8 **)v21, *(_BYTE **)(v7 + 24), *(_QWORD *)(v7 + 32));
          sub_AEC220((unsigned __int8 **)v21, v8, v11);
          sub_AEA040((__int64)v21);
          return;
        }
        if ( v11 )
        {
LABEL_8:
          if ( !memcmp(v8, "zlib", v11) )
            goto LABEL_9;
LABEL_17:
          if ( v11 != j__strlen("zstd") )
            goto LABEL_16;
          goto LABEL_18;
        }
      }
      else
      {
        if ( !v9 )
          goto LABEL_21;
        v11 = j__strlen("zlib");
        if ( v11 )
        {
          v11 = j__strlen("zstd");
          if ( !v11 )
            goto LABEL_19;
          v11 = 0;
          goto LABEL_16;
        }
      }
LABEL_9:
      if ( !(unsigned __int8)sub_2218200() )
      {
        sub_FC70B0((__int64)v21, *a3, 0, 533);
        sub_1188FA0((unsigned __int8 **)v21, (__int64)"zlib");
        sub_AEA040((__int64)v21);
        return;
      }
      goto LABEL_10;
    }
  }
}
