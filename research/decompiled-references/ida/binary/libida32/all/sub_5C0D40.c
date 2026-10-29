__int64 __fastcall sub_5C0D40(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // rax
  char *v5; // rdi
  int v6; // r12d
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdx
  int v14; // ebx
  _DWORD *v15; // rax
  unsigned int v16; // r13d
  __int64 v17; // r12
  __int64 v18; // rbp
  void *v19; // rdi
  char *v20; // rbx
  char v21; // al
  char *v22; // rdx
  __int64 v23; // r15
  __int64 i; // r14
  char *v25; // rax
  void *v26; // rdi
  void *v28; // rdi
  void *v29; // rdi
  _DWORD *v30; // rax
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  _DWORD *v35; // rcx
  int v36; // r15d
  _DWORD *v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // [rsp+Ch] [rbp-6Ch]
  int v44; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v45[12]; // [rsp+1Ch] [rbp-5Ch] BYREF
  __int128 v46; // [rsp+28h] [rbp-50h]
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a3 == -1 )
  {
    return 0;
  }
  else
  {
    v44 = a3;
    *(_DWORD *)&v45[8] = 0;
    *(_QWORD *)v45 = (unsigned int)(a3 + 1);
    v46 = 0;
    v4 = sub_67D7D0(a1, &v45[4], &v44);
    v5 = *(char **)&v45[4];
    if ( v4 && (_QWORD)v46 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = &v5[96 * v7];
        v9 = *((_QWORD *)v8 + 1);
        if ( !v9 || **(_DWORD **)v8 != a3 )
          goto LABEL_6;
        v10 = v8[89];
        if ( v10 != 1 )
        {
          if ( v10 == 2 && *((_QWORD *)v8 + 4) )
          {
            v31 = 0;
            v32 = 0;
            while ( 1 )
            {
              v33 = *((_QWORD *)v8 + 3) + 40 * v32;
              if ( *(_QWORD *)(v33 + 8) && *(_DWORD *)(v33 + 36) != -2 )
              {
                if ( !a2 )
                {
                  v5 = *(char **)&v45[4];
                  v16 = 1;
                  goto LABEL_24;
                }
                v34 = a2[1];
                v35 = (_DWORD *)(*a2 + 4 * v34);
                v36 = **(_DWORD **)v33;
                if ( (_DWORD *)*a2 == v35 )
                  goto LABEL_63;
                v37 = (_DWORD *)*a2;
                while ( v36 != *v37 )
                {
                  if ( v35 == ++v37 )
                    goto LABEL_63;
                }
                if ( v37 == v35 )
                {
LABEL_63:
                  v38 = v34 + 1;
                  if ( a2[2] < v38 )
                  {
                    v43 = v31;
                    v39 = qvector_reserve(a2, *a2, v38, 4);
                    v40 = a2[1];
                    v31 = v43;
                    *a2 = v39;
                    v35 = (_DWORD *)(v39 + 4 * v40);
                  }
                  *v35 = v36;
                  ++a2[1];
                }
              }
              v32 = ++v31;
              if ( (unsigned __int64)v31 >= *((_QWORD *)v8 + 4) )
              {
                v5 = *(char **)&v45[4];
                goto LABEL_6;
              }
            }
          }
          goto LABEL_6;
        }
        if ( v9 == 1 )
        {
          if ( !*((_QWORD *)v8 + 8) )
            goto LABEL_6;
          v11 = *((_QWORD *)v8 + 4);
          if ( v11 == 1 )
            goto LABEL_48;
LABEL_12:
          if ( v11 )
            goto LABEL_13;
LABEL_6:
          v7 = ++v6;
          if ( v6 >= (unsigned __int64)v46 )
            break;
        }
        else
        {
          v11 = *((_QWORD *)v8 + 4);
          if ( v11 != 1 )
            goto LABEL_12;
LABEL_48:
          v30 = *((_DWORD **)v8 + 3);
          if ( *v30 == *(_DWORD *)(*(_QWORD *)v8 + 4LL) && *v30 == v30[1] )
            goto LABEL_6;
LABEL_13:
          if ( !a2 )
          {
            v16 = 1;
            goto LABEL_24;
          }
          v12 = a2[1];
          v13 = (_DWORD *)(*a2 + 4 * v12);
          v14 = **((_DWORD **)v8 + 3);
          if ( (_DWORD *)*a2 != v13 )
          {
            v15 = (_DWORD *)*a2;
            while ( v14 != *v15 )
            {
              if ( v13 == ++v15 )
                goto LABEL_19;
            }
            if ( v13 != v15 )
              goto LABEL_6;
          }
LABEL_19:
          if ( a2[2] < (unsigned __int64)(v12 + 1) )
          {
            v41 = qvector_reserve(a2, *a2, v12 + 1, 4);
            v42 = a2[1];
            *a2 = v41;
            v13 = (_DWORD *)(v41 + 4 * v42);
          }
          ++v6;
          *v13 = v14;
          v5 = *(char **)&v45[4];
          ++a2[1];
          v7 = v6;
          if ( v6 >= (unsigned __int64)v46 )
            break;
        }
      }
    }
    v16 = 0;
    if ( a2 )
      LOBYTE(v16) = a2[1] != 0;
LABEL_24:
    if ( v5 )
    {
      v17 = v46;
      if ( (_QWORD)v46 )
      {
        v18 = 0;
        do
        {
          v20 = &v5[96 * v18];
          v21 = v20[89];
          if ( v21 == 2 )
          {
            v22 = *((char **)v20 + 3);
            if ( v22 )
            {
              v23 = *((_QWORD *)v20 + 4);
              if ( v23 )
              {
                for ( i = 0; i != v23; ++i )
                {
                  v25 = &v22[40 * i];
                  v26 = *(void **)v25;
                  if ( *(_QWORD *)v25 )
                  {
                    *((_QWORD *)v25 + 1) = 0;
                    qfree(v26);
                    v22 = *((char **)v20 + 3);
                  }
                }
              }
              *((_QWORD *)v20 + 4) = 0;
              qfree(v22);
            }
          }
          else if ( v21 == 1 )
          {
            v28 = *((void **)v20 + 7);
            if ( v28 )
            {
              *((_QWORD *)v20 + 8) = 0;
              qfree(v28);
            }
            v29 = *((void **)v20 + 3);
            if ( v29 )
            {
              *((_QWORD *)v20 + 4) = 0;
              qfree(v29);
            }
          }
          v19 = *(void **)v20;
          v20[89] = 0;
          if ( v19 )
          {
            *((_QWORD *)v20 + 1) = 0;
            qfree(v19);
          }
          ++v18;
          v5 = *(char **)&v45[4];
        }
        while ( v17 != v18 );
      }
      *(_QWORD *)&v46 = 0;
      qfree(v5);
    }
  }
  return v16;
}

