unsigned __int64 __fastcall sub_3D9810(__int64 *a1, __int64 a2, const char *a3, unsigned int **a4, int a5)
{
  size_t v8; // r14
  __int64 v9; // rcx
  char *v10; // r9
  unsigned int *v11; // r12
  __int64 v12; // r14
  __int64 v13; // r11
  __int64 v14; // rdx
  char *v15; // rsi
  __int64 v16; // rbx
  __int16 v17; // dx
  unsigned int v18; // r10d
  __int64 v19; // rbx
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+18h] [rbp-70h]
  char *v26; // [rsp+20h] [rbp-68h]
  unsigned int v27; // [rsp+28h] [rbp-60h]
  char *v29; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a4[1] )
    return v31 - __readfsqword(0x28u);
  v30 = 0;
  v8 = strlen(a3);
  *(_QWORD *)&v30 = v8 + 1;
  v29 = (char *)qvector_reserve();
  memmove(v29, a3, v8);
  v10 = ": ";
  v29[v8] = 0;
  v11 = *a4;
  v12 = (__int64)&(*a4)[(_QWORD)a4[1]];
  if ( (unsigned int *)v12 != *a4 )
  {
    do
    {
      v16 = v30;
      v18 = *v11;
      if ( (_QWORD)v30 )
      {
        v13 = v30 + 1;
        v14 = v30 + 2;
        v15 = v29;
        v16 = v30 - 1;
        if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v30 + 2) )
          goto LABEL_9;
      }
      else
      {
        v15 = v29;
        v14 = 3;
        v13 = 2;
        if ( *((_QWORD *)&v30 + 1) < 3u )
        {
LABEL_9:
          v26 = v10;
          v27 = *v11;
          v25 = v13;
          v24 = v14;
          v29 = (char *)qvector_reserve();
          v10 = v26;
          v15 = v29;
          v18 = v27;
          v13 = v25;
          v14 = v24;
        }
      }
      *(_QWORD *)&v30 = v14;
      v17 = *(_WORD *)v10;
      v15[v13] = 0;
      *(_WORD *)&v29[v16] = v17;
      sub_1AF700(a2, (__int64 *)&v29, v18, v9);
      ++v11;
      v10 = ", ";
    }
    while ( (unsigned int *)v12 != v11 );
  }
  if ( a5 > (int)tag_strlen() && a5 )
    sub_3CFE40(a1, a5);
  v19 = a1[1];
  v20 = 2;
  if ( v19 )
    v20 = v19-- + 1;
  v21 = *a1;
  if ( a1[2] < v20 )
  {
    v22 = qvector_reserve();
    *a1 = v22;
    v21 = v22;
  }
  a1[1] = v20;
  *(_BYTE *)(v21 + v19) = 32;
  *(_BYTE *)(*a1 + v19 + 1) = 0;
  get_ash();
  sub_FAAD0(a1);
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v31 - __readfsqword(0x28u);
}
