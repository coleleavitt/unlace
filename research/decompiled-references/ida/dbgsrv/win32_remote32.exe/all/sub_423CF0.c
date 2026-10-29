/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423CF0
// Address: 0x00423CF0

//----- (00423CF0) --------------------------------------------------------
int __userpurge sub_423CF0@<eax>(__m128i a1@<xmm0>, __int128 *a2, int *a3, const char *a4, char a5)
{
  _DWORD *v5; // edi
  const char *v6; // esi
  char *v7; // eax
  __int128 *v8; // esi
  __int128 v9; // xmm1
  __int64 v10; // xmm2_8
  _BYTE *v11; // eax
  int v12; // edi
  int v13; // esi
  __int128 *v14; // esi
  int *v15; // eax
  char *v16; // edi
  const char *v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // eax
  const char *v20; // eax
  int v21; // esi
  const char *v22; // ecx
  const char *v23; // eax
  int v24; // eax
  int *v25; // edi
  __int128 *v26; // esi
  __int128 v27; // xmm1
  __int64 v28; // xmm2_8
  unsigned int *v29; // esi
  int *v30; // esi
  __int128 *v31; // esi
  int *v32; // eax
  const char *v33; // esi
  int v35; // eax
  const char *v36; // eax
  const char *v37; // eax
  unsigned int v38; // [esp-4h] [ebp-C4h]
  _DWORD v39[20]; // [esp+Ch] [ebp-B4h] BYREF
  _BYTE v40[24]; // [esp+5Ch] [ebp-64h] BYREF
  _BYTE v41[24]; // [esp+74h] [ebp-4Ch] BYREF
  void *v42[2]; // [esp+8Ch] [ebp-34h] BYREF
  int v43; // [esp+94h] [ebp-2Ch]
  char *v44; // [esp+98h] [ebp-28h] BYREF
  int v45; // [esp+9Ch] [ebp-24h]
  int v46; // [esp+A0h] [ebp-20h]
  int v47; // [esp+A4h] [ebp-1Ch]
  char *v48; // [esp+A8h] [ebp-18h] BYREF
  unsigned int v49; // [esp+ACh] [ebp-14h]
  int v50; // [esp+B0h] [ebp-10h]
  int v51; // [esp+BCh] [ebp-4h]

  sub_4562D0(dword_4B6B40);
  v5 = sub_428030();
  if ( a3 )
  {
    if ( *(_BYTE *)a3 == 5 )
    {
      v15 = (int *)a3[2];
      v16 = nullptr;
      a3 = v15;
      v48 = nullptr;
      v49 = 0;
      v50 = 0;
      v17 = a4;
      v51 = 2;
      if ( a4 )
      {
        v18 = strlen(a4);
        v19 = v18 + 1;
        if ( v18 != -1 )
        {
          v20 = (const char *)sub_453B00((int)&v48, nullptr, v18 + 1, 1u);
          v17 = a4;
          v16 = (char *)v20;
          v48 = (char *)v20;
          v19 = v18 + 1;
        }
        v49 = v19;
        sub_464310((unsigned int)v16, (unsigned int)v17, v18);
        v48[v18] = 0;
        v16 = v48;
        v15 = a3;
      }
      sub_41C640(v15, v42, (int)&v48);
      v21 = v43;
      v47 = v43;
      if ( *(_BYTE *)(v43 + 13) )
        goto LABEL_23;
      v22 = MultiByteStr;
      if ( *(_DWORD *)(v43 + 20) )
        v22 = *(const char **)(v43 + 16);
      v23 = MultiByteStr;
      if ( v49 )
        v23 = v16;
      v24 = strcmp(v23, v22);
      if ( v24 )
        v24 = v24 < 0 ? -1 : 1;
      if ( v24 < 0 )
      {
LABEL_23:
        v21 = *a3;
        v47 = *a3;
      }
      v51 = 3;
      if ( v16 )
      {
        v49 = 0;
        sub_453A20(v16);
        v48 = nullptr;
        v50 = 0;
      }
      v25 = a3;
      v51 = -1;
      if ( v21 != *a3 )
      {
        v26 = a2;
        if ( a2 )
        {
          v40[0] = 2;
          *(_OWORD *)&v40[8] = 0;
          sub_423670(v40, (char *)(v47 + 32));
          v27 = *v26;
          v28 = *((_QWORD *)v26 + 2);
          *v26 = *(_OWORD *)v40;
          *((_QWORD *)v26 + 2) = *(_QWORD *)&v40[16];
          *(_OWORD *)v40 = v27;
          *(_QWORD *)&v40[16] = v28;
          v51 = 5;
          v11 = v40;
          goto LABEL_29;
        }
LABEL_30:
        sub_4562F0(dword_4B6B40);
        return 0;
      }
      v29 = (unsigned int *)sub_427F00(a3[3]);
      sub_401340(&v48, a4);
      v51 = 6;
      v30 = (int *)sub_420020(v29, (const char **)&v48);
      a3 = v30;
      v51 = 7;
      if ( v48 )
      {
        v49 = 0;
        sub_453A20(v48);
      }
      v51 = -1;
      if ( v30 != (int *)-1 )
      {
        v31 = a2;
        if ( a2 )
        {
          sub_423B70((int)a2);
          v32 = a3;
          *(_BYTE *)v31 = 6;
          *((_DWORD *)v31 + 2) = v32;
          sub_4562F0(dword_4B6B40);
          return 0;
        }
        goto LABEL_30;
      }
      sub_4562F0(dword_4B6B40);
      v33 = a4;
      if ( a5 )
      {
        sub_401340(v42, a4);
        v51 = 8;
        sub_41C8A0((char *)v39, 0, 1);
        LOBYTE(v51) = 9;
        if ( sub_420480((int)v39, a1, (int)v25, (unsigned int *)v42, (char **)&a2) )
        {
          sub_41CD20(v39);
          sub_401400(v42);
          return 0;
        }
        sub_41CD20(v39);
        sub_401400(v42);
      }
      v44 = nullptr;
      v45 = 0;
      v46 = 0;
      v38 = v25[3];
      v51 = 10;
      v35 = sub_427F00(v38);
      if ( *(_DWORD *)(v35 + 20) )
        v36 = *(const char **)(v35 + 16);
      else
        v36 = MultiByteStr;
      sub_402970(a1, (LPVOID *)&v44, "%s.%s", v36, v33);
      v37 = MultiByteStr;
      if ( v45 )
        v37 = v44;
      sub_45CB10(0, v37);
      v13 = sub_45CC20(1538);
      v51 = 11;
      if ( v44 )
      {
        v45 = 0;
        sub_453A20(v44);
      }
    }
    else
    {
      sub_4562F0(dword_4B6B40);
      v13 = 1532;
      sub_45CC20(1532);
    }
  }
  else
  {
    v6 = a4;
    v7 = (char *)sub_428D20(a4);
    if ( v7 )
    {
      v8 = a2;
      if ( a2 )
      {
        v41[0] = 2;
        *(_OWORD *)&v41[8] = 0;
        sub_423670(v41, v7);
        v9 = *v8;
        v10 = *((_QWORD *)v8 + 2);
        *v8 = *(_OWORD *)v41;
        *((_QWORD *)v8 + 2) = *(_QWORD *)&v41[16];
        *(_OWORD *)v41 = v9;
        *(_QWORD *)&v41[16] = v10;
        v51 = 1;
        v11 = v41;
LABEL_29:
        sub_423B70((int)v11);
        v51 = -1;
        goto LABEL_30;
      }
      goto LABEL_30;
    }
    v12 = sub_4274C0(v5, v6);
    if ( v12 == 0x7FFFFFFF )
    {
      sub_45CB10(0, v6);
      sub_4562F0(dword_4B6B40);
      v13 = 1538;
      sub_45CC20(1538);
    }
    else
    {
      v14 = a2;
      if ( !a2 )
        goto LABEL_30;
      sub_423B70((int)a2);
      *(_BYTE *)v14 = 6;
      *((_DWORD *)v14 + 2) = v12;
      sub_4562F0(dword_4B6B40);
      return 0;
    }
  }
  return v13;
}
