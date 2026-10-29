__int64 __fastcall sub_B66150(_QWORD *a1, unsigned int **a2, unsigned int a3, _QWORD *a4)
{
  char **exception; // rbx
  __int64 v5; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // edx
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  unsigned int **v16; // rcx
  int v17; // r15d
  unsigned int *v18; // rbp
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rsi
  char v22; // cl
  __int64 v23; // rdx
  unsigned int **v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned int **v27; // rax
  unsigned int **v28; // rdx
  _DWORD *v29; // rax
  _DWORD *v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  unsigned int **v33; // rcx
  unsigned int v34; // edi
  unsigned int v35; // edx
  __int64 v36; // rax
  _QWORD *v37; // rdi
  _DWORD *v38; // rcx
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  _QWORD *v42; // rdx
  unsigned int v43; // [rsp+Ch] [rbp-6Ch]
  _QWORD *v44; // [rsp+10h] [rbp-68h]
  _DWORD *v45; // [rsp+18h] [rbp-60h]
  __int64 v46[11]; // [rsp+20h] [rbp-58h] BYREF

  v10 = a1[1189];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = a1[1190];
  if ( v11 )
    *(_DWORD *)(v11 - 4) = 0;
LABEL_5:
  result = a1[1188];
  while ( result )
  {
    v13 = *(_DWORD *)(result - 4);
    if ( !v13 )
      break;
    v14 = a1 + 1189;
    v15 = (unsigned int)(v13 - 1);
    v16 = (unsigned int **)(result + 16 * v15);
    v17 = *((unsigned __int8 *)v16 + 8);
    v18 = *v16;
    v19 = a1 + 1189;
    if ( !(_BYTE)v17 )
      v19 = a1 + 1190;
    v20 = *v19;
    if ( v20 && (v21 = *v18, (unsigned int)v21 < *(_DWORD *)(v20 - 4)) )
    {
      v22 = *(_BYTE *)(v20 + v21);
      if ( v22 == 1 )
      {
        sub_B65740(v14, a1 + 1190, v18, v17, 2);
        v23 = 8LL * a3;
        v24 = &a2[(unsigned __int64)v23 / 8];
        v25 = v23 >> 3;
        v26 = v23 >> 5;
        if ( v26 )
        {
          v27 = a2;
          v28 = &a2[4 * v26];
          while ( v18 != *v27 )
          {
            if ( v18 == v27[1] )
            {
              ++v27;
              goto LABEL_25;
            }
            if ( v18 == v27[2] )
            {
              v27 += 2;
              goto LABEL_25;
            }
            if ( v18 == v27[3] )
            {
              v27 += 3;
              goto LABEL_25;
            }
            v27 += 4;
            if ( v27 == v28 )
            {
              v25 = v24 - v27;
              goto LABEL_40;
            }
          }
          goto LABEL_25;
        }
        v27 = a2;
LABEL_40:
        if ( v25 == 2 )
          goto LABEL_47;
        if ( v25 != 3 )
        {
          if ( v25 != 1 )
            goto LABEL_26;
          goto LABEL_43;
        }
        if ( v18 != *v27 )
        {
          ++v27;
LABEL_47:
          if ( v18 != *v27 )
          {
            ++v27;
LABEL_43:
            if ( v18 != *v27 )
              goto LABEL_26;
          }
        }
LABEL_25:
        if ( v24 != v27 )
          goto LABEL_5;
LABEL_26:
        if ( !*((_WORD *)v18 + 2) )
        {
          v29 = *(_DWORD **)(*((_QWORD *)v18 + 2) + 24LL);
          if ( v29 )
          {
            if ( !*v29 && v29[1] == 8 )
              goto LABEL_5;
          }
          if ( (unsigned __int8)sub_15D2CB0(a1[13], v18) )
          {
            v30 = *(_DWORD **)(*((_QWORD *)v18 + 2) + 24LL);
            if ( v30 )
            {
              if ( (unsigned int)(*v30 + 1) > 1 )
                goto LABEL_5;
            }
          }
        }
        v31 = (_QWORD *)*a4;
        if ( *a4 )
        {
          v32 = *((_DWORD *)v31 - 1);
          if ( v32 == *((_DWORD *)v31 - 2) )
          {
            v34 = (3 * v32 + 1) >> 1;
            v43 = v34;
            v35 = 16 * v34 + 8;
            if ( 16 * v32 + 8 >= v35 || v32 >= v34 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_14E142(v46, "Overflow encountered when expanding vector", v5);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v46);
              sub_233E40((__int64)v46);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v36 = sub_186B270(v35);
            v37 = (_QWORD *)*a4;
            v38 = (_DWORD *)v36;
            v31 = (_QWORD *)(v36 + 8);
            if ( *a4 )
            {
              v39 = *((unsigned int *)v37 - 1);
              *(_DWORD *)(v36 + 4) = v39;
              v40 = 0;
              v41 = 16 * v39;
              if ( v41 )
              {
                do
                {
                  *(__m128i *)&v38[v40 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v37[v40 / 8]);
                  v40 += 16LL;
                }
                while ( v41 != v40 );
              }
              v45 = v38;
              v44 = v31;
              sub_186B220(v37 - 1);
              v31 = v44;
              v38 = v45;
            }
            else
            {
              *(_DWORD *)(v36 + 4) = 0;
            }
            *a4 = v31;
            *v38 = v43;
            v32 = v38[1];
          }
        }
        else
        {
          v42 = (_QWORD *)sub_186B270(0x28u);
          *v42 = 2;
          v32 = 0;
          v31 = v42 + 1;
          *a4 = v31;
        }
        v33 = (unsigned int **)&v31[2 * v32];
        *v33 = v18;
        *((_BYTE *)v33 + 8) = v17;
        *((_DWORD *)v31 - 1) = v32 + 1;
        result = a1[1188];
      }
      else
      {
        if ( v22 != 2 )
        {
          if ( v22 )
          {
            sub_1872CE0("");
            sub_1873130(114, 181);
          }
          goto LABEL_17;
        }
        *(_DWORD *)(result - 4) = v15;
      }
    }
    else
    {
LABEL_17:
      sub_B65740(v14, a1 + 1190, v18, v17, 1);
      sub_B659E0(a1, v18, v17, a1 + 1188);
      result = a1[1188];
    }
  }
  return result;
}

