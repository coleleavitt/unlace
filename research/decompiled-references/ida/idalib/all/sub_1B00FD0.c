unsigned __int64 __fastcall sub_1B00FD0(__int64 *a1, _DWORD *a2, unsigned int a3, int a4, int a5, __m128 a6, __m128 a7)
{
  __int64 v7; // r10
  unsigned __int64 v8; // r15
  int v12; // ebp
  __int64 v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // ebp
  __int64 v26; // rax
  int v27; // eax
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  _QWORD *v33; // r14
  size_t v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD v40[2]; // [rsp+10h] [rbp-68h] BYREF
  int v41; // [rsp+20h] [rbp-58h]
  char *v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]
  char v44; // [rsp+38h] [rbp-40h] BYREF

  v7 = (__int64)a1;
  v8 = (unsigned __int64)a2;
  if ( (*a2 & 0x3C000) != 0 )
  {
    v12 = 103;
    v13 = 0;
  }
  else
  {
    v20 = sub_19179E0(*a1, a3, (unsigned __int64)a2, 0, a6, a7);
    if ( v20 == 1 )
      return 0;
    v8 = sub_1AF29B0(*a1, v20 & 0xFFFFFFFFFFFFFFFELL, a6, a7, v21, v22, v23);
    v24 = sub_1AE5FF0(a1[1]);
    if ( v24 )
      v25 = *(_DWORD *)(v24 + 976);
    else
      v25 = 103;
    v13 = 0;
    v26 = sub_168B6E0((__int64)a1);
    v27 = sub_1AE8290(v25, 66, *(unsigned int *)(v26 + 64), 0x67u);
    v7 = (__int64)a1;
    v12 = v27;
    if ( v27 != 103 )
    {
      v28 = sub_B8E180(*(_QWORD *)(*a1 + 544));
      v7 = (__int64)a1;
      if ( !v28 )
      {
        v32 = sub_1AF29B0(*a1, v8, a6, a7, v29, v30, v31);
        v40[0] = 0;
        v33 = (_QWORD *)v32;
        v40[1] = 0;
        v41 = 0;
        v42 = &v44;
        v43 = 0;
        v34 = j__strlen(".capture_expr.");
        v8 = sub_1B00390((_QWORD *)*a1, v33, (__int64)v40, ".capture_expr.", v34, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
        v35 = (_QWORD *)sub_168B6C0((__int64)a1);
        v13 = sub_1AEDEF0(v35, (__int64)v40, v36, v37, v38, v39);
        sub_1AF4310((__int64)v40);
        v7 = (__int64)a1;
      }
    }
  }
  v14 = (_QWORD *)sub_168B6C0(v7);
  v17 = v14[294];
  v14[304] += 40LL;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v14[295] >= v18 + 40 && v17 )
  {
    v14[294] = v18 + 40;
    result = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v14 + 294), 40, 40, 3, v15, v16);
  }
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a5;
  *(_DWORD *)(result + 8) = 66;
  *(_DWORD *)(result + 12) = a4;
  *(_QWORD *)(result + 16) = v8;
  *(_QWORD *)(result + 24) = v13;
  *(_DWORD *)(result + 32) = v12;
  return result;
}
