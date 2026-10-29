__int64 *__fastcall sub_1D821F0(__int64 *a1, __int64 *a2, __int64 a3)
{
  int v5; // ecx
  __int64 *v6; // rbx
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // rax
  _QWORD *v12; // r12
  __int64 *v13; // r13
  unsigned __int64 v14; // rcx
  __int64 *result; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-108h]
  __int64 v22; // [rsp+8h] [rbp-108h]
  __int64 *v23; // [rsp+8h] [rbp-108h]
  __int64 v24; // [rsp+18h] [rbp-F8h] BYREF
  int v25; // [rsp+20h] [rbp-F0h]
  void *ptr; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-E0h]
  _BYTE v28[32]; // [rsp+38h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-B0h]
  int v31; // [rsp+68h] [rbp-A8h]
  int v32; // [rsp+70h] [rbp-A0h]
  __int64 v33; // [rsp+78h] [rbp-98h]
  __int64 v34; // [rsp+80h] [rbp-90h]
  __int64 v35; // [rsp+88h] [rbp-88h]
  __int64 v36; // [rsp+90h] [rbp-80h]
  __int64 v37; // [rsp+98h] [rbp-78h]
  __int64 v38; // [rsp+A0h] [rbp-70h]
  int v39; // [rsp+A8h] [rbp-68h]
  __int64 v40; // [rsp+B0h] [rbp-60h]
  __int64 v41; // [rsp+B8h] [rbp-58h]
  __int64 v42; // [rsp+C0h] [rbp-50h]
  __int64 v43; // [rsp+C8h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  v7 = (int)a2;
  v8 = a1[1];
  v9 = a1[6];
  v30 = 0;
  v10 = *(_DWORD *)(v8 + 24);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v29 = v29 & 0xF0000000 | 0x20000;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v11 = sub_1E6A200(*a1, v9, v7, v5, v10, a1[5], (__int64)&v29);
  v12 = sub_A81910(*(_QWORD **)(*a1 + 248), v11, v10);
  if ( a1[2] )
    v12 = (_QWORD *)sub_1DD4AE0(*a1, v12, a1 + 8, v10, a1[5], 0);
  if ( !v12 )
    return nullptr;
  v13 = &v6[a3];
  ptr = v28;
  v27 = 0x400000000LL;
  if ( v6 == v13 )
  {
LABEL_15:
    v18 = a1[1];
    v19 = *a1;
    v24 = 0;
    v25 = 0;
    v20 = sub_1CB4710(v19, v18);
    result = (__int64 *)sub_1D816E0(*a1, a1[1], v20, 0, 0, (__int64)v12, v10, v10, v10, 1, nullptr, 0, (__int64)&v24);
  }
  else
  {
    while ( 1 )
    {
      result = sub_A81910(*(_QWORD **)(*a1 + 248), *v6, v10);
      if ( a1[2] )
        result = (__int64 *)sub_1DD4AE0(*a1, result, a1 + 8, v10, 0, 0);
      if ( !result )
        break;
      v16 = sub_B74530(*(_QWORD *)(*a1 + 248), a1[3], v10, v10, 0, *result, (__int64)result, 0, 0);
      v17 = (unsigned int)v27;
      *(_DWORD *)(v16 + 96) &= 0xFFF01FFF;
      if ( (unsigned int)v17 <= 0xFE )
      {
        *(_WORD *)(v16 + 98) = (16 * (unsigned __int8)v17) | *(_WORD *)(v16 + 98) & 0xF00F;
      }
      else
      {
        v21 = v16;
        sub_B74850(v16, v17);
        v17 = (unsigned int)v27;
        v16 = v21;
      }
      v14 = HIDWORD(v27);
      v12[v17 + 3] = v16;
      if ( v17 + 1 > v14 )
      {
        v22 = v16;
        ++v6;
        sub_2237220(&ptr, v28, v17 + 1, 8);
        *((_QWORD *)ptr + (unsigned int)v27) = v22;
        LODWORD(v27) = v27 + 1;
        if ( v13 == v6 )
          goto LABEL_15;
      }
      else
      {
        ++v6;
        *((_QWORD *)ptr + v17) = v16;
        LODWORD(v27) = v27 + 1;
        if ( v13 == v6 )
          goto LABEL_15;
      }
    }
  }
  if ( ptr != v28 )
  {
    v23 = result;
    free(ptr);
    return v23;
  }
  return result;
}
