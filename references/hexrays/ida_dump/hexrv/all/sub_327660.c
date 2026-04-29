bool __fastcall sub_327660(__int64 a1, _QWORD *a2, __int64 a3)
{
  bool v5; // zf
  int **v7; // rdx
  int *v8; // rax
  __int64 v9; // rdi
  char v10; // si
  char v11; // r8
  int v12; // edx
  unsigned int v14; // eax
  int tinfo_size; // eax
  unsigned int v16; // r13d
  __int64 v17; // rdi
  unsigned int v18; // r13d
  int v19; // eax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD v22[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *(_DWORD *)a3 == 2;
  v22[1] = __readfsqword(0x28u);
  if ( v5 )
  {
    v7 = *(int ***)(a3 + 8);
    v8 = *v7;
    v9 = (__int64)&(*v7)[6 * (_QWORD)v7[1]];
    if ( *v7 != (int *)v9 )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        while ( 1 )
        {
          v12 = *v8;
          if ( (unsigned int)(*v8 - 3) <= 1 )
            break;
          v8 += 6;
          v10 |= v12 == 1;
          if ( (int *)v9 == v8 )
            goto LABEL_7;
        }
        v8 += 6;
        v11 = 1;
      }
      while ( (int *)v9 != v8 );
LABEL_7:
      if ( v11 && v10 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 148LL) != 2 )
          return 0;
        v14 = *(_DWORD *)(a1 + 72);
        if ( v14 - 208 > 0x2F )
        {
          if ( v14 <= 0x10 )
            v14 = getinf(99);
          if ( v14 != 176 )
            return 0;
          if ( (unsigned __int64)getinf(88) <= 0x397 )
          {
            if ( !(unsigned __int8)getinf_flag(3, 4) )
              return 0;
            netnode_check(v22, "$ golang", 0, 0);
            v17 = v22[0];
            v18 = netnode_altval(v22[0], 0, 65);
            if ( v18 <= 0x74 )
              return 0;
            v19 = *(_DWORD *)(get_ph(v17) + 4);
            if ( v19 )
            {
              v20 = (unsigned int)(v19 - 13);
              if ( (unsigned int)v20 > 0x3B )
                return 0;
              v21 = 0x800000000000005LL;
              if ( !_bittest64(&v21, v20) || v18 == 117 )
                return 0;
            }
          }
        }
      }
    }
  }
  v5 = *(_BYTE *)(a1 + 76) == 0;
  *(_QWORD *)(a1 + 48) = a1 + 32;
  if ( v5 && (unsigned int)(*(_DWORD *)a3 - 3) <= 1 )
    return 0;
  tinfo_size = get_tinfo_size(0, *a2, 0);
  v16 = tinfo_size;
  if ( tinfo_size <= 0 || tinfo_size > 0xFFFF && *(_DWORD *)a3 == 2 )
    return 0;
  if ( (get_tinfo_property(*a2, 2) & 0xF) == 9 && !sub_118680(v16) || (unsigned int)verify_argloc(a3, v16, 0) )
    return 0;
  *(_QWORD *)(a1 + 56) = a2;
  *(_QWORD *)(a1 + 64) = a3;
  return (unsigned int)for_all_arglocs(a1, a3, v16, 0) == 0;
}
