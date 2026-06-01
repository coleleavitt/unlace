__int64 __fastcall sub_9DED0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  int *v5; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  int v9; // eax
  _DWORD *v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  char v17; // al
  __int64 v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  _DWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r13
  __int64 v33; // rsi
  int v34; // eax
  unsigned int v35; // r15d
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-118h]
  __int64 v38; // [rsp+10h] [rbp-110h]
  __int64 v39; // [rsp+18h] [rbp-108h]
  char v40; // [rsp+28h] [rbp-F8h]
  __int64 v41; // [rsp+30h] [rbp-F0h]
  __int64 v42; // [rsp+38h] [rbp-E8h]
  __int64 v43; // [rsp+38h] [rbp-E8h]
  __int64 v44; // [rsp+40h] [rbp-E0h]
  __int64 v45; // [rsp+58h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-B8h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-B0h] BYREF
  _BYTE v49[16]; // [rsp+80h] [rbp-A0h] BYREF
  _QWORD v50[4]; // [rsp+90h] [rbp-90h] BYREF
  _QWORD v51[2]; // [rsp+B0h] [rbp-70h] BYREF
  _QWORD v52[2]; // [rsp+C0h] [rbp-60h] BYREF
  _QWORD v53[10]; // [rsp+D0h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v53[3] = __readfsqword(0x28u);
  v42 = v2;
  v4 = sub_11C8E0(a2, &v45, 14);
  if ( v4 )
  {
    v46 = a2;
    v5 = (int *)sub_129440(a1, v45, &v46, 0);
    v6 = (__int64)v5;
    if ( !v5 )
      return 0;
    v9 = *v5;
    if ( v9 != 13 )
    {
      v40 = 0;
      v44 = 0;
      LODWORD(v41) = 0;
      if ( v9 != 11 )
        goto LABEL_31;
LABEL_7:
      if ( *(_BYTE *)(v6 + 32) == 4 )
      {
        v10 = *(_DWORD **)(v6 + 40);
        if ( v10 )
        {
LABEL_9:
          if ( *v10 != 14 )
            return 0;
          v48[1] = 0;
          v48[0] = 0xFFFFFFFF00000000LL;
          if ( v4 || !v44 )
          {
            v12 = sub_1328E0(a1, a2, v4, v46, (_DWORD)v10, (unsigned int)v50, (__int64)&v47, v40 == 0 ? 2 : 6);
            if ( !v12 )
              goto LABEL_17;
            if ( *(_BYTE *)v47 != 4 )
              goto LABEL_17;
            v21 = *(_DWORD **)(v47 + 8);
            if ( *v21 != 9 )
              goto LABEL_17;
            v47 = (__int64)(v21 + 8);
            sub_125180(v48);
            if ( (unsigned __int8)sub_130BC0(a1, v46, v47, a2, v50[0], 0) )
            {
              sub_1571F0(a1, v46, v48, a2, v50[0], 4);
            }
            else
            {
              if ( *(_BYTE *)v50[0] != 4
                || !(unsigned __int8)sub_30D8F0(v42, a1, a2, *(_QWORD *)(v50[0] + 8LL), v46, v47) )
              {
                goto LABEL_17;
              }
              sub_1207E0(v48, v42, 8, *(_QWORD *)(a2 + 24), (unsigned int)(2 * *(_DWORD *)(v45 + 4)));
            }
          }
          else
          {
            v11 = sub_11C8A0(v10, &v47);
            v12 = v11;
            if ( !v11
              || sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL), *(unsigned int *)(a2 + 68), 1) >= 0
              || *(_BYTE *)v47 != 4
              || **(_DWORD **)(v47 + 8) != 9
              || (sub_125180(v48),
                  v47 = *(_QWORD *)(v47 + 8) + 32LL,
                  !(unsigned __int8)sub_12EA80(v42, a1, v41, v44, v46, v47, 0)) )
            {
LABEL_17:
              v7 = 0;
LABEL_18:
              sub_11CDA0(v48);
              return v7;
            }
          }
          v38 = v47;
          v37 = v46;
          v22 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
          v51[1] = 0;
          v52[1] = 0;
          v43 = v22;
          v51[0] = 0xFFFFFFFF00000000LL;
          v52[0] = 0xFFFFFFFF00000000LL;
          v53[0] = 0xFFFFFFFF00000000LL;
          v53[1] = 0;
          sub_330970(v50, -1);
          v39 = a2 + 64;
          sub_125180(v53);
          v7 = sub_126F10(v53, v43, (unsigned int)-*(_DWORD *)(a2 + 36));
          if ( (_BYTE)v7 )
          {
            v24 = *(_QWORD *)(a2 + 24);
            LODWORD(v50[0]) = 14;
            v50[3] = v24;
            sub_125180(v51);
            v25 = HIDWORD(v48[0]);
            if ( v44 )
            {
              if ( *(_BYTE *)v12 == 2 && (v35 = *(_DWORD *)(v12 + 4), HIDWORD(v48[0]) == v35) )
              {
                v36 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), (unsigned int)((int)v35 / 2), 1);
                sub_120A10(v51, v43, v36, v35, -1, 0);
                v25 = HIDWORD(v48[0]);
                v26 = *(_QWORD *)(a2 + 24);
                v27 = 8;
              }
              else
              {
                v26 = *(_QWORD *)(a2 + 24);
                v27 = 8;
              }
            }
            else
            {
              v26 = *(_QWORD *)(a2 + 24);
              v27 = 9;
            }
            sub_1207E0(v51, v43, v27, v26, v25);
            sub_125180(v52);
            sub_123A40(v49);
            LOBYTE(v28) = sub_95A00(a1, a2, (__int64)v50, v37, v12, v38, 1);
            v7 = v28;
            if ( (_BYTE)v28 )
            {
              sub_12AB50(v48, v43, HIDWORD(v48[0]), 2);
              if ( *(_QWORD *)(v6 + 8) )
              {
                sub_11D5A0(v6);
                v29 = *(_DWORD *)(a1 + 24);
                BYTE1(v29) &= ~2u;
                LOBYTE(v29) = v29 | 0x80;
                *(_DWORD *)(a1 + 24) = v29;
              }
              sub_179140(a1, a2);
              sub_93C10(a1, a2, (__int64)v50);
              if ( !(unsigned __int8)sub_125B60(v49, v39, 0) )
              {
                v32 = j__qalloc_or_throw(80, v39, v30, v31);
                v33 = *(_QWORD *)(a2 + 24);
                *(_QWORD *)(v32 + 32) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v32 + 40) = 0;
                *(_QWORD *)(v32 + 48) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v32 + 56) = 0;
                *(_QWORD *)(v32 + 64) = 0xFFFFFFFF00000000LL;
                *(_QWORD *)(v32 + 72) = 0;
                sub_330970(v32, v33);
                *(_DWORD *)v32 = 4;
                sub_11CA10(v32 + 32, v49);
                sub_11CA10(v32 + 64, v39);
                sub_A3160(a1, v32, a2);
              }
              sub_1253A0(a2, v50);
              v34 = *(_DWORD *)(a1 + 24);
              BYTE1(v34) &= ~2u;
              LOBYTE(v34) = v34 | 0x80;
              *(_DWORD *)(a1 + 24) = v34;
              sub_11D5D0(a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL));
              sub_992D0(a1, a2);
            }
            sub_11CDA0(v49);
          }
          sub_11CDA0(v53);
          sub_11CDA0(v52);
          sub_11CDA0(v51);
          goto LABEL_18;
        }
      }
