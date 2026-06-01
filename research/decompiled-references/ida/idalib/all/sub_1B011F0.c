unsigned __int64 __fastcall sub_1B011F0(__int64 *a1, unsigned __int64 a2, int a3, int a4, int a5, __m128 a6, __m128 a7)
{
  unsigned __int64 v9; // rbp
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // r15
  _QWORD *v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  _QWORD *v27; // rbp
  size_t v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD v39[2]; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+20h] [rbp-58h]
  void *ptr; // [rsp+28h] [rbp-50h]
  __int64 v42; // [rsp+30h] [rbp-48h]
  _BYTE v43[64]; // [rsp+38h] [rbp-40h] BYREF

  v9 = a2;
  v10 = 103;
  v11 = a1[1];
  v12 = *(unsigned int *)(v11 + 344);
  if ( (_DWORD)v12 )
  {
    v13 = *(_QWORD *)(v11 + 336) + 6776 * v12 - 6776;
    if ( *(_QWORD *)(v13 + 6768) == *(_QWORD *)(v11 + 328) )
    {
      v34 = *(unsigned int *)(v13 + 8);
      v35 = *(unsigned int *)(v11 + 27504);
      if ( (unsigned int)v34 > (unsigned int)v35 )
      {
        v36 = v34 - v35;
        if ( v36 )
        {
          v37 = *(_QWORD *)v13 + 1688 * (v36 - 1);
          if ( v37 )
            v10 = *(_DWORD *)(v37 + 976);
        }
      }
    }
  }
  v14 = sub_168B6E0((__int64)a1);
  v15 = sub_1AE8290(v10, 34, *(unsigned int *)(v14 + 64), 0x67u);
  if ( v15 == 103 || (unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
  {
    v16 = 0;
  }
  else
  {
    v26 = sub_1AF29B0(*a1, a2, a6, a7, v23, v24, v25);
    v39[0] = 0;
    ptr = v43;
    v27 = (_QWORD *)v26;
    v39[1] = 0;
    v40 = 0;
    v42 = 0;
    v28 = j__strlen(".capture_expr.");
    v9 = sub_1B00390((_QWORD *)*a1, v27, (__int64)v39, ".capture_expr.", v28, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
    v29 = (_QWORD *)sub_168B6C0((__int64)a1);
    v16 = sub_1AEDEF0(v29, (__int64)v39, v30, v31, v32, v33);
    if ( ptr != v43 )
      free(ptr);
    operator delete(v39[0], 16LL * v40, 8);
  }
  v17 = (_QWORD *)sub_168B6C0((__int64)a1);
  v20 = v17[294];
  v17[304] += 40LL;
  v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v17[295] >= v21 + 40 && v20 )
  {
    v17[294] = v21 + 40;
    result = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v17 + 294), 40, 40, 3, v18, v19);
  }
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a5;
  *(_DWORD *)(result + 8) = 34;
  *(_DWORD *)(result + 12) = a4;
  *(_QWORD *)(result + 16) = v9;
  *(_QWORD *)(result + 24) = v16;
  *(_DWORD *)(result + 32) = v15;
  return result;
}
