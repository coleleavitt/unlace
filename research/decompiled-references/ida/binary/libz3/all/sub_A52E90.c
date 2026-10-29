void __fastcall sub_A52E90(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  _QWORD *v6; // r12
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // r15
  _DWORD *v12; // rax
  unsigned __int8 v13; // r14
  _DWORD *v14; // rdi
  _DWORD *v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdi
  unsigned int *v20; // rbp
  __int64 v21; // r13
  _QWORD *v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // r14
  char v25; // dl
  __int64 v26; // rcx
  unsigned int v27; // edx
  int v28; // esi
  __int64 v29; // rdi
  unsigned int v30; // edx
  __int64 v31; // rcx
  unsigned int v32; // edx
  int v33; // esi
  __int64 v34; // rdi
  unsigned int v35; // edx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  char v38; // dl
  _QWORD v39[4]; // [rsp+20h] [rbp-F8h] BYREF
  char v40[32]; // [rsp+40h] [rbp-D8h] BYREF
  char v41[32]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v42[152]; // [rsp+80h] [rbp-98h] BYREF

  v3 = a2;
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8LL * a2);
  v7 = *(_DWORD **)(sub_15D1F10(*v6) + 24);
  if ( v7 && *v7 == 5 && v7[1] == 1 || (v8 = *(_DWORD **)(sub_15D1F10(*v6) + 24)) != nullptr && *v8 == 5 && !v8[1] )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 464) + 116LL) )
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
        v37 = v6;
        v3 = a3;
        v6 = *(_QWORD **)(v10 + 8LL * a3);
        v11 = v37;
      }
      v39[0] = 0;
      v39[1] = 0;
      v39[2] = 1;
      v39[3] = 0;
      v13 = sub_1666AE0(a1 + 472, v9, v39, v42);
      if ( v13 )
      {
        sub_894960((__int64)v40, (__int64)v39);
        sub_9D4F70((__int64)v42, (__int64)v40);
        sub_25A130(v41);
        sub_25A130(v40);
        v23 = sub_186B270(0x88u);
        *(_QWORD *)v23 = &off_1C563C8;
        *(_DWORD *)(v23 + 8) = v3;
        sub_8A6550(v23 + 16, (__int64)v42);
        *(_BYTE *)(v23 + 112) &= 0xFCu;
        *(_QWORD *)v23 = &off_1C56438;
        *(_QWORD *)(v23 + 120) = v6;
        *(_QWORD *)(v23 + 128) = v11;
        v24 = sub_186B270(0x88u);
        *(_DWORD *)(v24 + 8) = v3;
        *(_QWORD *)v24 = &off_1C563C8;
        sub_8A6550(v24 + 16, (__int64)v42);
        v38 = *(_BYTE *)(v24 + 112);
        *(_QWORD *)(v24 + 120) = v6;
        *(_QWORD *)(v24 + 128) = v11;
        *(_QWORD *)v24 = &off_1C56438;
        *(_BYTE *)(v24 + 112) = v38 & 0xFC | 1;
        sub_2A6060((__int64)v42);
      }
      else
      {
        v14 = (_DWORD *)*v11;
        if ( *(_DWORD *)*v11 >= *(_DWORD *)*v6 )
        {
          v14 = (_DWORD *)*v6;
          v36 = v11;
          v11 = v6;
          v6 = v36;
        }
        v15 = *(_DWORD **)(sub_15D1F10(v14) + 24);
        if ( v15 && *v15 == 5 )
          v13 = v15[1] == 1;
        v19 = *(_QWORD *)(a1 + 480);
        if ( !v19 )
        {
          sub_16669E0(a1 + 472);
          v19 = *(_QWORD *)(a1 + 480);
        }
        sub_166A700(v19, (unsigned int)&qword_1C7F260, v13, v16, v17, v18);
        sub_15E1B70(*(_QWORD *)(a1 + 472));
        v20 = (unsigned int *)sub_15E1B70(*(_QWORD *)(a1 + 472));
        sub_B6F780(*(_QWORD *)(a1 + 16));
        v21 = *(_QWORD *)(a1 + 16);
        v22 = *(_QWORD **)(*(_QWORD *)(v21 + 8656) + 8LL * *v20);
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 7488) + 48LL))(*(_QWORD *)(v21 + 7488), *v22);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v21 + 7488) + 64LL))(*(_QWORD *)(v21 + 7488));
        LODWORD(v21) = sub_B39350(v22, *(unsigned int *)(a1 + 8));
        v23 = sub_186B270(0x88u);
        sub_9D4F70((__int64)v42, (__int64)&qword_1C7F200);
        *(_DWORD *)(v23 + 8) = v21;
        *(_QWORD *)v23 = &off_1C563C8;
        sub_8A6550(v23 + 16, (__int64)v42);
        *(_BYTE *)(v23 + 112) &= 0xFCu;
        *(_QWORD *)v23 = &off_1C56438;
        *(_QWORD *)(v23 + 120) = v11;
        *(_QWORD *)(v23 + 128) = v6;
        sub_2A6060((__int64)v42);
        v24 = sub_186B270(0x88u);
        sub_9D4F70((__int64)v42, (__int64)&qword_1C7F200);
        *(_DWORD *)(v24 + 8) = v21;
        *(_QWORD *)v24 = &off_1C563C8;
        sub_8A6550(v24 + 16, (__int64)v42);
        v25 = *(_BYTE *)(v24 + 112);
        *(_QWORD *)(v24 + 120) = v11;
        *(_QWORD *)(v24 + 128) = v6;
        *(_QWORD *)v24 = &off_1C56438;
        *(_BYTE *)(v24 + 112) = v25 & 0xFC | 1;
        sub_2A6060((__int64)v42);
      }
      v26 = *(_QWORD *)(a1 + 1152);
      if ( !v26 || (v27 = *(_DWORD *)(v26 - 4), v28 = *(_DWORD *)(v26 - 8), v27 == v28) )
      {
        sub_A52DB0((unsigned int **)(a1 + 1152));
        v26 = *(_QWORD *)(a1 + 1152);
        v27 = *(_DWORD *)(v26 - 4);
        v28 = *(_DWORD *)(v26 - 8);
      }
      v29 = v27;
      v30 = v27 + 1;
      *(_QWORD *)(v26 + 8 * v29) = v23;
      *(_DWORD *)(v26 - 4) = v30;
      if ( v30 == v28 )
      {
        sub_A52DB0((unsigned int **)(a1 + 1152));
        v26 = *(_QWORD *)(a1 + 1152);
        v30 = *(_DWORD *)(v26 - 4);
      }
      *(_QWORD *)(v26 + 8LL * v30) = v24;
      *(_DWORD *)(v26 - 4) = v30 + 1;
      v31 = *(_QWORD *)(a1 + 800);
      if ( !v31 || (v32 = *(_DWORD *)(v31 - 4), v33 = *(_DWORD *)(v31 - 8), v32 == v33) )
      {
        sub_A52DB0((unsigned int **)(a1 + 800));
        v31 = *(_QWORD *)(a1 + 800);
        v32 = *(_DWORD *)(v31 - 4);
        v33 = *(_DWORD *)(v31 - 8);
      }
      v34 = v32;
      v35 = v32 + 1;
      *(_QWORD *)(v31 + 8 * v34) = v23;
      *(_DWORD *)(v31 - 4) = v35;
      if ( v35 == v33 )
      {
        sub_A52DB0((unsigned int **)(a1 + 800));
        v31 = *(_QWORD *)(a1 + 800);
        v35 = *(_DWORD *)(v31 - 4);
      }
      *(_QWORD *)(v31 + 8LL * v35) = v24;
      *(_DWORD *)(v31 - 4) = v35 + 1;
      sub_25A130((char *)v39);
    }
    else
    {
      sub_8E1D30(
        a1 + 632,
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 640) + 32LL) + 8LL * a2),
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 640) + 32LL) + 8LL * a3));
    }
  }
}

