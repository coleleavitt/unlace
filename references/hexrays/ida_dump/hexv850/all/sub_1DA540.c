__int64 __fastcall sub_1DA540(__int128 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned int v9; // ebx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+8h] [rbp-A8h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-90h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-80h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-60h] BYREF
  __int64 v21; // [rsp+60h] [rbp-50h]
  __int128 v22; // [rsp+68h] [rbp-48h]
  unsigned __int64 v23; // [rsp+78h] [rbp-38h]

  v4 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = a4;
  v23 = __readfsqword(0x28u);
  v20[0] = 0;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  if ( !a4 )
  {
    *((_QWORD *)&a1 + 1) = v20;
    sub_11F2E0(a1, a3, 0, 0xFFFF0000);
    *((_QWORD *)&a1 + 1) = v20;
  }
  if ( a2 )
    v7 = *(_QWORD *)(a2 + 16);
  else
    v7 = *(_QWORD *)(a1 + 56);
  v8 = sub_124590(a1, *((_QWORD **)&a1 + 1), v7, 0, nullptr, 0, 0x101u);
  if ( v8 )
  {
    if ( *(_DWORD *)(v8 + 68) < *(_DWORD *)(a3 + 4)
      || !sub_120A10((unsigned __int8 *)(v8 + 64), *(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL), a3, 1u) )
    {
      goto LABEL_7;
    }
    v11 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 == 18 )
    {
      if ( !(unsigned __int8)sub_11B1C0((char *)(v8 + 48), &v15, 1u)
        || (v15 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL)) != v15
        || !v15 )
      {
        goto LABEL_7;
      }
      v18[0] = 1 - v15;
      v18[1] = 2 * v15 - 1;
      sub_3112F0(v4, v18);
      v9 = 0;
    }
    else if ( v11 > 0x12 )
    {
      if ( v11 != 20
        || !(unsigned __int8)sub_11B1C0((char *)(v8 + 48), &v15, 0)
        && !(unsigned __int8)sub_11B1C0((char *)(v8 + 32), &v15, 0) )
      {
        goto LABEL_7;
      }
      v12 = log2ceil(v15);
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL);
      if ( (unsigned __int64)v12 > 0x3F )
      {
        v15 = 0;
      }
      else
      {
        v15 = 1LL << v12;
        v14 = v13 & (1LL << v12);
        if ( v14 != 1LL << v12 )
          goto LABEL_7;
        v13 &= v14 - 1;
      }
      v19[1] = v13;
      v19[0] = 0;
      sub_3112F0(v4, v19);
      v9 = 0;
    }
    else
    {
      if ( v11 != 4 )
      {
        if ( v11 == 17
          && (unsigned __int8)sub_11B1C0((char *)(v8 + 48), &v15, 0)
          && (v15 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL)) == v15
          && v15 )
        {
          v17[0] = 0;
          v17[1] = v15;
          sub_3112F0(v4, v17);
          v9 = 0;
          goto LABEL_8;
        }
LABEL_7:
        v9 = -1;
        goto LABEL_8;
      }
      if ( !(unsigned __int8)sub_11B1C0((char *)(v8 + 32), &v15, 0)
        || v15 != (v15 & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 480) + 24LL) + 16LL)) )
      {
        goto LABEL_7;
      }
      v16[0] = v15;
      v16[1] = 1;
      sub_3112F0(v4, v16);
      v9 = 0;
    }
  }
  else
  {
    v9 = 1;
  }
LABEL_8:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21);
  }
  qfree(v20[0]);
  return v9;
}
