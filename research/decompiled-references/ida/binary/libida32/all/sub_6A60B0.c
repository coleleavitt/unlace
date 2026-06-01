unsigned __int64 __fastcall sub_6A60B0(__int64 a1, __int64 *a2, unsigned int a3, char a4)
{
  unsigned __int64 v8; // r8
  unsigned int v9; // esi
  __int64 *v10; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  char **v15; // rax
  unsigned int tinfo_tid; // eax
  __int64 v17; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+10h] [rbp-48h] BYREF
  char v19; // [rsp+14h] [rbp-44h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v18 = -1;
  v19 = 0;
  sub_3FD660(a2, (__int64)&v18, a3);
  v9 = v18;
  if ( v18 != -1 )
  {
    while ( 1 )
    {
      v17 = 0;
      if ( !*(_QWORD *)(a1 + 80) )
        break;
      v8 = *(_QWORD *)(a1 + 64);
      v12 = *(_QWORD **)(*(_QWORD *)(a1 + 56) + 8 * (v9 % v8));
      if ( !v12 )
        goto LABEL_16;
      v13 = (_QWORD *)*v12;
      if ( v9 != *(_DWORD *)(*v12 + 8LL) )
      {
        while ( 1 )
        {
          v14 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
          v12 = v13;
          if ( v9 % v8 != *((unsigned int *)v14 + 2) % v8 )
            break;
          v13 = (_QWORD *)*v13;
          if ( v9 == *((_DWORD *)v14 + 2) )
            goto LABEL_14;
        }
LABEL_16:
        if ( (unsigned int)sub_69CC60(a2, v9, 1, (__int64)&v17, v8) )
        {
          v15 = sub_6A5E40((char **)(a1 + 56), &v18);
          sub_698930((__int64)v15, &v17);
          if ( !a4 )
          {
            tinfo_tid = get_tinfo_tid(&v17, 0);
            sub_6A60B0(a1, a2, tinfo_tid, 0);
          }
        }
        goto LABEL_7;
      }
LABEL_14:
      if ( !v12 || !*v12 )
        goto LABEL_16;
LABEL_7:
      clear_tinfo_t(&v17);
      sub_3FD7C0(a2, &v18, a3);
      v9 = v18;
      if ( v18 == -1 )
        return v20 - __readfsqword(0x28u);
    }
    v10 = *(__int64 **)(a1 + 72);
    if ( v10 )
    {
      while ( *((_DWORD *)v10 + 2) != v9 )
      {
        v10 = (__int64 *)*v10;
        if ( !v10 )
          goto LABEL_16;
      }
      goto LABEL_7;
    }
    goto LABEL_16;
  }
  return v20 - __readfsqword(0x28u);
}

