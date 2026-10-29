void __fastcall CoinIndexedVector::reserve(CoinIndexedVector *this, int a2)
{
  int v2; // ebp
  int v3; // edx
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // edx
  int v10; // r9d
  int v11; // edx
  _QWORD *v12; // r13
  __m128i *v15; // r12
  _QWORD *v16; // r14
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  int v20; // esi
  int v21; // edx
  _QWORD *v22; // rcx
  __m128i *v23; // r8
  unsigned int v24; // edi
  const __m128i *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __m128i *v31; // rdx
  _DWORD *v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // rdx
  int v35; // edi
  _QWORD *v36; // rax
  __int64 *v37; // rdx
  __int64 v38; // xmm0_8
  __int64 v39; // rax
  _QWORD *v40; // r8
  _QWORD *v41; // rax
  int v42; // edx
  _QWORD *v43; // rsi
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __m128i *v46; // rax
  __int32 v47; // r9d
  _QWORD *v48; // rax

  v2 = (a2 + 3) >> 2;
  v3 = *((_DWORD *)this + 5);
  v4 = a2 + v2;
  if ( a2 + v2 >= v3 )
  {
    if ( v3 < a2 )
    {
      v12 = *((_QWORD **)this + 1);
      v15 = *(__m128i **)this;
      v16 = &v12[-*((int *)this + 6)];
      if ( (unsigned __int64)v4 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_94;
      v17 = operator new[](4LL * v4);
      *(_QWORD *)this = v17;
      if ( v2 )
      {
        v32 = (_DWORD *)(v17 + 4LL * a2);
        if ( v2 / 8 > 0 )
        {
          v33 = (_OWORD *)(v17 + 4LL * a2);
          v34 = (unsigned int)(v2 / 8 - 1);
          do
          {
            *v33 = 0;
            v33 += 2;
            *(v33 - 1) = 0;
          }
          while ( v33 != (_OWORD *)&v32[8 * v34 + 8] );
          v32 += 8 * (int)v34 + 8;
        }
        switch ( v2 % 8 )
        {
          case 1:
            goto LABEL_42;
          case 2:
            goto LABEL_41;
          case 3:
            goto LABEL_40;
          case 4:
            goto LABEL_39;
          case 5:
            goto LABEL_38;
          case 6:
            goto LABEL_37;
          case 7:
            v32[6] = 0;
LABEL_37:
            v32[5] = 0;
LABEL_38:
            v32[4] = 0;
LABEL_39:
            v32[3] = 0;
LABEL_40:
            v32[2] = 0;
LABEL_41:
            v32[1] = 0;
LABEL_42:
            *v32 = 0;
            break;
          default:
            break;
        }
      }
      v18 = v2 + a2 + 9;
      if ( v18 > 0xFFFFFFFFFFFFFFFLL )
LABEL_94:
        __cxa_throw_bad_array_new_length();
      v19 = operator new[](8 * v18);
      v20 = *((_DWORD *)this + 4);
      v21 = (int)(64 - (v19 & 0x3F)) >> 3;
      *((_DWORD *)this + 6) = v21;
      v22 = (_QWORD *)(v19 + 8LL * v21);
      *((_QWORD *)this + 1) = v22;
      if ( v20 > 0 )
      {
        v23 = *(__m128i **)this;
        if ( *(__m128i **)this != v15 )
        {
          v24 = v20 >> 3;
          if ( v20 >> 3 )
          {
            if ( (v15 >= &v23[2] || v23 >= &v15[2]) && v24 > 1 )
            {
              v25 = v15;
              v26 = *(_QWORD *)this;
              v27 = v24 - 1;
              do
              {
                v28 = _mm_loadu_si128(v25);
                v25 += 2;
                v26 += 32;
                v29 = _mm_loadu_si128(v25 - 1);
                *(__m128i *)(v26 - 32) = v28;
                *(__m128i *)(v26 - 16) = v29;
              }
              while ( v25 != &v15[2 * v27 + 2] );
            }
            else
            {
              v45 = *(_QWORD *)this;
              v46 = v15;
              v27 = v24 - 1;
              do
              {
                v47 = v46->m128i_i32[0];
                v46 += 2;
                v45 += 32;
                *(_DWORD *)(v45 - 32) = v47;
                *(_DWORD *)(v45 - 28) = v46[-2].m128i_i32[1];
                *(_DWORD *)(v45 - 24) = v46[-2].m128i_i32[2];
                *(_DWORD *)(v45 - 20) = v46[-2].m128i_i32[3];
                *(_DWORD *)(v45 - 16) = v46[-1].m128i_i32[0];
                *(_DWORD *)(v45 - 12) = v46[-1].m128i_i32[1];
                *(_DWORD *)(v45 - 8) = v46[-1].m128i_i32[2];
                *(_DWORD *)(v45 - 4) = v46[-1].m128i_i32[3];
              }
              while ( &v15[2 * v27 + 2] != v46 );
            }
            v30 = 2 * ((int)v27 + 1LL);
            v31 = &v15[v30];
            v23 = (__m128i *)((char *)v23 + v30 * 16);
          }
          else
          {
            v31 = v15;
          }
          switch ( v20 & 7 )
          {
            case 0:
              break;
            case 1:
              goto LABEL_49;
            case 2:
              goto LABEL_48;
            case 3:
              goto LABEL_47;
            case 4:
              goto LABEL_46;
            case 5:
              goto LABEL_45;
            case 6:
              goto LABEL_44;
            case 7:
              v23[1].m128i_i32[2] = v31[1].m128i_i32[2];
LABEL_44:
              v23[1].m128i_i32[1] = v31[1].m128i_i32[1];
LABEL_45:
              v23[1].m128i_i32[0] = v31[1].m128i_i32[0];
LABEL_46:
              v23->m128i_i32[3] = v31->m128i_i32[3];
LABEL_47:
              v23->m128i_i32[2] = v31->m128i_i32[2];
LABEL_48:
              v23->m128i_i32[1] = v31->m128i_i32[1];
LABEL_49:
              v23->m128i_i32[0] = v31->m128i_i32[0];
              break;
          }
        }
        v35 = *((_DWORD *)this + 5);
        if ( v35 && v22 != v12 )
        {
          if ( v35 >> 3 <= 0 )
          {
            v41 = v22;
            v40 = v12;
          }
          else
          {
            v36 = v22;
            v37 = v12;
            do
            {
              v38 = *v37;
              v36 += 8;
              v37 += 8;
              *(v36 - 8) = v38;
              *(v36 - 7) = *(v37 - 7);
              *(v36 - 6) = *(v37 - 6);
              *(v36 - 5) = *(v37 - 5);
              *(v36 - 4) = *(v37 - 4);
              *(v36 - 3) = *(v37 - 3);
              *(v36 - 2) = *(v37 - 2);
              *(v36 - 1) = *(v37 - 1);
            }
            while ( v36 != &v22[8 * (unsigned int)((v35 >> 3) - 1) + 8] );
            v39 = ((v35 >> 3) - 1 + 1LL) << 6;
            v40 = (_QWORD *)((char *)v12 + v39);
            v41 = (_QWORD *)((char *)v22 + v39);
          }
          switch ( v35 % 8 )
          {
            case 1:
              goto LABEL_63;
            case 2:
              goto LABEL_62;
            case 3:
              goto LABEL_61;
            case 4:
              goto LABEL_60;
            case 5:
              goto LABEL_59;
            case 6:
              goto LABEL_58;
            case 7:
              v41[6] = v40[6];
LABEL_58:
              v41[5] = v40[5];
LABEL_59:
              v41[4] = v40[4];
LABEL_60:
              v41[3] = v40[3];
LABEL_61:
              v41[2] = v40[2];
LABEL_62:
              v41[1] = v40[1];
LABEL_63:
              *v41 = *v40;
              break;
            default:
              break;
          }
        }
        v42 = a2 - v35;
        if ( a2 != v35 )
        {
          v43 = &v22[v35];
          if ( v42 / 8 > 0 )
          {
            v44 = &v22[v35];
            do
            {
              *v44 = 0;
              v44[1] = 0;
              v44 += 8;
              *(v44 - 6) = 0;
              *(v44 - 5) = 0;
              *(v44 - 4) = 0;
              *(v44 - 3) = 0;
              *(v44 - 2) = 0;
              *(v44 - 1) = 0;
            }
            while ( &v43[8 * (unsigned int)(v42 / 8 - 1) + 8] != v44 );
            v43 += 8 * (v42 / 8 - 1) + 8;
          }
          switch ( v42 % 8 )
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
              v43[6] = 0;
LABEL_74:
              v43[5] = 0;
LABEL_75:
              v43[4] = 0;
LABEL_76:
              v43[3] = 0;
LABEL_77:
              v43[2] = 0;
LABEL_78:
              v43[1] = 0;
LABEL_79:
              *v43 = 0;
              break;
            default:
              break;
          }
        }
      }
      else if ( a2 )
      {
        if ( a2 / 8 > 0 )
        {
          v48 = (_QWORD *)(v19 + 8LL * v21);
          do
          {
            *v48 = 0;
            v48[1] = 0;
            v48 += 8;
            *(v48 - 6) = 0;
            *(v48 - 5) = 0;
            *(v48 - 4) = 0;
            *(v48 - 3) = 0;
            *(v48 - 2) = 0;
            *(v48 - 1) = 0;
          }
          while ( v48 != &v22[8 * (unsigned int)(a2 / 8 - 1) + 8] );
          v22 += 8 * (a2 / 8 - 1) + 8;
        }
        switch ( a2 % 8 )
        {
          case 1:
            goto LABEL_91;
          case 2:
            goto LABEL_90;
          case 3:
            goto LABEL_89;
          case 4:
            goto LABEL_88;
          case 5:
            goto LABEL_87;
          case 6:
            goto LABEL_86;
          case 7:
            v22[6] = 0;
LABEL_86:
            v22[5] = 0;
LABEL_87:
            v22[4] = 0;
LABEL_88:
            v22[3] = 0;
LABEL_89:
            v22[2] = 0;
LABEL_90:
            v22[1] = 0;
LABEL_91:
            *v22 = 0;
            break;
          default:
            break;
        }
      }
      *((_DWORD *)this + 5) = a2;
      if ( v16 && v12 )
        operator delete[](v16);
      if ( v15 )
        operator delete[](v15);
    }
  }
  else if ( *((int *)this + 4) <= 0 )
  {
    LODWORD(v7) = 0;
LABEL_8:
    *((_DWORD *)this + 4) = v7;
  }
  else
  {
    v5 = *(_QWORD *)this;
    v6 = 1;
    v7 = 0;
    while ( 1 )
    {
      v8 = *(int *)(v5 + 4 * v6 - 4);
      if ( a2 > (int)v8 )
        break;
LABEL_7:
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v8) = 0;
      v11 = v6++;
      if ( *((_DWORD *)this + 4) <= v11 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      *(_DWORD *)(v5 + 4 * v7) = v8;
      v9 = v6++;
      v10 = v7 + 1;
      if ( *((_DWORD *)this + 4) <= v9 )
        break;
      v8 = *(int *)(v5 + 4 * v6 - 4);
      v7 = v10;
      if ( a2 <= (int)v8 )
        goto LABEL_7;
    }
    *((_DWORD *)this + 4) = v10;
  }
}