LABEL_31:
      v7 = sub_1301F0(a1, a2, v45, v46, v6 + 64);
      if ( (_BYTE)v7 )
      {
        v10 = (_DWORD *)v6;
        goto LABEL_9;
      }
      if ( !v44 && *(_DWORD *)v6 == 12 )
      {
        v18 = sub_11C8E0(v6, v50, 11);
        if ( v18 )
        {
          if ( *(_BYTE *)v50[0] == 4 )
            return (unsigned int)sub_9D9F0(a1, a2, a2, (_DWORD *)v4, v46, *(_QWORD *)(v50[0] + 8LL), v46, v18, 0);
        }
      }
      return v7;
    }
    v40 = 0;
    v44 = v6 + 48;
    v41 = v46;
    v17 = sub_130BC0(a1, v46, v6 + 48, a2, v4 + 32, 0);
    goto LABEL_28;
  }
  v13 = sub_11C8E0(a2, &v45, 13);
  if ( v13 )
  {
    if ( *(_BYTE *)(v13 + 32) != 4 )
      goto LABEL_21;
    v4 = *(_QWORD *)(v13 + 40);
    if ( *(_DWORD *)v4 == 14 )
    {
      if ( v4 )
      {
        v40 = 0;
        v44 = v13 + 48;
        goto LABEL_44;
      }
    }
    else if ( *(_DWORD *)v4 == 5 && *(_BYTE *)(v13 + 48) == 4 )
    {
      v19 = *(_DWORD **)(v13 + 56);
      if ( *v19 == 14 )
      {
        if ( v19 )
        {
          v20 = v4 + 32;
          v40 = 1;
          v4 = (__int64)v19;
          v44 = v20;
LABEL_44:
          v46 = a2;
          v6 = sub_129440(a1, v45, &v46, 0);
          if ( !v6 )
            return 0;
          v41 = a2;
          v17 = sub_130BC0(a1, a2, v44, a2, v4 + 32, 0);
LABEL_28:
          if ( !v17
            && !(unsigned __int8)sub_130BC0(a1, v41, v44, a2, v4 + 48, 0)
            && (*(_BYTE *)(v4 + 32) != 4 || !(unsigned __int8)sub_30D8F0(v42, a1, a2, *(_QWORD *)(v4 + 40), v41, v44))
            && (*(_BYTE *)(v4 + 48) != 4 || !(unsigned __int8)sub_30D8F0(v42, a1, a2, *(_QWORD *)(v4 + 56), v41, v44)) )
          {
            return 0;
          }
          goto LABEL_29;
        }
      }
    }
  }
  else
  {
    v23 = sub_11C8E0(a2, &v45, 5);
    if ( v23 )
    {
      v44 = v23 + 32;
      if ( (unsigned __int8)sub_1299D0(a1, a2, v23 + 32, 0) )
      {
        v46 = a2;
        v6 = sub_129440(a1, v45, &v46, 0);
        if ( !v6 )
          return 0;
        LODWORD(v41) = a2;
        v40 = 0;
LABEL_29:
        if ( v44 == v6 + 48 )
        {
          v6 = sub_129440(a1, v6 + 32, &v46, 0);
          if ( !v6 )
            return 0;
        }
        if ( *(_DWORD *)v6 != 11 )
          goto LABEL_31;
        goto LABEL_7;
      }
    }
  }
LABEL_21:
  v14 = sub_11C8E0(a2, v50, 11);
  if ( !v14 )
    return 0;
  v7 = 0;
  if ( *(_BYTE *)v50[0] == 4 )
  {
    v15 = *(_QWORD *)(v50[0] + 8LL);
    if ( *(_DWORD *)v15 == 12 && *(_BYTE *)(v15 + 32) == 4 && *(_BYTE *)(v15 + 48) == 4 )
      return (unsigned int)sub_9D9F0(a1, a2, a2, *(_DWORD **)(v15 + 40), a2, *(_QWORD *)(v15 + 56), a2, v14, 0);
  }
  return v7;
}
