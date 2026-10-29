__int64 __fastcall sub_9F1F0(int a1, _BYTE *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // di
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _BYTE *v15; // rdx
  unsigned int v17; // eax
  unsigned int v18; // r13d
  unsigned int v19; // r12d
  unsigned int v20; // ebp
  unsigned int v21; // r10d
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r15
  unsigned __int64 v25; // r14
  __int64 v26; // rdx
  unsigned __int64 v27; // r9
  bool v28; // zf
  int v29; // esi
  char v30; // cl
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // eax
  unsigned __int64 v34; // r11
  int v35; // eax
  unsigned __int64 v36; // r15
  int v37; // eax
  unsigned __int64 v38; // r12
  int v39; // eax
  unsigned __int64 v40; // r13
  _QWORD *v41; // [rsp+0h] [rbp-60h]
  unsigned __int64 v42; // [rsp+8h] [rbp-58h]
  unsigned __int64 v43; // [rsp+8h] [rbp-58h]
  unsigned __int64 v44; // [rsp+10h] [rbp-50h]
  _BYTE *v45; // [rsp+18h] [rbp-48h]
  unsigned __int64 v46; // [rsp+28h] [rbp-38h]

  v42 = a3;
  if ( !a2 )
    return 0;
  v3 = (unsigned int)~a1;
  v4 = a3;
  if ( a3 > 0x2E )
  {
    while ( ((unsigned __int8)a2 & 7) != 0 )
    {
      v3 = (v3 >> 8) ^ *((unsigned int *)qword_132C40 + (unsigned __int8)(*a2++ ^ v3));
      if ( !--v4 )
      {
        v43 = 0;
        v46 = 0;
        goto LABEL_14;
      }
    }
    v43 = v4 / 0x28;
    v46 = v4 % 0x28;
LABEL_14:
    v41 = a2;
    v17 = v3;
    v18 = 0;
    v45 = a2;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v44 = v43;
    while ( 1 )
    {
      v22 = *v41 ^ v17;
      v23 = v41[1] ^ v21;
      v24 = v41[2] ^ v20;
      v25 = v41[3] ^ v19;
      v26 = (unsigned __int8)(*(_BYTE *)v41 ^ v17);
      v27 = v41[4] ^ v18;
      v28 = v44-- == 1;
      v41 += 5;
      if ( v28 )
        break;
      v17 = *((_DWORD *)qword_130C40 + v26);
      v29 = 1;
      v21 = *((_DWORD *)qword_130C40 + (unsigned __int8)v23);
      v20 = *((_DWORD *)qword_130C40 + (unsigned __int8)v24);
      v19 = *((_DWORD *)qword_130C40 + (unsigned __int8)v25);
      v18 = *((_DWORD *)qword_130C40 + (unsigned __int8)v27);
      do
      {
        v30 = 8 * v29;
        v31 = v29++;
        v31 <<= 8;
        v17 ^= *((_DWORD *)qword_130C40 + v31 + (unsigned __int8)(v22 >> v30));
        v21 ^= *((_DWORD *)qword_130C40 + v31 + (unsigned __int8)(v23 >> v30));
        v20 ^= *((_DWORD *)qword_130C40 + v31 + (unsigned __int8)(v24 >> v30));
        v19 ^= *((_DWORD *)qword_130C40 + v31 + (unsigned __int8)(v25 >> v30));
        v18 ^= *((_DWORD *)qword_130C40 + (unsigned __int8)(v27 >> v30) + v31);
      }
      while ( v29 != 8 );
    }
    v32 = 8;
    a2 = &v45[40 * v43];
    while ( 1 )
    {
      v22 = *((unsigned int *)qword_132C40 + v26) ^ (v22 >> 8);
      if ( !--v32 )
        break;
      v26 = (unsigned __int8)v22;
    }
    v33 = 8;
    v34 = (unsigned int)v22 ^ v23;
    do
    {
      v34 = (v34 >> 8) ^ *((unsigned int *)qword_132C40 + (unsigned __int8)v34);
      --v33;
    }
    while ( v33 );
    v35 = 8;
    v36 = (unsigned int)v34 ^ v24;
    do
    {
      v36 = (v36 >> 8) ^ *((unsigned int *)qword_132C40 + (unsigned __int8)v36);
      --v35;
    }
    while ( v35 );
    v37 = 8;
    v38 = v25 ^ (unsigned int)v36;
    do
    {
      v38 = (v38 >> 8) ^ *((unsigned int *)qword_132C40 + (unsigned __int8)v38);
      --v37;
    }
    while ( v37 );
    v39 = 8;
    v40 = (unsigned int)v38 ^ v27;
    do
    {
      v40 = (v40 >> 8) ^ *((unsigned int *)qword_132C40 + (unsigned __int8)v40);
      --v39;
    }
    while ( v39 );
    v3 = (unsigned int)v40;
    v42 = v46;
  }
  if ( v42 > 7 )
  {
    v5 = (unsigned __int64)&a2[8 * ((v42 - 8) >> 3) + 8];
    do
    {
      v6 = v3;
      v7 = *a2 ^ v3;
      a2 += 8;
      v8 = *((unsigned int *)qword_132C40 + v7) ^ (v6 >> 8);
      v9 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 7) ^ v8)) ^ (v8 >> 8);
      v10 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 6) ^ v9)) ^ (v9 >> 8);
      v11 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 5) ^ v10)) ^ (v10 >> 8);
      v12 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 4) ^ v11)) ^ (v11 >> 8);
      v13 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 3) ^ v12)) ^ (v12 >> 8);
      v14 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 2) ^ v13)) ^ (v13 >> 8);
      v3 = *((unsigned int *)qword_132C40 + (unsigned __int8)(*(a2 - 1) ^ v14)) ^ (v14 >> 8);
    }
    while ( a2 != (_BYTE *)v5 );
    v42 &= 7u;
  }
  if ( v42 )
  {
    v15 = &a2[v42];
    do
      v3 = (v3 >> 8) ^ *((unsigned int *)qword_132C40 + (unsigned __int8)(*a2++ ^ v3));
    while ( a2 != v15 );
  }
  return v3 ^ 0xFFFFFFFF;
}

