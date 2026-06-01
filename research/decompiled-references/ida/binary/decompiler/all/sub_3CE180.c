unsigned __int64 __fastcall sub_3CE180(__int64 *a1, __int64 a2, const char *a3, unsigned int **a4, int a5)
{
  char *v7; // r9
  __int64 v8; // r14
  unsigned int *i; // r12
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int16 v14; // dx
  unsigned int v15; // r10d
  __int64 v16; // rbx
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v21; // [rsp+10h] [rbp-78h]
  __int64 v22; // [rsp+18h] [rbp-70h]
  char *v23; // [rsp+20h] [rbp-68h]
  unsigned int v24; // [rsp+28h] [rbp-60h]
  __int64 v26; // [rsp+30h] [rbp-58h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  unsigned __int64 v28; // [rsp+40h] [rbp-48h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !a4[1] )
    return v29 - __readfsqword(0x28u);
  sub_80DE0((__int64)&v26, a3);
  v7 = ": ";
  v8 = (__int64)&(*a4)[(_QWORD)a4[1]];
  for ( i = *a4; (unsigned int *)v8 != i; v7 = ", " )
  {
    v13 = v27;
    v15 = *i;
    if ( v27 )
    {
      v10 = v27 + 1;
      v11 = v27 + 2;
      v12 = v26;
      v13 = v27 - 1;
      if ( v28 < v27 + 2 )
        goto LABEL_9;
    }
    else
    {
      v12 = v26;
      v11 = 3;
      v10 = 2;
      if ( v28 < 3 )
      {
LABEL_9:
        v23 = v7;
        v24 = *i;
        v22 = v10;
        v21 = v11;
        v26 = qvector_reserve();
        v7 = v23;
        v12 = v26;
        v15 = v24;
        v10 = v22;
        v11 = v21;
      }
    }
    v27 = v11;
    v14 = *(_WORD *)v7;
    *(_BYTE *)(v12 + v10) = 0;
    *(_WORD *)(v26 + v13) = v14;
    sub_1ACE80(a2, &v26, v15);
    ++i;
  }
  if ( a5 > (int)tag_strlen() && a5 )
    sub_3C5FA0(a1, a5);
  v16 = a1[1];
  v17 = 2;
  if ( v16 )
    v17 = v16-- + 1;
  v18 = *a1;
  if ( a1[2] < v17 )
  {
    v19 = qvector_reserve();
    *a1 = v19;
    v18 = v19;
  }
  a1[1] = v17;
  *(_BYTE *)(v18 + v16) = 32;
  *(_BYTE *)(*a1 + v16 + 1) = 0;
  get_ash();
  sub_F3E30(a1);
  if ( v26 )
  {
    v27 = 0;
    qfree();
  }
  return v29 - __readfsqword(0x28u);
}
