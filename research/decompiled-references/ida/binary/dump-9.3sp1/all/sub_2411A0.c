__int64 __fastcall sub_2411A0(__int64 *a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  __int64 v8; // rsi
  char v9; // bp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  char v29; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-40h]

  v8 = a3;
  v30 = __readfsqword(0x28u);
  v9 = a4;
  v10 = (unsigned int)sub_241090((int)a1 + 48, a3, a4, a4, a5, a6);
  result = 0;
  if ( !(_BYTE)v10 )
  {
    v13 = j__qalloc_or_throw(64, v8, v10, v11);
    *(_QWORD *)v13 = -1;
    v14 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = 0xFFFFFFFF00000000LL;
    *(_OWORD *)(v13 + 24) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    *(_QWORD *)(v13 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 56) = 0;
    v15 = *a1;
    *a1 = -1;
    v16 = *(_DWORD *)(v13 + 8);
    *(_QWORD *)v13 = v15;
    LODWORD(v15) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a1 + 2) = v16;
    v17 = *(_DWORD *)(v13 + 12);
    *(_DWORD *)(v13 + 8) = v15;
    LODWORD(v15) = *((_DWORD *)a1 + 3);
    *((_DWORD *)a1 + 3) = v17;
    v18 = *(_QWORD *)(v13 + 24);
    *(_DWORD *)(v13 + 12) = v15;
    v19 = a1[3];
    a1[3] = v18;
    v20 = *(_QWORD *)(v13 + 32);
    *(_QWORD *)(v13 + 24) = v19;
    v21 = a1[4];
    a1[4] = v20;
    v22 = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v13 + 32) = v21;
    v23 = a1[5];
    a1[5] = v22;
    v24 = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v13 + 40) = v23;
    v25 = a1[6];
    a1[6] = v24;
    LODWORD(v24) = *(_DWORD *)(v13 + 56);
    *(_QWORD *)(v13 + 48) = v25;
    LODWORD(v25) = *((_DWORD *)a1 + 14);
    *((_DWORD *)a1 + 14) = v24;
    *(_DWORD *)(v13 + 56) = v25;
    *((_DWORD *)a1 + 2) = 48;
    sub_32C2C0((unsigned int)&v29, a2, a3, v9 & 1, v26, v27);
    copy_tinfo_t();
    clear_tinfo_t();
    v28 = *v14;
    a1[3] = (__int64)v14;
    *a1 = v28;
    return 1;
  }
  return result;
}
