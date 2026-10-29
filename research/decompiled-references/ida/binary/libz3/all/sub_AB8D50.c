__int64 __fastcall sub_AB8D50(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rdi
  unsigned int *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r14
  unsigned int v8; // eax
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int *v16; // rax
  unsigned int v17; // esi
  void *v18; // rbx
  __int64 (__fastcall **v20)(); // rax
  __int64 (__fastcall **v21)(); // r14
  unsigned int *v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // [rsp+0h] [rbp-C0h]
  void *v27; // [rsp+0h] [rbp-C0h]
  void *v28; // [rsp+8h] [rbp-B8h]
  void *v29; // [rsp+10h] [rbp-B0h]
  unsigned int v30; // [rsp+10h] [rbp-B0h]
  char v31; // [rsp+2Ch] [rbp-94h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-90h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-80h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-60h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+70h] [rbp-50h] BYREF
  __int64 v37; // [rsp+78h] [rbp-48h]
  _QWORD v38[8]; // [rsp+80h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = *((unsigned int **)a2 + 4);
  v5 = *(_QWORD *)(v3 + 8656);
  if ( !v5 || (v6 = *v4, (unsigned int)v6 >= *(_DWORD *)(v5 - 4)) || !*(_QWORD *)(v5 + 8 * v6) )
  {
    sub_B6F780(v3);
    sub_AB6F20(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v4));
    v6 = *v4;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
  }
  v7 = *(_QWORD *)(v5 + 8 * v6);
  v8 = sub_B39350(v7, *(unsigned int *)(a1 + 8));
  v11 = v8;
  if ( v8 == -1 )
  {
    sub_AB6F20(a1, v7);
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_QWORD *)(v12 + 8832);
    if ( !v13 || (v14 = *a2, (unsigned int)v14 >= *(_DWORD *)(v13 - 4)) || *(_DWORD *)(v13 + 4 * v14) == 0x7FFFFFFF )
    {
      v30 = sub_B67520(v12, a2);
      sub_8F1CE0(*(_QWORD *)(a1 + 16), v30, *(_DWORD *)(a1 + 8));
      v20 = (__int64 (__fastcall **)())sub_180C100(a1 + 408, 16);
      *v20 = (__int64 (__fastcall *)())off_1C56648;
      v21 = v20;
      v20[1] = nullptr;
      v36 = v20;
      sub_AB5C30((_QWORD *)(a1 + 536), v30, (__int64 *)&v36, 0);
      v37 = a1;
      LODWORD(v38[0]) = v30;
      v36 = off_1C566C0;
      sub_AC4C00(a1 + 392, &v36);
      v22 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) + 8LL);
      if ( *((_BYTE *)v22 + 8) )
        sub_DBF6E(0);
      v23 = *v22;
      v24 = sub_180C100(a1 + 408, 16);
      *(_DWORD *)v24 = v11;
      *(_DWORD *)(v24 + 4) = v23;
      *(_QWORD *)(v24 + 8) = 0;
      v21[1] = (__int64 (__fastcall *)())v24;
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 8 * v11);
      if ( v25 && (unsigned int)v23 < *(_DWORD *)(v25 - 4) )
      {
        sub_B6A470(*(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 8), *(unsigned int *)(v25 + 4 * v23), 2 * v30 + 1, 0, 0);
        sub_B6A470(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 8),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 504) + 8 * v11) + 4 * v23) ^ 1u,
          2 * v30,
          0,
          0);
      }
    }
  }
  v32[0] = 0;
  v32[1] = 0;
  v33[0] = 1;
  v33[1] = 0;
  if ( (unsigned __int8)sub_1673B50((int)a1 + 80, (_DWORD)v4, (unsigned int)v32, (unsigned int)&v31, v9, v10) )
  {
    v35[0] = 1;
    v34[1] = 0;
    v15 = *((_QWORD *)a2 + 2);
    v35[1] = 0;
    v34[0] = 0;
    v16 = *(unsigned int **)(*(_QWORD *)(v15 + 24) + 8LL);
    if ( *((_BYTE *)v16 + 8) )
      sub_DBF6E(0);
    sub_17F6290(&v36, *v16);
    v29 = qword_1C7F2C0;
    sub_1833EB0(qword_1C7F2C0, v32, &v36, v34);
    sub_182CBA0(v29, v35);
    BYTE4(v35[0]) &= ~1u;
    LODWORD(v35[0]) = 1;
    v26 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v36);
    sub_182CBA0(v26, v38);
    v36 = (__int64 (__fastcall **)())(&dword_0 + 2);
    v37 = 0;
    v38[0] = 1;
    v38[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v38);
    BYTE4(v38[0]) &= ~1u;
    LODWORD(v38[0]) = 1;
    v27 = qword_1C7F2C0;
    sub_1832AB0(qword_1C7F2C0, v34, &v36, v34);
    sub_182CBA0(v27, v35);
    BYTE4(v35[0]) &= ~1u;
    LODWORD(v35[0]) = 1;
    v28 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v36);
    sub_182CBA0(v28, v38);
    LODWORD(v36) = sub_B645B0(*(_QWORD *)(a1 + 16), a2);
    v17 = (unsigned int)v36;
    if ( !LODWORD(v34[0]) )
    {
      v17 = (unsigned int)v36 ^ 1;
      LODWORD(v36) = (unsigned int)v36 ^ 1;
    }
    sub_9936C0(*(_QWORD *)(a1 + 16), v17 >> 1);
    sub_B69FE0(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 8), 1, (unsigned int)&v36, 0, 0, 1);
    sub_25A130((char *)v34);
  }
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v32);
  return sub_182CBA0(v18, v33);
}

