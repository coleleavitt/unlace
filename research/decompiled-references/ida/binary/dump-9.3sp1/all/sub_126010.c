unsigned __int64 __fastcall sub_126010(char *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 *a5)
{
  int v5; // r14d
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  char v12; // cl
  char v13; // dl
  char v14; // cl
  char v15; // dl
  __int16 v16; // cx
  __int16 v17; // dx
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  char v25; // dl
  char v26; // cl
  char v27; // dl
  __int16 v28; // cx
  __int16 v29; // dx
  int v30; // ecx
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rdx
  _WORD v35[2]; // [rsp+20h] [rbp-50h] BYREF
  int v36; // [rsp+24h] [rbp-4Ch]
  __int64 v37; // [rsp+28h] [rbp-48h]
  unsigned __int64 v38; // [rsp+38h] [rbp-38h]

  v5 = a3;
  v38 = __readfsqword(0x28u);
  v7 = j__qalloc_or_throw(80, a2, a3, a4);
  v8 = v7 + 48;
  *(_QWORD *)(v7 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 40) = 0;
  *(_QWORD *)(v7 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(v7 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v7 + 72) = 0;
  sub_330970(v7, a4);
  if ( a5 != (unsigned __int8 *)(v7 + 48) )
  {
    sub_11CDA0(v8);
    sub_123A40(v8, a5, v9, v10);
  }
  v11 = *((_DWORD *)a1 + 1);
  *(_DWORD *)v7 = v5;
  v12 = *(_BYTE *)(v7 + 32);
  *(_QWORD *)(v7 + 24) = a4;
  *(_DWORD *)(v7 + 68) = v11;
  v13 = *a1;
  *a1 = v12;
  v14 = *(_BYTE *)(v7 + 33);
  *(_BYTE *)(v7 + 32) = v13;
  v15 = a1[1];
  a1[1] = v14;
  v16 = *(_WORD *)(v7 + 34);
  *(_BYTE *)(v7 + 33) = v15;
  v17 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = v16;
  v18 = *(_DWORD *)(v7 + 36);
  *(_WORD *)(v7 + 34) = v17;
  v19 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v18;
  v20 = *(_QWORD *)(v7 + 40);
  *(_DWORD *)(v7 + 36) = v19;
  v21 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v20;
  *(_QWORD *)(v7 + 40) = v21;
  v35[0] = *(_WORD *)a1;
  LOWORD(v21) = *((_WORD *)a1 + 1);
  *(_DWORD *)a1 = 4;
  v35[1] = v21;
  LODWORD(v21) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v11;
  v36 = v21;
  v22 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v7;
  v37 = v22;
  if ( (int)sub_15BC70(v7, a2, 0, 0, 0, 0, 0) > 0 )
  {
    v23 = *((_QWORD *)a1 + 1);
    if ( *(_DWORD *)v23 == 4 || *(_DWORD *)v23 == 67 && *(_DWORD *)(v23 + 36) == *(_DWORD *)(v23 + 68) )
    {
      v25 = *a1;
      *a1 = *(_BYTE *)(v23 + 32);
      v26 = *(_BYTE *)(v23 + 33);
      *(_BYTE *)(v23 + 32) = v25;
      v27 = a1[1];
      a1[1] = v26;
      v28 = *(_WORD *)(v23 + 34);
      *(_BYTE *)(v23 + 33) = v27;
      v29 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v28;
      v30 = *(_DWORD *)(v23 + 36);
      *(_WORD *)(v23 + 34) = v29;
      v31 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v30;
      v32 = *(_QWORD *)(v23 + 40);
      *(_DWORD *)(v23 + 36) = v31;
      v33 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v32;
      *(_QWORD *)(v23 + 40) = v33;
      *(_BYTE *)(v7 + 32) = 0;
      sub_11CDA0(v7 + 64);
      sub_11CDA0(v8);
      sub_11CDA0(v7 + 32);
      j__qfree(v7);
    }
  }
  sub_11CDA0((__int64)v35);
  return v38 - __readfsqword(0x28u);
}
