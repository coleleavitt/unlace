__int64 __fastcall sub_B4FC0(__int64 *a1, __int64 *a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v6; // rdi
  unsigned int tinfo_details; // eax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // r12d
  __int64 v12; // r15
  _QWORD *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 tinfo_property; // rax
  __int64 v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // r12
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v28; // [rsp+20h] [rbp-80h] BYREF
  __int64 v29; // [rsp+28h] [rbp-78h] BYREF
  __int128 v30; // [rsp+30h] [rbp-70h]
  __int128 v31; // [rsp+40h] [rbp-60h]
  __int64 v32; // [rsp+50h] [rbp-50h]
  int v33; // [rsp+58h] [rbp-48h]
  unsigned __int64 v34; // [rsp+60h] [rbp-40h]

  v6 = *a2;
  v34 = __readfsqword(0x28u);
  v33 = 1;
  v29 = 0;
  v32 = 0;
  v30 = 0;
  v31 = 0;
  tinfo_details = get_tinfo_details(v6, 13, &v29);
  v9 = v29;
  v10 = tinfo_details;
  if ( (_BYTE)tinfo_details )
  {
    if ( !(_QWORD)v30 )
    {
      v10 = 0;
      if ( !v29 )
        return v10;
      goto LABEL_21;
    }
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = (_QWORD *)(v9 + 144 * v12);
      v14 = a3 + (*v13 >> 3);
      if ( v14 >= 0 )
      {
        if ( (unsigned int)sub_3288D0(0, a2, v14, 0) != -1 )
        {
          if ( !v14 && (_QWORD)v30 - 1LL == v12 || (unsigned __int8)compare_tinfo(v13[8], *a5, 2) )
            goto LABEL_12;
          if ( (get_tinfo_property(v13[8], 2) & 0xF) == 0xB )
          {
            v15 = v13[8];
            v28 = 0;
            tinfo_property = get_tinfo_property(v15, 9);
            v17 = *a5;
            v28 = tinfo_property;
            if ( (unsigned __int8)compare_tinfo(tinfo_property, v17, 2) )
            {
              clear_tinfo_t(&v28);
LABEL_12:
              *a4 += v14;
              v18 = sub_B4F00(a1, v13, (__int64)a5, (__int64)a4);
              v9 = v29;
              v10 = v18;
              goto LABEL_13;
            }
            clear_tinfo_t(&v28);
          }
        }
        v9 = v29;
      }
      v12 = ++v11;
    }
    while ( v11 < (unsigned __int64)v30 );
    v10 = 0;
  }
LABEL_13:
  if ( v9 )
  {
    v19 = v30;
    if ( (_QWORD)v30 )
    {
      v20 = 0;
      do
      {
        v21 = (_QWORD *)(v9 + 144 * v20);
        clear_tinfo_t(v21 + 8);
        v22 = v21[5];
        if ( v22 )
        {
          v21[6] = 0;
          qfree(v22);
        }
        v23 = v21[2];
        if ( v23 )
        {
          v21[3] = 0;
          qfree(v23);
        }
        ++v20;
        v9 = v29;
      }
      while ( v19 != v20 );
    }
LABEL_21:
    *(_QWORD *)&v30 = 0;
    qfree(v9);
  }
  return v10;
}
