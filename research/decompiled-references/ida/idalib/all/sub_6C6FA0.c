unsigned __int64 __fastcall sub_6C6FA0(__int64 a1, __int64 *a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  char **v15; // rax
  __int64 tinfo_tid; // rax
  __int64 v17; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  char v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v19 = 0;
  v18 = -1;
  sub_4108F0(a2, (__int64)&v18, a3);
  v9 = v18;
  if ( v18 != -1 )
  {
    while ( 1 )
    {
      v17 = 0;
      if ( !*(_QWORD *)(a1 + 88) )
        break;
      v8 = *(_QWORD *)(a1 + 72);
      v12 = *(_QWORD **)(*(_QWORD *)(a1 + 64) + 8 * (v9 % v8));
      if ( !v12 )
        goto LABEL_16;
      v13 = (_QWORD *)*v12;
      if ( v9 != *(_QWORD *)(*v12 + 8LL) )
      {
        while ( 1 )
        {
          v14 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
          v12 = v13;
          if ( v9 % v8 != v14[1] % v8 )
            break;
          v13 = (_QWORD *)*v13;
          if ( v9 == v14[1] )
            goto LABEL_14;
        }
LABEL_16:
        if ( (unsigned int)sub_6BD6E0(a2, (void *)v9, 1, (__int64)&v17, v8) )
        {
          v15 = sub_6C6D30((char **)(a1 + 64), &v18);
          sub_6B9240((__int64)v15, &v17);
          if ( !a4 )
          {
            tinfo_tid = get_tinfo_tid(&v17, 0);
            sub_6C6FA0(a1, a2, tinfo_tid, 0);
          }
        }
        goto LABEL_7;
      }
LABEL_14:
      if ( !v12 || !*v12 )
        goto LABEL_16;
LABEL_7:
      clear_tinfo_t(&v17);
      sub_410A70(a2, (__int64)&v18, a3);
      v9 = v18;
      if ( v18 == -1 )
        return v20 - __readfsqword(0x28u);
    }
    v10 = *(_QWORD **)(a1 + 80);
    if ( v10 )
    {
      while ( v10[1] != v9 )
      {
        v10 = (_QWORD *)*v10;
        if ( !v10 )
          goto LABEL_16;
      }
      goto LABEL_7;
    }
    goto LABEL_16;
  }
  return v20 - __readfsqword(0x28u);
}
