__int64 __fastcall sub_3D8920(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r14
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  _QWORD *v7; // r15
  _QWORD *v8; // r12
  bool v9; // zf
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v15; // [rsp+0h] [rbp-148h]
  int v16[2]; // [rsp+8h] [rbp-140h]
  int v17[2]; // [rsp+10h] [rbp-138h]
  __int64 v18; // [rsp+10h] [rbp-138h]
  int v19[2]; // [rsp+18h] [rbp-130h]
  _QWORD *v21; // [rsp+20h] [rbp-128h]
  __int64 *v22; // [rsp+28h] [rbp-120h]
  unsigned __int8 v23; // [rsp+37h] [rbp-111h]
  __int64 v24; // [rsp+38h] [rbp-110h]
  __int64 v25; // [rsp+40h] [rbp-108h] BYREF
  _QWORD *v26; // [rsp+48h] [rbp-100h]
  int v27[2]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v28[16]; // [rsp+58h] [rbp-F0h] BYREF
  __m128 v29; // [rsp+68h] [rbp-E0h]
  __int64 *v30; // [rsp+78h] [rbp-D0h]
  int v31[4]; // [rsp+80h] [rbp-C8h] BYREF
  void *v32; // [rsp+90h] [rbp-B8h]
  __int64 v33; // [rsp+98h] [rbp-B0h]
  __int64 v34; // [rsp+A0h] [rbp-A8h]
  __int64 v35; // [rsp+A8h] [rbp-A0h]
  __int64 v36; // [rsp+B0h] [rbp-98h]
  __int64 v37; // [rsp+B8h] [rbp-90h]
  __int64 v38; // [rsp+C0h] [rbp-88h]
  __int64 v39; // [rsp+C8h] [rbp-80h]
  __int64 *v40; // [rsp+D0h] [rbp-78h]
  __int64 v41; // [rsp+D8h] [rbp-70h]
  __int64 v42; // [rsp+E0h] [rbp-68h]
  __int64 v43; // [rsp+E8h] [rbp-60h]
  int v44; // [rsp+F0h] [rbp-58h]
  __int64 v45; // [rsp+F8h] [rbp-50h]
  __int64 v46; // [rsp+100h] [rbp-48h] BYREF

  *(_QWORD *)v17 = a3[1];
  v24 = a1 + 128;
  v23 = sub_13608A0(a1 + 128);
  sub_1360B80(a1 + 128, 0);
  sub_1374250(v31, a1, a2);
  v26 = nullptr;
  v3 = *(_QWORD *)v31;
  v25 = *(_QWORD *)v17;
  *(_QWORD *)v27 = *(_QWORD *)v17;
  sub_1684300(v28, *(_QWORD *)v17);
  v29 = _mm_loadh_ps((const double *)v27);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  *(_QWORD *)&v31[2] = 0;
  v30 = &v25;
  v32 = nullptr;
  sub_3DCE40((int)v27, (int)v31, *a3, v4, v5, v6, v15, a1, v17[0], a2, (int)a3, &v25);
  if ( v32 )
    sub_186B220(v32);
  if ( !v26 || (v7 = &v26[*((unsigned int *)v26 - 1)], v7 == v26) )
  {
LABEL_15:
    v13 = 0;
  }
  else
  {
    v8 = v26;
    while ( 1 )
    {
      v10 = *v8;
      sub_1374250(v31, *(_QWORD *)v16, *v8);
      v11 = *(_QWORD *)v31;
      if ( v3 == *(_QWORD *)v31 && !(unsigned __int8)sub_167C200(*(_QWORD *)v19, v10) )
        break;
      if ( v11 && (v9 = *(_DWORD *)(v11 + 8) == 1, --*(_DWORD *)(v11 + 8), v9) )
      {
        ++v8;
        sub_15D7BC0(v18, v11);
        if ( v7 == v8 )
          goto LABEL_15;
      }
      else if ( v7 == ++v8 )
      {
        goto LABEL_15;
      }
    }
    v32 = nullptr;
    v33 = v18;
    v38 = v18;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v39 = 0;
    v40 = &v46;
    v41 = 1;
    v42 = 0;
    v43 = 0;
    v44 = 1065353216;
    v45 = 0;
    v46 = 0;
    *(__m128i *)v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    sub_14EA0D0(v31, *(_QWORD *)v19, v10);
    sub_14EA2A0(v31, *v21, v21);
    sub_268600((__int64)v31);
    v12 = v11;
    v13 = 1;
    sub_3D2CD0(v12, v18);
  }
  sub_3D2CB0(v29.m128_i64[0], v29.m128_i64[1]);
  sub_2334C0(v22);
  sub_3D2CD0(v3, v18);
  sub_1360B80(v24, v23);
  return v13;
}

