__int64 __fastcall sub_AB280(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  unsigned int v6; // r15d
  __int64 v8; // r14
  _DWORD *v9; // r15
  __int64 v10; // rax
  char v11; // cl
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  int n; // [rsp+0h] [rbp-E0h]
  __int64 na; // [rsp+0h] [rbp-E0h]
  int v19; // [rsp+8h] [rbp-D8h]
  __int64 v20; // [rsp+8h] [rbp-D8h]
  int v21; // [rsp+10h] [rbp-D0h]
  __int64 v22; // [rsp+10h] [rbp-D0h]
  __int64 v23; // [rsp+10h] [rbp-D0h]
  __int64 v24; // [rsp+18h] [rbp-C8h]
  __int64 v25; // [rsp+20h] [rbp-C0h]
  int v26; // [rsp+30h] [rbp-B0h]
  __int64 v27; // [rsp+30h] [rbp-B0h]
  __int64 v28; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-98h] BYREF
  __int64 v30[2]; // [rsp+50h] [rbp-90h] BYREF
  void *src; // [rsp+60h] [rbp-80h]
  __int128 v32; // [rsp+68h] [rbp-78h]
  __int64 v33[2]; // [rsp+80h] [rbp-60h] BYREF
  void *v34; // [rsp+90h] [rbp-50h]
  __int128 v35; // [rsp+98h] [rbp-48h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-38h]

  v2 = a2 + 32;
  v36 = __readfsqword(0x28u);
  v28 = a2;
  v4 = (_DWORD *)sub_129440(a1, a2 + 32, &v28, 1);
  if ( !v4 )
    return 0;
  v5 = v4;
  if ( *v4 != 14 )
    return 0;
  v8 = sub_11C8A0(v4, &v29);
  if ( !v8 )
    return 0;
  if ( *(_BYTE *)v29 != 4 )
    return 0;
  v9 = *(_DWORD **)(v29 + 8);
  if ( (unsigned int)(*v9 - 8) > 1 )
    return 0;
  v26 = 8 * v9[9] - 1;
  v10 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 0);
  v11 = v26;
  if ( (unsigned __int64)v26 > 0x3F )
  {
    v27 = 0;
  }
  else
  {
    v27 = -1LL << v26;
    if ( ((-1LL << v11) & v10) != 1LL << v11 )
      return 0;
  }
  if ( !(unsigned __int8)sub_12EA80(
                           *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL),
                           a1,
                           a2,
                           (int)a2 + 48,
                           v28,
                           (int)v9 + 32,
                           0) )
    return 0;
  v6 = sub_1301F0(a1, a2, v2, *(_QWORD *)(v28 + 8), v5 + 16);
  if ( !(_BYTE)v6 )
    return 0;
  if ( (unsigned __int8)sub_125B60(v2, a2 + 64, 0) )
    goto LABEL_25;
  if ( *((_BYTE *)v5 + 64) == 14 )
  {
    v13 = *((_QWORD *)v5 + 9);
    src = nullptr;
    v32 = 0;
    v30[0] = 0;
    v30[1] = 0;
    sub_127FE0(a1, (__int64)v30, v13 + 16, 1u, 0, v12, n, v19, v21, a2 + 64, v25);
    v22 = *(_QWORD *)(v28 + 8);
    sub_64000(v33, (__int64)v30);
    v34 = nullptr;
    v35 = 0;
    if ( (_QWORD)v32 )
    {
      v20 = v32;
      na = 16 * v32;
      v34 = (void *)qalloc_or_throw(16 * v32, (__int64)v30, 16 * v32, v32);
      *((_QWORD *)&v35 + 1) = v20;
      memcpy(v34, src, na);
      *(_QWORD *)&v35 = v20;
    }
    v23 = sub_A9D90(a1, v33, v22, a2, 1u);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree((__int64)v34);
    }
    qfree(v33[0]);
    if ( v23
      || sub_A9D90(a1, v30, *(_QWORD *)(a2 + 8), 0, 1u)
      || (!(unsigned __int8)sub_64880(v30) || (_QWORD)v32)
      && ((v16 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 784LL)) == 0
       || (unsigned __int8)sub_17C4E0(v16, (unsigned int)v30, *(_DWORD *)(a1 + 72), -1, 0, 0, 2, 1)) )
    {
      sub_93B40(v30);
      return 0;
    }
    sub_123A40(v33);
    sub_1571F0(a1, v28, v33, a2, v24, 1);
    sub_11CA10(v5 + 16, v33);
    sub_11CDA0(v33);
    sub_93B40(v30);
LABEL_25:
    v14 = *(_QWORD *)(v8 + 8);
    v15 = sub_32ABC0(*(_QWORD *)(v14 + 16) | v27, *(unsigned int *)(v8 + 4), 0);
    *(__m128i *)(v14 + 16) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    sub_11D5A0(a2);
    return v6;
  }
  return 0;
}
