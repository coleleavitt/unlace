__int64 __fastcall sub_94580(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  unsigned int v3; // r15d
  __int64 v5; // r9
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // [rsp+0h] [rbp-118h]
  int v11; // [rsp+30h] [rbp-E8h] BYREF
  int v12; // [rsp+34h] [rbp-E4h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v15[3]; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v16; // [rsp+68h] [rbp-B0h]
  _QWORD v17[4]; // [rsp+80h] [rbp-98h] BYREF
  _QWORD v18[2]; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v19; // [rsp+B0h] [rbp-68h] BYREF
  __int128 v20; // [rsp+B8h] [rbp-60h]
  __int64 v21; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+D8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 == 10
    && *(_BYTE *)(a2 + 32) == 4
    && (v2 = *(_DWORD **)(a2 + 40)) != nullptr
    && *(_DWORD *)(a2 + 36) == 2 * *(_DWORD *)(a2 + 68)
    && (unsigned int)(*v2 - 23) <= 1
    && (unsigned __int8)sub_14E170(v2, &v11) )
  {
    v17[1] = a1;
    v18[0] = 0xFFFFFFFF00000000LL;
    v19 = 0xFFFFFFFF00000000LL;
    v17[0] = &off_4AE870;
    v17[2] = 0;
    v17[3] = 0;
    v18[1] = 0;
    v21 = 0x1FFFFFFFFLL;
    v20 = 0;
    v5 = sub_91030((__int64)v17, a2, 1u);
    if ( v5
      && !(_DWORD)v21
      && *(_DWORD *)(v5 + 68) == *(_DWORD *)(a2 + 36)
      && (v10 = v5, (unsigned __int8)sub_11E2F0(v5, &v12, &v13, 1))
      && *(_BYTE *)v13 == 4
      && (v6 = *(_DWORD **)(v13 + 8), *v6 == 9)
      && (v7 = *(_DWORD *)(a2 + 68), v11 + v12 == 8 * v7)
      && v7 == v6[9]
      && (unsigned __int8)sub_12BD30(a1, v10, v6 + 8, a2, v2 + 8) )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      sub_11F580(v14, v10 + 64);
      if ( (unsigned __int8)sub_123390(v14, v8, *(unsigned int *)(a2 + 68), 0)
        && (v3 = sub_128A70(*(_QWORD *)(a1 + 64), (int)a2 + 64, (unsigned int)v14, 0, 0, v10), (_BYTE)v3) )
      {
        memset(v15, 0, sizeof(v15));
        v16 = 0;
        sub_123B20(a1, v15, v14, 1);
        if ( sub_A58D0(a1, v15, v10, *(_QWORD *)(a2 + 8), 1) )
        {
          v3 = 0;
        }
        else
        {
          sub_118550(a2 + 48, v2 + 12);
          sub_118550(v14, v2 + 8);
          sub_118550(a2 + 32, v14);
          sub_118550(a2 + 64, v10 + 64);
          *(_DWORD *)a2 = 23;
          sub_1190E0(v10);
          v9 = *(_DWORD *)(a1 + 24);
          BYTE1(v9) &= ~2u;
          LOBYTE(v9) = v9 | 0x80;
          *(_DWORD *)(a1 + 24) = v9;
        }
        sub_8F680(v15);
      }
      else
      {
        v3 = 0;
      }
      sub_1188E0(v14);
    }
    else
    {
      v3 = 0;
    }
    v17[0] = &off_4AE870;
    sub_1188E0(&v19);
    sub_1188E0(v18);
  }
  else
  {
    return 0;
  }
  return v3;
}
