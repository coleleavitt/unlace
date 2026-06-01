/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_466B48
// Address: 0x0000000000466B48

//----- (0000000000466B48) ----------------------------------------------------
__int64 __fastcall sub_466B48(__int64 a1)
{
  unsigned int *v2; // x0
  void *v3; // x22
  void *v4; // x1
  __int64 v5; // x0
  __int64 v6; // x3
  const char *v7; // x25
  char *v8; // x0
  unsigned int v10; // w22
  __int64 v11; // x1
  __int64 (__fastcall *v12)(__int64); // x1
  _DWORD *v13; // x0
  unsigned int v14; // w19
  int v16; // w1
  int v17; // w20
  int v18; // w0
  const char *v19; // x26
  int v20; // w27
  int v21; // w4
  int v22; // w3
  __int64 v23; // x0
  char v24; // w5
  int v25; // w2
  unsigned __int64 v26; // x26
  void *v27; // x27
  __int64 v28; // x25
  __int64 v29; // x1
  void *(__fastcall *v30)(__int64, unsigned __int8, __int64 *); // x3
  void *v31; // x0
  __int64 v32; // x1
  void *ptr; // [xsp+58h] [xbp-38h] BYREF
  unsigned __int64 v34; // [xsp+60h] [xbp-30h]
  __int64 v35; // [xsp+68h] [xbp-28h]
  void *v36; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v37; // [xsp+78h] [xbp-18h]
  __int64 v38; // [xsp+80h] [xbp-10h]

  sub_479010(3, (__int64 *)&ptr);
  sub_4631C0((__int64)&ptr, 0x1Fu);
  sub_4631C0((__int64)&ptr, 0xBu);
  sub_4631C0((__int64)&ptr, 8u);
  v2 = (unsigned int *)sub_46F150(a1 + 192, 3u, (__int64 *)&ptr, 0);
  v3 = v2;
  if ( v2 )
  {
    v4 = (char *)v2 + 5;
    v5 = *v2;
    v36 = v4;
    v37 = (unsigned __int64)v4 + v5;
    if ( !(unsigned int)sub_48E5A8((unsigned __int8 **)&v36, (unsigned __int64)v4 + v5) )
    {
      sub_463500(a1, "[%d] Incompatible IDA version\n", *(_DWORD *)(a1 + 168));
      *(_BYTE *)(a1 + 261) = 0;
      j__free(v3);
      goto LABEL_11;
    }
    v6 = *(_QWORD *)(a1 + 448);
    if ( *(_QWORD *)(v6 + 120) <= 1u )
      goto LABEL_29;
    v7 = (const char *)v36;
    if ( v37 > (unsigned __int64)v36 )
    {
      v8 = (char *)v36 + 1;
      if ( *(_BYTE *)v36 )
      {
        while ( (char *)v37 != v8 )
        {
          if ( !*v8++ )
            goto LABEL_23;
        }
      }
      else
      {
LABEL_23:
        v36 = v8;
        v19 = *(const char **)(v6 + 112);
        if ( v7 )
        {
          v20 = strlen(v7);
          v21 = strlen(v19);
          v22 = v21 ^ v20;
          if ( v21 && v20 > 0 )
          {
            v23 = 0;
            do
            {
              v24 = v7[v23];
              v25 = (int)v23++ % v21;
              v22 |= (unsigned __int8)(v19[v25] ^ v24);
            }
            while ( v20 > (int)v23 );
          }
          if ( !v22 )
          {
LABEL_29:
            *(_BYTE *)(a1 + 261) = 1;
            j__free(v3);
            v10 = 1;
            goto LABEL_30;
          }
        }
      }
    }
    sub_463500(a1, "[%d] Bad password\n", *(_DWORD *)(a1 + 168));
    *(_BYTE *)(a1 + 261) = 0;
    j__free(v3);
    v10 = 0;
LABEL_30:
    sub_479010(0, (__int64 *)&v36);
    v27 = v36;
    v26 = v37;
    v36 = nullptr;
    v37 = 0;
    v28 = v38;
    v38 = 0;
    if ( ptr )
    {
      v34 = 0;
      j__free(ptr);
      ptr = v27;
      v34 = v26;
      v35 = v28;
      if ( v36 )
      {
        v37 = 0;
        j__free(v36);
      }
    }
    else
    {
      ptr = v27;
      v34 = v26;
      v35 = v28;
    }
    sub_4631C0((__int64)&ptr, v10);
    sub_477C00(a1 + 192, (__int64 *)&ptr);
    *(_DWORD *)(a1 + 256) = -1;
    *(_BYTE *)(a1 + 261) = 1;
    if ( v10 )
    {
      v29 = *(_QWORD *)(a1 + 192);
      v36 = nullptr;
      v37 = 0;
      v38 = 0;
      v30 = *(void *(__fastcall **)(__int64, unsigned __int8, __int64 *))(v29 + 16);
      if ( v30 == sub_4628F0 )
        v31 = sub_46F150(a1 + 192, 3u, (__int64 *)&v36, 0);
      else
        v31 = v30(a1 + 192, 3u, (__int64 *)&v36);
      if ( v31 )
        j__free(v31);
      if ( v36 )
      {
        v37 = 0;
        j__free(v36);
      }
    }
LABEL_11:
    v11 = *(_QWORD *)a1;
    *(_BYTE *)(a1 + 200) = 0;
    v12 = *(__int64 (__fastcall **)(__int64))(v11 + 56);
    if ( v12 == sub_4626C0 )
      goto LABEL_12;
LABEL_41:
    if ( !(unsigned __int8)v12(a1) )
      goto LABEL_13;
    goto LABEL_18;
  }
  sub_463500(a1, "[%d] Could not establish the connection\n", *(_DWORD *)(a1 + 168));
  v32 = *(_QWORD *)a1;
  *(_BYTE *)(a1 + 200) = 0;
  v12 = *(__int64 (__fastcall **)(__int64))(v32 + 56);
  if ( v12 != sub_4626C0 )
    goto LABEL_41;
LABEL_12:
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 440) + 860LL) )
    goto LABEL_13;
