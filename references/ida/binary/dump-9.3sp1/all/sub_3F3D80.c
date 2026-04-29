__int64 __fastcall sub_3F3D80(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rax
  _BYTE *v4; // r15
  unsigned int v5; // ebx
  int v6; // eax
  int v8; // eax
  _DWORD *v9; // rdi
  int v10; // eax
  int v11; // r12d
  int v12; // edx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  _DWORD *v18; // rsi
  unsigned __int8 v19; // al
  __int64 v20; // r12
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  char *v24; // rax
  __int64 v25; // rsi
  char *v26; // r12
  char *v27; // [rsp+0h] [rbp-C8h]
  char v28; // [rsp+17h] [rbp-B1h] BYREF
  __int64 v29; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+20h] [rbp-A8h] BYREF
  int v31; // [rsp+28h] [rbp-A0h]
  _QWORD v32[5]; // [rsp+30h] [rbp-98h] BYREF
  char v33; // [rsp+58h] [rbp-70h]
  __int64 v34; // [rsp+60h] [rbp-68h]
  unsigned int v35; // [rsp+68h] [rbp-60h]
  _DWORD v36[3]; // [rsp+7Ch] [rbp-4Ch] BYREF
  unsigned __int64 v37; // [rsp+88h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 8);
  v37 = __readfsqword(0x28u);
  v4 = a3;
  v33 = 0;
  memset(&v32[1], 0, 32);
  v32[0] = &off_4E9978;
  v34 = v3;
  v35 = 0;
  sub_11E900(a3, (__int64)v32);
  v5 = v35;
  if ( v35 )
    return v5;
  v6 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 42 )
  {
    if ( v4[32] != 4 )
      goto LABEL_4;
    v4 = *((_BYTE **)v4 + 5);
    v6 = *(_DWORD *)v4;
  }
  if ( v6 == 6 && v4[32] == 4 )
    v4 = *((_BYTE **)v4 + 5);
LABEL_4:
  if ( !(unsigned __int8)sub_11FD80(v4 + 48, &v29, 0) )
    return v5;
  v8 = *(_DWORD *)v4;
  if ( v29 )
  {
    if ( (unsigned int)(v8 - 43) <= 1 && (v29 == 1 || v29 == 64) )
    {
      v17 = v4[32] == 4;
      v28 = 0;
      if ( v17 )
      {
        v18 = *((_DWORD **)v4 + 5);
        if ( *v18 == 20 )
        {
          if ( v18 )
          {
            v19 = sub_3F3B10(*(_QWORD *)(a1 + 8), (__int64)v18, &v28);
            if ( (v19 & 0xBA) == 0 && v19 == (v29 | 4) && v28 )
            {
              v20 = *((_QWORD *)v4 + 5);
              v21 = *(_QWORD *)(a1 + 8);
              if ( v29 == 1 )
                v22 = *(_DWORD *)(v21 + 688);
              else
                v22 = *(_DWORD *)(v21 + 696);
              v31 = v22;
              v30 = 0x100000001LL;
              sub_125180(v20 + 32, (unsigned __int8 *)&v30);
              sub_11CDA0((__int64)&v30);
              v23 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 692LL);
              v30 = 0x100000001LL;
              v31 = v23;
              sub_125180(v20 + 48, (unsigned __int8 *)&v30);
              sub_11CDA0((__int64)&v30);
              sub_1207E0((char *)(v20 + 48), *(_QWORD *)(a1 + 8), 6, *(_QWORD *)(v20 + 24), *(_DWORD *)(v20 + 52));
              *(_OWORD *)(*((_QWORD *)v4 + 7) + 16LL) = 0;
              return 1;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v8 == 31 )
    {
      if ( (v4[4] & 0x10) != 0 )
        return v5;
      goto LABEL_10;
    }
    if ( (unsigned int)(v8 - 43) <= 1 || (unsigned int)(v8 - 32) <= 1 )
    {
LABEL_10:
      v9 = *(_DWORD **)(a1 + 8);
      v36[0] = 0;
      v10 = sub_3F3BB0(v9, (__int64)(v4 + 32), v36);
      v11 = v10;
      if ( !v10 )
        return 0;
      v12 = v36[0];
      if ( v10 == 1 )
      {
        v31 = v36[0];
        v30 = 0x100000001LL;
        sub_125180((__int64)(v4 + 32), (unsigned __int8 *)&v30);
        sub_11CDA0((__int64)&v30);
      }
      else
      {
        v13 = *((_QWORD *)v4 + 5);
        v14 = 19;
        if ( *(_DWORD *)v13 == 31 )
        {
          if ( v11 == 3 )
            return v5;
          v14 = 21;
        }
        *(_DWORD *)v13 = v14;
        v30 = 0x100000001LL;
        v31 = v12;
        sub_125180(v13 + 32, (unsigned __int8 *)&v30);
        sub_11CDA0((__int64)&v30);
        v30 = 0x100000001LL;
        v31 = v36[1];
        sub_125180(v13 + 48, (unsigned __int8 *)&v30);
        sub_11CDA0((__int64)&v30);
        if ( v11 == 3 )
        {
          v24 = (char *)j__qalloc_or_throw(80, (__int64)&v30, v15, v16);
          v25 = *(_QWORD *)(v13 + 24);
          v26 = v24;
          v27 = v24 + 32;
          *((_QWORD *)v24 + 4) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v24 + 5) = 0;
          *((_QWORD *)v24 + 6) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v24 + 7) = 0;
          *((_QWORD *)v24 + 8) = 0xFFFFFFFF00000000LL;
          *((_QWORD *)v24 + 9) = 0;
          sub_330970((__int64)v24, v25);
          *(_DWORD *)v26 = 19;
          sub_11CA10(v27, (char *)(v13 + 32));
          sub_11CA10(v26 + 48, (char *)(v13 + 48));
          *((_DWORD *)v26 + 17) = 1;
          *(_DWORD *)(v13 + 36) = 1;
          *(_BYTE *)(v13 + 32) = 4;
          *(_QWORD *)(v13 + 40) = v26;
          v30 = 0x100000001LL;
          v31 = v36[2];
          sub_125180(v13 + 48, (unsigned __int8 *)&v30);
          sub_11CDA0((__int64)&v30);
        }
      }
      if ( *(_DWORD *)v4 == 31 )
        *(_DWORD *)v4 = 33;
      return 1;
    }
  }
  return v5;
}
