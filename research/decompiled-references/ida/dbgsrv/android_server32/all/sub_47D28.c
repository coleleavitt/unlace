/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47D28
// Address: 0x00047D28

//----- (00047D28) --------------------------------------------------------
int __fastcall sub_47D28(void **a1, unsigned __int8 **a2)
{
  char *v3; // r7
  int v4; // r6
  char *v5; // r0
  _BYTE *v6; // r0
  int v7; // r1
  _DWORD *v8; // r1
  int v9; // r4
  _BYTE *v10; // r0
  int v11; // r1
  void *v12; // r7
  void **v13; // r0
  void *v14; // r6
  void *v15; // r1
  _DWORD *v16; // r0
  void **v17; // r6
  void *v18; // r1
  _BYTE *v19; // r0
  int v20; // r1
  char *v21; // r7
  char *v22; // r1
  void *v23; // r1
  _BYTE *v24; // r0
  unsigned __int8 *v25; // r6
  unsigned __int8 *v27; // [sp+8h] [bp-58h]
  char *v29; // [sp+20h] [bp-40h] BYREF
  int v30; // [sp+24h] [bp-3Ch]
  int v31; // [sp+28h] [bp-38h]
  unsigned __int8 v32[8]; // [sp+2Ch] [bp-34h] BYREF
  void *v33[4]; // [sp+34h] [bp-2Ch] BYREF
  unsigned __int8 v34[8]; // [sp+44h] [bp-1Ch] BYREF
  void *v35; // [sp+4Ch] [bp-14h]
  int v36; // [sp+50h] [bp-10h]
  int v37; // [sp+54h] [bp-Ch]
  int v38; // [sp+58h] [bp-8h]

  v30 = 0;
  v29 = nullptr;
  v31 = 0;
  v3 = (char *)a1[3];
  v4 = 24 * ((int)a1[4] - 1);
  if ( !idcv_string((int)&v3[v4]) )
  {
    v5 = &v3[v4];
    v29 = *(char **)&v3[v4 + 8];
    v30 = *(_DWORD *)&v3[v4 + 12];
    v31 = *(_DWORD *)&v3[v4 + 16];
    *((_DWORD *)v5 + 2) = 0;
    *((_DWORD *)v5 + 3) = 0;
    *((_DWORD *)v5 + 4) = 0;
    sub_476D4((int)a1);
    v6 = a1[3];
    v7 = 24 * ((int)a1[4] - 1);
    if ( v6[v7] == 5 )
    {
      v8 = *(_DWORD **)&v6[v7 + 8];
      if ( v8 )
      {
        v9 = sub_48004(a1, v8, (int)&v29, a2);
        goto LABEL_31;
      }
    }
    else
    {
      set_qerrno(1532);
    }
  }
  v10 = a1[3];
  v11 = 24 * ((int)a1[4] - 1);
  if ( v10[v11] == 2 && dword_DD640 >= 1 )
  {
    v12 = *(void **)&v10[v11 + 8];
    v27 = *a2;
    *a2 = nullptr;
    v13 = a1 + 9;
    v14 = a1[4];
    v15 = a1[10];
    if ( a1[11] >= (char *)v15 + 1 )
    {
      v16 = *v13;
    }
    else
    {
      v16 = qvector_reserve((int)v13, *v13, (unsigned int)v15 + 1, 4u);
      a1[9] = v16;
      v15 = a1[10];
    }
    v16[(_DWORD)v15] = v14;
    a1[10] = (char *)a1[10] + 1;
    v34[0] = 2;
    v35 = v12;
    v38 = 0;
    v37 = 0;
    v36 = 0;
    v17 = a1 + 3;
    v18 = a1[4];
    if ( a1[5] >= (char *)v18 + 1 )
    {
      v19 = *v17;
    }
    else
    {
      v19 = qvector_reserve((int)(a1 + 3), *v17, (unsigned int)v18 + 1, 0x18u);
      a1[3] = v19;
      v18 = a1[4];
    }
    v20 = 24 * (_DWORD)v18;
    v19[v20] = 2;
    v21 = &v19[v20];
    memset(&v19[v20 + 8], 0, 0x10u);
    *((_DWORD *)v21 + 2) = 0;
    a1[4] = (char *)a1[4] + 1;
    move_idcv((unsigned __int8 *)v21, v34);
    v32[0] = 7;
    if ( v30 )
      v22 = v29;
    else
      v22 = &byte_B3CBE;
    sub_1B09C((int)v33, v22);
    v23 = a1[4];
    if ( a1[5] >= (char *)v23 + 1 )
    {
      v24 = *v17;
    }
    else
    {
      v24 = qvector_reserve((int)(a1 + 3), *v17, (unsigned int)v23 + 1, 0x18u);
      a1[3] = v24;
      v23 = a1[4];
    }
    v24[24 * (_DWORD)v23] = 2;
    v25 = &v24[24 * (_DWORD)v23];
    memset(v25 + 8, 0, 0x10u);
    *((_DWORD *)v25 + 2) = 0;
    a1[4] = (char *)a1[4] + 1;
    move_idcv(v25, v32);
    v9 = sub_47A68(a1, (int)v27, nullptr);
    if ( v32[0] == 5 )
    {
      sub_448A0((int)v33[0], v32);
    }
    else if ( v32[0] == 7 && v33[0] )
    {
      v33[1] = nullptr;
      qfree(v33[0]);
      v33[2] = nullptr;
      v33[0] = nullptr;
    }
    if ( v34[0] == 5 )
    {
      sub_448A0((int)v35, v34);
    }
    else if ( v34[0] == 7 && v35 )
    {
      v36 = 0;
      qfree(v35);
      v37 = 0;
      v35 = nullptr;
    }
  }
  else
  {
    sub_468C4(a1);
    v9 = 0;
  }
LABEL_31:
  if ( v29 )
  {
    v30 = 0;
    qfree(v29);
    v31 = 0;
    v29 = nullptr;
  }
  return v9;
}
// B3CBE: using guessed type char byte_B3CBE;
// DD640: using guessed type int dword_DD640;
