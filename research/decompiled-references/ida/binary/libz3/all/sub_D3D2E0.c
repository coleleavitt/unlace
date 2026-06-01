__int64 __fastcall sub_D3D2E0(const __m128i *a1, __int64 a2, struct _Unwind_Exception *a3)
{
  _OWORD *v3; // rax
  _OWORD *v4; // rax
  __int64 v5; // r12
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 result; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // rbp
  __int64 v19; // rsi
  __int64 v20; // rdi
  int v22[4]; // [rsp+18h] [rbp-308h] BYREF
  void *v23; // [rsp+28h] [rbp-2F8h]
  __int64 v24; // [rsp+30h] [rbp-2F0h]
  int v25; // [rsp+38h] [rbp-2E8h]
  __int64 v26; // [rsp+40h] [rbp-2E0h]
  __int64 *v27; // [rsp+48h] [rbp-2D8h]
  void *ptr[2]; // [rsp+50h] [rbp-2D0h] BYREF
  int v29; // [rsp+60h] [rbp-2C0h]
  __int64 v30; // [rsp+68h] [rbp-2B8h]
  _QWORD v31[19]; // [rsp+70h] [rbp-2B0h] BYREF
  int v32; // [rsp+108h] [rbp-218h]
  __int64 v33; // [rsp+110h] [rbp-210h]
  _QWORD v34[19]; // [rsp+118h] [rbp-208h] BYREF
  int v35; // [rsp+1B0h] [rbp-170h]
  _QWORD v36[18]; // [rsp+1B8h] [rbp-168h] BYREF
  int v37; // [rsp+248h] [rbp-D8h]
  __int64 v38; // [rsp+250h] [rbp-D0h]
  __int64 v39; // [rsp+258h] [rbp-C8h]
  __int64 v40; // [rsp+260h] [rbp-C0h]
  __int64 v41; // [rsp+268h] [rbp-B8h]
  __int64 v42; // [rsp+270h] [rbp-B0h]
  __int64 v43; // [rsp+278h] [rbp-A8h]
  __int64 v44; // [rsp+280h] [rbp-A0h]
  _QWORD v45[3]; // [rsp+288h] [rbp-98h] BYREF
  _BYTE v46[128]; // [rsp+2A0h] [rbp-80h] BYREF

  *(__m128i *)v22 = _mm_unpacklo_epi64(_mm_loadl_epi64(a1), (__m128i)(unsigned __int64)a1);
  v3 = (_OWORD *)sub_186B270(0x80u);
  v23 = v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v24 = 8;
  v25 = 0;
  v26 = *(_QWORD *)v22;
  v27 = nullptr;
  v4 = (_OWORD *)sub_186B270(0x40u);
  v5 = *(_QWORD *)v22;
  ptr[1] = &byte_8;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  ptr[0] = v4;
  v29 = 0;
  v30 = 0;
  sub_1584DD0(v31, v5, 0);
  v31[0] = &off_1C5A530;
  v31[18] = v45;
  v32 = 0;
  v33 = 0;
  sub_1584DD0(v34, v5, 0);
  v34[18] = 0;
  v35 = 0;
  v34[0] = &off_1C61DB8;
  sub_1584DD0(v36, v5, 0);
  v45[1] = a1;
  v37 = 0;
  v38 = 0;
  v36[0] = &off_1C61DE0;
  v39 = v5;
  v40 = 0;
  v41 = v5;
  v42 = 0;
  v43 = v5;
  v44 = 0;
  v31[0] = &off_1C5A550;
  v45[0] = v5;
  v45[2] = ptr;
  sub_1447E40((unsigned int)v46, v5, (_DWORD)a1 + 8, v6, v7, v8);
  sub_D3B820((__m128i *)v22, a2, a3);
  v31[0] = &off_1C5A550;
  sub_14476A0(v46);
  v31[0] = &off_1C5A530;
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v9 = v42;
  if ( v42 )
  {
    v10 = v43;
    v11 = (*(_DWORD *)(v42 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v10, v9);
  }
  v12 = v40;
  if ( v40 )
  {
    v13 = v41;
    v11 = (*(_DWORD *)(v40 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v13, v12);
  }
  v14 = v38;
  if ( v38 )
  {
    v15 = v39;
    v11 = (*(_DWORD *)(v38 + 8))-- == 1;
    if ( v11 )
      sub_15D7BC0(v15, v14);
  }
  v36[0] = &qword_1C637E8;
  sub_15841B0(v36);
  v34[0] = &qword_1C637E8;
  sub_15841B0(v34);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  result = sub_15841B0(v31);
  if ( v30 )
    result = sub_186B220((void *)(v30 - 8));
  if ( ptr[0] )
    result = sub_186B220(ptr[0]);
  v17 = v27;
  if ( v27 )
  {
    result = *((unsigned int *)v27 - 1);
    v18 = (unsigned __int64)&v27[result];
    if ( (unsigned __int64)v27 >= v18 )
      goto LABEL_26;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = v26;
          v11 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v17 >= v18 )
          goto LABEL_25;
      }
      result = sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( (unsigned __int64)v17 < v18 );
LABEL_25:
    v17 = v27;
    if ( v27 )
LABEL_26:
      result = sub_186B220(v17 - 1);
  }
  if ( v23 )
    return sub_186B220(v23);
  return result;
}

