__int64 __fastcall sub_668550(__int64 *a1, __int64 a2, unsigned int a3, int a4, double a5, __m128i a6, double a7)
{
  __int64 v7; // r15
  unsigned int *v11; // rax
  unsigned int v12; // r14d
  unsigned int *v13; // r12
  __int64 *v14; // rdi
  __int64 v15; // rsi
  const char *v16; // rsi
  unsigned int *v18; // rax
  int segm_para; // r15d
  unsigned int v20; // r13d
  unsigned int v21; // r15d
  unsigned int *v22; // [rsp+0h] [rbp-68h]
  unsigned int v23; // [rsp+8h] [rbp-60h]
  unsigned int v24; // [rsp+Ch] [rbp-5Ch]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v26; // [rsp+18h] [rbp-50h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v7 = (__int64)(a1 + 194);
  v23 = a2;
  v27 = __readfsqword(0x28u);
  v11 = sub_4EE820((__int64)(a1 + 194), a2);
  if ( !v11 )
    return 0;
  v12 = *v11;
  v13 = v11;
  if ( *v11 == a3 )
    return 1;
  v24 = 2 * *(_DWORD *)(a1[3] + 8);
  if ( a3 < (unsigned int)get_segm_base(v11) )
  {
    v26 = 0;
    ptr = nullptr;
    sub_4F9200((__int64)a1, (__int64 *)&ptr, v13, 0);
    v16 = haystack;
    if ( (_QWORD)v26 )
      v16 = (const char *)ptr;
    sub_384000(1277, (__int64)v16, v24, *v13);
  }
  v14 = a1 + 194;
  v22 = sub_4EEB90(v7, v12);
  if ( v22 )
  {
    v15 = *v22;
    if ( a3 < (unsigned int)v15 )
    {
      v14 = (__int64 *)v7;
      v18 = sub_4EEB90(v7, v15);
      if ( v18 && a3 < v18[1] )
        sub_384000(1279, v24, v12, v24);
LABEL_8:
      if ( a4 == -2
        || *((_BYTE *)v13 + 23) == *((_BYTE *)v22 + 23)
        && (v14 = (__int64 *)v22, segm_para = get_segm_para(v13), segm_para == (unsigned int)get_segm_para(v22)) )
      {
        v20 = 2;
      }
      else
      {
        while ( 1 )
        {
          v15 = v12;
          v14 = a1;
          if ( !(unsigned __int8)sub_665D20(a1, v12, a3) )
            break;
          if ( !a4 )
            sub_375500();
          if ( a4 != 1 )
            return 0;
          sub_665A00(a1, v12, a3, 0, 0, a5, *(double *)a6.m128i_i64, a7);
        }
        v20 = 0;
      }
      if ( (get_merge_state(v14, v15) & 2) != 0 )
        v20 |= 0x10u;
      v21 = *v22;
      if ( a3 >= v12 )
      {
        if ( !(unsigned __int8)sub_667470(a1, v23, a3, v20, a5, a6, a7) )
          return 0;
        if ( !(unsigned __int8)sub_666FD0(a1, v21, a3, v20, a5, a6, a7) )
        {
          sub_667470(a1, a3, v12, v20, a5, a6, a7);
          return 0;
        }
      }
      else
      {
        if ( !(unsigned __int8)sub_666FD0(a1, v21, a3, v20, a5, a6, a7) )
          return 0;
        if ( !(unsigned __int8)sub_667470(a1, v23, a3, v20, a5, a6, a7) )
        {
          sub_666FD0(a1, a3 - 1, v12, v20, a5, a6, a7);
          return 0;
        }
      }
      return 1;
    }
    if ( a3 < v22[1] || a3 >= *v13 )
      goto LABEL_8;
  }
  return sub_667470(a1, v23, a3, 0, a5, a6, a7);
}

