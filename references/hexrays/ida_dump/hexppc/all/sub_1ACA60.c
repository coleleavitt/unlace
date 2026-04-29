unsigned __int64 __fastcall sub_1ACA60(__int64 *a1, __int64 *a2, double a3)
{
  __int64 v3; // rbx
  char v4; // al
  _QWORD *v6; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r13
  char v10; // al
  __int64 v11; // rdx
  unsigned int v12; // r13d
  __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  size_t v21; // r10
  __int64 v22; // r8
  size_t v23; // r11
  __int64 v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  unsigned __int64 v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // [rsp+0h] [rbp-88h]
  unsigned __int64 v38; // [rsp+8h] [rbp-80h]
  unsigned __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+10h] [rbp-78h]
  size_t v42; // [rsp+10h] [rbp-78h]
  size_t v43; // [rsp+20h] [rbp-68h]
  __int64 v44; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v3 = a2[1];
  v4 = *((_BYTE *)a1 + 24);
  v47 = __readfsqword(0x28u);
  if ( v3 )
  {
    v37 = v3 - 1;
    if ( !v4 )
      goto LABEL_4;
    v31 = v3 + 3;
    v32 = v3 + 4;
    --v3;
LABEL_43:
    v33 = *a2;
    if ( a2[2] < v32 )
    {
      v36 = qvector_reserve(a2, v33, v32, 1);
      *a2 = v36;
      v33 = v36;
    }
    a2[1] = v32;
    *(_BYTE *)(v33 + v31) = 0;
    *(_DWORD *)(*a2 + v3) = 1701736302;
    return v47 - __readfsqword(0x28u);
  }
  if ( v4 )
  {
    v32 = 5;
    v31 = 4;
    goto LABEL_43;
  }
  v37 = 0;
LABEL_4:
  v6 = (_QWORD *)a1[1];
  if ( v6 )
  {
    if ( a1[2] )
    {
      v8 = (_QWORD *)v6[1];
      if ( v6 != v8 )
      {
        while ( 1 )
        {
          if ( v3 )
          {
            v9 = v3 - 1;
            if ( v37 < v3 - 1 )
            {
              v28 = v3 + 1;
              v29 = *a2;
              v30 = v3 + 2;
              if ( a2[2] < v30 )
              {
                v40 = v28;
                v35 = qvector_reserve(a2, v29, v30, 1);
                v28 = v40;
                *a2 = v35;
                v29 = v35;
              }
              a2[1] = v30;
              *(_BYTE *)(v29 + v28) = 0;
              *(_WORD *)(*a2 + v9) = 8236;
            }
          }
          v10 = *((_BYTE *)v8 + 32);
          v11 = v8[3];
          v12 = *((_DWORD *)v8 + 11);
          if ( v10 == 1 )
          {
            v19 = *a1;
            a3 = 0.0;
            v46 = 0;
            src = nullptr;
            sub_12FEB0(*(_DWORD **)(v19 + 1504), (__int64 *)&src, v11, v12);
            v20 = v46;
            if ( (_QWORD)v46 )
            {
              v21 = v46 - 1;
              if ( (_QWORD)v46 != 1 )
              {
                v22 = a2[1];
                v23 = v46 - 1;
                if ( v22 )
                {
                  --v22;
                  v23 = v21 + v22;
                  v20 = v46 + v22;
                }
                v24 = *a2;
                if ( a2[2] < v20 )
                {
                  v44 = v22;
                  v43 = v46 - 1;
                  v42 = v23;
                  v39 = v20;
                  v34 = qvector_reserve(a2, v24, v20, 1);
                  v22 = v44;
                  v21 = v43;
                  *a2 = v34;
                  v24 = v34;
                  v23 = v42;
                  v20 = v39;
                }
                a2[1] = v20;
                *(_BYTE *)(v24 + v23) = 0;
                memcpy((void *)(v22 + *a2), src, v21);
              }
            }
            if ( src )
            {
              *(_QWORD *)&v46 = 0;
              qfree(src);
            }
          }
          else if ( v10 == 5 )
          {
            sub_F7090(a2, (__int64)"%%0x%a", a3);
          }
          sub_F7090(a2, (__int64)".%d", v12);
          v13 = a2[1];
          if ( v13 )
          {
            v16 = v13 + 1;
            v15 = a2[1];
            v14 = *a2;
            --v13;
            if ( a2[2] >= v16 )
              goto LABEL_15;
          }
          else
          {
            v14 = *a2;
            v15 = 1;
            v16 = 2;
            if ( (unsigned __int64)a2[2] >= 2 )
              goto LABEL_15;
          }
          v41 = v15;
          v38 = v16;
          v18 = qvector_reserve(a2, v14, v16, 1);
          v15 = v41;
          v16 = v38;
          *a2 = v18;
          v14 = v18;
LABEL_15:
          a2[1] = v16;
          *(_BYTE *)(v14 + v13) = 58;
          *(_BYTE *)(*a2 + v15) = 0;
          sub_311C90(v8 + 5, a2);
          if ( (*v8 & 2) == 0 )
          {
            v17 = (_QWORD *)v8[2];
            if ( (*(_BYTE *)v17 & 2) != 0 )
            {
              v25 = (_QWORD *)(*v8 & 0xFFFFFFFFFFFFFFFCLL);
              v26 = *v25;
              if ( (*v25 & 2) == 0 )
              {
                while ( (_QWORD *)v25[2] == v8 )
                {
                  v8 = v25;
                  v27 = v26 & 0xFFFFFFFFFFFFFFFCLL;
                  v26 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v26 & 2) != 0 )
                  {
                    v8 = (_QWORD *)v27;
                    goto LABEL_18;
                  }
                  v25 = (_QWORD *)v27;
                }
              }
              v8 = v25;
            }
            else
            {
              do
              {
                v8 = v17;
                v17 = (_QWORD *)v17[1];
              }
              while ( (*(_BYTE *)v17 & 2) == 0 );
            }
          }
LABEL_18:
          if ( v8 == (_QWORD *)a1[1] )
            return v47 - __readfsqword(0x28u);
          v3 = a2[1];
        }
      }
    }
  }
  return v47 - __readfsqword(0x28u);
}
