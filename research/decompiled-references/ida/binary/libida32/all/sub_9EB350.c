__int64 __fastcall sub_9EB350(__int64 a1, __int64 a2, unsigned int **a3)
{
  unsigned int v6; // r12d
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // rdx
  _DWORD *v12; // rdx
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // rdx
  int v18; // ecx
  void *v19; // rdi
  __m128 v20; // xmm0
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rdx
  int v24; // esi
  int v25; // ecx
  __int64 v26; // rax
  int v27; // esi
  _DWORD *v28; // rdx
  int v29; // ecx
  __m128 v30; // xmm0
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-A0h] BYREF
  _DWORD *v36; // [rsp+10h] [rbp-98h]
  _QWORD *v37; // [rsp+18h] [rbp-90h]
  _DWORD *v38; // [rsp+20h] [rbp-88h]
  int v39; // [rsp+2Ch] [rbp-7Ch]
  _QWORD *v40; // [rsp+30h] [rbp-78h] BYREF
  char v41; // [rsp+38h] [rbp-70h]
  _QWORD v42[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-58h] BYREF
  char v44; // [rsp+58h] [rbp-50h]
  _QWORD *v45; // [rsp+60h] [rbp-48h] BYREF
  char v46; // [rsp+68h] [rbp-40h]

  sub_2006410(&v45, a2, 10, 0);
  if ( v45 )
  {
    v6 = 1;
    (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
    return v6;
  }
  sub_9E7920((__int64)&v40, a2);
  v6 = v41 & 1;
  if ( (v41 & 1) == 0 )
  {
    v8 = (int)v40;
    v9 = HIDWORD(v40);
    if ( (_DWORD)v40 == 1 )
      goto LABEL_22;
    if ( !(_DWORD)v40 )
    {
LABEL_21:
      v6 = 1;
      goto LABEL_22;
    }
    v37 = v42;
    while ( 1 )
    {
      if ( v8 == 2 )
      {
        sub_9E7DB0((__int64 *)&v45, a2);
        if ( v45 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
          goto LABEL_21;
        }
        sub_9E7920((__int64)&v45, a2);
        sub_9E7310((__int64)&v40, (__int64 *)&v45);
        sub_9E72F0((__int64 *)&v45);
        if ( (v41 & 1) != 0 )
        {
          v31 = v40;
          v40 = nullptr;
          v45 = v31;
          sub_9EABA0(&v45);
          if ( v45 )
            (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
          goto LABEL_22;
        }
        v8 = (int)v40;
        v9 = HIDWORD(v40);
        goto LABEL_19;
      }
      v10 = v37;
      *((_DWORD *)a3 + 2) = 0;
      v42[0] = 0;
      v42[1] = 0;
      sub_20041D0(&v43, a2, v9, a3, v10);
      if ( (v44 & 1) != 0 )
      {
        v33 = v43;
        v43 = nullptr;
        v45 = v33;
        sub_9EABA0(&v45);
        if ( v45 )
          (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
        goto LABEL_37;
      }
      if ( (_DWORD)v43 == 1 )
      {
        if ( *(_QWORD *)(a1 + 88) )
        {
LABEL_41:
          v6 = 1;
LABEL_37:
          sub_9E7150((__int64 *)&v43);
          goto LABEL_22;
        }
        v22 = **a3;
        v35 = v42[0];
        v23 = (_DWORD *)(v42[0] + v22);
        v24 = *v23;
        v25 = v23[1];
        v38 = v23;
        v39 = v24;
        LODWORD(v36) = v25;
        v26 = operator new(0x28u);
        v27 = v39;
        v28 = v38;
        v29 = (int)v36;
        v19 = *(void **)(a1 + 88);
        *(_QWORD *)(a1 + 88) = v26;
        *(_DWORD *)v26 = v27;
        *(_DWORD *)(v26 + 4) = v29;
        v36 = v28 + 2;
        v30 = _mm_loadh_ps((const double *)&v35);
        *(_QWORD *)(v26 + 32) = v35 + 4;
        *(__m128 *)(v26 + 8) = v30;
        if ( !v19 )
          goto LABEL_15;
      }
      else
      {
        if ( (_DWORD)v43 != 2 )
          goto LABEL_15;
        if ( *(_QWORD *)(a1 + 96) )
          goto LABEL_41;
        v11 = **a3;
        v35 = v42[0];
        v12 = (_DWORD *)(v42[0] + v11);
        v13 = *v12;
        v14 = v12[1];
        v38 = v12;
        v39 = v13;
        LODWORD(v36) = v14;
        v15 = operator new(0x28u);
        v16 = v39;
        v17 = v38;
        v18 = (int)v36;
        v19 = *(void **)(a1 + 96);
        *(_QWORD *)(a1 + 96) = v15;
        *(_DWORD *)v15 = v16;
        *(_DWORD *)(v15 + 4) = v18;
        v36 = v17 + 2;
        v20 = _mm_loadh_ps((const double *)&v35);
        *(_QWORD *)(v15 + 32) = v35 + 4;
        *(__m128 *)(v15 + 8) = v20;
        if ( !v19 )
          goto LABEL_15;
      }
      operator delete(v19, 0x28u);
LABEL_15:
      sub_9E7920((__int64)&v45, a2);
      sub_9E72F0((__int64 *)&v40);
      v41 = v46 & 1 | v41 & 0xFE;
      v21 = v45;
      if ( (v46 & 1) != 0 )
        v45 = nullptr;
      v40 = v21;
      sub_9E72F0((__int64 *)&v45);
      if ( (v41 & 1) != 0 )
      {
        v34 = v40;
        v40 = nullptr;
        v45 = v34;
        sub_9EABA0(&v45);
        if ( v45 )
          (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
        v6 = 0;
        goto LABEL_37;
      }
      LODWORD(v35) = HIDWORD(v40);
      LODWORD(v36) = (_DWORD)v40;
      sub_9E7150((__int64 *)&v43);
      v9 = (unsigned int)v35;
      v8 = (int)v36;
LABEL_19:
      if ( v8 == 1 )
        goto LABEL_22;
      if ( !v8 )
        goto LABEL_21;
    }
  }
  v32 = v40;
  v40 = nullptr;
  v45 = v32;
  sub_9EABA0(&v45);
  if ( v45 )
    (*(void (__fastcall **)(_QWORD *))(*v45 + 8LL))(v45);
  v6 = 0;
LABEL_22:
  sub_9E72F0((__int64 *)&v40);
  return v6;
}

