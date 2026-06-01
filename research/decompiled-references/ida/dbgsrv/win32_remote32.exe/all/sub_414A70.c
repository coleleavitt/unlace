/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414A70
// Address: 0x00414A70

//----- (00414A70) --------------------------------------------------------
int __userpurge sub_414A70@<eax>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        int a3,
        int (__stdcall ***a4)(_DWORD, __m128i *, __m128i *))
{
  int v4; // esi
  int *v5; // edi
  int result; // eax
  int v7; // ecx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // eax
  unsigned __int32 v12; // ecx
  int v13; // ebx
  unsigned __int16 v14; // ax
  unsigned int v15; // eax
  char *v16; // eax
  int v17; // eax
  int **v18; // esi
  _DWORD *v19; // eax
  int v20; // edi
  unsigned int v21; // kr04_4
  unsigned int v22; // eax
  _BYTE *v23; // eax
  const CHAR *v24; // eax
  unsigned __int32 v25; // ecx
  bool v26; // al
  int **v27; // eax
  __int32 v28; // ecx
  __m128i *v29; // edx
  bool v30; // zf
  __m128i *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  int v35; // eax
  _DWORD *v36; // [esp-Ch] [ebp-88h]
  __m128i v37; // [esp-8h] [ebp-84h]
  int v38; // [esp-8h] [ebp-84h]
  int v39; // [esp+10h] [ebp-6Ch] BYREF
  int v40; // [esp+18h] [ebp-64h]
  int ***v41; // [esp+1Ch] [ebp-60h]
  __m128i *v42; // [esp+20h] [ebp-5Ch]
  int (__stdcall ***v43)(_DWORD, __m128i *, __m128i *); // [esp+24h] [ebp-58h]
  char *v44; // [esp+28h] [ebp-54h] BYREF
  int v45; // [esp+2Ch] [ebp-50h]
  int v46; // [esp+30h] [ebp-4Ch]
  unsigned __int32 v47; // [esp+34h] [ebp-48h]
  _DWORD *v48; // [esp+38h] [ebp-44h] BYREF
  int v49; // [esp+3Ch] [ebp-40h]
  int v50; // [esp+40h] [ebp-3Ch]
  unsigned __int32 v51; // [esp+44h] [ebp-38h]
  char *v52; // [esp+48h] [ebp-34h] BYREF
  int v53; // [esp+4Ch] [ebp-30h]
  int v54; // [esp+50h] [ebp-2Ch]
  int **v55; // [esp+54h] [ebp-28h] BYREF
  int v56; // [esp+58h] [ebp-24h]
  int v57; // [esp+5Ch] [ebp-20h] BYREF
  const CHAR *v58; // [esp+60h] [ebp-1Ch]
  __m128i v59; // [esp+64h] [ebp-18h] BYREF
  int v60; // [esp+78h] [ebp-4h]
  __m128i v61; // [esp+7Ch] [ebp+0h] BYREF
  int v62; // [esp+8Ch] [ebp+10h]
  unsigned int v63; // [esp+90h] [ebp+14h] BYREF
  int v64[4]; // [esp+94h] [ebp+18h] BYREF
  char v65[1024]; // [esp+A4h] [ebp+28h] BYREF
  char v66[1024]; // [esp+4A4h] [ebp+428h] BYREF
  __m128i v67; // [esp+8A4h] [ebp+828h] BYREF

  v4 = a1;
  v57 = a1;
  v30 = *(_DWORD *)(a1 + 176) == 0;
  v5 = (int *)a3;
  v51 = a3;
  v43 = a4;
  if ( v30 )
    return 0;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v59.m128i_i32[2] = (__int32)&off_48A4D8;
    v30 = *(_DWORD *)(a1 + 56) == 23126;
    v60 = 0;
    if ( v30 )
      v7 = *(_DWORD *)(a1 + 572) + 40;
    else
      v7 = *(_DWORD *)(a1 + 572) + *(unsigned __int16 *)(a1 + 76) + 24;
    sub_415290(v4, (int)a4, a3, v7, *(unsigned __int16 *)(v4 + 62), (int)&v59.m128i_i32[2]);
    v60 = -1;
  }
  if ( !(**(unsigned __int8 (__thiscall ***)(int, int, _DWORD))v4)(v4, a3, *(_DWORD *)(v4 + 176)) )
    return -2;
  v59.m128i_i8[7] = 1;
  if ( sub_45C7E0(a3, &v61, 40) != 40 )
    return -1;
  sub_40CC90((void (__thiscall ***)(void *, int, int))v4, a3, v61.m128i_i32[3], &v67, 0x400u, &v59.m128i_i8[7]);
  sub_4171C0(&v67, 1024, 1);
  result = (**a4)(a4, &v61, &v67);
  if ( !result )
  {
    LODWORD(v8) = sub_45C8B0((int)a4, a3, a3);
    LODWORD(v10) = *(_DWORD *)(v4 + 180);
    v58 = (const CHAR *)(v8 + 4096);
    HIDWORD(v10) = (unsigned __int64)(v8 + 4096) >> 32;
    v9 = v8 + 4096;
    if ( __PAIR64__(HIDWORD(v10), v9) > (unsigned int)v10 && (_DWORD)v10 )
    {
      v9 = v10;
      HIDWORD(v10) = 0;
      v58 = (const CHAR *)v10;
    }
    LODWORD(v10) = *(_DWORD *)(v4 + 176);
    sub_409120(0, v64, 6u, (int)"Number of exported names", v10, 0, v10 + v9, (v10 + (unsigned __int64)v9) >> 32);
    LODWORD(v10) = *(_DWORD *)(v4 + 176);
    sub_409120(
      0,
      (int *)&v63,
      4u,
      (int)"Number of exported addresses",
      v10,
      0,
      (int)&v58[v10],
      ((unsigned __int64)(unsigned int)v58 + v10) >> 32);
    v56 = 0;
    v11 = sub_4627C2(0x20u);
    *v11 = v11;
    v11[1] = v11;
    v11[2] = v11;
    *((_WORD *)v11 + 6) = 257;
    v55 = (int **)v11;
    v60 = 1;
    v12 = 0;
    v13 = (v59.m128i_i8[7] != 0) - 1;
    for ( v59.m128i_i32[0] = 0; v12 < v64[0]; v59.m128i_i32[0] = v12 )
    {
      v59.m128i_i32[2] = 0;
      if ( (**(unsigned __int8 (__thiscall ***)(int, int *, int))v4)(v4, v5, v64[3] + 2 * v12)
        && sub_45C7E0((int)v5, (__m128i *)&v59.m128i_u64[1], 2) == 2 )
      {
        v14 = v59.m128i_i16[4] + v62;
        v59.m128i_i32[2] = 0;
        v47 = v14;
        if ( (**(unsigned __int8 (__thiscall ***)(int, int *, __int32))v4)(v4, v5, v64[2] + 4 * v59.m128i_i32[0])
          && sub_45C7E0((int)v5, (__m128i *)&v59.m128i_u64[1], 4) == 4
          && ((**(void (__thiscall ***)(int, int *, __int32))v4)(v4, v5, v59.m128i_i32[2]),
              v67.m128i_i8[0] = 0,
              v15 = sub_45C7E0((int)v5, &v67, 1023),
              v15 < 0x400) )
        {
          v67.m128i_i8[v15] = 0;
          if ( !sub_45A180(&v67) )
          {
            v52 = nullptr;
            v53 = 0;
            v54 = 0;
            LOBYTE(v60) = 2;
            if ( sub_402A50((int)&v52, (int)&v67, -1, 0) )
            {
              v16 = (char *)MultiByteStr;
              if ( v53 )
                v16 = v52;
              sub_45ACB0((unsigned int)&v67, v16, 1024);
            }
            LOBYTE(v60) = 3;
            if ( v52 )
            {
              v53 = 0;
              sub_453A20(v52);
              v52 = nullptr;
              v54 = 0;
            }
            LOBYTE(v60) = 1;
          }
          v59.m128i_i32[2] = (unsigned __int16)v47;
          sub_408BC0((int *)&v55, &v48, &v59.m128i_i32[2]);
          v17 = v50;
          if ( *(_BYTE *)(v50 + 13) || (unsigned __int16)v47 < *(int *)(v50 + 16) )
          {
            if ( v56 == 0x7FFFFFF )
              sub_403E20();
            v18 = v55;
            v41 = &v55;
            LOBYTE(v60) = 4;
            v19 = sub_4627C2(0x20u);
            LOBYTE(v60) = 1;
            v42 = nullptr;
            v19[4] = v59.m128i_i32[2];
            v38 = v49;
            v19[5] = 0;
            v36 = v48;
            v19[6] = 0;
            v19[7] = 0;
            *v19 = v18;
            v19[1] = v18;
            v19[2] = v18;
            *((_WORD *)v19 + 6) = 0;
            v17 = sub_403C10(&v55, v36, v38, (int)v19);
          }
          v20 = v17 + 20;
          v21 = strlen(v67.m128i_i8);
          if ( v21 )
          {
            v22 = v21 + 1;
            if ( v21 + 1 > *(_DWORD *)(v20 + 8) )
            {
              *(_DWORD *)v20 = sub_453B00(v20, *(void **)v20, v21 + 1, 1u);
              v22 = v21 + 1;
            }
            *(_DWORD *)(v20 + 4) = v22;
            sub_464310(*(_DWORD *)v20, (unsigned int)&v67, v21);
            v23 = *(_BYTE **)v20;
            v5 = (int *)v51;
            v23[v21] = 0;
            v4 = v57;
          }
          else
          {
            v4 = v57;
            *(_DWORD *)(v20 + 4) = 0;
            v5 = (int *)v51;
          }
        }
        else if ( !v13 )
        {
          v13 = -1;
        }
      }
      else if ( !v13 )
      {
        v13 = -1;
      }
      v12 = v59.m128i_i32[0] + 1;
    }
    v24 = &v58[*(_DWORD *)(v4 + 176)];
    v47 = *(_DWORD *)(v4 + 176);
    v25 = 0;
    v51 = (unsigned __int32)v24;
    for ( v59.m128i_i32[2] = 0; v25 < v63; v59.m128i_i32[2] = v25 )
    {
      v59.m128i_i32[0] = 0;
      v26 = (**(unsigned __int8 (__thiscall ***)(int, int *, int))v4)(v4, v5, v64[1] + 4 * v25)
         && sub_45C7E0((int)v5, &v59, 4) == 4;
      if ( v59.m128i_i32[0] )
      {
        if ( !v26 )
          goto LABEL_92;
        v57 = v59.m128i_i32[2] + v62;
        sub_408BC0((int *)&v55, &v39, &v57);
        v27 = (int **)v40;
        if ( *(_BYTE *)(v40 + 13) || v57 < *(_DWORD *)(v40 + 16) )
          v27 = v55;
        if ( v27 == v55 )
        {
          v58 = pNodeName;
        }
        else if ( v27[6] )
        {
          v58 = (const CHAR *)v27[5];
        }
        else
        {
          v58 = MultiByteStr;
        }
        v28 = v59.m128i_i32[0];
        v29 = nullptr;
        if ( v59.m128i_i32[0] < v47 || v59.m128i_i32[0] >= v51 )
          goto LABEL_87;
        (**(void (__thiscall ***)(int, int *, __int32))v4)(v4, v5, v59.m128i_i32[0]);
        v37.m128i_i32[1] = 1024;
        v67.m128i_i8[0] = 0;
        v37.m128i_i32[0] = (__int32)&v67;
        sub_45C650(v13, v5, -1, -1, v37);
        if ( v67.m128i_i8[0] )
        {
          v31 = sub_465040((unsigned int)&v67, 0x2Eu);
          v42 = v31;
          if ( v31 )
          {
            v31->m128i_i8[0] = 0;
            sub_45ACB0((unsigned int)v65, v67.m128i_i8, 1024);
            sub_45ACB0((unsigned int)v66, &v42->m128i_i8[1], 1024);
            v52 = nullptr;
            v53 = 0;
            v54 = 0;
            LOBYTE(v60) = 7;
            if ( sub_402A50((int)&v52, (int)v65, -1, 0) )
            {
              v32 = (char *)MultiByteStr;
              if ( v53 )
                v32 = v52;
              sub_45ACB0((unsigned int)v65, v32, 1024);
            }
            LOBYTE(v60) = 8;
            if ( v52 )
            {
              v53 = 0;
              sub_453A20(v52);
              v52 = nullptr;
              v54 = 0;
            }
            LOBYTE(v60) = 1;
            if ( !sub_45A180(v66) )
            {
              v44 = nullptr;
              v45 = 0;
              v46 = 0;
              LOBYTE(v60) = 9;
              if ( sub_402A50((int)&v44, (int)v66, -1, 0) )
              {
                v33 = (char *)MultiByteStr;
                if ( v45 )
                  v33 = v44;
                sub_45ACB0((unsigned int)v66, v33, 1024);
              }
              LOBYTE(v60) = 10;
              if ( v44 )
              {
                v45 = 0;
                sub_453A20(v44);
                v44 = nullptr;
                v46 = 0;
              }
              LOBYTE(v60) = 1;
            }
            sub_453D50(a2, &v67, 1024, "%s.%s", v65, v66);
          }
          else
          {
            v48 = nullptr;
            v49 = 0;
            v50 = 0;
            LOBYTE(v60) = 11;
            if ( sub_402A50((int)&v48, (int)&v67, -1, 0) )
            {
              v34 = (char *)MultiByteStr;
              if ( v49 )
                v34 = (char *)v48;
              sub_45ACB0((unsigned int)&v67, v34, 1024);
            }
            LOBYTE(v60) = 12;
            if ( v48 )
            {
              v49 = 0;
              sub_453A20(v48);
              v48 = nullptr;
              v50 = 0;
            }
            LOBYTE(v60) = 1;
          }
          v28 = v59.m128i_i32[0];
          v29 = &v67;
LABEL_87:
          v35 = ((int (__stdcall *)(int (__stdcall ***)(_DWORD, __m128i *, __m128i *), __int32, int, const CHAR *, __m128i *))(*v43)[1])(
                  v43,
                  v28,
                  v57,
                  v58,
                  v29);
          if ( v35 )
          {
            if ( !v13 )
              v13 = v35;
          }
          goto LABEL_93;
        }
        v30 = v13 == 0;
      }
      else
      {
        v30 = !v26;
      }
      if ( v30 )
LABEL_92:
        v13 = -1;
LABEL_93:
      v25 = v59.m128i_i32[2] + 1;
    }
    sub_4085F0(&v55, (int)&v55, v55[1]);
    sub_4627F2(v55);
    return v13;
  }
  return result;
}
// 414BB7: variable 'v8' is possibly undefined
// 414FBC: variable 'v37' is possibly undefined
// 48A4D8: using guessed type int (__stdcall *off_48A4D8)(int, int, int);
