_QWORD *__fastcall sub_876F60(__int64 a1)
{
  __int64 v1; // rax
  unsigned int *v2; // rbx
  int v3; // edx
  int v4; // edx
  _BOOL4 v5; // r12d
  _QWORD *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // r8
  _QWORD *v9; // r14
  _QWORD *v10; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // r12
  _QWORD *v16; // r13
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  double v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v24; // r13
  _QWORD *v25; // r12
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // r13
  _QWORD *v30; // r14
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __m128 *v35; // rax
  __m128 *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // [rsp+8h] [rbp-50h]
  double v39[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(unsigned int **)a1;
  *(_QWORD *)&v39[1] = __readfsqword(0x28u);
  v39[0] = 0.0;
  v3 = *(_DWORD *)(v1 + 96);
  if ( (*(_BYTE *)(v1 + 105) & 8) != 0 )
  {
    if ( (v3 & 0x100) == 0 )
    {
      if ( (v3 & 0x800000) == 0 )
      {
        v6 = sub_868C70((__int64)v2, 36);
        goto LABEL_35;
      }
      v5 = 0;
      goto LABEL_54;
    }
LABEL_21:
    sub_86B8E0(v2, 32, 3, 0, 2, 0);
    if ( *(_DWORD *)(a1 + 204) || *(int *)(a1 + 216) <= 255 )
    {
      v15 = sub_86E080(v2, 3, 2, 0, 13, 0);
      v16 = sub_868BC0((__int64)v2);
      sub_86B8E0(v2, 32, 142, *(int *)(a1 + 100), 2, 0);
      sub_876A60(*(unsigned int **)a1);
      sub_86E120((const double *)a1, *(_DWORD *)(a1 + 204), v39, 1);
      v17 = sub_86E080(v2, 2, 2, 0, 13, 0);
      if ( v17 && v16 )
      {
        v17[2] &= ~1uLL;
        v17[3] = v16;
      }
      v18 = sub_868BC0((__int64)v2);
      if ( v15 && v18 )
      {
        v15[2] &= ~1uLL;
        v15[3] = v18;
      }
      sub_86B8E0(v2, 32, 142, *(int *)(a1 + 100), 2, 0);
      v19 = sub_868BC0((__int64)v2);
      v20 = v39[0];
      if ( *(_QWORD *)&v39[0] )
      {
        do
        {
          v21 = **(_QWORD **)&v20;
          if ( **(_QWORD **)&v20 && v19 )
          {
            *(_QWORD *)(v21 + 16) &= ~1uLL;
            *(_QWORD *)(v21 + 24) = v19;
          }
          v20 = *(double *)(*(_QWORD *)&v20 + 8LL);
        }
        while ( v20 != 0.0 );
      }
    }
    else
    {
      v24 = sub_868BC0((__int64)v2);
      sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
      v25 = sub_86E080(v2, 3, 2, 0, 13, 0);
      sub_86B8E0(v2, 33, 1, 0, 130, -1);
      sub_86B8E0(v2, 33, 4, 0, 130, 0);
      v26 = sub_86E080(v2, 1, 1, 0, 127, *(unsigned __int8 *)(a1 + 217));
      if ( v26 && v24 )
      {
        v26[2] &= ~1uLL;
        v26[3] = v24;
      }
      v27 = sub_86E080(v2, 1, 4, 0, 127, *(unsigned __int8 *)(a1 + 216));
      if ( v27 && v24 )
      {
        v27[2] &= ~1uLL;
        v27[3] = v24;
      }
      v28 = sub_868BC0((__int64)v2);
      if ( v28 && v25 )
      {
        v25[2] &= ~1uLL;
        v25[3] = v28;
      }
      sub_86D900(v2, 0x42u, 142, *(int *)(a1 + 100), 2, 0, 0x7Fu, 1);
    }
    sub_86B8E0(v2, 32, 2, 0, 3, 0);
    v6 = sub_868C70((__int64)v2, 36);
    goto LABEL_35;
  }
  if ( (v3 & 0x100) != 0 )
    goto LABEL_21;
  v4 = v3 & 0x800000;
  if ( (unsigned int)(*(_DWORD *)(a1 + 204) - 1) <= 1 )
  {
    if ( !v4 )
    {
      v6 = sub_868C70((__int64)v2, 36);
      goto LABEL_6;
    }
    v5 = 1;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 216) > 255;
    if ( !v4 )
      goto LABEL_5;
  }
LABEL_54:
  sub_86B8E0(v2, 32, 1, 0, 137, 72);
  sub_86B8E0(v2, 32, 4, 0, 13, 0);
  v29 = sub_86E080(v2, 0, 1, 0, 127, -1);
  sub_86B8E0(v2, 32, 4, 0, 137, 16);
  sub_86D900(v2, 0x40u, 4, 0, 4, 0, 1u, 0);
  v30 = sub_86E080(v2, 5, 4, 0, 13, 0);
  sub_86B8E0(v2, 32, 4, 0, 13, 0);
  v31 = sub_868BC0((__int64)v2);
  if ( v30 && v31 )
  {
    v30[2] &= ~1uLL;
    v30[3] = v31;
  }
  sub_86B8E0(v2, 32, 1, 0, 127, -1);
  sub_86E080(v2, 2, 4, 0, 2, 0);
  if ( *v2 )
    goto LABEL_62;
  v32 = *((_QWORD *)v2 + 10);
  v33 = *(_QWORD *)(v32 + 8);
  v34 = v33 + 16;
  if ( (unsigned __int64)(v33 + 16) <= 0xFF0 )
  {
    v36 = (__m128 *)(v32 + v33 + 16);
    *(_QWORD *)(v32 + 8) = v34;
    if ( v36 )
      goto LABEL_61;
  }
  else
  {
    v35 = (__m128 *)(**((__int64 (__fastcall ***)(__int64, _QWORD))v2 + 7))(
                      4096,
                      *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL));
    if ( v35 )
    {
      v35->m128_u64[0] = *((_QWORD *)v2 + 10);
      *((_QWORD *)v2 + 10) = v35;
      v36 = v35 + 1;
      v36[-1].m128_u64[1] = 16;
LABEL_61:
      *v36 = _mm_loadh_ps((const double *)(a1 + 360));
      *(_QWORD *)(a1 + 360) = v36;
      goto LABEL_62;
    }
    *v2 = 2;
  }
