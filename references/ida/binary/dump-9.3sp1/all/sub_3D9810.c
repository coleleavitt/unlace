unsigned __int64 __fastcall sub_3D9810(__int64 *a1, __int64 a2, const char *a3, unsigned int **a4, int a5)
{
  size_t v8; // rax
  size_t v9; // r12
  size_t v10; // r14
  _BYTE *v11; // rax
  __int64 v12; // rcx
  char *v13; // r9
  unsigned int *v14; // r12
  __int64 v15; // r14
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rbx
  __int16 v20; // dx
  unsigned int v21; // r10d
  __int64 v22; // rbx
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v27; // [rsp+10h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-70h]
  char *v29; // [rsp+20h] [rbp-68h]
  unsigned int v30; // [rsp+28h] [rbp-60h]
  _BYTE *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( !a4[1] )
    return v34 - __readfsqword(0x28u);
  v33 = 0;
  v32 = nullptr;
  v8 = strlen(a3);
  v9 = v8 + 1;
  v10 = v8;
  v11 = (_BYTE *)qvector_reserve((__int64)&v32, 0, v8 + 1, 1);
  *(_QWORD *)&v33 = v9;
  v32 = v11;
  memmove(v11, a3, v10);
  v13 = ": ";
  v32[v10] = 0;
  v14 = *a4;
  v15 = (__int64)&(*a4)[(_QWORD)a4[1]];
  if ( (unsigned int *)v15 != *a4 )
  {
    do
    {
      v19 = v33;
      v21 = *v14;
      if ( (_QWORD)v33 )
      {
        v16 = v33 + 1;
        v17 = v33 + 2;
        v18 = (__int64)v32;
        v19 = v33 - 1;
        if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 2) )
          goto LABEL_9;
      }
      else
      {
        v18 = (__int64)v32;
        v17 = 3;
        v16 = 2;
        if ( *((_QWORD *)&v33 + 1) < 3u )
        {
LABEL_9:
          v29 = v13;
          v30 = *v14;
          v28 = v16;
          v27 = v17;
          v32 = (_BYTE *)qvector_reserve((__int64)&v32, v18, v17, 1);
          v13 = v29;
          v18 = (__int64)v32;
          v21 = v30;
          v16 = v28;
          v17 = v27;
        }
      }
      *(_QWORD *)&v33 = v17;
      v20 = *(_WORD *)v13;
      *(_BYTE *)(v18 + v16) = 0;
      *(_WORD *)&v32[v19] = v20;
      sub_1AF700(a2, (__int64 *)&v32, v21, v12);
      ++v14;
      v13 = ", ";
    }
    while ( (unsigned int *)v15 != v14 );
  }
  if ( a5 > (int)tag_strlen() && a5 )
    sub_3CFE40(a1, a5);
  v22 = a1[1];
  v23 = 2;
  if ( v22 )
    v23 = v22-- + 1;
  v24 = *a1;
  if ( a1[2] < v23 )
  {
    v25 = qvector_reserve((__int64)a1, v24, v23, 1);
    *a1 = v25;
    v24 = v25;
  }
  a1[1] = v23;
  *(_BYTE *)(v24 + v22) = 32;
  *(_BYTE *)(*a1 + v22 + 1) = 0;
  get_ash();
  sub_FAAD0(a1);
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree((__int64)v32);
  }
  return v34 - __readfsqword(0x28u);
}
