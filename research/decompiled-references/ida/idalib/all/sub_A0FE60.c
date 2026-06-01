__int64 __fastcall sub_A0FE60(__int64 a1, __int64 a2, unsigned int **a3)
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
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+8h] [rbp-A0h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-98h]
  _QWORD *v28; // [rsp+18h] [rbp-90h]
  _DWORD *v29; // [rsp+20h] [rbp-88h]
  int v30; // [rsp+2Ch] [rbp-7Ch]
  _QWORD *v31; // [rsp+30h] [rbp-78h] BYREF
  char v32; // [rsp+38h] [rbp-70h]
  _QWORD v33[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-58h] BYREF
  char v35; // [rsp+58h] [rbp-50h]
  _QWORD *v36; // [rsp+60h] [rbp-48h] BYREF
  char v37; // [rsp+68h] [rbp-40h]

  sub_202A150(&v36, a2, 15, 0);
  if ( v36 )
  {
    v6 = 1;
    (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
  }
  else
  {
    sub_A0B660((__int64)&v31, a2);
    v6 = v32 & 1;
    if ( (v32 & 1) == 0 )
    {
      v8 = (int)v31;
      v9 = HIDWORD(v31);
      if ( (_DWORD)v31 == 1 )
        goto LABEL_23;
      if ( !(_DWORD)v31 )
      {
LABEL_22:
        v6 = 1;
        goto LABEL_23;
      }
      v28 = v33;
      while ( 1 )
      {
        switch ( v8 )
        {
          case 2:
            sub_A0BAF0((__int64 *)&v36, a2);
            if ( v36 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
              goto LABEL_22;
            }
            sub_A0B660((__int64)&v36, a2);
            sub_A0B050((__int64)&v31, (__int64 *)&v36);
            sub_A0B030((__int64 *)&v36);
            if ( (v32 & 1) != 0 )
            {
              v22 = v31;
              v31 = nullptr;
              v36 = v22;
              sub_A0E8E0(&v36);
              if ( v36 )
                (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
              goto LABEL_23;
            }
            v8 = (int)v31;
            v9 = HIDWORD(v31);
            break;
          case 1:
            goto LABEL_23;
          case 0:
            goto LABEL_22;
          default:
            v10 = v28;
            *((_DWORD *)a3 + 2) = 0;
            v33[0] = 0;
            v33[1] = 0;
            sub_2027F10(&v34, a2, v9, a3, v10);
            if ( (v35 & 1) != 0 )
            {
              v24 = v34;
              v34 = nullptr;
              v36 = v24;
              sub_A0E8E0(&v36);
              if ( v36 )
                (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
              goto LABEL_33;
            }
            if ( (_DWORD)v34 == 1 )
            {
              if ( *(_QWORD *)(a1 + 112) )
              {
                v6 = 1;
LABEL_33:
                sub_A0AE90((__int64 *)&v34);
                goto LABEL_23;
              }
              v11 = **a3;
              v26 = v33[0];
              v12 = (_DWORD *)(v33[0] + v11);
              v13 = *v12;
              v14 = v12[1];
              v29 = v12;
              v30 = v13;
              LODWORD(v27) = v14;
              v15 = operator new(0x28u);
              v16 = v30;
              v17 = v29;
              v18 = (int)v27;
              v19 = *(void **)(a1 + 112);
              *(_QWORD *)(a1 + 112) = v15;
              *(_DWORD *)v15 = v16;
              *(_DWORD *)(v15 + 4) = v18;
              v27 = v17 + 2;
              v20 = _mm_loadh_ps((const double *)&v26);
              *(_QWORD *)(v15 + 32) = v26 + 4;
              *(__m128 *)(v15 + 8) = v20;
              if ( v19 )
                operator delete(v19, 0x28u);
            }
            sub_A0B660((__int64)&v36, a2);
            sub_A0B030((__int64 *)&v31);
            v32 = v37 & 1 | v32 & 0xFE;
            v21 = v36;
            if ( (v37 & 1) != 0 )
              v36 = nullptr;
            v31 = v21;
            sub_A0B030((__int64 *)&v36);
            if ( (v32 & 1) != 0 )
            {
              v25 = v31;
              v31 = nullptr;
              v36 = v25;
              sub_A0E8E0(&v36);
              if ( v36 )
                (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
              v6 = 0;
              goto LABEL_33;
            }
            LODWORD(v26) = HIDWORD(v31);
            LODWORD(v27) = (_DWORD)v31;
            sub_A0AE90((__int64 *)&v34);
            v9 = (unsigned int)v26;
            v8 = (int)v27;
            break;
        }
      }
    }
    v23 = v31;
    v31 = nullptr;
    v36 = v23;
    sub_A0E8E0(&v36);
    if ( v36 )
      (*(void (__fastcall **)(_QWORD *))(*v36 + 8LL))(v36);
    v6 = 0;
LABEL_23:
    sub_A0B030((__int64 *)&v31);
  }
  return v6;
}