LABEL_62:
  v37 = sub_868BC0((__int64)v2);
  if ( v29 && v37 )
  {
    v29[2] &= ~1uLL;
    v29[3] = v37;
  }
  sub_86B8E0(v2, 32, 142, *(int *)(a1 + 100), 4, 0);
LABEL_5:
  v6 = sub_868C70((__int64)v2, 36);
  if ( v5 )
  {
LABEL_6:
    v38 = sub_868BC0((__int64)v2);
    sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
    v7 = sub_86E080(v2, 3, 2, 0, 13, 0);
    sub_86B8E0(v2, 33, 1, 0, 130, 0);
    v8 = *(unsigned __int8 *)(a1 + 216);
    if ( !*v2 )
    {
      v2[36] = 0;
      sub_868840(v2, 1, 0, 127, v8);
    }
    sub_870770((__int64)v2, 32, 1, 0);
    sub_86D900(v2, 0x40u, 2, 0, 2, 0, 1u, 0);
    v9 = sub_868C70((__int64)v2, 36);
    v10 = sub_868BC0((__int64)v2);
    sub_86B8E0(v2, 33, 1, 0, 130, 0);
    v11 = sub_86E080(v2, 0, 1, 0, 127, *(unsigned __int8 *)(a1 + 217));
    if ( v11 && v38 )
    {
      v11[2] &= ~1uLL;
      v11[3] = v38;
    }
    sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
    v12 = sub_868BC0((__int64)v2);
    if ( v12 && v6 )
    {
      v6[2] &= ~1uLL;
      v6[3] = v12;
    }
    v13 = sub_868BC0((__int64)v2);
    if ( v7 && v13 )
    {
      v7[2] &= ~1uLL;
      v7[3] = v13;
    }
    v14 = sub_868BC0((__int64)v2);
    if ( v9 && v14 )
    {
      v9[2] &= ~1uLL;
      v9[3] = v14;
    }
    return v10;
  }
LABEL_35:
  v10 = sub_868BC0((__int64)v2);
  sub_86D900(v2, 0x40u, 2, 0, 2, 0, 0x7Fu, 1);
  v22 = sub_868BC0((__int64)v2);
  if ( v6 && v22 )
  {
    v6[2] &= ~1uLL;
    v6[3] = v22;
  }
  return v10;
}
