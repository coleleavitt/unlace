__int64 __fastcall sub_446F50(_QWORD *a1, _DWORD *a2, _QWORD *a3)
{
  int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 *v8; // rax
  int *v9; // rax
  int *v10; // rbp
  int *v11; // rax
  int *v12; // rbx
  int v13; // eax
  bool v14; // zf
  int v15; // eax
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // edi
  const void *v21; // rbx
  void *v22; // rax
  __int64 v23; // rdx
  __int64 result; // rax
  int v25; // eax
  int v27; // [rsp+14h] [rbp-E4h] BYREF
  __int64 v28; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+20h] [rbp-D8h] BYREF
  int v30; // [rsp+2Ch] [rbp-CCh] BYREF
  char v31[24]; // [rsp+30h] [rbp-C8h] BYREF
  int v32; // [rsp+48h] [rbp-B0h]

  v4 = 0;
  v5 = sub_496740(a1, a2);
  *(_DWORD *)v5 = 0;
  v28 = v5;
  *(_QWORD *)(v5 + 8) = sub_40FB00(9);
  strcpy(*(char **)(v28 + 8), "encoding");
  v6 = v28;
  *(_DWORD *)(v28 + 16) = 8;
  *(_QWORD *)(v6 + 24) = 0;
  v7 = sub_496740(9, a2);
  *(_DWORD *)v7 = 0;
  v8 = off_656088;
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 8) = v8;
  ++*(_DWORD *)v28;
  ++*(_DWORD *)v7;
  v9 = (int *)sub_443EF0();
  ++*v9;
  v10 = v9;
  sub_46FB10(0, v9, &v30);
  if ( v30 > 0 )
  {
    do
    {
      sub_46FB70(0, v10, (unsigned int)v4, &v29);
      v11 = (int *)sub_4556C0(v29, 1, &v28);
      ++*v11;
      v12 = v11;
      if ( !(unsigned int)Tcl_FSStat(v11, v31) && (v32 & 0xF000) == 0x4000 )
        sub_46FBF0(0, v7, v12);
      v13 = *v12 - 1;
      v14 = *v12 == 1;
      *v12 = v13;
      if ( v13 < 0 || v14 )
        sub_47B120(v12);
      ++v4;
    }
    while ( v4 < v30 );
  }
  v15 = *v10 - 1;
  v14 = *v10 == 1;
  *v10 = v15;
  if ( v15 < 0 || v14 )
  {
    sub_47B120(v10);
    v16 = v28;
    v25 = *(_DWORD *)v28 - 1;
    v14 = *(_DWORD *)v28 == 1;
    *(_DWORD *)v28 = v25;
    if ( v25 >= 0 && !v14 )
      goto LABEL_10;
  }
  else
  {
    v16 = v28;
    v17 = *(_DWORD *)v28 - 1;
    v14 = *(_DWORD *)v28 == 1;
    *(_DWORD *)v28 = v17;
    if ( v17 >= 0 && !v14 )
      goto LABEL_10;
  }
  sub_47B120(v16);
LABEL_10:
  v18 = qword_655550;
  v14 = qword_655550 == 0;
  *a3 = qword_655550;
  if ( !v14 )
    ++*(_DWORD *)(v18 + 56);
  v19 = sub_47ACD0(v7, &v27);
  v20 = v27;
  v21 = (const void *)v19;
  *a2 = v27;
  v22 = (void *)sub_40FB00(v20 + 1);
  v23 = v27;
  *a1 = v22;
  memcpy(v22, v21, v23 + 1);
  result = (unsigned int)(*(_DWORD *)v7 - 1);
  v14 = *(_DWORD *)v7 == 1;
  *(_DWORD *)v7 = result;
  if ( (int)result < 0 || v14 )
    return sub_47B120(v7);
  return result;
}

