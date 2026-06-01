unsigned __int64 __fastcall sub_126010(char *a1, int a2, int a3, __int64 a4, unsigned __int8 *a5)
{
  __int64 v7; // rbx
  __int64 v8; // r15
  int v9; // eax
  char v10; // cl
  char v11; // dl
  char v12; // cl
  char v13; // dl
  __int16 v14; // cx
  __int16 v15; // dx
  int v16; // ecx
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  char v23; // dl
  char v24; // cl
  char v25; // dl
  __int16 v26; // cx
  __int16 v27; // dx
  int v28; // ecx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  _WORD v33[2]; // [rsp+20h] [rbp-50h] BYREF
  int v34; // [rsp+24h] [rbp-4Ch]
  __int64 v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  v7 = j__qalloc_or_throw();
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
    sub_123A40(v8, a5);
  }
  v9 = *((_DWORD *)a1 + 1);
  *(_DWORD *)v7 = a3;
  v10 = *(_BYTE *)(v7 + 32);
  *(_QWORD *)(v7 + 24) = a4;
  *(_DWORD *)(v7 + 68) = v9;
  v11 = *a1;
  *a1 = v10;
  v12 = *(_BYTE *)(v7 + 33);
  *(_BYTE *)(v7 + 32) = v11;
  v13 = a1[1];
  a1[1] = v12;
  v14 = *(_WORD *)(v7 + 34);
  *(_BYTE *)(v7 + 33) = v13;
  v15 = *((_WORD *)a1 + 1);
  *((_WORD *)a1 + 1) = v14;
  v16 = *(_DWORD *)(v7 + 36);
  *(_WORD *)(v7 + 34) = v15;
  v17 = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v16;
  v18 = *(_QWORD *)(v7 + 40);
  *(_DWORD *)(v7 + 36) = v17;
  v19 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v18;
  *(_QWORD *)(v7 + 40) = v19;
  v33[0] = *(_WORD *)a1;
  LOWORD(v19) = *((_WORD *)a1 + 1);
  *(_DWORD *)a1 = 4;
  v33[1] = v19;
  LODWORD(v19) = *((_DWORD *)a1 + 1);
  *((_DWORD *)a1 + 1) = v9;
  v34 = v19;
  v20 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v7;
  v35 = v20;
  if ( (int)sub_15BC70(v7, a2, 0, 0, 0, 0, 0) > 0 )
  {
    v21 = *((_QWORD *)a1 + 1);
    if ( *(_DWORD *)v21 == 4 || *(_DWORD *)v21 == 67 && *(_DWORD *)(v21 + 36) == *(_DWORD *)(v21 + 68) )
    {
      v23 = *a1;
      *a1 = *(_BYTE *)(v21 + 32);
      v24 = *(_BYTE *)(v21 + 33);
      *(_BYTE *)(v21 + 32) = v23;
      v25 = a1[1];
      a1[1] = v24;
      v26 = *(_WORD *)(v21 + 34);
      *(_BYTE *)(v21 + 33) = v25;
      v27 = *((_WORD *)a1 + 1);
      *((_WORD *)a1 + 1) = v26;
      v28 = *(_DWORD *)(v21 + 36);
      *(_WORD *)(v21 + 34) = v27;
      v29 = *((_DWORD *)a1 + 1);
      *((_DWORD *)a1 + 1) = v28;
      v30 = *(_QWORD *)(v21 + 40);
      *(_DWORD *)(v21 + 36) = v29;
      v31 = *((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = v30;
      *(_QWORD *)(v21 + 40) = v31;
      *(_BYTE *)(v7 + 32) = 0;
      sub_11CDA0(v7 + 64);
      sub_11CDA0(v8);
      sub_11CDA0(v7 + 32);
      j__qfree();
    }
  }
  sub_11CDA0((__int64)v33);
  return v36 - __readfsqword(0x28u);
}
