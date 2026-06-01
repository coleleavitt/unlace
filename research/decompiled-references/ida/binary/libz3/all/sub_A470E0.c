void __fastcall sub_A470E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r12d
  _QWORD *v6; // rbp
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // r13
  _DWORD *v12; // rax
  unsigned __int8 v13; // r15
  _DWORD *v14; // rdi
  _DWORD *v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  unsigned int *v20; // r12
  __int64 v21; // r14
  _QWORD *v22; // r12
  __int64 v23; // r14
  void *v24; // rdi
  __int64 v25; // r15
  void *v26; // rdi
  char v27; // dl
  __int64 v28; // rsi
  unsigned int v29; // edx
  int v30; // edi
  __int64 v31; // r8
  unsigned int v32; // edx
  __int64 v33; // rsi
  unsigned int v34; // edx
  int v35; // edi
  __int64 v36; // r8
  unsigned int v37; // edx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // dl
  _QWORD v43[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v44[11]; // [rsp+50h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2);
  v7 = *(_DWORD **)(sub_15D1F10(*v6) + 24);
  if ( v7 && *v7 == 5 && v7[1] == 1 || (v8 = *(_DWORD **)(sub_15D1F10(*v6) + 24)) != nullptr && *v8 == 5 && !v8[1] )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 336) + 116LL) )
    {
      v9 = (_DWORD *)*v6;
      v10 = *(_QWORD *)(a1 + 32);
      v11 = *(_QWORD **)(v10 + 8LL * a3);
      if ( *(_WORD *)(*v6 + 4LL) || (v12 = *(_DWORD **)(*((_QWORD *)v9 + 2) + 24LL)) == nullptr || *v12 != 5 || v12[1] )
      {
        v9 = (_DWORD *)*v11;
      }
      else
      {
        v39 = v6;
        v4 = a3;
        v6 = *(_QWORD **)(v10 + 8LL * a3);
        v11 = v39;
      }
      v43[0] = 0;
      v43[1] = 0;
      v43[2] = 1;
      v43[3] = 0;
      v13 = sub_1666AE0(a1 + 344, v9, v43, v44);
      if ( v13 )
      {
        v44[0] = 0;
        v44[1] = 0;
        v44[2] = 1;
        v44[3] = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)v44, (int *)v43);
        v40 = sub_186B270(0x48u);
        *(_DWORD *)(v40 + 8) = v4;
        v23 = v40;
        *(_QWORD *)(v40 + 16) = 0;
        *(_QWORD *)v40 = &off_1C56290;
        *(_QWORD *)(v40 + 24) = 0;
        *(_QWORD *)(v40 + 32) = 1;
        *(_QWORD *)(v40 + 40) = 0;
        sub_27B950((__int64)qword_1C7F2C0, v40 + 16, (int *)v44);
        *(_BYTE *)(v23 + 48) &= 0xFCu;
        *(_QWORD *)v23 = &off_1C56300;
        *(_QWORD *)(v23 + 56) = v6;
        *(_QWORD *)(v23 + 64) = v11;
        v41 = sub_186B270(0x48u);
        *(_DWORD *)(v41 + 8) = v4;
        v25 = v41;
        *(_QWORD *)(v41 + 16) = 0;
        *(_QWORD *)v41 = &off_1C56290;
        *(_QWORD *)(v41 + 24) = 0;
        *(_QWORD *)(v41 + 32) = 1;
        *(_QWORD *)(v41 + 40) = 0;
        sub_27B950((__int64)qword_1C7F2C0, v41 + 16, (int *)v44);
        v42 = *(_BYTE *)(v25 + 48);
        *(_QWORD *)(v25 + 56) = v6;
        *(_QWORD *)(v25 + 64) = v11;
        *(_QWORD *)v25 = &off_1C56300;
        *(_BYTE *)(v25 + 48) = v42 & 0xFC | 1;
        sub_25A130((char *)v44);
      }
      else
      {
        v14 = (_DWORD *)*v11;
        if ( *(_DWORD *)*v11 >= *(_DWORD *)*v6 )
        {
          v14 = (_DWORD *)*v6;
          v38 = v11;
          v11 = v6;
          v6 = v38;
        }
        v15 = *(_DWORD **)(sub_15D1F10(v14) + 24);
        if ( v15 && *v15 == 5 )
          v13 = v15[1] == 1;
        v19 = *(_QWORD *)(a1 + 352);
        if ( !v19 )
        {
          sub_16669E0(a1 + 344);
          v19 = *(_QWORD *)(a1 + 352);
        }
        sub_166A700(v19, (unsigned int)&qword_1C7F260, v13, v16, v17, v18);
        sub_15E1B70(*(_QWORD *)(a1 + 344));
        v20 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 344));
        sub_B6F780(*(_QWORD *)(a1 + 16));
        v21 = *(_QWORD *)(a1 + 16);
        v22 = *(_QWORD **)(*(_QWORD *)(v21 + 8656) + 8LL * *v20);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 7488) + 48LL))(*(_QWORD *)(v21 + 7488), *v22);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 7488) + 64LL))(*(_QWORD *)(v21 + 7488));
        LODWORD(v22) = sub_B39350(v22, *(unsigned int *)(a1 + 8));
        v23 = sub_186B270(0x48u);
        *(_QWORD *)v23 = &off_1C56290;
        *(_DWORD *)(v23 + 8) = (_DWORD)v22;
        v24 = qword_1C7F2C0;
        *(_QWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 24) = 0;
        *(_QWORD *)(v23 + 32) = 1;
        *(_QWORD *)(v23 + 40) = 0;
        sub_27B950((__int64)v24, v23 + 16, &qword_1C7F2A0);
        *(_BYTE *)(v23 + 48) &= 0xFCu;
        *(_QWORD *)v23 = &off_1C56300;
        *(_QWORD *)(v23 + 56) = v11;
        *(_QWORD *)(v23 + 64) = v6;
        v25 = sub_186B270(0x48u);
        *(_DWORD *)(v25 + 8) = (_DWORD)v22;
        *(_QWORD *)v25 = &off_1C56290;
        v26 = qword_1C7F2C0;
        *(_QWORD *)(v25 + 16) = 0;
        *(_QWORD *)(v25 + 24) = 0;
        *(_QWORD *)(v25 + 32) = 1;
        *(_QWORD *)(v25 + 40) = 0;
        sub_27B950((__int64)v26, v25 + 16, &qword_1C7F2A0);
        v27 = *(_BYTE *)(v25 + 48);
        *(_QWORD *)(v25 + 56) = v11;
        *(_QWORD *)(v25 + 64) = v6;
        *(_QWORD *)v25 = &off_1C56300;
        *(_BYTE *)(v25 + 48) = v27 & 0xFC | 1;
      }
      v28 = *(_QWORD *)(a1 + 960);
      if ( !v28 || (v29 = *(_DWORD *)(v28 - 4), v30 = *(_DWORD *)(v28 - 8), v29 == v30) )
      {
        sub_A47000((unsigned int **)(a1 + 960));
        v28 = *(_QWORD *)(a1 + 960);
        v29 = *(_DWORD *)(v28 - 4);
        v30 = *(_DWORD *)(v28 - 8);
      }
      v31 = v29;
      v32 = v29 + 1;
      *(_QWORD *)(v28 + 8 * v31) = v23;
      *(_DWORD *)(v28 - 4) = v32;
      if ( v32 == v30 )
      {
        sub_A47000((unsigned int **)(a1 + 960));
        v28 = *(_QWORD *)(a1 + 960);
        v32 = *(_DWORD *)(v28 - 4);
      }
      *(_QWORD *)(v28 + 8LL * v32) = v25;
      *(_DWORD *)(v28 - 4) = v32 + 1;
      v33 = *(_QWORD *)(a1 + 672);
      if ( !v33 || (v34 = *(_DWORD *)(v33 - 4), v35 = *(_DWORD *)(v33 - 8), v34 == v35) )
      {
        sub_A47000((unsigned int **)(a1 + 672));
        v33 = *(_QWORD *)(a1 + 672);
        v34 = *(_DWORD *)(v33 - 4);
        v35 = *(_DWORD *)(v33 - 8);
      }
      v36 = v34;
      v37 = v34 + 1;
      *(_QWORD *)(v33 + 8 * v36) = v23;
      *(_DWORD *)(v33 - 4) = v37;
      if ( v37 == v35 )
      {
        sub_A47000((unsigned int **)(a1 + 672));
        v33 = *(_QWORD *)(a1 + 672);
        v37 = *(_DWORD *)(v33 - 4);
      }
      *(_QWORD *)(v33 + 8LL * v37) = v25;
      *(_DWORD *)(v33 - 4) = v37 + 1;
      sub_25A130((char *)v43);
    }
    else
    {
      sub_8E1D30(
        a1 + 504,
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 512) + 32LL) + 8LL * a2),
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 512) + 32LL) + 8LL * a3));
    }
  }
}

