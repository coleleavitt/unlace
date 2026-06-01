/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5EDC0
// Address: 0x0005EDC0

//----- (0005EDC0) --------------------------------------------------------
int __cdecl sub_5EDC0(void **a1, char **a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  void **v9; // eax
  char *v10; // ecx
  void *v11; // edi
  void *v12; // eax
  void **v13; // edi
  void *v14; // ecx
  char *v15; // eax
  char *v16; // edx
  char *v17; // eax
  void *v18; // ecx
  void *v19; // eax
  int v20; // ecx
  int v22; // [esp+1Ch] [ebp-60h]
  void *v23; // [esp+1Ch] [ebp-60h]
  char *v24; // [esp+20h] [ebp-5Ch]
  char *v25; // [esp+28h] [ebp-54h] BYREF
  int v26; // [esp+2Ch] [ebp-50h]
  int v27; // [esp+30h] [ebp-4Ch]
  int v28; // [esp+38h] [ebp-44h] BYREF
  int v29[4]; // [esp+3Ch] [ebp-40h] BYREF
  int v30; // [esp+50h] [ebp-2Ch] BYREF
  void *v31; // [esp+54h] [ebp-28h]
  int v32; // [esp+58h] [ebp-24h]
  int v33; // [esp+5Ch] [ebp-20h]
  int v34; // [esp+60h] [ebp-1Ch]
  unsigned int v35; // [esp+68h] [ebp-14h]

  v35 = __readgsdword(0x14u);
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v2 = a1[3];
  v3 = (int)a1[4] - 1;
  v4 = 5 * v3;
  if ( !idcv_string((int)&v2[5 * v3]) )
  {
    v25 = (char *)v2[v4 + 1];
    v26 = v2[v4 + 2];
    v27 = v2[v4 + 3];
    v2[v4 + 1] = 0;
    v2[v4 + 2] = 0;
    v2[v4 + 3] = 0;
    sub_5E330((int)a1);
    v5 = a1[3];
    if ( LOBYTE(v5[5 * ((int)a1[4] - 1)]) == 5 )
    {
      v6 = (_DWORD *)v5[5 * ((int)a1[4] - 1) + 1];
      if ( v6 )
      {
        LOBYTE(v7) = sub_5F280((int)a1, v6, (int)&v25, a2);
        v22 = v7;
        goto LABEL_31;
      }
    }
    else
    {
      set_qerrno(1532);
    }
  }
  v8 = a1[3];
  if ( LOBYTE(v8[5 * ((int)a1[4] - 1)]) == 2 && dword_13B638[4] > 0 )
  {
    v23 = (void *)v8[5 * ((int)a1[4] - 1) + 1];
    v24 = *a2;
    *a2 = nullptr;
    v9 = a1 + 9;
    v10 = (char *)a1[10];
    v11 = a1[4];
    if ( a1[11] >= v10 + 1 )
    {
      v12 = *v9;
    }
    else
    {
      v12 = qvector_reserve((int)(a1 + 9), *v9, (unsigned int)(v10 + 1), 4u);
      a1[9] = v12;
      v10 = (char *)a1[10];
    }
    *((_DWORD *)v12 + (_DWORD)v10) = v11;
    a1[10] = (char *)a1[10] + 1;
    LOBYTE(v30) = 2;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = v23;
    v13 = a1 + 3;
    v14 = a1[4];
    if ( a1[5] >= (char *)v14 + 1 )
    {
      v15 = (char *)*v13;
    }
    else
    {
      v15 = (char *)qvector_reserve((int)(a1 + 3), *v13, (unsigned int)v14 + 1, 0x14u);
      a1[3] = v15;
      v14 = a1[4];
    }
    v16 = &v15[20 * (_DWORD)v14];
    *v16 = 2;
    *((_DWORD *)v16 + 4) = 0;
    *((_DWORD *)v16 + 3) = 0;
    *((_DWORD *)v16 + 2) = 0;
    *((_DWORD *)v16 + 1) = 0;
    a1[4] = (char *)a1[4] + 1;
    move_idcv(v16, (char *)&v30);
    if ( v26 )
      v17 = v25;
    else
      v17 = byte_EF875;
    LOBYTE(v28) = 7;
    sub_1B530((int)v29, v17);
    v18 = a1[4];
    if ( a1[5] >= (char *)v18 + 1 )
    {
      v19 = *v13;
    }
    else
    {
      v19 = qvector_reserve((int)(a1 + 3), *v13, (unsigned int)v18 + 1, 0x14u);
      a1[3] = v19;
      v18 = a1[4];
    }
    v20 = 5 * (_DWORD)v18;
    *((_BYTE *)v19 + 4 * v20) = 2;
    *((_DWORD *)v19 + v20 + 4) = 0;
    *((_DWORD *)v19 + v20 + 3) = 0;
    *((_DWORD *)v19 + v20 + 2) = 0;
    *((_DWORD *)v19 + v20 + 1) = 0;
    a1[4] = (char *)a1[4] + 1;
    move_idcv((char *)v19 + 4 * v20, (char *)&v28);
    v22 = sub_5E940(a1, v24, nullptr, -dword_13B638[4]);
    if ( (char)v28 == 5 )
    {
      sub_59680((void *)v29[0], (char *)&v28);
    }
    else if ( (char)v28 == 7 && v29[0] )
    {
      v29[1] = 0;
      qfree((void *)v29[0]);
      v29[0] = 0;
      v29[2] = 0;
    }
    if ( (char)v30 == 5 )
    {
      sub_59680(v31, (char *)&v30);
    }
    else if ( (char)v30 == 7 && v31 )
    {
      v32 = 0;
      qfree(v31);
      v31 = nullptr;
      v33 = 0;
    }
  }
  else
  {
    sub_5CBC0((int)a1);
    v22 = 0;
  }
LABEL_31:
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
    v25 = nullptr;
    v27 = 0;
  }
  return v22;
}
// 5EE90: variable 'v7' is possibly undefined
// 13B638: using guessed type int dword_13B638[5];
