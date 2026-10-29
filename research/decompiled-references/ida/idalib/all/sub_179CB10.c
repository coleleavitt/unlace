__int64 __fastcall sub_179CB10(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // r8
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r10
  __int64 v10; // r12
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  char v13; // al
  unsigned int v14; // eax
  __int64 v15; // r12
  const __m128i *v16; // rbp
  unsigned int v17; // eax
  unsigned __int64 v18; // rbx
  __int64 result; // rax
  unsigned int v20; // eax
  __int64 *v21; // r15
  __int64 v22; // rdi
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // r15
  unsigned __int64 v30; // rbx
  unsigned int v31; // eax
  unsigned __int64 v32; // [rsp+8h] [rbp-70h]
  __m128 v33; // [rsp+10h] [rbp-68h] BYREF
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+28h] [rbp-50h]
  _QWORD v36[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = a1 & 7;
  v7 = a3;
  v8 = a1;
  v9 = a1;
  v10 = a1;
  v11 = (unsigned __int64)a2;
  v12 = a4;
  v32 = a4;
  if ( v5 | (a1 >> 3) & 1 && a1 )
  {
    v20 = sub_F6C520(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
    v8 = v10;
    v9 = v10;
    v5 = v10 & 7;
    v11 = v20 * (((unsigned __int64)a2 - (a2 != nullptr)) / v20 + (a2 != nullptr));
    a2 = (unsigned int *)v11;
  }
  if ( a3 & 7 | (a3 >> 3) & 1 && a3 )
  {
    v21 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    v35 = v8;
    v22 = *v21;
    v34 = v5;
    v33.m128_u64[0] = v9;
    v23 = sub_F6C520(v22 & 0xFFFFFFFFFFFFFFF0LL);
    v7 = *v21;
    v5 = v34;
    v9 = v33.m128_u64[0];
    v12 = v23 * ((v12 - (v12 != 0)) / v23 + (v12 != 0));
    v32 = v12;
  }
  if ( !(v5 | (v8 >> 3) & 1) )
  {
    v13 = *(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v13 == 42 )
    {
      if ( v10 )
      {
        v24 = sub_F6C520(*(_QWORD *)(v7 + 32));
        v25 = *(_QWORD *)(v7 + 32);
        v26 = v24 * ((v12 != -4) + (v12 + 4 - (v12 != -4)) / v24);
        v27 = sub_F6C520(*(_QWORD *)(v10 + 32));
        sub_179CB10(*(_QWORD *)(v10 + 32), v27 * ((v11 + 4 - (v11 != -4)) / v27 + (v11 != -4)), v25, v26);
        result = *a2;
        *(_DWORD *)v32 = result;
        return result;
      }
    }
    else if ( v13 == 40 && v10 )
    {
      v28 = sub_F6C520(*(_QWORD *)(v7 + 32));
      v29 = *(_QWORD *)(v7 + 32);
      v30 = v28 * ((v12 != -8) + (v12 + 8 - (v12 != -8)) / v28);
      v31 = sub_F6C520(*(_QWORD *)(v10 + 32));
      sub_179CB10(*(_QWORD *)(v10 + 32), v31 * ((v11 + 8 - (v11 != -8)) / v31 + (v11 != -8)), v29, v30);
      *(_DWORD *)v32 = *a2;
      result = a2[1];
      *(_DWORD *)(v32 + 4) = result;
      return result;
    }
  }
  v14 = sub_F6C520(*(_QWORD *)(v10 + 32));
  v15 = *(_QWORD *)(v10 + 32);
  v16 = (const __m128i *)(v14 * ((v11 + 16 - (v11 != -16)) / v14 + (v11 != -16)));
  v17 = sub_F6C520(*(_QWORD *)(v7 + 32));
  v36[0] = *(_QWORD *)(v7 + 32);
  v18 = v17 * ((v12 != -16) + (v12 + 16 - (v12 != -16)) / v17);
  v36[1] = v18;
  if ( !(v15 & 7 | (v15 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 6 && v15 )
  {
    v33.m128_u64[0] = v18;
    v33 = _mm_loadh_ps((const double *)v33.m128_u64);
    sub_179CB10(v15, v16, v33.m128_u64[0], v33.m128_u64[1]);
  }
  else
  {
    sub_F6C7F0((__int64)v36, v15, v16);
  }
  *(_DWORD *)v32 = *a2;
  *(_QWORD *)(v32 + 8) = *((_QWORD *)a2 + 1);
  result = a2[1];
  *(_DWORD *)(v32 + 4) = result;
  return result;
}
