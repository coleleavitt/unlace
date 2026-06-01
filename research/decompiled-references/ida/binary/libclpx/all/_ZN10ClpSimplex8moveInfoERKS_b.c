char __fastcall ClpSimplex::moveInfo(ClpSimplex *this, const ClpSimplex *a2, char a3)
{
  __int64 v3; // rax
  char *v6; // r12
  char *v7; // rdi
  int v8; // ecx
  int v9; // edx
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rax
  char *v14; // rcx
  char *v15; // rax
  signed int v16; // esi
  __int64 v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // r9
  bool v20; // dl
  __int64 *v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // xmm0_8
  __int64 v24; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 *v28; // rax
  __int64 v29; // xmm0_8
  __int64 v30; // rax
  int v31; // ecx
  _QWORD *v32; // r8
  _QWORD *v33; // r9
  bool v34; // dl
  __int64 *v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // xmm0_8
  __int64 v38; // rax
  _QWORD *v39; // rdi
  _QWORD *v40; // r8
  __int64 *v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // xmm0_8
  __int64 v44; // rax
  size_t v45; // r13
  void *v46; // rax
  void *v47; // rax
  char *v48; // rcx
  char *v49; // rax
  char v50; // r8

  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 9);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_DWORD *)this + 80) = *((_DWORD *)a2 + 80);
  *((_DWORD *)this + 81) = *((_DWORD *)a2 + 81);
  v3 = *((_QWORD *)a2 + 13);
  if ( *((_QWORD *)this + 13) == v3 && !a3 )
  {
    v6 = *((char **)a2 + 33);
    v7 = *((char **)this + 33);
    if ( v6 )
    {
      v8 = *((_DWORD *)this + 27);
      v9 = v8 + *((_DWORD *)this + 26);
      if ( v7 )
      {
        if ( v9 && v6 != v7 )
        {
          v10 = v9 >> 3;
          if ( v9 >> 3 > 0 )
          {
            if ( (v7 >= v6 + 16 || v6 >= v7 + 16) && v10 > 1 )
            {
              v11 = 0;
              v12 = 0;
              do
              {
                ++v12;
                *(__m128i *)&v7[v11] = _mm_loadu_si128((const __m128i *)&v6[v11]);
                v11 += 16;
              }
              while ( v10 >> 1 > v12 );
              v13 = 8LL * (v10 & 0xFFFFFFFE);
              v14 = &v6[v13];
              v15 = &v7[v13];
              if ( (v10 & 0xFFFFFFFE) != v10 )
              {
                *v15 = *v14;
                v15[1] = v14[1];
                v15[2] = v14[2];
                v15[3] = v14[3];
                v15[4] = v14[4];
                v15[5] = v14[5];
                v15[6] = v14[6];
                v15[7] = v14[7];
              }
              v16 = v10 - 1;
            }
            else
            {
              v16 = v10 - 1;
              v48 = v6;
              v49 = v7;
              do
              {
                v50 = *v48;
                v49 += 8;
                v48 += 8;
                *(v49 - 8) = v50;
                *(v49 - 7) = *(v48 - 7);
                *(v49 - 6) = *(v48 - 6);
                *(v49 - 5) = *(v48 - 5);
                *(v49 - 4) = *(v48 - 4);
                *(v49 - 3) = *(v48 - 3);
                *(v49 - 2) = *(v48 - 2);
                *(v49 - 1) = *(v48 - 1);
              }
              while ( v49 != &v7[8 * v16 + 8] );
            }
            v17 = 8LL * v16 + 8;
            v6 += v17;
            v7 += v17;
          }
          switch ( v9 % 8 )
          {
            case 1:
              goto LABEL_87;
            case 2:
              goto LABEL_86;
            case 3:
              goto LABEL_85;
            case 4:
              goto LABEL_84;
            case 5:
              goto LABEL_83;
            case 6:
              goto LABEL_82;
            case 7:
              v7[6] = v6[6];
LABEL_82:
              v7[5] = v6[5];
LABEL_83:
              v7[4] = v6[4];
LABEL_84:
              v7[3] = v6[3];
LABEL_85:
              v7[2] = v6[2];
LABEL_86:
              v7[1] = v6[1];
LABEL_87:
              *v7 = *v6;
              v8 = *((_DWORD *)this + 27);
              break;
            default:
              goto LABEL_21;
          }
        }
      }
      else
      {
        v45 = v9;
        v46 = (void *)operator new[](v9);
        v47 = memcpy(v46, v6, v45);
        v8 = *((_DWORD *)this + 27);
        *((_QWORD *)this + 33) = v47;
      }
    }
    else
    {
      if ( v7 )
        operator delete[](v7);
      *((_QWORD *)this + 33) = 0;
LABEL_21:
      v8 = *((_DWORD *)this + 27);
    }
    v18 = *((_QWORD **)this + 15);
    v19 = *((_QWORD **)a2 + 15);
    v20 = v8 == 0;
    if ( v18 != v19 && v8 )
    {
      if ( v8 >> 3 > 0 )
      {
        v21 = *((__int64 **)a2 + 15);
        v22 = *((_QWORD **)this + 15);
        do
        {
          v23 = *v21;
          v22 += 8;
          v21 += 8;
          *(v22 - 8) = v23;
          *(v22 - 7) = *(v21 - 7);
          *(v22 - 6) = *(v21 - 6);
          *(v22 - 5) = *(v21 - 5);
          *(v22 - 4) = *(v21 - 4);
          *(v22 - 3) = *(v21 - 3);
          *(v22 - 2) = *(v21 - 2);
          *(v22 - 1) = *(v21 - 1);
        }
        while ( v22 != &v18[8 * (unsigned int)((v8 >> 3) - 1) + 8] );
        v24 = ((v8 >> 3) - 1 + 1LL) << 6;
        v19 = (_QWORD *)((char *)v19 + v24);
        v18 = (_QWORD *)((char *)v18 + v24);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_35;
        case 2:
          goto LABEL_34;
        case 3:
          goto LABEL_33;
        case 4:
          goto LABEL_32;
        case 5:
          goto LABEL_31;
        case 6:
          goto LABEL_30;
        case 7:
          v18[6] = v19[6];
LABEL_30:
          v18[5] = v19[5];
LABEL_31:
          v18[4] = v19[4];
LABEL_32:
          v18[3] = v19[3];
LABEL_33:
          v18[2] = v19[2];
LABEL_34:
          v18[1] = v19[1];
LABEL_35:
          *v18 = *v19;
          break;
        default:
          break;
      }
      v8 = *((_DWORD *)this + 27);
      v20 = v8 == 0;
    }
    v25 = *((_QWORD **)this + 17);
    v26 = *((_QWORD **)a2 + 17);
    if ( v25 != v26 && !v20 )
    {
      if ( v8 >> 3 > 0 )
      {
        v27 = *((_QWORD *)this + 17);
        v28 = *((__int64 **)a2 + 17);
        do
        {
          v29 = *v28;
          v28 += 8;
          v27 += 64;
          *(_QWORD *)(v27 - 64) = v29;
          *(_QWORD *)(v27 - 56) = *(v28 - 7);
          *(_QWORD *)(v27 - 48) = *(v28 - 6);
          *(_QWORD *)(v27 - 40) = *(v28 - 5);
          *(_QWORD *)(v27 - 32) = *(v28 - 4);
          *(_QWORD *)(v27 - 24) = *(v28 - 3);
          *(_QWORD *)(v27 - 16) = *(v28 - 2);
          *(_QWORD *)(v27 - 8) = *(v28 - 1);
        }
        while ( &v26[8 * (unsigned int)((v8 >> 3) - 1) + 8] != v28 );
        v30 = ((v8 >> 3) - 1 + 1LL) << 6;
        v26 = (_QWORD *)((char *)v26 + v30);
        v25 = (_QWORD *)((char *)v25 + v30);
      }
      switch ( v8 % 8 )
      {
        case 1:
          goto LABEL_50;
        case 2:
          goto LABEL_49;
        case 3:
          goto LABEL_48;
        case 4:
          goto LABEL_47;
        case 5:
          goto LABEL_46;
        case 6:
          goto LABEL_45;
        case 7:
          v25[6] = v26[6];
LABEL_45:
          v25[5] = v26[5];
LABEL_46:
          v25[4] = v26[4];
LABEL_47:
          v25[3] = v26[3];
LABEL_48:
          v25[2] = v26[2];
LABEL_49:
          v25[1] = v26[1];
LABEL_50:
          *v25 = *v26;
          break;
        default:
          break;
      }
    }
    v31 = *((_DWORD *)this + 26);
    v32 = *((_QWORD **)this + 14);
    v33 = *((_QWORD **)a2 + 14);
    LOBYTE(v3) = v31 == 0;
    v34 = v31 == 0;
    if ( v32 != v33 && v31 )
    {
      if ( v31 >> 3 > 0 )
      {
        v35 = *((__int64 **)a2 + 14);
        v36 = *((_QWORD **)this + 14);
        do
        {
          v37 = *v35;
          v36 += 8;
          v35 += 8;
          *(v36 - 8) = v37;
          *(v36 - 7) = *(v35 - 7);
          *(v36 - 6) = *(v35 - 6);
          *(v36 - 5) = *(v35 - 5);
          *(v36 - 4) = *(v35 - 4);
          *(v36 - 3) = *(v35 - 3);
          *(v36 - 2) = *(v35 - 2);
          *(v36 - 1) = *(v35 - 1);
        }
        while ( &v32[8 * (unsigned int)((v31 >> 3) - 1) + 8] != v36 );
        v38 = ((v31 >> 3) - 1 + 1LL) << 6;
        v33 = (_QWORD *)((char *)v33 + v38);
        v32 = (_QWORD *)((char *)v32 + v38);
      }
      LODWORD(v3) = (unsigned int)(v31 >> 31) >> 29;
      switch ( v31 % 8 )
      {
        case 1:
          goto LABEL_64;
        case 2:
          goto LABEL_63;
        case 3:
          goto LABEL_62;
        case 4:
          goto LABEL_61;
        case 5:
          goto LABEL_60;
        case 6:
          goto LABEL_59;
        case 7:
          v32[6] = v33[6];
LABEL_59:
          v32[5] = v33[5];
LABEL_60:
          v32[4] = v33[4];
LABEL_61:
          v32[3] = v33[3];
LABEL_62:
          v32[2] = v33[2];
LABEL_63:
          v32[1] = v33[1];
LABEL_64:
          *v32 = *v33;
          break;
        default:
          break;
      }
      v31 = *((_DWORD *)this + 26);
      v34 = v31 == 0;
    }
    v39 = *((_QWORD **)this + 16);
    v40 = *((_QWORD **)a2 + 16);
    if ( v39 != v40 && !v34 )
    {
      if ( v31 >> 3 > 0 )
      {
        v41 = *((__int64 **)a2 + 16);
        v42 = *((_QWORD **)this + 16);
        do
        {
          v43 = *v41;
          v42 += 8;
          v41 += 8;
          *(v42 - 8) = v43;
          *(v42 - 7) = *(v41 - 7);
          *(v42 - 6) = *(v41 - 6);
          *(v42 - 5) = *(v41 - 5);
          *(v42 - 4) = *(v41 - 4);
          *(v42 - 3) = *(v41 - 3);
          *(v42 - 2) = *(v41 - 2);
          *(v42 - 1) = *(v41 - 1);
        }
        while ( v42 != &v39[8 * (unsigned int)((v31 >> 3) - 1) + 8] );
        v44 = ((v31 >> 3) - 1 + 1LL) << 6;
        v40 = (_QWORD *)((char *)v40 + v44);
        v39 = (_QWORD *)((char *)v39 + v44);
      }
      LODWORD(v3) = (unsigned int)(v31 >> 31) >> 29;
      switch ( v31 % 8 )
      {
        case 1:
          goto LABEL_79;
        case 2:
          goto LABEL_78;
        case 3:
          goto LABEL_77;
        case 4:
          goto LABEL_76;
        case 5:
          goto LABEL_75;
        case 6:
          goto LABEL_74;
        case 7:
          v39[6] = v40[6];
LABEL_74:
          v39[5] = v40[5];
LABEL_75:
          v39[4] = v40[4];
LABEL_76:
          v39[3] = v40[3];
LABEL_77:
          v39[2] = v40[2];
LABEL_78:
          v39[1] = v40[1];
LABEL_79:
          *v39 = *v40;
          break;
        default:
          return v3;
      }
    }
  }
  return v3;
}

