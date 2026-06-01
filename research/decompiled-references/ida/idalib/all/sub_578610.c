__int64 __fastcall sub_578610(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rax
  char v9; // al
  unsigned __int64 v10; // rsi
  char refinfo; // al
  __int64 segm_base; // rbx
  unsigned __int64 *v14; // rax
  unsigned __int64 *v15; // r15
  __int64 v16; // r15
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // r13
  __int64 v19; // rax
  __int64 v20; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v22; // [rsp+18h] [rbp-60h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v6 = a2[2];
  v23 = __readfsqword(0x28u);
  v8 = sub_3BE900(a1, v6, 0);
  v9 = is_off(v8, a4);
  v10 = a2[2];
  if ( v9 )
  {
    refinfo = get_refinfo(&ptr, v10, a4);
    segm_base = v22;
    if ( refinfo )
      goto LABEL_3;
  }
  else
  {
    v14 = sub_505D70((__int64)(a1 + 203), v10);
    v15 = v14;
    if ( v14 )
    {
      segm_base = get_segm_base(v14);
      if ( a3 < *v15 - segm_base || a3 >= v15[1] - segm_base )
      {
        ptr = nullptr;
        v22 = 0;
        if ( sub_685800(a1, &ptr, *v15) > 0 && (int)v22 > 0 )
        {
          v16 = 0;
          v20 = 8LL * (unsigned int)(v22 - 1) + 8;
          while ( 1 )
          {
            v17 = sub_505D70((__int64)(a1 + 203), *(_QWORD *)((char *)ptr + v16));
            v18 = v17;
            if ( v17 )
            {
              v19 = get_segm_base(v17);
              if ( a3 < v18[1] - v19 && a3 >= *v18 - v19 && v19 != -1 )
                break;
            }
            v16 += 8;
            if ( v20 == v16 )
              goto LABEL_17;
          }
          segm_base = v19;
        }
LABEL_17:
        if ( ptr )
        {
          *(_QWORD *)&v22 = 0;
          qfree(ptr);
        }
      }
LABEL_3:
      if ( segm_base != -1 )
        goto LABEL_4;
    }
  }
  segm_base = 16LL * *a2;
LABEL_4:
  if ( segm_base )
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 24LL) + 16LL) & (a3 + segm_base);
  return a3;
}
