unsigned __int64 __fastcall sub_3D4910(__int64 *a1, __int64 a2, const char *a3, unsigned int **a4, unsigned int a5)
{
  size_t v9; // rax
  size_t v10; // r12
  size_t v11; // r14
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // r9
  unsigned int *v15; // r12
  __int64 v16; // r14
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int16 v21; // dx
  unsigned int v22; // r10d
  const char *v23; // rdi
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rbx
  unsigned __int64 v29; // r12
  __int64 v30; // rsi
  const char *v31; // rbx
  __int64 ash; // rax
  __int64 v33; // rax
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  char *v37; // [rsp+20h] [rbp-68h]
  unsigned int v38; // [rsp+28h] [rbp-60h]
  const char *v40; // [rsp+30h] [rbp-58h] BYREF
  __int128 v41; // [rsp+38h] [rbp-50h]
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( !a4[1] )
    return v42 - __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  v9 = strlen(a3);
  v10 = v9 + 1;
  v11 = v9;
  v12 = (char *)qvector_reserve(&v40, 0, v9 + 1, 1);
  *(_QWORD *)&v41 = v10;
  v40 = v12;
  memmove(v12, a3, v11);
  v14 = ": ";
  v40[v11] = 0;
  v15 = *a4;
  v16 = (__int64)&(*a4)[(_QWORD)a4[1]];
  if ( (unsigned int *)v16 != *a4 )
  {
    do
    {
      v20 = v41;
      v22 = *v15;
      if ( (_QWORD)v41 )
      {
        v17 = v41 + 1;
        v18 = v41 + 2;
        v19 = (__int64)v40;
        v20 = v41 - 1;
        if ( *((_QWORD *)&v41 + 1) < (unsigned __int64)(v41 + 2) )
          goto LABEL_9;
      }
      else
      {
        v19 = (__int64)v40;
        v18 = 3;
        v17 = 2;
        if ( *((_QWORD *)&v41 + 1) < 3u )
        {
LABEL_9:
          v37 = v14;
          v38 = *v15;
          v36 = v17;
          v35 = v18;
          v40 = (const char *)qvector_reserve(&v40, v19, v18, 1);
          v14 = v37;
          v19 = (__int64)v40;
          v22 = v38;
          v17 = v36;
          v18 = v35;
        }
      }
      *(_QWORD *)&v41 = v18;
      v21 = *(_WORD *)v14;
      *(_BYTE *)(v19 + v17) = 0;
      *(_WORD *)&v40[v20] = v21;
      sub_1AB3C0(a2, (__int64 *)&v40, v22, v13);
      ++v15;
      v14 = ", ";
    }
    while ( (unsigned int *)v16 != v15 );
  }
  v23 = s1;
  if ( a1[1] )
    v23 = (const char *)*a1;
  v24 = tag_strlen(v23);
  v27 = a5;
  if ( (int)a5 > v24 && a5 )
  {
    v23 = (const char *)a1;
    sub_3CAF40((__int64)a1, (int)a5);
  }
  v28 = a1[1];
  v29 = 2;
  if ( v28 )
    v29 = v28-- + 1;
  v30 = *a1;
  if ( a1[2] < v29 )
  {
    v23 = (const char *)a1;
    v33 = qvector_reserve(a1, v30, v29, 1);
    *a1 = v33;
    v30 = v33;
  }
  a1[1] = v29;
  *(_BYTE *)(v30 + v28) = 32;
  *(_BYTE *)(*a1 + v28 + 1) = 0;
  v31 = s1;
  if ( (_QWORD)v41 )
    v31 = v40;
  ash = get_ash(v23, v30, v25, v27, v26);
  sub_F68D0(a1, (__int64)&unk_400569, *(_QWORD *)(ash + 48), v31);
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree(v40);
  }
  return v42 - __readfsqword(0x28u);
}
