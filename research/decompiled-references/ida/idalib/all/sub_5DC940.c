_BOOL8 __fastcall sub_5DC940(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  _BYTE *v5; // rdi
  int v6; // ebp
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rbp
  void *v19; // rdi
  char *v20; // rbx
  char v21; // al
  char *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 i; // r15
  void *v26; // rdi
  void *v28; // rdi
  void *v29; // rdi
  _QWORD *v30; // rax
  int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // r15
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // [rsp+0h] [rbp-78h]
  bool v44; // [rsp+Fh] [rbp-69h]
  _QWORD v45[2]; // [rsp+10h] [rbp-68h] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v47; // [rsp+28h] [rbp-50h]
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( a3 == -1 )
  {
    return 0;
  }
  else
  {
    v45[0] = a3;
    ptr = nullptr;
    v45[1] = a3 + 1;
    v47 = 0;
    v4 = sub_69DAA0(a1, &ptr, v45);
    v5 = ptr;
    if ( v4 && (_QWORD)v47 )
    {
      v6 = 0;
      v7 = 0;
      while ( 1 )
      {
        v8 = &v5[104 * v7];
        v9 = *((_QWORD *)v8 + 1);
        if ( !v9 || **(_QWORD **)v8 != a3 )
          goto LABEL_6;
        v10 = v8[97];
        if ( v10 != 1 )
        {
          if ( v10 == 2 && *((_QWORD *)v8 + 4) )
          {
            v31 = 0;
            v32 = 0;
            while ( 1 )
            {
              v33 = *((_QWORD *)v8 + 3) + 56 * v32;
              if ( *(_QWORD *)(v33 + 8) && *(_QWORD *)(v33 + 48) != -2 )
              {
                if ( !a2 )
                {
                  v44 = 1;
                  v5 = ptr;
                  goto LABEL_24;
                }
                v34 = a2[1];
                v35 = (_QWORD *)(*a2 + 8 * v34);
                v36 = **(_QWORD **)v33;
                if ( (_QWORD *)*a2 == v35 )
                  goto LABEL_63;
                v37 = (_QWORD *)*a2;
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
                    v39 = qvector_reserve(a2, *a2, v38, 8);
                    v40 = a2[1];
                    v31 = v43;
                    *a2 = v39;
                    v35 = (_QWORD *)(v39 + 8 * v40);
                  }
                  *v35 = v36;
                  ++a2[1];
                }
              }
              v32 = ++v31;
              if ( (unsigned __int64)v31 >= *((_QWORD *)v8 + 4) )
              {
                v5 = ptr;
                goto LABEL_6;
              }
            }
          }
          goto LABEL_6;
        }
        if ( v9 == 1 )
        {
          if ( !*((_QWORD *)v8 + 9) )
            goto LABEL_6;
          v11 = *((_QWORD *)v8 + 4);
          if ( v11 == 1 )
            goto LABEL_48;
LABEL_12:
          if ( v11 )
            goto LABEL_13;
LABEL_6:
          v7 = ++v6;
          if ( v6 >= (unsigned __int64)v47 )
            break;
        }
        else
        {
          v11 = *((_QWORD *)v8 + 4);
          if ( v11 != 1 )
            goto LABEL_12;
LABEL_48:
          v30 = *((_QWORD **)v8 + 3);
          if ( *v30 == *(_QWORD *)(*(_QWORD *)v8 + 8LL) && *v30 == v30[1] )
            goto LABEL_6;
LABEL_13:
          if ( !a2 )
          {
            v44 = 1;
            goto LABEL_24;
          }
          v12 = a2[1];
          v13 = (_QWORD *)(*a2 + 8 * v12);
          v14 = **((_QWORD **)v8 + 3);
          if ( (_QWORD *)*a2 != v13 )
          {
            v15 = (_QWORD *)*a2;
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
            v41 = qvector_reserve(a2, *a2, v12 + 1, 8);
            v42 = a2[1];
            *a2 = v41;
            v13 = (_QWORD *)(v41 + 8 * v42);
          }
          ++v6;
          *v13 = v14;
          v5 = ptr;
          ++a2[1];
          v7 = v6;
          if ( v6 >= (unsigned __int64)v47 )
            break;
        }
      }
    }
    v44 = 0;
    if ( a2 )
      v44 = a2[1] != 0;
LABEL_24:
    if ( v5 )
    {
      v16 = v47;
      if ( (_QWORD)v47 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v20 = &v5[v17];
          v21 = v5[v17 + 97];
          if ( v21 == 2 )
          {
            v22 = *((char **)v20 + 3);
            if ( v22 )
            {
              v23 = *((_QWORD *)v20 + 4);
              if ( v23 )
              {
                v24 = 0;
                for ( i = 0; i != v23; ++i )
                {
                  v26 = *(void **)&v22[v24];
                  if ( v26 )
                  {
                    *(_QWORD *)&v22[v24 + 8] = 0;
                    qfree(v26);
                    v22 = *((char **)v20 + 3);
                  }
                  v24 += 56;
                }
              }
              *((_QWORD *)v20 + 4) = 0;
              qfree(v22);
            }
          }
          else if ( v21 == 1 )
          {
            v28 = *((void **)v20 + 8);
            if ( v28 )
            {
              *((_QWORD *)v20 + 9) = 0;
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
          v20[97] = 0;
          if ( v19 )
          {
            *((_QWORD *)v20 + 1) = 0;
            qfree(v19);
          }
          ++v18;
          v5 = ptr;
          v17 += 104;
        }
        while ( v16 != v18 );
      }
      *(_QWORD *)&v47 = 0;
      qfree(v5);
    }
  }
  return v44;
}
