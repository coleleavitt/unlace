char *__fastcall sub_1F561F0(__int64 *a1, __m128 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  double v25[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1[2];
  v3 = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) >> 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3) & 1LL;
  if ( !(_DWORD)v5 )
  {
    v6 = v5 | (unsigned int)v4;
    if ( (v6 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_3;
LABEL_6:
    v9 = sub_B709C0((__int64)a2);
    *(_QWORD *)(v9 + 16LL * ((*(_BYTE *)(v9 + 87) & 0x20) != 0) + 176) = v6;
    if ( (a2[5].m128_i8[7] & 0x20) == 0 )
      return sub_1F56000(a1, (char *)a2);
LABEL_7:
    v10 = a1[2];
    v11 = *(_QWORD **)(v10 + 8);
    v12 = sub_1EE13A0((__int64)v11, *(_QWORD *)(v10 + 16), (__int64 *)(v10 + 32), (_DWORD *)(v10 + 24));
    v17 = sub_1EDB980(v11, v12, v13, v14, v15, v16);
    v18 = a1[2];
    v19 = *(_QWORD **)(v18 + 8);
    v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(v18 + 16), (__int64 *)(v18 + 32), (_DWORD *)(v18 + 24));
    *(_QWORD *)&v25[1] = v17;
    *(_QWORD *)&v25[0] = sub_1EDB980(v19, v20, v21, v22, v23, v24);
    a2[11] = _mm_loadh_ps(v25);
    return sub_1F56000(a1, (char *)a2);
  }
  v8 = sub_1F6A0A0(*(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
  v6 = v8 & 0xFFFFFFFFFFFFFFFCLL | (unsigned int)v4;
  if ( v8 & 0xFFFFFFFFFFFFFFFCLL | (unsigned int)v4 & 0xFFFFFFFC )
    goto LABEL_6;
LABEL_3:
  a2[5].m128_i8[7] = (((_DWORD)v6 == 1) << 7) | a2[5].m128_i8[7] & 0x7F;
  if ( (a2[5].m128_i8[7] & 0x20) != 0 )
    goto LABEL_7;
  return sub_1F56000(a1, (char *)a2);
}