LABEL_18:
  sub_463500(
    a1,
    "[%d] Broken connection (mode=%d)\n",
    *(_DWORD *)(a1 + 168),
    *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL));
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 448) + 140LL);
  if ( v16 != 1 )
  {
    v13 = *(_DWORD **)(a1 + 440);
    if ( v16 != 2 )
      goto LABEL_14;
    v17 = v13[164];
    sub_463500(a1, "[%d] Debugged process PID: %d\n", *(_DWORD *)(a1 + 168), v17);
    v13 = *(_DWORD **)(a1 + 440);
    if ( v17 <= 0 )
      goto LABEL_14;
    sub_463500(a1, "[%d] Killing debugged process %d\n", *(_DWORD *)(a1 + 168), v13[164]);
    v18 = sub_466A98(a1);
    if ( v18 )
      sub_463500(a1, "[%d] Failed to kill process after %d seconds. Giving up\n", *(_DWORD *)(a1 + 168), v18);
LABEL_13:
    v13 = *(_DWORD **)(a1 + 440);
LABEL_14:
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 112LL))(v13);
    sub_4759C8(a1);
    v14 = 1;
    goto LABEL_15;
  }
  sub_4759C8(a1);
  sub_463500(a1, "[%d] Debugged session entered into sleeping mode\n", *(_DWORD *)(a1 + 168));
  if ( byte_5222B0 )
    sub_463638(a1);
  v14 = 0;
LABEL_15:
  if ( ptr )
  {
    v34 = 0;
    j__free(ptr);
  }
  return v14;
}
// 5222B0: using guessed type char byte_5222B0;
