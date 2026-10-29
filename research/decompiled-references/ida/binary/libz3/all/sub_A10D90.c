void __fastcall sub_A10D90(__int64 a1, unsigned int a2, unsigned int a3)
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
  __int64 v23; // r15
  __int64 v24; // r14
  char v25; // al
  __int64 v26; // rsi
  unsigned int v27; // ecx
  int v28; // edi
  __int64 v29; // r8
  unsigned int v30; // ecx
  __int64 v31; // rsi
  unsigned int v32; // ecx
  int v33; // edi
  unsigned int v34; // edx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  char v37; // cl
  _QWORD v38[4]; // [rsp+20h] [rbp-98h] BYREF
  char v39[32]; // [rsp+40h] [rbp-78h] BYREF
  char v40[88]; // [rsp+60h] [rbp-58h] BYREF

  v4 = a2;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2);
  v7 = *(_DWORD **)(sub_15D1F10(*v6) + 24);
  if ( v7 && *v7 == 5 && v7[1] == 1 || (v8 = *(_DWORD **)(sub_15D1F10(*v6) + 24)) != nullptr && *v8 == 5 && !v8[1] )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 400) + 116LL) )
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
        v36 = v6;
        v4 = a3;
        v6 = *(_QWORD **)(v10 + 8LL * a3);
        v11 = v36;
      }
      v38[0] = 0;
      v38[1] = 0;
      v38[2] = 1;
      v38[3] = 0;
      v13 = sub_1666AE0(a1 + 408, v9, v38, v39);
      if ( v13 )
      {
        sub_894960((__int64)v39, (__int64)v38);
        v23 = sub_186B270(0x68u);
        *(_QWORD *)v23 = &off_1C56158;
        *(_DWORD *)(v23 + 8) = v4;
        sub_91F480(v23 + 16, (__int64)v39);
        *(_BYTE *)(v23 + 80) &= 0xFCu;
        *(_QWORD *)v23 = &off_1C561C8;
        *(_QWORD *)(v23 + 88) = v6;
        *(_QWORD *)(v23 + 96) = v11;
        v24 = sub_186B270(0x68u);
        *(_DWORD *)(v24 + 8) = v4;
        *(_QWORD *)v24 = &off_1C56158;
        sub_91F480(v24 + 16, (__int64)v39);
        v37 = *(_BYTE *)(v24 + 80);
        *(_QWORD *)(v24 + 88) = v6;
        *(_QWORD *)(v24 + 96) = v11;
        *(_QWORD *)v24 = &off_1C561C8;
        *(_BYTE *)(v24 + 80) = v37 & 0xFC | 1;
        sub_25A130(v40);
        sub_25A130(v39);
      }
      else
      {
        v14 = (_DWORD *)*v11;
        if ( *(_DWORD *)*v11 >= *(_DWORD *)*v6 )
        {
          v14 = (_DWORD *)*v6;
          v35 = v11;
          v11 = v6;
          v6 = v35;
        }
        v15 = *(_DWORD **)(sub_15D1F10(v14) + 24);
        if ( v15 && *v15 == 5 )
          v13 = v15[1] == 1;
        v19 = *(_QWORD *)(a1 + 416);
        if ( !v19 )
        {
          sub_16669E0(a1 + 408);
          v19 = *(_QWORD *)(a1 + 416);
        }
        sub_166A700(v19, (unsigned int)&qword_1C7F260, v13, v16, v17, v18);
        sub_15E1B70(*(_QWORD *)(a1 + 408));
        v20 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 408));
        sub_B6F780(*(_QWORD *)(a1 + 16));
        v21 = *(_QWORD *)(a1 + 16);
        v22 = *(_QWORD **)(*(_QWORD *)(v21 + 8656) + 8LL * *v20);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 7488) + 48LL))(*(_QWORD *)(v21 + 7488), *v22);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 7488) + 64LL))(*(_QWORD *)(v21 + 7488));
        LODWORD(v22) = sub_B39350(v22, *(unsigned int *)(a1 + 8));
        v23 = sub_186B270(0x68u);
        *(_QWORD *)v23 = &off_1C56158;
        *(_DWORD *)(v23 + 8) = (_DWORD)v22;
        sub_91F480(v23 + 16, (__int64)&qword_1C7F200);
        *(_BYTE *)(v23 + 80) &= 0xFCu;
        *(_QWORD *)v23 = &off_1C561C8;
        *(_QWORD *)(v23 + 88) = v11;
        *(_QWORD *)(v23 + 96) = v6;
        v24 = sub_186B270(0x68u);
        *(_DWORD *)(v24 + 8) = (_DWORD)v22;
        *(_QWORD *)v24 = &off_1C56158;
        sub_91F480(v24 + 16, (__int64)&qword_1C7F200);
        v25 = *(_BYTE *)(v24 + 80);
        *(_QWORD *)(v24 + 88) = v11;
        *(_QWORD *)(v24 + 96) = v6;
        *(_BYTE *)(v24 + 80) = v25 & 0xFC | 1;
        *(_QWORD *)v24 = &off_1C561C8;
      }
      v26 = *(_QWORD *)(a1 + 1056);
      if ( !v26 || (v27 = *(_DWORD *)(v26 - 4), v28 = *(_DWORD *)(v26 - 8), v27 == v28) )
      {
        sub_A10CB0((unsigned int **)(a1 + 1056));
        v26 = *(_QWORD *)(a1 + 1056);
        v27 = *(_DWORD *)(v26 - 4);
        v28 = *(_DWORD *)(v26 - 8);
      }
      v29 = v27;
      v30 = v27 + 1;
      *(_QWORD *)(v26 + 8 * v29) = v23;
      *(_DWORD *)(v26 - 4) = v30;
      if ( v30 == v28 )
      {
        sub_A10CB0((unsigned int **)(a1 + 1056));
        v26 = *(_QWORD *)(a1 + 1056);
        v30 = *(_DWORD *)(v26 - 4);
      }
      *(_QWORD *)(v26 + 8LL * v30) = v24;
      *(_DWORD *)(v26 - 4) = v30 + 1;
      v31 = *(_QWORD *)(a1 + 736);
      if ( !v31 || (v32 = *(_DWORD *)(v31 - 4), v33 = *(_DWORD *)(v31 - 8), v32 == v33) )
      {
        sub_A10CB0((unsigned int **)(a1 + 736));
        v31 = *(_QWORD *)(a1 + 736);
        v32 = *(_DWORD *)(v31 - 4);
        v33 = *(_DWORD *)(v31 - 8);
      }
      v34 = v32 + 1;
      *(_QWORD *)(v31 + 8LL * v32) = v23;
      *(_DWORD *)(v31 - 4) = v32 + 1;
      if ( v32 + 1 == v33 )
      {
        sub_A10CB0((unsigned int **)(a1 + 736));
        v31 = *(_QWORD *)(a1 + 736);
        v34 = *(_DWORD *)(v31 - 4);
      }
      *(_QWORD *)(v31 + 8LL * v34) = v24;
      *(_DWORD *)(v31 - 4) = v34 + 1;
      sub_25A130((char *)v38);
    }
    else
    {
      sub_8E1D30(
        a1 + 568,
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 32LL) + 8LL * a2),
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 576) + 32LL) + 8LL * a3));
    }
  }
}

