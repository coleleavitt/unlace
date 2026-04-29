__int64 __fastcall sub_98A40(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  unsigned int v3; // r15d
  __int64 v5; // r9
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // r15
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // [rsp+0h] [rbp-118h]
  _BYTE *v13; // [rsp+0h] [rbp-118h]
  __int64 v14; // [rsp+8h] [rbp-110h]
  __int64 *v15; // [rsp+8h] [rbp-110h]
  __int64 v16; // [rsp+10h] [rbp-108h]
  int v17; // [rsp+18h] [rbp-100h]
  __int64 v18; // [rsp+18h] [rbp-100h]
  __int64 v19; // [rsp+20h] [rbp-F8h]
  __int64 v20; // [rsp+28h] [rbp-F0h]
  int v21; // [rsp+30h] [rbp-E8h] BYREF
  int v22; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v23; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v24[16]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v26; // [rsp+68h] [rbp-B0h]
  _QWORD v27[4]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v28[2]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-60h]
  __int64 v31; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+D8h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 10
    && *(_BYTE *)(a2 + 32) == 4
    && (v2 = *(_DWORD **)(a2 + 40)) != nullptr
    && *(_DWORD *)(a2 + 36) == 2 * *(_DWORD *)(a2 + 68)
    && (unsigned int)(*v2 - 23) <= 1
    && (unsigned __int8)sub_152630(v2, &v21) )
  {
    v27[1] = a1;
    v28[0] = 0xFFFFFFFF00000000LL;
    v29 = 0xFFFFFFFF00000000LL;
    v27[0] = &off_4DBDF0;
    v27[2] = 0;
    v27[3] = 0;
    v28[1] = 0;
    v31 = 0x1FFFFFFFFLL;
    v30 = 0;
    v5 = sub_954F0((__int64)v27, a2, 1u);
    if ( v5
      && !(_DWORD)v31
      && *(_DWORD *)(v5 + 68) == *(_DWORD *)(a2 + 36)
      && (v12 = v5, (unsigned __int8)sub_1227B0(v5, &v22, &v23, 1))
      && *(_BYTE *)v23 == 4
      && (v6 = *(_DWORD **)(v23 + 8), *v6 == 9)
      && (v7 = *(_DWORD *)(a2 + 68), v21 + v22 == 8 * v7)
      && v7 == v6[9]
      && (unsigned __int8)sub_1301F0(a1, v12, v6 + 8, a2, v2 + 8) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      v14 = v12;
      v17 = v12 + 64;
      v13 = v24;
      sub_123A40(v24);
      if ( (unsigned __int8)sub_127850(v24, v8, *(unsigned int *)(a2 + 68), 0)
        && (v20 = v14, v3 = sub_12CF30(*(_QWORD *)(a1 + 64), (int)a2 + 64, (unsigned int)v24, 0, 0, v14), (_BYTE)v3) )
      {
        memset(v25, 0, sizeof(v25));
        v26 = 0;
        sub_127FE0(a1, (__int64)v25, (__int64)v24, 1u, v9, v10, (int)v24, (int)v25, (_DWORD)v2 + 32, v17, a2 + 64);
        if ( sub_A9D90(a1, v15, v20, *(_QWORD *)(a2 + 8), 1) )
        {
          v3 = 0;
        }
        else
        {
          sub_11CA10(a2 + 48, v2 + 12);
          sub_11CA10(v13, v16);
          sub_11CA10(a2 + 32, v13);
          sub_11CA10(v19, v18);
          *(_DWORD *)a2 = 23;
          sub_11D5A0(v20);
          v11 = *(_DWORD *)(a1 + 24);
          BYTE1(v11) &= ~2u;
          LOBYTE(v11) = v11 | 0x80;
          *(_DWORD *)(a1 + 24) = v11;
        }
        sub_93B40(v15);
      }
      else
      {
        v3 = 0;
      }
      sub_11CDA0(v13);
    }
    else
    {
      v3 = 0;
    }
    v27[0] = &off_4DBDF0;
    sub_11CDA0(&v29);
    sub_11CDA0(v28);
  }
  else
  {
    return 0;
  }
  return v3;
}
