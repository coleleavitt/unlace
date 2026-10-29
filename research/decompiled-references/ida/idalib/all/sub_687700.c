__int64 __fastcall sub_687700(__int64 *a1, unsigned __int64 a2, char *a3, int a4, __m128 a5, double a6, double a7)
{
  __int64 v7; // r15
  unsigned __int64 *v11; // rax
  char *v12; // r14
  unsigned __int64 *v13; // r12
  __int64 *v14; // rdi
  unsigned __int64 v15; // rsi
  const char *v16; // rsi
  unsigned __int64 *v18; // rax
  __int64 segm_para; // r15
  unsigned int v20; // r13d
  unsigned __int64 v21; // r15
  unsigned __int64 *v23; // [rsp+10h] [rbp-68h]
  unsigned int v24; // [rsp+1Ch] [rbp-5Ch]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v26; // [rsp+28h] [rbp-50h]
  unsigned __int64 v27; // [rsp+38h] [rbp-40h]

  v7 = (__int64)(a1 + 203);
  v27 = __readfsqword(0x28u);
  v11 = sub_505D70((__int64)(a1 + 203), a2);
  if ( !v11 )
    return 0;
  v12 = (char *)*v11;
  v13 = v11;
  if ( (char *)*v11 == a3 )
    return 1;
  v24 = 2 * *(_DWORD *)(a1[3] + 24);
  if ( (unsigned __int64)a3 < get_segm_base(v11) )
  {
    v26 = 0;
    ptr = nullptr;
    sub_510BD0((__int64)a1, (__int64 *)&ptr, v13, 0);
    v16 = haystack;
    if ( (_QWORD)v26 )
      v16 = (const char *)ptr;
    sub_387D20(1277, (__int64)v16, v24, *v13);
  }
  v14 = a1 + 203;
  v23 = sub_5060F0(v7, (unsigned __int64)v12);
  if ( v23 )
  {
    v15 = *v23;
    if ( (unsigned __int64)a3 < *v23 )
    {
      v14 = (__int64 *)v7;
      v18 = sub_5060F0(v7, v15);
      if ( v18 && (unsigned __int64)a3 < v18[1] )
        sub_387D20(1279, v24, (__int64)v12, v24);
LABEL_8:
      if ( a4 == -2
        || *((_BYTE *)v13 + 43) == *((_BYTE *)v23 + 43)
        && (v14 = (__int64 *)v23, segm_para = get_segm_para(v13), segm_para == get_segm_para(v23)) )
      {
        v20 = 2;
      }
      else
      {
        while ( 1 )
        {
          v15 = (unsigned __int64)v12;
          v14 = a1;
          if ( !(unsigned __int8)sub_684B60(a1, (unsigned __int64)v12, (unsigned __int64)a3) )
            break;
          if ( !a4 )
            sub_378E50();
          if ( a4 != 1 )
            return 0;
          sub_684820(a1, v12, a3, 0, 0, *(double *)a5.m128_u64, a6, a7);
        }
        v20 = 0;
      }
      if ( (get_merge_state(v14, v15) & 2) != 0 )
        v20 |= 0x10u;
      v21 = *v23;
      if ( a3 >= v12 )
      {
        if ( !(unsigned __int8)sub_686360(a1, a2, a3, v20, a5, a6, a7) )
          return 0;
        if ( !(unsigned __int8)sub_685E90(a1, v21, (unsigned __int64)a3, v20, a5, a6, a7) )
        {
          sub_686360(a1, (unsigned __int64)a3, v12, v20, a5, a6, a7);
          return 0;
        }
      }
      else
      {
        if ( !(unsigned __int8)sub_685E90(a1, *v23, (unsigned __int64)a3, v20, a5, a6, a7) )
          return 0;
        if ( !(unsigned __int8)sub_686360(a1, a2, a3, v20, a5, a6, a7) )
        {
          sub_685E90(a1, (unsigned __int64)(a3 - 1), (unsigned __int64)v12, v20, a5, a6, a7);
          return 0;
        }
      }
      return 1;
    }
    if ( (unsigned __int64)a3 < v23[1] || (unsigned __int64)a3 >= *v13 )
      goto LABEL_8;
  }
  return sub_686360(a1, a2, a3, 0, a5, a6, a7);
}
